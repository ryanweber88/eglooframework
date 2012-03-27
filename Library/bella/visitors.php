<?php
namespace Bella;

interface Visitor {}

class SQLVisitor implements Visitor 
{
	public function accept(Node $node) 
	{
		return $this->visit($node);
	}
	
	protected function visit($node)
	{
		if ( is_string($node) )
		{
			$node = new NodeString($node);
		}
		else if ( is_integer($node) )
		{
			$node = new NodeNumber($node);
		}
		
		$method = 'visit'.str_replace('Node', '', get_class($node));
		return $this->$method($node);
	}
	
	public function visitSQLLiteral(NodeSQLLiteral $node)
	{
		return $node->value;
	}
	
	public function visitFunctionCount(NodeFunctionCount $node)
	{
		$distinct = $node->distinct ? "DISTINCT " : "";

		$alias = $node->alias ? $this->visit($node->alias) : NULL;
		$alias = $alias ? " AS {$alias}" : "";

		$name = $this->visit($node->expression);
		
		return "COUNT({$distinct}{$name}){$alias}";
	}
	
	public function visitFunctionSum(NodeFunctionSum $node)
	{
		$alias = $node->alias ? $this->visit($node->alias) : NULL;
		$alias = $alias ? " AS {$alias}" : "";
		$name = $this->visit($node->expression);
		
		return "SUM({$name}){$alias}";
	}
	
	public function visitFunctionMaximum(NodeFunctionMaximum $node)
	{
		$alias = $node->alias ? $this->visit($node->alias) : NULL;
		$alias = $alias ? " AS {$alias}" : "";
		$name = $this->visit($node->expression);
		
		return "MAXIMUM({$name}){$alias}";
	}
	
	public function visitFunctionMinimum(NodeFunctionMinimum $node)
	{
		$alias = $node->alias ? $this->visit($node->alias) : NULL;
		$alias = $alias ? " AS {$alias}" : "";
		$name = $this->visit($node->expression);
		
		return "MINIMUM({$name}){$alias}";
	}
	
	public function visitFunctionAverage(NodeFunctionAverage $node)
	{
		$alias = $node->alias ? $this->visit($node->alias) : NULL;
		$alias = $alias ? " AS {$alias}" : "";
		$name = $this->visit($node->expression);
		
		return "AVERAGE({$name}){$alias}";
	}	
	
	public function visitBinaryOr(NodeBinaryOr $node)
	{
  	$left = $this->visit($node->left);
  	$right = $this->visit($node->right);

		return "{$left} OR {$right}";
	}
	
	public function visitBinaryAnd(NodeBinaryAnd $node)
	{
  	$left = $this->visit($node->left);
  	$right = $this->visit($node->right);

		return "{$left} AND {$right}";
	}
	
	public function visitBinaryLessThan(NodeBinaryLessThan $node)
	{
  	$left = $this->visit($node->left);
  	$right = $this->visit($node->right);

		return "{$left} < {$right}";
	}
	
	public function visitBinaryLessThanOrEqual(NodeBinaryLessThanOrEqual $node)
	{
  	$left = $this->visit($node->left);
  	$right = $this->visit($node->right);

		return "{$left} <= {$right}";
	}
	
	public function visitBinaryGreaterThan(NodeBinaryGreaterThan $node)
	{
  	$left = $this->visit($node->left);
  	$right = $this->visit($node->right);

		return "{$left} > {$right}";
	}
	
	public function visitBinaryGreaterThanOrEqual(NodeBinaryGreaterThanOrEqual $node)
	{
  	$left = $this->visit($node->left);
  	$right = $this->visit($node->right);

		return "{$left} >= {$right}";
	}
	
	public function visitGrouping(NodeGrouping $node)
	{
  	$expression = $this->visit($node->expression);

		return "({$expression})";
	}	

	public function visitString(NodeString $node)
	{
		return $this->quote($node->value);
	}
	
