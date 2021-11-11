#ifndef __JNI_COSEVENTCOMM_H__
#define __JNI_COSEVENTCOMM_H__

#include <jni.h>
#include <omnijni/omnijni.h>
#include <COS/CosEventComm.hh>

namespace CosEventComm {
  namespace jni {
    class Disconnected
    {
      public:
      static void fromJObject (CosEventComm::Disconnected& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CosEventComm::Disconnected& in, JNIEnv* env);

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
      Disconnected();
      ~Disconnected();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[0];
    };

    class PushConsumerPOA : public virtual omnijni::Servant, public virtual POA_CosEventComm::PushConsumer
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      void push (const CORBA::Any& data);
      void disconnect_push_consumer ();

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

    class PushConsumer
    {
      public:
      static void fromJObject (CosEventComm::PushConsumer_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CosEventComm::PushConsumer_ptr in, JNIEnv* env);

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
      PushConsumer();
      ~PushConsumer();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class PushConsumerHolder
    {
      public:
      static void fromJObject (CosEventComm::PushConsumer_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CosEventComm::PushConsumer_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CosEventComm::PushConsumer_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      PushConsumerHolder();
      ~PushConsumerHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class PushSupplierPOA : public virtual omnijni::Servant, public virtual POA_CosEventComm::PushSupplier
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      void disconnect_push_supplier ();

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

    class PushSupplier
    {
      public:
      static void fromJObject (CosEventComm::PushSupplier_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CosEventComm::PushSupplier_ptr in, JNIEnv* env);

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
      PushSupplier();
      ~PushSupplier();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class PushSupplierHolder
    {
      public:
      static void fromJObject (CosEventComm::PushSupplier_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CosEventComm::PushSupplier_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CosEventComm::PushSupplier_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      PushSupplierHolder();
      ~PushSupplierHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class PullSupplierPOA : public virtual omnijni::Servant, public virtual POA_CosEventComm::PullSupplier
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      CORBA::Any* pull ();
      CORBA::Any* try_pull (CORBA::Boolean& has_event);
      void disconnect_pull_supplier ();

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

    class PullSupplier
    {
      public:
      static void fromJObject (CosEventComm::PullSupplier_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CosEventComm::PullSupplier_ptr in, JNIEnv* env);

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
      PullSupplier();
      ~PullSupplier();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class PullSupplierHolder
    {
      public:
      static void fromJObject (CosEventComm::PullSupplier_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CosEventComm::PullSupplier_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CosEventComm::PullSupplier_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      PullSupplierHolder();
      ~PullSupplierHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class PullConsumerPOA : public virtual omnijni::Servant, public virtual POA_CosEventComm::PullConsumer
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      void disconnect_pull_consumer ();

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

    class PullConsumer
    {
      public:
      static void fromJObject (CosEventComm::PullConsumer_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CosEventComm::PullConsumer_ptr in, JNIEnv* env);

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
      PullConsumer();
      ~PullConsumer();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class PullConsumerHolder
    {
      public:
      static void fromJObject (CosEventComm::PullConsumer_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CosEventComm::PullConsumer_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CosEventComm::PullConsumer_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      PullConsumerHolder();
      ~PullConsumerHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

  }
}

inline void fromJObject (CosEventComm::PushConsumer_out out, JNIEnv* env, jobject obj)
{
  CosEventComm::jni::PushConsumer::fromJObject(out, env, obj);
}

inline jobject toJObject (const CosEventComm::PushConsumer_ptr in, JNIEnv* env)
{
  return CosEventComm::jni::PushConsumer::toJObject(in, env);
}

template<>
inline jclass getJClass<CosEventComm::PushConsumerRef> (JNIEnv* env)
{
  return CosEventComm::jni::PushConsumer::getJClass(env);
}

inline void fromJObject (CosEventComm::PushSupplier_out out, JNIEnv* env, jobject obj)
{
  CosEventComm::jni::PushSupplier::fromJObject(out, env, obj);
}

inline jobject toJObject (const CosEventComm::PushSupplier_ptr in, JNIEnv* env)
{
  return CosEventComm::jni::PushSupplier::toJObject(in, env);
}

template<>
inline jclass getJClass<CosEventComm::PushSupplierRef> (JNIEnv* env)
{
  return CosEventComm::jni::PushSupplier::getJClass(env);
}

inline void fromJObject (CosEventComm::PullSupplier_out out, JNIEnv* env, jobject obj)
{
  CosEventComm::jni::PullSupplier::fromJObject(out, env, obj);
}

inline jobject toJObject (const CosEventComm::PullSupplier_ptr in, JNIEnv* env)
{
  return CosEventComm::jni::PullSupplier::toJObject(in, env);
}

template<>
inline jclass getJClass<CosEventComm::PullSupplierRef> (JNIEnv* env)
{
  return CosEventComm::jni::PullSupplier::getJClass(env);
}

inline void fromJObject (CosEventComm::PullConsumer_out out, JNIEnv* env, jobject obj)
{
  CosEventComm::jni::PullConsumer::fromJObject(out, env, obj);
}

inline jobject toJObject (const CosEventComm::PullConsumer_ptr in, JNIEnv* env)
{
  return CosEventComm::jni::PullConsumer::toJObject(in, env);
}

template<>
inline jclass getJClass<CosEventComm::PullConsumerRef> (JNIEnv* env)
{
  return CosEventComm::jni::PullConsumer::getJClass(env);
}


#endif // __JNI_COSEVENTCOMM_H__
