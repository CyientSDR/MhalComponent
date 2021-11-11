#ifndef __JNI_EXTENDEDEVENT_H__
#define __JNI_EXTENDEDEVENT_H__

#include <jni.h>
#include <omnijni/omnijni.h>
#include <ossie/CF/ExtendedEvent.h>
#include <COS/jni_CosEventChannelAdmin.h>
#include <ossie/CF/jni_Port.h>

namespace ExtendedEvent {
  namespace jni {
    class ResourceStateChangeType
    {
      public:
      static void fromJObject (ExtendedEvent::ResourceStateChangeType& out, JNIEnv* env, jobject obj);
      static jobject toJObject (ExtendedEvent::ResourceStateChangeType in, JNIEnv* env);

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
      ResourceStateChangeType();
      ~ResourceStateChangeType();
      static jclass cls_;
      static jmethodID from_int_;
      static jmethodID value_;
    };

    class ResourceStateChangeEventType
    {
      public:
      static void fromJObject (ExtendedEvent::ResourceStateChangeEventType& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const ExtendedEvent::ResourceStateChangeEventType& in, JNIEnv* env);

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
      ResourceStateChangeEventType();
      ~ResourceStateChangeEventType();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[4];
    };

    class ResourceStateChangeEventTypeHolder
    {
      public:
      static void fromJObject (ExtendedEvent::ResourceStateChangeEventType& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const ExtendedEvent::ResourceStateChangeEventType& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const ExtendedEvent::ResourceStateChangeEventType& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      ResourceStateChangeEventTypeHolder();
      ~ResourceStateChangeEventTypeHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class PropertySetChangeEventType
    {
      public:
      static void fromJObject (ExtendedEvent::PropertySetChangeEventType& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const ExtendedEvent::PropertySetChangeEventType& in, JNIEnv* env);

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
      PropertySetChangeEventType();
      ~PropertySetChangeEventType();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[3];
    };

    class PropertySetChangeEventTypeHolder
    {
      public:
      static void fromJObject (ExtendedEvent::PropertySetChangeEventType& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const ExtendedEvent::PropertySetChangeEventType& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const ExtendedEvent::PropertySetChangeEventType& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      PropertySetChangeEventTypeHolder();
      ~PropertySetChangeEventTypeHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class MessageEventPOA : public virtual omnijni::Servant, public virtual POA_ExtendedEvent::MessageEvent, public virtual CosEventChannelAdmin::jni::EventChannelPOA, public virtual CF::jni::PortPOA
    {
      public:
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
      static jclass cls_;
      static JavaVM* jvm_;
    };

    class MessageEvent
    {
      public:
      static void fromJObject (ExtendedEvent::MessageEvent_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (ExtendedEvent::MessageEvent_ptr in, JNIEnv* env);

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
      MessageEvent();
      ~MessageEvent();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class MessageEventHolder
    {
      public:
      static void fromJObject (ExtendedEvent::MessageEvent_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (ExtendedEvent::MessageEvent_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, ExtendedEvent::MessageEvent_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      MessageEventHolder();
      ~MessageEventHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

  }
}

inline void fromJObject (ExtendedEvent::ResourceStateChangeType& out, JNIEnv* env, jobject obj)
{
  ExtendedEvent::jni::ResourceStateChangeType::fromJObject(out, env, obj);
}

inline jobject toJObject (const ExtendedEvent::ResourceStateChangeType in, JNIEnv* env)
{
  return ExtendedEvent::jni::ResourceStateChangeType::toJObject(in, env);
}

template<>
inline jclass getJClass<ExtendedEvent::ResourceStateChangeType> (JNIEnv* env)
{
  return ExtendedEvent::jni::ResourceStateChangeType::getJClass(env);
}

inline void fromJObject (ExtendedEvent::ResourceStateChangeEventType& out, JNIEnv* env, jobject obj)
{
  ExtendedEvent::jni::ResourceStateChangeEventType::fromJObject(out, env, obj);
}

inline jobject toJObject (const ExtendedEvent::ResourceStateChangeEventType& in, JNIEnv* env)
{
  return ExtendedEvent::jni::ResourceStateChangeEventType::toJObject(in, env);
}

template<>
inline jclass getJClass<ExtendedEvent::ResourceStateChangeEventType> (JNIEnv* env)
{
  return ExtendedEvent::jni::ResourceStateChangeEventType::getJClass(env);
}

inline void fromJObject (ExtendedEvent::PropertySetChangeEventType& out, JNIEnv* env, jobject obj)
{
  ExtendedEvent::jni::PropertySetChangeEventType::fromJObject(out, env, obj);
}

inline jobject toJObject (const ExtendedEvent::PropertySetChangeEventType& in, JNIEnv* env)
{
  return ExtendedEvent::jni::PropertySetChangeEventType::toJObject(in, env);
}

template<>
inline jclass getJClass<ExtendedEvent::PropertySetChangeEventType> (JNIEnv* env)
{
  return ExtendedEvent::jni::PropertySetChangeEventType::getJClass(env);
}

inline void fromJObject (ExtendedEvent::MessageEvent_out out, JNIEnv* env, jobject obj)
{
  ExtendedEvent::jni::MessageEvent::fromJObject(out, env, obj);
}

inline jobject toJObject (const ExtendedEvent::MessageEvent_ptr in, JNIEnv* env)
{
  return ExtendedEvent::jni::MessageEvent::toJObject(in, env);
}

template<>
inline jclass getJClass<ExtendedEvent::MessageEventRef> (JNIEnv* env)
{
  return ExtendedEvent::jni::MessageEvent::getJClass(env);
}


#endif // __JNI_EXTENDEDEVENT_H__