	public function visitAttribute(NodeAttribute $node)
	{
		$relation = $node->relation;
		$table_name = $this->quoteTableName($relation->name);
		$column_name = $this->quoteColumnName($node->value);
		
		return "{$table_name}.{$column_name}";
	}
	
	public function visitNumber(NodeNumber $node)
	{
		return $node->value;
	}
	
	public function visitHaving(NodeHaving $having)
	{
		$expression = $this->visit($having->expression);
		
		return " HAVING {$expression}";
	}
	
	public function visitTable(Table $table)
	{
		return $this->quoteTableName($table->name);
	}
	
	public function visitSelectStatement(NodeSelectStatement $node)
	{
		$from_sql = "";
		if ( $froms = $node->froms)
		{
			$from = $this->visit($node->froms);
			
			$from_sql = " FROM {$from}";
		}

		$projections_sql = "";
		
		if ( $projections = $node->projections )
		{
			$projections_sql .= " ";

			$segments = array();
			foreach($projections as $projection)
			{
				$segments[] = $this->visit($projection);
			}
			
			//var_export($segments); exit;
			
			$projections_sql .= implode(', ', $segments);
		}
		
		else {
			$projections_sql = " * ";
		}
		
		// sets see if we can add the fucking joins
		// statements; 
		
		
		$segments   = array();
		$table      = $this->visit($node->froms);
		$joins_sql  = "\n";
		$primaryKey = "{$table}_id";
		 		
		
		if (count($node->joins)) {
			for ($counter = 0; $counter < count($node->joins); $counter++) {
				$join = $node->joins[$counter];
				$on   = isset($node->on[$counter])
					? $node->on[$counter]
					: $primaryKey;
					
				$eq   = isset($this->eq[$counter])
					? $this->eq[$counter]
					: $on;
				
				
				$segments[] = "INNER JOIN $join ON $join.$eq = $table.$on";
			}
			
			$joins_sql .= implode ("\n", $segments);
		}
		
		

		$group_sql = "";
		if ( $groups = $node->groups )
		{
			$group_sql .= " GROUP BY ";

			$segments = array();
			foreach($groups as $group)
			{
				$segments[] = $this->visit($group);
			}
			
			$group_sql .= implode(', ', $segments);
		}

		$where_sql='';
		
		if ( $node->wheres)
		{
			// @TODO for some tard reason, this stupid shit was quoting the entire expression
			// when it was most likely meant to quote the column name, for the time being
			// doing a replace on quote - until it bites me in the ass
			$expression = str_replace('\'', null, $this->visit($node->wheres));
			$where_sql = "\nWHERE {$expression}";
		}
		
		$having_sql = "";
		if ( $node->having )
		{
			$having_sql = $this->visit($node->having);
		}
		
		$order_sql = "";
		if ( $orders = $node->orders )
		{
			$order_sql .= " ORDER BY ";

			$segments = array();
			foreach($orders as $order)
			{
				$segments[] = $this->visit($order);
			}
			
			$order_sql .= implode(', ', $segments);
		}
		
		$limit_sql = "";
		if ( $limit = $node->limit )
		{
			$limit_sql = " LIMIT {$limit}";
		}
		
		return "SELECT{$projections_sql}{$from_sql}{$joins_sql}{$where_sql}{$group_sql}{$having_sql}{$order_sql}{$limit_sql}";
	}
	
	public function visitBinaryEquality(NodeBinaryEquality $node)
	{
		$left = $this->visit($node->left);
		$right = $this->visit($node->right);
		
		if ( $right )
		{
			return "{$left} = {$right}";
		}
		else
		{
			return "{$left} IS NULL";
		}
	}

	public function quote($name)
	{
		return "'{$name}'";
	}

	public function quoteColumnName($name)
	{
		return "\"{$name}\"";
	}
	
	public function quoteTableName($name)
	{
		return "\"{$name}\"";
	}
}
