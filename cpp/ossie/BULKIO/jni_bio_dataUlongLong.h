#ifndef __JNI_BIO_DATAULONGLONG_H__
#define __JNI_BIO_DATAULONGLONG_H__

#include <jni.h>
#include <omnijni/omnijni.h>
#include <BULKIO/bio_dataUlongLong.h>
#include <ossie/BULKIO/jni_bio_runtimeStats.h>
#include <ossie/BULKIO/jni_bio_updateSRI.h>

namespace BULKIO {
  namespace jni {
    class dataUlongLongPOA : public virtual omnijni::Servant, public virtual POA_BULKIO::dataUlongLong, public virtual BULKIO::jni::ProvidesPortStatisticsProviderPOA, public virtual BULKIO::jni::updateSRIPOA
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      void pushPacket (const PortTypes::UlongLongSequence& data, const BULKIO::PrecisionUTCTime& T, CORBA::Boolean EOS, const char* streamID);

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

    class dataUlongLong
    {
      public:
      static void fromJObject (BULKIO::dataUlongLong_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::dataUlongLong_ptr in, JNIEnv* env);

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
      dataUlongLong();
      ~dataUlongLong();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class dataUlongLongHolder
    {
      public:
      static void fromJObject (BULKIO::dataUlongLong_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::dataUlongLong_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, BULKIO::dataUlongLong_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      dataUlongLongHolder();
      ~dataUlongLongHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

  }
}

inline void fromJObject (BULKIO::dataUlongLong_out out, JNIEnv* env, jobject obj)
{
  BULKIO::jni::dataUlongLong::fromJObject(out, env, obj);
}

inline jobject toJObject (const BULKIO::dataUlongLong_ptr in, JNIEnv* env)
{
  return BULKIO::jni::dataUlongLong::toJObject(in, env);
}

template<>
inline jclass getJClass<BULKIO::dataUlongLongRef> (JNIEnv* env)
{
  return BULKIO::jni::dataUlongLong::getJClass(env);
}


#endif // __JNI_BIO_DATAULONGLONG_H__
