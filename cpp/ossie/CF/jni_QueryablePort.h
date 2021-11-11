#ifndef __JNI_QUERYABLEPORT_H__
#define __JNI_QUERYABLEPORT_H__

#include <jni.h>
#include <omnijni/omnijni.h>
#include <ossie/CF/QueryablePort.h>
#include <ossie/CF/jni_Port.h>

namespace ExtendedCF {
  namespace jni {
    class UsesConnection
    {
      public:
      static void fromJObject (ExtendedCF::UsesConnection& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const ExtendedCF::UsesConnection& in, JNIEnv* env);

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
      UsesConnection();
      ~UsesConnection();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[2];
    };

    class UsesConnectionHolder
    {
      public:
      static void fromJObject (ExtendedCF::UsesConnection& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const ExtendedCF::UsesConnection& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const ExtendedCF::UsesConnection& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      UsesConnectionHolder();
      ~UsesConnectionHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class UsesConnectionSequence
    {
      public:
      static inline void fromJObject (ExtendedCF::UsesConnectionSequence& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (ExtendedCF::UsesConnectionSequence in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class UsesConnectionSequenceHolder
    {
      public:
      static void fromJObject (ExtendedCF::UsesConnectionSequence& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const ExtendedCF::UsesConnectionSequence& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const ExtendedCF::UsesConnectionSequence& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      UsesConnectionSequenceHolder();
      ~UsesConnectionSequenceHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class QueryablePortPOA : public virtual omnijni::Servant, public virtual POA_ExtendedCF::QueryablePort, public virtual CF::jni::PortPOA
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      ExtendedCF::UsesConnectionSequence* connections ();

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
      static jmethodID mid_[1];
    };

    class QueryablePort
    {
      public:
      static void fromJObject (ExtendedCF::QueryablePort_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (ExtendedCF::QueryablePort_ptr in, JNIEnv* env);

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
      QueryablePort();
      ~QueryablePort();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class QueryablePortHolder
    {
      public:
      static void fromJObject (ExtendedCF::QueryablePort_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (ExtendedCF::QueryablePort_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, ExtendedCF::QueryablePort_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      QueryablePortHolder();
      ~QueryablePortHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

  }
}

inline void fromJObject (ExtendedCF::UsesConnection& out, JNIEnv* env, jobject obj)
{
  ExtendedCF::jni::UsesConnection::fromJObject(out, env, obj);
}

inline jobject toJObject (const ExtendedCF::UsesConnection& in, JNIEnv* env)
{
  return ExtendedCF::jni::UsesConnection::toJObject(in, env);
}

template<>
inline jclass getJClass<ExtendedCF::UsesConnection> (JNIEnv* env)
{
  return ExtendedCF::jni::UsesConnection::getJClass(env);
}

inline void fromJObject (ExtendedCF::UsesConnectionSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const ExtendedCF::UsesConnectionSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (ExtendedCF::QueryablePort_out out, JNIEnv* env, jobject obj)
{
  ExtendedCF::jni::QueryablePort::fromJObject(out, env, obj);
}

inline jobject toJObject (const ExtendedCF::QueryablePort_ptr in, JNIEnv* env)
{
  return ExtendedCF::jni::QueryablePort::toJObject(in, env);
}

template<>
inline jclass getJClass<ExtendedCF::QueryablePortRef> (JNIEnv* env)
{
  return ExtendedCF::jni::QueryablePort::getJClass(env);
}


#endif // __JNI_QUERYABLEPORT_H__
