#ifndef __JNI_SANDBOX_H__
#define __JNI_SANDBOX_H__

#include <jni.h>
#include <omnijni/omnijni.h>
#include <ossie/CF/sandbox.h>

namespace ExtendedCF {
  namespace jni {
    class ResourceDesc
    {
      public:
      static void fromJObject (ExtendedCF::ResourceDesc& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const ExtendedCF::ResourceDesc& in, JNIEnv* env);

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
      ResourceDesc();
      ~ResourceDesc();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[2];
    };

    class ResourceDescHolder
    {
      public:
      static void fromJObject (ExtendedCF::ResourceDesc& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const ExtendedCF::ResourceDesc& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const ExtendedCF::ResourceDesc& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      ResourceDescHolder();
      ~ResourceDescHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class SandboxPOA : public virtual omnijni::Servant, public virtual POA_ExtendedCF::Sandbox
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      CosNaming::NamingContext_ptr namingContext ();
      CF::DeviceManager_ptr deviceManager ();
      ExtendedCF::Sandbox::ProfileDescSequence* availableProfiles ();
      CF::FileManager_ptr fileManager ();
      ExtendedCF::Sandbox::ResourceDescSequence* registeredResources ();
      CF::ResourceFactory_ptr getResourceFactory (const char* identifier);
      CF::ResourceFactory_ptr getResourceFactoryByProfile (const char* profile);
      void refresh (CORBA::Object_ptr obj, ExtendedCF::Sandbox::Depth dpth);

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
      static jmethodID mid_[8];
    };

    class Sandbox
    {
      public:
      class Depth
      {
        public:
        static void fromJObject (ExtendedCF::Sandbox::Depth& out, JNIEnv* env, jobject obj);
        static jobject toJObject (ExtendedCF::Sandbox::Depth in, JNIEnv* env);

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
        Depth();
        ~Depth();
        static jclass cls_;
        static jmethodID from_int_;
        static jmethodID value_;
      };

      class ResourceDescSequence
      {
        public:
        static inline void fromJObject (ExtendedCF::Sandbox::ResourceDescSequence& out, JNIEnv* env, jobject obj)
        {
          omnijni::fromJObject(out, env, obj);
        }
        static inline jobject toJObject (ExtendedCF::Sandbox::ResourceDescSequence in, JNIEnv* env)
        {
          return omnijni::toJObject(in, env);
        }
      };

      class ResourceDescSequenceHolder
      {
        public:
        static void fromJObject (ExtendedCF::Sandbox::ResourceDescSequence& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const ExtendedCF::Sandbox::ResourceDescSequence& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void setValue (JNIEnv* env, jobject holder, const ExtendedCF::Sandbox::ResourceDescSequence& value);
        static jobject newInstance (JNIEnv* env);

        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        ResourceDescSequenceHolder();
        ~ResourceDescSequenceHolder();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID value_;
      };

      class ProfileDescSequence
      {
        public:
        static inline void fromJObject (ExtendedCF::Sandbox::ProfileDescSequence& out, JNIEnv* env, jobject obj)
        {
          omnijni::fromJObject(out, env, obj);
        }
        static inline jobject toJObject (ExtendedCF::Sandbox::ProfileDescSequence in, JNIEnv* env)
        {
          return omnijni::toJObject(in, env);
        }
      };

      class ProfileDescSequenceHolder
      {
        public:
        static void fromJObject (ExtendedCF::Sandbox::ProfileDescSequence& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const ExtendedCF::Sandbox::ProfileDescSequence& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void setValue (JNIEnv* env, jobject holder, const ExtendedCF::Sandbox::ProfileDescSequence& value);
        static jobject newInstance (JNIEnv* env);

        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        ProfileDescSequenceHolder();
        ~ProfileDescSequenceHolder();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID value_;
      };

      static void fromJObject (ExtendedCF::Sandbox_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (ExtendedCF::Sandbox_ptr in, JNIEnv* env);

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
      Sandbox();
      ~Sandbox();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class SandboxHolder
    {
      public:
      static void fromJObject (ExtendedCF::Sandbox_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (ExtendedCF::Sandbox_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, ExtendedCF::Sandbox_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      SandboxHolder();
      ~SandboxHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

  }
}

inline void fromJObject (ExtendedCF::ResourceDesc& out, JNIEnv* env, jobject obj)
{
  ExtendedCF::jni::ResourceDesc::fromJObject(out, env, obj);
}

inline jobject toJObject (const ExtendedCF::ResourceDesc& in, JNIEnv* env)
{
  return ExtendedCF::jni::ResourceDesc::toJObject(in, env);
}

template<>
inline jclass getJClass<ExtendedCF::ResourceDesc> (JNIEnv* env)
{
  return ExtendedCF::jni::ResourceDesc::getJClass(env);
}

inline void fromJObject (ExtendedCF::Sandbox::Depth& out, JNIEnv* env, jobject obj)
{
  ExtendedCF::jni::Sandbox::Depth::fromJObject(out, env, obj);
}

inline jobject toJObject (const ExtendedCF::Sandbox::Depth in, JNIEnv* env)
{
  return ExtendedCF::jni::Sandbox::Depth::toJObject(in, env);
}

template<>
inline jclass getJClass<ExtendedCF::Sandbox::Depth> (JNIEnv* env)
{
  return ExtendedCF::jni::Sandbox::Depth::getJClass(env);
}

inline void fromJObject (ExtendedCF::Sandbox::ResourceDescSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const ExtendedCF::Sandbox::ResourceDescSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (ExtendedCF::Sandbox::ProfileDescSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const ExtendedCF::Sandbox::ProfileDescSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (ExtendedCF::Sandbox_out out, JNIEnv* env, jobject obj)
{
  ExtendedCF::jni::Sandbox::fromJObject(out, env, obj);
}

inline jobject toJObject (const ExtendedCF::Sandbox_ptr in, JNIEnv* env)
{
  return ExtendedCF::jni::Sandbox::toJObject(in, env);
}

template<>
inline jclass getJClass<ExtendedCF::SandboxRef> (JNIEnv* env)
{
  return ExtendedCF::jni::Sandbox::getJClass(env);
}


#endif // __JNI_SANDBOX_H__
