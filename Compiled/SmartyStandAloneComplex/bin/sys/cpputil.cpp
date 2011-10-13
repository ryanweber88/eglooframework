
#include <sys/cpputil.h>
#include <runtime/base/array/zend_array.h>
#include <runtime/base/array/small_array.h>
#include <runtime/base/taint/taint_observer.h>
#include <runtime/base/taint/taint_data.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

ArrayData *array_createvs(int64 n, ...) {
  va_list ap;
  va_start(ap, n);
  ZendArray::Bucket *p[5], **pp = p;
  SmartAllocator<HPHP::ZendArray::Bucket, SmartAllocatorImpl::Bucket,
    SmartAllocatorImpl::NoCallbacks> *a =
      ZendArray::Bucket::AllocatorType::getNoCheck();
  for (int64 k = 0; k < n; k++) {
    const String *k = va_arg(ap, const String *);
    const Variant *v = va_arg(ap, const Variant *);
    *pp++ = new (a) ZendArray::Bucket(k->get(), *v);
  }
  *pp = NULL;
  va_end(ap);
  return NEW(ZendArray)(n, 0, p);
}
ArrayData *array_createvi(int64 n, ...) {
  va_list ap;
  va_start(ap, n);
  ZendArray::Bucket *p[9], **pp = p;
  SmartAllocator<HPHP::ZendArray::Bucket, SmartAllocatorImpl::Bucket,
    SmartAllocatorImpl::NoCallbacks> *a =
      ZendArray::Bucket::AllocatorType::getNoCheck();
  for (int64 k = 0; k < n; k++) {
    const Variant *v = va_arg(ap, const Variant *);
    *pp++ = new (a) ZendArray::Bucket(k, *v);
  }
  *pp = NULL;
  va_end(ap);
  return NEW(ZendArray)(n, n, p);
}

///////////////////////////////////////////////////////////////////////////////
}
