#ifndef __JNI_BIO_UPDATESRI_H__
#define __JNI_BIO_UPDATESRI_H__

#include <jni.h>
#include <omnijni/omnijni.h>
#include <BULKIO/bio_updateSRI.h>

namespace BULKIO {
  namespace jni {
    class updateSRIPOA : public virtual omnijni::Servant, public virtual POA_BULKIO::updateSRI
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      BULKIO::StreamSRISequence* activeSRIs ();
      void pushSRI (const BULKIO::StreamSRI& H);

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

    class updateSRI
    {
      public:
      static void fromJObject (BULKIO::updateSRI_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::updateSRI_ptr in, JNIEnv* env);

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
      updateSRI();
      ~updateSRI();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class updateSRIHolder
    {
      public:
      static void fromJObject (BULKIO::updateSRI_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::updateSRI_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, BULKIO::updateSRI_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      updateSRIHolder();
      ~updateSRIHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

  }
}

inline void fromJObject (BULKIO::updateSRI_out out, JNIEnv* env, jobject obj)
{
  BULKIO::jni::updateSRI::fromJObject(out, env, obj);
}

inline jobject toJObject (const BULKIO::updateSRI_ptr in, JNIEnv* env)
{
  return BULKIO::jni::updateSRI::toJObject(in, env);
}

template<>
inline jclass getJClass<BULKIO::updateSRIRef> (JNIEnv* env)
{
  return BULKIO::jni::updateSRI::getJClass(env);
}


#endif // __JNI_BIO_UPDATESRI_H__
