// This file is generated by omniidl (C++ backend)- omniORB_4_2. Do not edit.
#ifndef __bio__dataUlongLong_hh__
#define __bio__dataUlongLong_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_bio__dataUlongLong
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_bio__dataUlongLong
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_bio__dataUlongLong
#endif



#ifndef __DataType_hh_EXTERNAL_GUARD__
#define __DataType_hh_EXTERNAL_GUARD__
#include <ossie/CF/DataType.h>
#endif
#ifndef __PortTypes_hh_EXTERNAL_GUARD__
#define __PortTypes_hh_EXTERNAL_GUARD__
#include <ossie/CF/PortTypes.h>
#endif
#ifndef __Port_hh_EXTERNAL_GUARD__
#define __Port_hh_EXTERNAL_GUARD__
#include <ossie/CF/Port.h>
#endif
#ifndef __QueryablePort_hh_EXTERNAL_GUARD__
#define __QueryablePort_hh_EXTERNAL_GUARD__
#include <ossie/CF/QueryablePort.h>
#endif
#ifndef __bulkioDataTypes_hh_EXTERNAL_GUARD__
#define __bulkioDataTypes_hh_EXTERNAL_GUARD__
#include <ossie/BULKIO/bulkioDataTypes.h>
#endif
#ifndef __bio__runtimeStats_hh_EXTERNAL_GUARD__
#define __bio__runtimeStats_hh_EXTERNAL_GUARD__
#include <ossie/BULKIO/bio_runtimeStats.h>
#endif
#ifndef __bio__updateSRI_hh_EXTERNAL_GUARD__
#define __bio__updateSRI_hh_EXTERNAL_GUARD__
#include <ossie/BULKIO/bio_updateSRI.h>
#endif



#ifdef USE_stub_in_nt_dll
# ifndef USE_core_stub_in_nt_dll
#  define USE_core_stub_in_nt_dll
# endif
# ifndef USE_dyn_stub_in_nt_dll
#  define USE_dyn_stub_in_nt_dll
# endif
#endif

#ifdef _core_attr
# error "A local CPP macro _core_attr has already been defined."
#else
# ifdef  USE_core_stub_in_nt_dll
#  define _core_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _core_attr
# endif
#endif

#ifdef _dyn_attr
# error "A local CPP macro _dyn_attr has already been defined."
#else
# ifdef  USE_dyn_stub_in_nt_dll
#  define _dyn_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _dyn_attr
# endif
#endif



_CORBA_MODULE BULKIO

_CORBA_MODULE_BEG

#ifndef __BULKIO_mdataUlongLong__
#define __BULKIO_mdataUlongLong__
  class dataUlongLong;
  class _objref_dataUlongLong;
  class _impl_dataUlongLong;
  
  typedef _objref_dataUlongLong* dataUlongLong_ptr;
  typedef dataUlongLong_ptr dataUlongLongRef;

  class dataUlongLong_Helper {
  public:
    typedef dataUlongLong_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_dataUlongLong, dataUlongLong_Helper> dataUlongLong_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_dataUlongLong,dataUlongLong_Helper > dataUlongLong_out;

#endif

  // interface dataUlongLong
  class dataUlongLong {
  public:
    // Declarations for this interface type.
    typedef dataUlongLong_ptr _ptr_type;
    typedef dataUlongLong_var _var_type;

    static _ptr_type _duplicate(_ptr_type);
    static _ptr_type _narrow(::CORBA::Object_ptr);
    static _ptr_type _unchecked_narrow(::CORBA::Object_ptr);
    
    static _ptr_type _nil();

    static inline void _marshalObjRef(_ptr_type, cdrStream&);

    static inline _ptr_type _unmarshalObjRef(cdrStream& s) {
      omniObjRef* o = omniObjRef::_unMarshal(_PD_repoId,s);
      if (o)
        return (_ptr_type) o->_ptrToObjRef(_PD_repoId);
      else
        return _nil();
    }

    static inline _ptr_type _fromObjRef(omniObjRef* o) {
      if (o)
        return (_ptr_type) o->_ptrToObjRef(_PD_repoId);
      else
        return _nil();
    }

    static _core_attr const char* _PD_repoId;

    // Other IDL defined within this scope.
    
  };

  class _objref_dataUlongLong :
    public virtual _objref_ProvidesPortStatisticsProvider,
    public virtual _objref_updateSRI
  {
  public:
    // IDL operations
    void pushPacket(const ::PortTypes::UlongLongSequence& data, const ::BULKIO::PrecisionUTCTime& T, ::CORBA::Boolean EOS, const char* streamID);

    // Constructors
    inline _objref_dataUlongLong()  { _PR_setobj(0); }  // nil
    _objref_dataUlongLong(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_dataUlongLong();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_dataUlongLong(const _objref_dataUlongLong&);
    _objref_dataUlongLong& operator = (const _objref_dataUlongLong&);
    // not implemented

    friend class dataUlongLong;
  };

  class _pof_dataUlongLong : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_dataUlongLong() : _OMNI_NS(proxyObjectFactory)(dataUlongLong::_PD_repoId) {}
    virtual ~_pof_dataUlongLong();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_dataUlongLong :
    public virtual _impl_ProvidesPortStatisticsProvider,
    public virtual _impl_updateSRI
  {
  public:
    virtual ~_impl_dataUlongLong();

    virtual void pushPacket(const ::PortTypes::UlongLongSequence& data, const ::BULKIO::PrecisionUTCTime& T, ::CORBA::Boolean EOS, const char* streamID) = 0;
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_dataUlongLong;

_CORBA_MODULE_END



_CORBA_MODULE POA_BULKIO
_CORBA_MODULE_BEG

  class dataUlongLong :
    public virtual BULKIO::_impl_dataUlongLong,
    public virtual ProvidesPortStatisticsProvider,
      public virtual updateSRI
  {
  public:
    virtual ~dataUlongLong();

    inline ::BULKIO::dataUlongLong_ptr _this() {
      return (::BULKIO::dataUlongLong_ptr) _do_this(::BULKIO::dataUlongLong::_PD_repoId);
    }
  };

_CORBA_MODULE_END



_CORBA_MODULE OBV_BULKIO
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

void operator<<=(::CORBA::Any& _a, BULKIO::dataUlongLong_ptr _s);
void operator<<=(::CORBA::Any& _a, BULKIO::dataUlongLong_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, BULKIO::dataUlongLong_ptr& _s);



inline void
BULKIO::dataUlongLong::_marshalObjRef(::BULKIO::dataUlongLong_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}



#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_bio__dataUlongLong
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_bio__dataUlongLong
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_bio__dataUlongLong
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_bio__dataUlongLong
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_bio__dataUlongLong
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_bio__dataUlongLong
#endif

#endif  // __bio__dataUlongLong_hh__

