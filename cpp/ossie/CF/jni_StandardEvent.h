#ifndef __JNI_STANDARDEVENT_H__
#define __JNI_STANDARDEVENT_H__

#include <jni.h>
#include <omnijni/omnijni.h>
#include <ossie/CF/StandardEvent.h>

namespace StandardEvent {
  namespace jni {
    class StateChangeCategoryType
    {
      public:
      static void fromJObject (StandardEvent::StateChangeCategoryType& out, JNIEnv* env, jobject obj);
      static jobject toJObject (StandardEvent::StateChangeCategoryType in, JNIEnv* env);

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
      StateChangeCategoryType();
      ~StateChangeCategoryType();
      static jclass cls_;
      static jmethodID from_int_;
      static jmethodID value_;
    };

    class StateChangeType
    {
      public:
      static void fromJObject (StandardEvent::StateChangeType& out, JNIEnv* env, jobject obj);
      static jobject toJObject (StandardEvent::StateChangeType in, JNIEnv* env);

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
      StateChangeType();
      ~StateChangeType();
      static jclass cls_;
      static jmethodID from_int_;
      static jmethodID value_;
    };

    class StateChangeEventType
    {
      public:
      static void fromJObject (StandardEvent::StateChangeEventType& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const StandardEvent::StateChangeEventType& in, JNIEnv* env);

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
      StateChangeEventType();
      ~StateChangeEventType();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[5];
    };

