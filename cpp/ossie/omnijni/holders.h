#ifndef __HOLDERS_H__
#define __HOLDERS_H__

#include <omniORB4/CORBA.h>
#include <jni.h>
#include <omnijni/loader.h>

namespace CORBA {
  namespace jni {
    class BooleanHolder
    {
      public:
      static void fromJObject (CORBA::Boolean& out, JNIEnv* env, jobject obj);
      static jobject toJObject (CORBA::Boolean in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CORBA::Boolean value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      BooleanHolder();
      ~BooleanHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class OctetHolder
    {
      public:
      static void fromJObject (CORBA::Octet& out, JNIEnv* env, jobject obj);
      static jobject toJObject (CORBA::Octet in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CORBA::Octet value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      OctetHolder();
      ~OctetHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class CharHolder
    {
      public:
      static void fromJObject (CORBA::Char& out, JNIEnv* env, jobject obj);
      static jobject toJObject (CORBA::Char in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CORBA::Char value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      CharHolder();
      ~CharHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class ShortHolder
    {
      public:
      static void fromJObject (CORBA::Short& out, JNIEnv* env, jobject obj);
      static jobject toJObject (CORBA::Short in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CORBA::Short value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      ShortHolder();
      ~ShortHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class UShortHolder
    {
      public:
      static void fromJObject (CORBA::UShort& out, JNIEnv* env, jobject obj);
      static jobject toJObject (CORBA::UShort in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CORBA::UShort value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      UShortHolder();
      ~UShortHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class LongHolder
    {
      public:
      static void fromJObject (CORBA::Long& out, JNIEnv* env, jobject obj);
      static jobject toJObject (CORBA::Long in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CORBA::Long value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      LongHolder();
      ~LongHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class ULongHolder
    {
      public:
      static void fromJObject (CORBA::ULong& out, JNIEnv* env, jobject obj);
      static jobject toJObject (CORBA::ULong in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CORBA::ULong value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      ULongHolder();
      ~ULongHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class LongLongHolder
    {
      public:
      static void fromJObject (CORBA::LongLong& out, JNIEnv* env, jobject obj);
      static jobject toJObject (CORBA::LongLong in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CORBA::LongLong value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      LongLongHolder();
      ~LongLongHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class ULongLongHolder
    {
      public:
      static void fromJObject (CORBA::ULongLong& out, JNIEnv* env, jobject obj);
      static jobject toJObject (CORBA::ULongLong in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CORBA::ULongLong value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      ULongLongHolder();
      ~ULongLongHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class FloatHolder
    {
      public:
      static void fromJObject (CORBA::Float& out, JNIEnv* env, jobject obj);
      static jobject toJObject (CORBA::Float in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CORBA::Float value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      FloatHolder();
      ~FloatHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class DoubleHolder
    {
      public:
      static void fromJObject (CORBA::Double& out, JNIEnv* env, jobject obj);
      static jobject toJObject (CORBA::Double in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CORBA::Double value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      DoubleHolder();
      ~DoubleHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class AnyHolder
    {
      public:
      static void fromJObject (CORBA::Any& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CORBA::Any& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CORBA::Any& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      AnyHolder();
      ~AnyHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class StringHolder
    {
      public:
      static void fromJObject (CORBA::String_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (const char* in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const char* value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      StringHolder();
      ~StringHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

  }
}

#endif // __HOLDERS_H__
