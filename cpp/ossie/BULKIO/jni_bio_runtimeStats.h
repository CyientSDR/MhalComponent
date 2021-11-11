#ifndef __JNI_BIO_RUNTIMESTATS_H__
#define __JNI_BIO_RUNTIMESTATS_H__

#include <jni.h>
#include <omnijni/omnijni.h>
#include <BULKIO/bio_runtimeStats.h>
#include <ossie/CF/jni_QueryablePort.h>

namespace BULKIO {
  namespace jni {
    class PortUsageType
    {
      public:
      static void fromJObject (BULKIO::PortUsageType& out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::PortUsageType in, JNIEnv* env);

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
      PortUsageType();
      ~PortUsageType();
      static jclass cls_;
      static jmethodID from_int_;
      static jmethodID value_;
    };

    class PortStatistics
    {
      public:
      static void fromJObject (BULKIO::PortStatistics& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const BULKIO::PortStatistics& in, JNIEnv* env);

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
      PortStatistics();
      ~PortStatistics();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[8];
    };

    class PortStatisticsHolder
    {
      public:
      static void fromJObject (BULKIO::PortStatistics& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const BULKIO::PortStatistics& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const BULKIO::PortStatistics& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      PortStatisticsHolder();
      ~PortStatisticsHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class ProvidesPortStatisticsProviderPOA : public virtual omnijni::Servant, public virtual POA_BULKIO::ProvidesPortStatisticsProvider
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      BULKIO::PortUsageType state ();
      BULKIO::PortStatistics* statistics ();

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

    class ProvidesPortStatisticsProvider
    {
      public:
      static void fromJObject (BULKIO::ProvidesPortStatisticsProvider_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::ProvidesPortStatisticsProvider_ptr in, JNIEnv* env);

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
      ProvidesPortStatisticsProvider();
      ~ProvidesPortStatisticsProvider();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class ProvidesPortStatisticsProviderHolder
    {
      public:
      static void fromJObject (BULKIO::ProvidesPortStatisticsProvider_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::ProvidesPortStatisticsProvider_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, BULKIO::ProvidesPortStatisticsProvider_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      ProvidesPortStatisticsProviderHolder();
      ~ProvidesPortStatisticsProviderHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class UsesPortStatistics
    {
      public:
      static void fromJObject (BULKIO::UsesPortStatistics& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const BULKIO::UsesPortStatistics& in, JNIEnv* env);

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
      UsesPortStatistics();
      ~UsesPortStatistics();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[2];
    };

    class UsesPortStatisticsHolder
    {
      public:
      static void fromJObject (BULKIO::UsesPortStatistics& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const BULKIO::UsesPortStatistics& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const BULKIO::UsesPortStatistics& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      UsesPortStatisticsHolder();
      ~UsesPortStatisticsHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class UsesPortStatisticsSequence
    {
      public:
      static inline void fromJObject (BULKIO::UsesPortStatisticsSequence& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (BULKIO::UsesPortStatisticsSequence in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class UsesPortStatisticsSequenceHolder
    {
      public:
      static void fromJObject (BULKIO::UsesPortStatisticsSequence& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const BULKIO::UsesPortStatisticsSequence& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const BULKIO::UsesPortStatisticsSequence& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      UsesPortStatisticsSequenceHolder();
      ~UsesPortStatisticsSequenceHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class UsesPortStatisticsProviderPOA : public virtual omnijni::Servant, public virtual POA_BULKIO::UsesPortStatisticsProvider, public virtual ExtendedCF::jni::QueryablePortPOA
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      BULKIO::UsesPortStatisticsSequence* statistics ();

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

    class UsesPortStatisticsProvider
    {
      public:
      static void fromJObject (BULKIO::UsesPortStatisticsProvider_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::UsesPortStatisticsProvider_ptr in, JNIEnv* env);

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
      UsesPortStatisticsProvider();
      ~UsesPortStatisticsProvider();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class UsesPortStatisticsProviderHolder
    {
      public:
      static void fromJObject (BULKIO::UsesPortStatisticsProvider_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::UsesPortStatisticsProvider_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, BULKIO::UsesPortStatisticsProvider_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      UsesPortStatisticsProviderHolder();
      ~UsesPortStatisticsProviderHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

  }
}

inline void fromJObject (BULKIO::PortUsageType& out, JNIEnv* env, jobject obj)
{
  BULKIO::jni::PortUsageType::fromJObject(out, env, obj);
}

inline jobject toJObject (const BULKIO::PortUsageType in, JNIEnv* env)
{
  return BULKIO::jni::PortUsageType::toJObject(in, env);
}

template<>
inline jclass getJClass<BULKIO::PortUsageType> (JNIEnv* env)
{
  return BULKIO::jni::PortUsageType::getJClass(env);
}

inline void fromJObject (BULKIO::PortStatistics& out, JNIEnv* env, jobject obj)
{
  BULKIO::jni::PortStatistics::fromJObject(out, env, obj);
}

inline jobject toJObject (const BULKIO::PortStatistics& in, JNIEnv* env)
{
  return BULKIO::jni::PortStatistics::toJObject(in, env);
}

template<>
inline jclass getJClass<BULKIO::PortStatistics> (JNIEnv* env)
{
  return BULKIO::jni::PortStatistics::getJClass(env);
}

inline void fromJObject (BULKIO::ProvidesPortStatisticsProvider_out out, JNIEnv* env, jobject obj)
{
  BULKIO::jni::ProvidesPortStatisticsProvider::fromJObject(out, env, obj);
}

inline jobject toJObject (const BULKIO::ProvidesPortStatisticsProvider_ptr in, JNIEnv* env)
{
  return BULKIO::jni::ProvidesPortStatisticsProvider::toJObject(in, env);
}

template<>
inline jclass getJClass<BULKIO::ProvidesPortStatisticsProviderRef> (JNIEnv* env)
{
  return BULKIO::jni::ProvidesPortStatisticsProvider::getJClass(env);
}

inline void fromJObject (BULKIO::UsesPortStatistics& out, JNIEnv* env, jobject obj)
{
  BULKIO::jni::UsesPortStatistics::fromJObject(out, env, obj);
}

inline jobject toJObject (const BULKIO::UsesPortStatistics& in, JNIEnv* env)
{
  return BULKIO::jni::UsesPortStatistics::toJObject(in, env);
}

template<>
inline jclass getJClass<BULKIO::UsesPortStatistics> (JNIEnv* env)
{
  return BULKIO::jni::UsesPortStatistics::getJClass(env);
}

inline void fromJObject (BULKIO::UsesPortStatisticsSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const BULKIO::UsesPortStatisticsSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (BULKIO::UsesPortStatisticsProvider_out out, JNIEnv* env, jobject obj)
{
  BULKIO::jni::UsesPortStatisticsProvider::fromJObject(out, env, obj);
}

inline jobject toJObject (const BULKIO::UsesPortStatisticsProvider_ptr in, JNIEnv* env)
{
  return BULKIO::jni::UsesPortStatisticsProvider::toJObject(in, env);
}

template<>
inline jclass getJClass<BULKIO::UsesPortStatisticsProviderRef> (JNIEnv* env)
{
  return BULKIO::jni::UsesPortStatisticsProvider::getJClass(env);
}


#endif // __JNI_BIO_RUNTIMESTATS_H__
