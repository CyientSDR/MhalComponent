#ifndef __JNI_DATATYPE_H__
#define __JNI_DATATYPE_H__

#include <jni.h>
#include <omnijni/omnijni.h>
#include <ossie/CF/DataType.h>

namespace CF {
  namespace jni {
    class DataType
    {
      public:
      static void fromJObject (CF::DataType& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::DataType& in, JNIEnv* env);

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
      DataType();
      ~DataType();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[2];
    };

    class DataTypeHolder
    {
      public:
      static void fromJObject (CF::DataType& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::DataType& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::DataType& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      DataTypeHolder();
      ~DataTypeHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class Properties
    {
      public:
      static inline void fromJObject (CF::Properties& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (CF::Properties in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class PropertiesHolder
    {
      public:
      static void fromJObject (CF::Properties& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::Properties& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::Properties& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      PropertiesHolder();
      ~PropertiesHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class OctetSequence
    {
      public:
      static inline void fromJObject (CF::OctetSequence& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (CF::OctetSequence in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class OctetSequenceHolder
    {
      public:
      static void fromJObject (CF::OctetSequence& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::OctetSequence& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::OctetSequence& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      OctetSequenceHolder();
      ~OctetSequenceHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class StringSequence
    {
      public:
      static inline void fromJObject (CF::StringSequence& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (CF::StringSequence in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class StringSequenceHolder
    {
      public:
      static void fromJObject (CF::StringSequence& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::StringSequence& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::StringSequence& value);
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

    class UTCTime
    {
      public:
      static void fromJObject (CF::UTCTime& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::UTCTime& in, JNIEnv* env);

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
      UTCTime();
      ~UTCTime();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[3];
    };

    class UTCTimeHolder
    {
      public:
      static void fromJObject (CF::UTCTime& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::UTCTime& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::UTCTime& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      UTCTimeHolder();
      ~UTCTimeHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class UTCTimeSequence
    {
      public:
      static inline void fromJObject (CF::UTCTimeSequence& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (CF::UTCTimeSequence in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class UTCTimeSequenceHolder
    {
      public:
      static void fromJObject (CF::UTCTimeSequence& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::UTCTimeSequence& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::UTCTimeSequence& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      UTCTimeSequenceHolder();
      ~UTCTimeSequenceHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

  }
}

inline void fromJObject (CF::DataType& out, JNIEnv* env, jobject obj)
{
  CF::jni::DataType::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::DataType& in, JNIEnv* env)
{
  return CF::jni::DataType::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::DataType> (JNIEnv* env)
{
  return CF::jni::DataType::getJClass(env);
}

inline void fromJObject (CF::Properties& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::Properties& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CF::OctetSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::OctetSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CF::StringSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::StringSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CF::UTCTime& out, JNIEnv* env, jobject obj)
{
  CF::jni::UTCTime::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::UTCTime& in, JNIEnv* env)
{
  return CF::jni::UTCTime::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::UTCTime> (JNIEnv* env)
{
  return CF::jni::UTCTime::getJClass(env);
}

inline void fromJObject (CF::UTCTimeSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::UTCTimeSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}


#endif // __JNI_DATATYPE_H__
