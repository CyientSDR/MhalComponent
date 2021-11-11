#ifndef __JNI_PORT_H__
#define __JNI_PORT_H__

#include <jni.h>
#include <omnijni/omnijni.h>
#include <ossie/CF/Port.h>

namespace CF {
  namespace jni {
    class PortPOA : public virtual omnijni::Servant, public virtual POA_CF::Port
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      void connectPort (CORBA::Object_ptr connection, const char* connectionId);
      void disconnectPort (const char* connectionId);

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
      static jmethodID mid_[2];
    };

    class Port
    {
      public:
      class InvalidPort
      {
        public:
        static void fromJObject (CF::Port::InvalidPort& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::Port::InvalidPort& in, JNIEnv* env);

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
        InvalidPort();
        ~InvalidPort();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[2];
      };

      class OccupiedPort
      {
        public:
        static void fromJObject (CF::Port::OccupiedPort& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::Port::OccupiedPort& in, JNIEnv* env);

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
        OccupiedPort();
        ~OccupiedPort();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[0];
      };

      static void fromJObject (CF::Port_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::Port_ptr in, JNIEnv* env);

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
      Port();
      ~Port();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class PortHolder
    {
      public:
      static void fromJObject (CF::Port_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::Port_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::Port_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      PortHolder();
      ~PortHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

  }
}

inline void fromJObject (CF::Port_out out, JNIEnv* env, jobject obj)
{
  CF::jni::Port::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::Port_ptr in, JNIEnv* env)
{
  return CF::jni::Port::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::PortRef> (JNIEnv* env)
{
  return CF::jni::Port::getJClass(env);
}


#endif // __JNI_PORT_H__
