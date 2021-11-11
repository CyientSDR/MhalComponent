#ifndef __JNI_COSNAMING_H__
#define __JNI_COSNAMING_H__

#include <jni.h>
#include <omnijni/omnijni.h>

namespace CosNaming {
  namespace jni {
    class NameComponent
    {
      public:
      static void fromJObject (CosNaming::NameComponent& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CosNaming::NameComponent& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      NameComponent();
      ~NameComponent();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[2];
    };

    class NameComponentHolder
    {
      public:
      static void fromJObject (CosNaming::NameComponent& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CosNaming::NameComponent& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CosNaming::NameComponent& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      NameComponentHolder();
      ~NameComponentHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class Name
    {
      public:
      static inline void fromJObject (CosNaming::Name& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (CosNaming::Name in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class NameHolder
    {
      public:
      static void fromJObject (CosNaming::Name& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CosNaming::Name& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CosNaming::Name& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      NameHolder();
      ~NameHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class BindingType
    {
      public:
      static void fromJObject (CosNaming::BindingType& out, JNIEnv* env, jobject obj);
      static jobject toJObject (CosNaming::BindingType in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      BindingType();
      ~BindingType();
      static jclass cls_;
      static jmethodID from_int_;
      static jmethodID value_;
    };

    class Binding
    {
      public:
      static void fromJObject (CosNaming::Binding& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CosNaming::Binding& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      Binding();
      ~Binding();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[2];
    };

    class BindingHolder
    {
      public:
      static void fromJObject (CosNaming::Binding& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CosNaming::Binding& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CosNaming::Binding& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      BindingHolder();
      ~BindingHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class BindingList
    {
      public:
      static inline void fromJObject (CosNaming::BindingList& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (CosNaming::BindingList in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class BindingListHolder
    {
      public:
      static void fromJObject (CosNaming::BindingList& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CosNaming::BindingList& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CosNaming::BindingList& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      BindingListHolder();
      ~BindingListHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class NamingContextPOA : public virtual omnijni::Servant, public virtual POA_CosNaming::NamingContext
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      void bind (const CosNaming::Name& n, CORBA::Object_ptr obj);
      void rebind (const CosNaming::Name& n, CORBA::Object_ptr obj);
      void bind_context (const CosNaming::Name& n, CosNaming::NamingContext_ptr nc);
      void rebind_context (const CosNaming::Name& n, CosNaming::NamingContext_ptr nc);
      CORBA::Object_ptr resolve (const CosNaming::Name& n);
      void unbind (const CosNaming::Name& n);
      CosNaming::NamingContext_ptr new_context ();
      CosNaming::NamingContext_ptr bind_new_context (const CosNaming::Name& n);
      void destroy ();
      void list (CORBA::ULong how_many, CosNaming::BindingList_out bl, CosNaming::BindingIterator_out bi);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      static jclass cls_;
      static JavaVM* jvm_;
      static jmethodID mid_[10];
    };

    class NamingContext
    {
      public:
      class NotFoundReason
      {
        public:
        static void fromJObject (CosNaming::NamingContext::NotFoundReason& out, JNIEnv* env, jobject obj);
        static jobject toJObject (CosNaming::NamingContext::NotFoundReason in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        NotFoundReason();
        ~NotFoundReason();
        static jclass cls_;
        static jmethodID from_int_;
        static jmethodID value_;
      };

      class NotFound
      {
        public:
        static void fromJObject (CosNaming::NamingContext::NotFound& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CosNaming::NamingContext::NotFound& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void throwIf (JNIEnv* env, jobject obj);
        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        NotFound();
        ~NotFound();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[2];
      };

      class CannotProceed
      {
        public:
        static void fromJObject (CosNaming::NamingContext::CannotProceed& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CosNaming::NamingContext::CannotProceed& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void throwIf (JNIEnv* env, jobject obj);
        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        CannotProceed();
        ~CannotProceed();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[2];
      };

      class InvalidName
      {
        public:
        static void fromJObject (CosNaming::NamingContext::InvalidName& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CosNaming::NamingContext::InvalidName& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void throwIf (JNIEnv* env, jobject obj);
        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        InvalidName();
        ~InvalidName();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[0];
      };

      class AlreadyBound
      {
        public:
        static void fromJObject (CosNaming::NamingContext::AlreadyBound& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CosNaming::NamingContext::AlreadyBound& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void throwIf (JNIEnv* env, jobject obj);
        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        AlreadyBound();
        ~AlreadyBound();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[0];
      };

      class NotEmpty
      {
        public:
        static void fromJObject (CosNaming::NamingContext::NotEmpty& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CosNaming::NamingContext::NotEmpty& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void throwIf (JNIEnv* env, jobject obj);
        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        NotEmpty();
        ~NotEmpty();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[0];
      };

      static void fromJObject (CosNaming::NamingContext_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CosNaming::NamingContext_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      NamingContext();
      ~NamingContext();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class NamingContextHolder
    {
      public:
      static void fromJObject (CosNaming::NamingContext_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CosNaming::NamingContext_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CosNaming::NamingContext_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      NamingContextHolder();
      ~NamingContextHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class BindingIteratorPOA : public virtual omnijni::Servant, public virtual POA_CosNaming::BindingIterator
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      CORBA::Boolean next_one (CosNaming::Binding_out b);
      CORBA::Boolean next_n (CORBA::ULong how_many, CosNaming::BindingList_out bl);
      void destroy ();

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      static jclass cls_;
      static JavaVM* jvm_;
      static jmethodID mid_[3];
    };

    class BindingIterator
    {
      public:
      static void fromJObject (CosNaming::BindingIterator_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CosNaming::BindingIterator_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      BindingIterator();
      ~BindingIterator();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class BindingIteratorHolder
    {
      public:
      static void fromJObject (CosNaming::BindingIterator_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CosNaming::BindingIterator_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CosNaming::BindingIterator_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      BindingIteratorHolder();
      ~BindingIteratorHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class NamingContextExtPOA : public virtual omnijni::Servant, public virtual POA_CosNaming::NamingContextExt, public virtual CosNaming::jni::NamingContextPOA
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      char* to_string (const CosNaming::Name& n);
      CosNaming::Name* to_name (const char* sn);
      char* to_url (const char* addr, const char* sn);
      CORBA::Object_ptr resolve_str (const char* n);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      static jclass cls_;
      static JavaVM* jvm_;
      static jmethodID mid_[4];
    };

    class NamingContextExt
    {
      public:
      class InvalidAddress
      {
        public:
        static void fromJObject (CosNaming::NamingContextExt::InvalidAddress& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CosNaming::NamingContextExt::InvalidAddress& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void throwIf (JNIEnv* env, jobject obj);
        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        InvalidAddress();
        ~InvalidAddress();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[0];
      };

      static void fromJObject (CosNaming::NamingContextExt_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CosNaming::NamingContextExt_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      NamingContextExt();
      ~NamingContextExt();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class NamingContextExtHolder
    {
      public:
      static void fromJObject (CosNaming::NamingContextExt_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CosNaming::NamingContextExt_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CosNaming::NamingContextExt_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      NamingContextExtHolder();
      ~NamingContextExtHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

  }
}

inline void fromJObject (CosNaming::NameComponent& out, JNIEnv* env, jobject obj)
{
  CosNaming::jni::NameComponent::fromJObject(out, env, obj);
}

inline jobject toJObject (const CosNaming::NameComponent& in, JNIEnv* env)
{
  return CosNaming::jni::NameComponent::toJObject(in, env);
}

template<>
inline jclass getJClass<CosNaming::NameComponent> (JNIEnv* env)
{
  return CosNaming::jni::NameComponent::getJClass(env);
}

inline void fromJObject (CosNaming::Name& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CosNaming::Name& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CosNaming::BindingType& out, JNIEnv* env, jobject obj)
{
  CosNaming::jni::BindingType::fromJObject(out, env, obj);
}

inline jobject toJObject (const CosNaming::BindingType in, JNIEnv* env)
{
  return CosNaming::jni::BindingType::toJObject(in, env);
}

template<>
inline jclass getJClass<CosNaming::BindingType> (JNIEnv* env)
{
  return CosNaming::jni::BindingType::getJClass(env);
}

inline void fromJObject (CosNaming::Binding& out, JNIEnv* env, jobject obj)
{
  CosNaming::jni::Binding::fromJObject(out, env, obj);
}

inline jobject toJObject (const CosNaming::Binding& in, JNIEnv* env)
{
  return CosNaming::jni::Binding::toJObject(in, env);
}

template<>
inline jclass getJClass<CosNaming::Binding> (JNIEnv* env)
{
  return CosNaming::jni::Binding::getJClass(env);
}

inline void fromJObject (CosNaming::BindingList& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CosNaming::BindingList& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CosNaming::NamingContext::NotFoundReason& out, JNIEnv* env, jobject obj)
{
  CosNaming::jni::NamingContext::NotFoundReason::fromJObject(out, env, obj);
}

inline jobject toJObject (const CosNaming::NamingContext::NotFoundReason in, JNIEnv* env)
{
  return CosNaming::jni::NamingContext::NotFoundReason::toJObject(in, env);
}

template<>
inline jclass getJClass<CosNaming::NamingContext::NotFoundReason> (JNIEnv* env)
{
  return CosNaming::jni::NamingContext::NotFoundReason::getJClass(env);
}

inline void fromJObject (CosNaming::NamingContext_out out, JNIEnv* env, jobject obj)
{
  CosNaming::jni::NamingContext::fromJObject(out, env, obj);
}

inline jobject toJObject (const CosNaming::NamingContext_ptr in, JNIEnv* env)
{
  return CosNaming::jni::NamingContext::toJObject(in, env);
}

template<>
inline jclass getJClass<CosNaming::NamingContextRef> (JNIEnv* env)
{
  return CosNaming::jni::NamingContext::getJClass(env);
}

inline void fromJObject (CosNaming::BindingIterator_out out, JNIEnv* env, jobject obj)
{
  CosNaming::jni::BindingIterator::fromJObject(out, env, obj);
}

inline jobject toJObject (const CosNaming::BindingIterator_ptr in, JNIEnv* env)
{
  return CosNaming::jni::BindingIterator::toJObject(in, env);
}

template<>
inline jclass getJClass<CosNaming::BindingIteratorRef> (JNIEnv* env)
{
  return CosNaming::jni::BindingIterator::getJClass(env);
}

inline void fromJObject (CosNaming::NamingContextExt_out out, JNIEnv* env, jobject obj)
{
  CosNaming::jni::NamingContextExt::fromJObject(out, env, obj);
}

inline jobject toJObject (const CosNaming::NamingContextExt_ptr in, JNIEnv* env)
{
  return CosNaming::jni::NamingContextExt::toJObject(in, env);
}

template<>
inline jclass getJClass<CosNaming::NamingContextExtRef> (JNIEnv* env)
{
  return CosNaming::jni::NamingContextExt::getJClass(env);
}


#endif // __JNI_COSNAMING_H__
