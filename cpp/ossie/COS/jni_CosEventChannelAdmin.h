#ifndef __JNI_COSEVENTCHANNELADMIN_H__
#define __JNI_COSEVENTCHANNELADMIN_H__

#include <jni.h>
#include <omnijni/omnijni.h>
#include <COS/CosEventChannelAdmin.hh>
#include "jni_CosEventComm.h"

namespace CosEventChannelAdmin {
  namespace jni {
    class AlreadyConnected
    {
      public:
      static void fromJObject (CosEventChannelAdmin::AlreadyConnected& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CosEventChannelAdmin::AlreadyConnected& in, JNIEnv* env);

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
      AlreadyConnected();
      ~AlreadyConnected();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[0];
    };

    class TypeError
    {
      public:
      static void fromJObject (CosEventChannelAdmin::TypeError& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CosEventChannelAdmin::TypeError& in, JNIEnv* env);

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
      TypeError();
      ~TypeError();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[0];
    };

    class ProxyPushConsumerPOA : public virtual omnijni::Servant, public virtual POA_CosEventChannelAdmin::ProxyPushConsumer, public virtual CosEventComm::jni::PushConsumerPOA
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      void connect_push_supplier (CosEventComm::PushSupplier_ptr push_supplier);

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

    class ProxyPushConsumer
    {
      public:
      static void fromJObject (CosEventChannelAdmin::ProxyPushConsumer_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CosEventChannelAdmin::ProxyPushConsumer_ptr in, JNIEnv* env);

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
      ProxyPushConsumer();
      ~ProxyPushConsumer();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class ProxyPushConsumerHolder
    {
      public:
      static void fromJObject (CosEventChannelAdmin::ProxyPushConsumer_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CosEventChannelAdmin::ProxyPushConsumer_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CosEventChannelAdmin::ProxyPushConsumer_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      ProxyPushConsumerHolder();
      ~ProxyPushConsumerHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class ProxyPullSupplierPOA : public virtual omnijni::Servant, public virtual POA_CosEventChannelAdmin::ProxyPullSupplier, public virtual CosEventComm::jni::PullSupplierPOA
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      void connect_pull_consumer (CosEventComm::PullConsumer_ptr pull_consumer);

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

    class ProxyPullSupplier
    {
      public:
      static void fromJObject (CosEventChannelAdmin::ProxyPullSupplier_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CosEventChannelAdmin::ProxyPullSupplier_ptr in, JNIEnv* env);

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
      ProxyPullSupplier();
      ~ProxyPullSupplier();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class ProxyPullSupplierHolder
    {
      public:
      static void fromJObject (CosEventChannelAdmin::ProxyPullSupplier_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CosEventChannelAdmin::ProxyPullSupplier_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CosEventChannelAdmin::ProxyPullSupplier_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      ProxyPullSupplierHolder();
      ~ProxyPullSupplierHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class ProxyPullConsumerPOA : public virtual omnijni::Servant, public virtual POA_CosEventChannelAdmin::ProxyPullConsumer, public virtual CosEventComm::jni::PullConsumerPOA
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      void connect_pull_supplier (CosEventComm::PullSupplier_ptr pull_supplier);

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

    class ProxyPullConsumer
    {
      public:
      static void fromJObject (CosEventChannelAdmin::ProxyPullConsumer_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CosEventChannelAdmin::ProxyPullConsumer_ptr in, JNIEnv* env);

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
      ProxyPullConsumer();
      ~ProxyPullConsumer();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class ProxyPullConsumerHolder
    {
      public:
      static void fromJObject (CosEventChannelAdmin::ProxyPullConsumer_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CosEventChannelAdmin::ProxyPullConsumer_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CosEventChannelAdmin::ProxyPullConsumer_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      ProxyPullConsumerHolder();
      ~ProxyPullConsumerHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class ProxyPushSupplierPOA : public virtual omnijni::Servant, public virtual POA_CosEventChannelAdmin::ProxyPushSupplier, public virtual CosEventComm::jni::PushSupplierPOA
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      void connect_push_consumer (CosEventComm::PushConsumer_ptr push_consumer);

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

    class ProxyPushSupplier
    {
      public:
      static void fromJObject (CosEventChannelAdmin::ProxyPushSupplier_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CosEventChannelAdmin::ProxyPushSupplier_ptr in, JNIEnv* env);

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
      ProxyPushSupplier();
      ~ProxyPushSupplier();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class ProxyPushSupplierHolder
    {
      public:
      static void fromJObject (CosEventChannelAdmin::ProxyPushSupplier_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CosEventChannelAdmin::ProxyPushSupplier_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CosEventChannelAdmin::ProxyPushSupplier_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      ProxyPushSupplierHolder();
      ~ProxyPushSupplierHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class ConsumerAdminPOA : public virtual omnijni::Servant, public virtual POA_CosEventChannelAdmin::ConsumerAdmin
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      CosEventChannelAdmin::ProxyPushSupplier_ptr obtain_push_supplier ();
      CosEventChannelAdmin::ProxyPullSupplier_ptr obtain_pull_supplier ();

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

    class ConsumerAdmin
    {
      public:
      static void fromJObject (CosEventChannelAdmin::ConsumerAdmin_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CosEventChannelAdmin::ConsumerAdmin_ptr in, JNIEnv* env);

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
      ConsumerAdmin();
      ~ConsumerAdmin();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class ConsumerAdminHolder
    {
      public:
      static void fromJObject (CosEventChannelAdmin::ConsumerAdmin_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CosEventChannelAdmin::ConsumerAdmin_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CosEventChannelAdmin::ConsumerAdmin_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      ConsumerAdminHolder();
      ~ConsumerAdminHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class SupplierAdminPOA : public virtual omnijni::Servant, public virtual POA_CosEventChannelAdmin::SupplierAdmin
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      CosEventChannelAdmin::ProxyPushConsumer_ptr obtain_push_consumer ();
      CosEventChannelAdmin::ProxyPullConsumer_ptr obtain_pull_consumer ();

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

    class SupplierAdmin
    {
      public:
      static void fromJObject (CosEventChannelAdmin::SupplierAdmin_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CosEventChannelAdmin::SupplierAdmin_ptr in, JNIEnv* env);

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
      SupplierAdmin();
      ~SupplierAdmin();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class SupplierAdminHolder
    {
      public:
      static void fromJObject (CosEventChannelAdmin::SupplierAdmin_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CosEventChannelAdmin::SupplierAdmin_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CosEventChannelAdmin::SupplierAdmin_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      SupplierAdminHolder();
      ~SupplierAdminHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class EventChannelPOA : public virtual omnijni::Servant, public virtual POA_CosEventChannelAdmin::EventChannel
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      CosEventChannelAdmin::ConsumerAdmin_ptr for_consumers ();
      CosEventChannelAdmin::SupplierAdmin_ptr for_suppliers ();
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

    class EventChannel
    {
      public:
      static void fromJObject (CosEventChannelAdmin::EventChannel_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CosEventChannelAdmin::EventChannel_ptr in, JNIEnv* env);

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
      EventChannel();
      ~EventChannel();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class EventChannelHolder
    {
      public:
      static void fromJObject (CosEventChannelAdmin::EventChannel_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CosEventChannelAdmin::EventChannel_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CosEventChannelAdmin::EventChannel_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      EventChannelHolder();
      ~EventChannelHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

  }
}

inline void fromJObject (CosEventChannelAdmin::ProxyPushConsumer_out out, JNIEnv* env, jobject obj)
{
  CosEventChannelAdmin::jni::ProxyPushConsumer::fromJObject(out, env, obj);
}

inline jobject toJObject (const CosEventChannelAdmin::ProxyPushConsumer_ptr in, JNIEnv* env)
{
  return CosEventChannelAdmin::jni::ProxyPushConsumer::toJObject(in, env);
}

template<>
inline jclass getJClass<CosEventChannelAdmin::ProxyPushConsumerRef> (JNIEnv* env)
{
  return CosEventChannelAdmin::jni::ProxyPushConsumer::getJClass(env);
}

inline void fromJObject (CosEventChannelAdmin::ProxyPullSupplier_out out, JNIEnv* env, jobject obj)
{
  CosEventChannelAdmin::jni::ProxyPullSupplier::fromJObject(out, env, obj);
}

inline jobject toJObject (const CosEventChannelAdmin::ProxyPullSupplier_ptr in, JNIEnv* env)
{
  return CosEventChannelAdmin::jni::ProxyPullSupplier::toJObject(in, env);
}

template<>
inline jclass getJClass<CosEventChannelAdmin::ProxyPullSupplierRef> (JNIEnv* env)
{
  return CosEventChannelAdmin::jni::ProxyPullSupplier::getJClass(env);
}

inline void fromJObject (CosEventChannelAdmin::ProxyPullConsumer_out out, JNIEnv* env, jobject obj)
{
  CosEventChannelAdmin::jni::ProxyPullConsumer::fromJObject(out, env, obj);
}

inline jobject toJObject (const CosEventChannelAdmin::ProxyPullConsumer_ptr in, JNIEnv* env)
{
  return CosEventChannelAdmin::jni::ProxyPullConsumer::toJObject(in, env);
}

template<>
inline jclass getJClass<CosEventChannelAdmin::ProxyPullConsumerRef> (JNIEnv* env)
{
  return CosEventChannelAdmin::jni::ProxyPullConsumer::getJClass(env);
}

inline void fromJObject (CosEventChannelAdmin::ProxyPushSupplier_out out, JNIEnv* env, jobject obj)
{
  CosEventChannelAdmin::jni::ProxyPushSupplier::fromJObject(out, env, obj);
}

inline jobject toJObject (const CosEventChannelAdmin::ProxyPushSupplier_ptr in, JNIEnv* env)
{
  return CosEventChannelAdmin::jni::ProxyPushSupplier::toJObject(in, env);
}

template<>
inline jclass getJClass<CosEventChannelAdmin::ProxyPushSupplierRef> (JNIEnv* env)
{
  return CosEventChannelAdmin::jni::ProxyPushSupplier::getJClass(env);
}

inline void fromJObject (CosEventChannelAdmin::ConsumerAdmin_out out, JNIEnv* env, jobject obj)
{
  CosEventChannelAdmin::jni::ConsumerAdmin::fromJObject(out, env, obj);
}

inline jobject toJObject (const CosEventChannelAdmin::ConsumerAdmin_ptr in, JNIEnv* env)
{
  return CosEventChannelAdmin::jni::ConsumerAdmin::toJObject(in, env);
}

template<>
inline jclass getJClass<CosEventChannelAdmin::ConsumerAdminRef> (JNIEnv* env)
{
  return CosEventChannelAdmin::jni::ConsumerAdmin::getJClass(env);
}

inline void fromJObject (CosEventChannelAdmin::SupplierAdmin_out out, JNIEnv* env, jobject obj)
{
  CosEventChannelAdmin::jni::SupplierAdmin::fromJObject(out, env, obj);
}

inline jobject toJObject (const CosEventChannelAdmin::SupplierAdmin_ptr in, JNIEnv* env)
{
  return CosEventChannelAdmin::jni::SupplierAdmin::toJObject(in, env);
}

template<>
inline jclass getJClass<CosEventChannelAdmin::SupplierAdminRef> (JNIEnv* env)
{
  return CosEventChannelAdmin::jni::SupplierAdmin::getJClass(env);
}

inline void fromJObject (CosEventChannelAdmin::EventChannel_out out, JNIEnv* env, jobject obj)
{
  CosEventChannelAdmin::jni::EventChannel::fromJObject(out, env, obj);
}

inline jobject toJObject (const CosEventChannelAdmin::EventChannel_ptr in, JNIEnv* env)
{
  return CosEventChannelAdmin::jni::EventChannel::toJObject(in, env);
}

template<>
inline jclass getJClass<CosEventChannelAdmin::EventChannelRef> (JNIEnv* env)
{
  return CosEventChannelAdmin::jni::EventChannel::getJClass(env);
}


#endif // __JNI_COSEVENTCHANNELADMIN_H__
