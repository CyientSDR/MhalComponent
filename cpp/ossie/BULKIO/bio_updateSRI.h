// This file is generated by omniidl (C++ backend)- omniORB_4_2. Do not edit.
#ifndef __bio__updateSRI_hh__
#define __bio__updateSRI_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_bio__updateSRI
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_bio__updateSRI
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_bio__updateSRI
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

#ifndef __BULKIO_mupdateSRI__
#define __BULKIO_mupdateSRI__
  class updateSRI;
  class _objref_updateSRI;
  class _impl_updateSRI;
  
  typedef _objref_updateSRI* updateSRI_ptr;
  typedef updateSRI_ptr updateSRIRef;

  class updateSRI_Helper {
  public:
    typedef updateSRI_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_updateSRI, updateSRI_Helper> updateSRI_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_updateSRI,updateSRI_Helper > updateSRI_out;

#endif

  // interface updateSRI
  class updateSRI {
  public:
    // Declarations for this interface type.
    typedef updateSRI_ptr _ptr_type;
    typedef updateSRI_var _var_type;

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

  class _objref_updateSRI :
    public virtual ::CORBA::Object,
    public virtual omniObjRef
  {
  public:
    // IDL operations
    StreamSRISequence* activeSRIs();
    void pushSRI(const ::BULKIO::StreamSRI& H);

    // Constructors
    inline _objref_updateSRI()  { _PR_setobj(0); }  // nil
    _objref_updateSRI(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_updateSRI();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_updateSRI(const _objref_updateSRI&);
    _objref_updateSRI& operator = (const _objref_updateSRI&);
    // not implemented

    friend class updateSRI;
  };

  class _pof_updateSRI : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_updateSRI() : _OMNI_NS(proxyObjectFactory)(updateSRI::_PD_repoId) {}
    virtual ~_pof_updateSRI();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_updateSRI :
    public virtual omniServant
  {
  public:
    virtual ~_impl_updateSRI();

    virtual StreamSRISequence* activeSRIs() = 0;
    virtual void pushSRI(const ::BULKIO::StreamSRI& H) = 0;
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_updateSRI;

_CORBA_MODULE_END



_CORBA_MODULE POA_BULKIO
_CORBA_MODULE_BEG

  class updateSRI :
    public virtual BULKIO::_impl_updateSRI,
    public virtual ::PortableServer::ServantBase
  {
  public:
    virtual ~updateSRI();

    inline ::BULKIO::updateSRI_ptr _this() {
      return (::BULKIO::updateSRI_ptr) _do_this(::BULKIO::updateSRI::_PD_repoId);
    }
  };

_CORBA_MODULE_END



_CORBA_MODULE OBV_BULKIO
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

void operator<<=(::CORBA::Any& _a, BULKIO::updateSRI_ptr _s);
void operator<<=(::CORBA::Any& _a, BULKIO::updateSRI_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, BULKIO::updateSRI_ptr& _s);



inline void
BULKIO::updateSRI::_marshalObjRef(::BULKIO::updateSRI_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}



#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_bio__updateSRI
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_bio__updateSRI
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_bio__updateSRI
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_bio__updateSRI
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_bio__updateSRI
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_bio__updateSRI
#endif

#endif  // __bio__updateSRI_hh__

