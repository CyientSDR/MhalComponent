#ifndef __JNI_AGGREGATEDEVICES_H__
#define __JNI_AGGREGATEDEVICES_H__

#include <jni.h>
#include <omnijni/omnijni.h>
#include <ossie/CF/AggregateDevices.h>
#include <ossie/CF/jni_cf.h>

namespace CF {
  namespace jni {
    class AggregatePlainDevicePOA : public virtual omnijni::Servant, public virtual POA_CF::AggregatePlainDevice, public virtual CF::jni::DevicePOA, public virtual CF::jni::AggregateDevicePOA
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

    class AggregatePlainDevice
    {
      public:
      static void fromJObject (CF::AggregatePlainDevice_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::AggregatePlainDevice_ptr in, JNIEnv* env);

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
      AggregatePlainDevice();
      ~AggregatePlainDevice();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class AggregatePlainDeviceHolder
    {
      public:
      static void fromJObject (CF::AggregatePlainDevice_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::AggregatePlainDevice_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::AggregatePlainDevice_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      AggregatePlainDeviceHolder();
      ~AggregatePlainDeviceHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class AggregateLoadableDevicePOA : public virtual omnijni::Servant, public virtual POA_CF::AggregateLoadableDevice, public virtual CF::jni::LoadableDevicePOA, public virtual CF::jni::AggregateDevicePOA
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

    class AggregateLoadableDevice
    {
      public:
      static void fromJObject (CF::AggregateLoadableDevice_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::AggregateLoadableDevice_ptr in, JNIEnv* env);

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
      AggregateLoadableDevice();
      ~AggregateLoadableDevice();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class AggregateLoadableDeviceHolder
    {
      public:
      static void fromJObject (CF::AggregateLoadableDevice_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::AggregateLoadableDevice_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::AggregateLoadableDevice_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      AggregateLoadableDeviceHolder();
      ~AggregateLoadableDeviceHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class AggregateExecutableDevicePOA : public virtual omnijni::Servant, public virtual POA_CF::AggregateExecutableDevice, public virtual CF::jni::ExecutableDevicePOA, public virtual CF::jni::AggregateDevicePOA
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

    class AggregateExecutableDevice
    {
      public:
      static void fromJObject (CF::AggregateExecutableDevice_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::AggregateExecutableDevice_ptr in, JNIEnv* env);

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
      AggregateExecutableDevice();
      ~AggregateExecutableDevice();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class AggregateExecutableDeviceHolder
    {
      public:
      static void fromJObject (CF::AggregateExecutableDevice_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::AggregateExecutableDevice_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::AggregateExecutableDevice_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      AggregateExecutableDeviceHolder();
      ~AggregateExecutableDeviceHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

  }
}

inline void fromJObject (CF::AggregatePlainDevice_out out, JNIEnv* env, jobject obj)
{
  CF::jni::AggregatePlainDevice::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::AggregatePlainDevice_ptr in, JNIEnv* env)
{
  return CF::jni::AggregatePlainDevice::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::AggregatePlainDeviceRef> (JNIEnv* env)
{
  return CF::jni::AggregatePlainDevice::getJClass(env);
}

inline void fromJObject (CF::AggregateLoadableDevice_out out, JNIEnv* env, jobject obj)
{
  CF::jni::AggregateLoadableDevice::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::AggregateLoadableDevice_ptr in, JNIEnv* env)
{
  return CF::jni::AggregateLoadableDevice::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::AggregateLoadableDeviceRef> (JNIEnv* env)
{
  return CF::jni::AggregateLoadableDevice::getJClass(env);
}

inline void fromJObject (CF::AggregateExecutableDevice_out out, JNIEnv* env, jobject obj)
{
  CF::jni::AggregateExecutableDevice::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::AggregateExecutableDevice_ptr in, JNIEnv* env)
{
  return CF::jni::AggregateExecutableDevice::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::AggregateExecutableDeviceRef> (JNIEnv* env)
{
  return CF::jni::AggregateExecutableDevice::getJClass(env);
}


#endif // __JNI_AGGREGATEDEVICES_H__