    class StateChangeEventTypeHolder
    {
      public:
      static void fromJObject (StandardEvent::StateChangeEventType& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const StandardEvent::StateChangeEventType& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const StandardEvent::StateChangeEventType& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      StateChangeEventTypeHolder();
      ~StateChangeEventTypeHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class AbnormalComponentTerminationEventType
    {
      public:
      static void fromJObject (StandardEvent::AbnormalComponentTerminationEventType& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const StandardEvent::AbnormalComponentTerminationEventType& in, JNIEnv* env);

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
      AbnormalComponentTerminationEventType();
      ~AbnormalComponentTerminationEventType();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[3];
    };

    class AbnormalComponentTerminationEventTypeHolder
    {
      public:
      static void fromJObject (StandardEvent::AbnormalComponentTerminationEventType& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const StandardEvent::AbnormalComponentTerminationEventType& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const StandardEvent::AbnormalComponentTerminationEventType& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      AbnormalComponentTerminationEventTypeHolder();
      ~AbnormalComponentTerminationEventTypeHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class SourceCategoryType
    {
      public:
      static void fromJObject (StandardEvent::SourceCategoryType& out, JNIEnv* env, jobject obj);
      static jobject toJObject (StandardEvent::SourceCategoryType in, JNIEnv* env);

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
      SourceCategoryType();
      ~SourceCategoryType();
      static jclass cls_;
      static jmethodID from_int_;
      static jmethodID value_;
    };

    class DomainManagementObjectRemovedEventType
    {
      public:
      static void fromJObject (StandardEvent::DomainManagementObjectRemovedEventType& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const StandardEvent::DomainManagementObjectRemovedEventType& in, JNIEnv* env);

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
      DomainManagementObjectRemovedEventType();
      ~DomainManagementObjectRemovedEventType();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[4];
    };

    class DomainManagementObjectRemovedEventTypeHolder
    {
      public:
      static void fromJObject (StandardEvent::DomainManagementObjectRemovedEventType& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const StandardEvent::DomainManagementObjectRemovedEventType& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const StandardEvent::DomainManagementObjectRemovedEventType& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      DomainManagementObjectRemovedEventTypeHolder();
      ~DomainManagementObjectRemovedEventTypeHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class DomainManagementObjectAddedEventType
    {
      public:
      static void fromJObject (StandardEvent::DomainManagementObjectAddedEventType& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const StandardEvent::DomainManagementObjectAddedEventType& in, JNIEnv* env);

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
      DomainManagementObjectAddedEventType();
      ~DomainManagementObjectAddedEventType();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[5];
    };

    class DomainManagementObjectAddedEventTypeHolder
    {
      public:
      static void fromJObject (StandardEvent::DomainManagementObjectAddedEventType& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const StandardEvent::DomainManagementObjectAddedEventType& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const StandardEvent::DomainManagementObjectAddedEventType& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      DomainManagementObjectAddedEventTypeHolder();
      ~DomainManagementObjectAddedEventTypeHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

  }
}

inline void fromJObject (StandardEvent::StateChangeCategoryType& out, JNIEnv* env, jobject obj)
{
  StandardEvent::jni::StateChangeCategoryType::fromJObject(out, env, obj);
}

inline jobject toJObject (const StandardEvent::StateChangeCategoryType in, JNIEnv* env)
{
  return StandardEvent::jni::StateChangeCategoryType::toJObject(in, env);
}

template<>
inline jclass getJClass<StandardEvent::StateChangeCategoryType> (JNIEnv* env)
{
  return StandardEvent::jni::StateChangeCategoryType::getJClass(env);
}

inline void fromJObject (StandardEvent::StateChangeType& out, JNIEnv* env, jobject obj)
{
  StandardEvent::jni::StateChangeType::fromJObject(out, env, obj);
}

inline jobject toJObject (const StandardEvent::StateChangeType in, JNIEnv* env)
{
  return StandardEvent::jni::StateChangeType::toJObject(in, env);
}

template<>
inline jclass getJClass<StandardEvent::StateChangeType> (JNIEnv* env)
{
  return StandardEvent::jni::StateChangeType::getJClass(env);
}

inline void fromJObject (StandardEvent::StateChangeEventType& out, JNIEnv* env, jobject obj)
{
  StandardEvent::jni::StateChangeEventType::fromJObject(out, env, obj);
}

inline jobject toJObject (const StandardEvent::StateChangeEventType& in, JNIEnv* env)
{
  return StandardEvent::jni::StateChangeEventType::toJObject(in, env);
}

template<>
inline jclass getJClass<StandardEvent::StateChangeEventType> (JNIEnv* env)
{
  return StandardEvent::jni::StateChangeEventType::getJClass(env);
}

inline void fromJObject (StandardEvent::AbnormalComponentTerminationEventType& out, JNIEnv* env, jobject obj)
{
  StandardEvent::jni::AbnormalComponentTerminationEventType::fromJObject(out, env, obj);
}

inline jobject toJObject (const StandardEvent::AbnormalComponentTerminationEventType& in, JNIEnv* env)
{
  return StandardEvent::jni::AbnormalComponentTerminationEventType::toJObject(in, env);
}

template<>
inline jclass getJClass<StandardEvent::AbnormalComponentTerminationEventType> (JNIEnv* env)
{
  return StandardEvent::jni::AbnormalComponentTerminationEventType::getJClass(env);
}

inline void fromJObject (StandardEvent::SourceCategoryType& out, JNIEnv* env, jobject obj)
{
  StandardEvent::jni::SourceCategoryType::fromJObject(out, env, obj);
}

inline jobject toJObject (const StandardEvent::SourceCategoryType in, JNIEnv* env)
{
  return StandardEvent::jni::SourceCategoryType::toJObject(in, env);
}

template<>
inline jclass getJClass<StandardEvent::SourceCategoryType> (JNIEnv* env)
{
  return StandardEvent::jni::SourceCategoryType::getJClass(env);
}

inline void fromJObject (StandardEvent::DomainManagementObjectRemovedEventType& out, JNIEnv* env, jobject obj)
{
  StandardEvent::jni::DomainManagementObjectRemovedEventType::fromJObject(out, env, obj);
}

inline jobject toJObject (const StandardEvent::DomainManagementObjectRemovedEventType& in, JNIEnv* env)
{
  return StandardEvent::jni::DomainManagementObjectRemovedEventType::toJObject(in, env);
}

template<>
inline jclass getJClass<StandardEvent::DomainManagementObjectRemovedEventType> (JNIEnv* env)
{
  return StandardEvent::jni::DomainManagementObjectRemovedEventType::getJClass(env);
}

inline void fromJObject (StandardEvent::DomainManagementObjectAddedEventType& out, JNIEnv* env, jobject obj)
{
  StandardEvent::jni::DomainManagementObjectAddedEventType::fromJObject(out, env, obj);
}

inline jobject toJObject (const StandardEvent::DomainManagementObjectAddedEventType& in, JNIEnv* env)
{
  return StandardEvent::jni::DomainManagementObjectAddedEventType::toJObject(in, env);
}

template<>
inline jclass getJClass<StandardEvent::DomainManagementObjectAddedEventType> (JNIEnv* env)
{
  return StandardEvent::jni::DomainManagementObjectAddedEventType::getJClass(env);
}


#endif // __JNI_STANDARDEVENT_H__
