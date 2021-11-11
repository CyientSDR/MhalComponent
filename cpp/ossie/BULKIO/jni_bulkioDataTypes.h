#ifndef __JNI_BULKIODATATYPES_H__
#define __JNI_BULKIODATATYPES_H__

#include <jni.h>
#include <omnijni/omnijni.h>
#include <BULKIO/bulkioDataTypes.h>

namespace BULKIO {
  namespace jni {
    class PrecisionUTCTime
    {
      public:
      static void fromJObject (BULKIO::PrecisionUTCTime& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const BULKIO::PrecisionUTCTime& in, JNIEnv* env);

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
      PrecisionUTCTime();
      ~PrecisionUTCTime();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[5];
    };

    class PrecisionUTCTimeHolder
    {
      public:
      static void fromJObject (BULKIO::PrecisionUTCTime& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const BULKIO::PrecisionUTCTime& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const BULKIO::PrecisionUTCTime& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      PrecisionUTCTimeHolder();
      ~PrecisionUTCTimeHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class StreamSRI
    {
      public:
      static void fromJObject (BULKIO::StreamSRI& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const BULKIO::StreamSRI& in, JNIEnv* env);

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
      StreamSRI();
      ~StreamSRI();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[12];
    };

    class StreamSRIHolder
    {
      public:
      static void fromJObject (BULKIO::StreamSRI& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const BULKIO::StreamSRI& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const BULKIO::StreamSRI& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      StreamSRIHolder();
      ~StreamSRIHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class StringSequence
    {
      public:
      static inline void fromJObject (BULKIO::StringSequence& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (BULKIO::StringSequence in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class StringSequenceHolder
    {
      public:
      static void fromJObject (BULKIO::StringSequence& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const BULKIO::StringSequence& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const BULKIO::StringSequence& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      StringSequenceHolder();
      ~StringSequenceHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class StreamSRISequence
    {
      public:
      static inline void fromJObject (BULKIO::StreamSRISequence& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (BULKIO::StreamSRISequence in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class StreamSRISequenceHolder
    {
      public:
      static void fromJObject (BULKIO::StreamSRISequence& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const BULKIO::StreamSRISequence& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const BULKIO::StreamSRISequence& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      StreamSRISequenceHolder();
      ~StreamSRISequenceHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

  }
}

inline void fromJObject (BULKIO::PrecisionUTCTime& out, JNIEnv* env, jobject obj)
{
  BULKIO::jni::PrecisionUTCTime::fromJObject(out, env, obj);
}

inline jobject toJObject (const BULKIO::PrecisionUTCTime& in, JNIEnv* env)
{
  return BULKIO::jni::PrecisionUTCTime::toJObject(in, env);
}

template<>
inline jclass getJClass<BULKIO::PrecisionUTCTime> (JNIEnv* env)
{
  return BULKIO::jni::PrecisionUTCTime::getJClass(env);
}

inline void fromJObject (BULKIO::StreamSRI& out, JNIEnv* env, jobject obj)
{
  BULKIO::jni::StreamSRI::fromJObject(out, env, obj);
}

inline jobject toJObject (const BULKIO::StreamSRI& in, JNIEnv* env)
{
  return BULKIO::jni::StreamSRI::toJObject(in, env);
}

template<>
inline jclass getJClass<BULKIO::StreamSRI> (JNIEnv* env)
{
  return BULKIO::jni::StreamSRI::getJClass(env);
}

inline void fromJObject (BULKIO::StringSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const BULKIO::StringSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (BULKIO::StreamSRISequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const BULKIO::StreamSRISequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}


#endif // __JNI_BULKIODATATYPES_H__
