#ifndef __JNI_PORTTYPES_H__
#define __JNI_PORTTYPES_H__

#include <jni.h>
#include <omnijni/omnijni.h>
#include <ossie/CF/PortTypes.h>

namespace PortTypes {
  namespace jni {
    class BooleanSequence
    {
      public:
      static inline void fromJObject (PortTypes::BooleanSequence& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (PortTypes::BooleanSequence in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class BooleanSequenceHolder
    {
      public:
      static void fromJObject (PortTypes::BooleanSequence& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const PortTypes::BooleanSequence& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const PortTypes::BooleanSequence& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      BooleanSequenceHolder();
      ~BooleanSequenceHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class CharSequence
    {
      public:
      static inline void fromJObject (PortTypes::CharSequence& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (PortTypes::CharSequence in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class CharSequenceHolder
    {
      public:
      static void fromJObject (PortTypes::CharSequence& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const PortTypes::CharSequence& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const PortTypes::CharSequence& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      CharSequenceHolder();
      ~CharSequenceHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class DoubleSequence
    {
      public:
      static inline void fromJObject (PortTypes::DoubleSequence& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (PortTypes::DoubleSequence in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class DoubleSequenceHolder
    {
      public:
      static void fromJObject (PortTypes::DoubleSequence& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const PortTypes::DoubleSequence& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const PortTypes::DoubleSequence& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      DoubleSequenceHolder();
      ~DoubleSequenceHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class LongLongSequence
    {
      public:
      static inline void fromJObject (PortTypes::LongLongSequence& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (PortTypes::LongLongSequence in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class LongLongSequenceHolder
    {
      public:
      static void fromJObject (PortTypes::LongLongSequence& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const PortTypes::LongLongSequence& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const PortTypes::LongLongSequence& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      LongLongSequenceHolder();
      ~LongLongSequenceHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class LongSequence
    {
      public:
      static inline void fromJObject (PortTypes::LongSequence& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (PortTypes::LongSequence in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class LongSequenceHolder
    {
      public:
      static void fromJObject (PortTypes::LongSequence& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const PortTypes::LongSequence& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const PortTypes::LongSequence& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      LongSequenceHolder();
      ~LongSequenceHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class ShortSequence
    {
      public:
      static inline void fromJObject (PortTypes::ShortSequence& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (PortTypes::ShortSequence in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class ShortSequenceHolder
    {
      public:
      static void fromJObject (PortTypes::ShortSequence& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const PortTypes::ShortSequence& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const PortTypes::ShortSequence& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      ShortSequenceHolder();
      ~ShortSequenceHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class UlongLongSequence
    {
      public:
      static inline void fromJObject (PortTypes::UlongLongSequence& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (PortTypes::UlongLongSequence in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class UlongLongSequenceHolder
    {
      public:
      static void fromJObject (PortTypes::UlongLongSequence& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const PortTypes::UlongLongSequence& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const PortTypes::UlongLongSequence& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      UlongLongSequenceHolder();
      ~UlongLongSequenceHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class UlongSequence
    {
      public:
      static inline void fromJObject (PortTypes::UlongSequence& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (PortTypes::UlongSequence in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class UlongSequenceHolder
    {
      public:
      static void fromJObject (PortTypes::UlongSequence& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const PortTypes::UlongSequence& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const PortTypes::UlongSequence& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      UlongSequenceHolder();
      ~UlongSequenceHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class UshortSequence
    {
      public:
      static inline void fromJObject (PortTypes::UshortSequence& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (PortTypes::UshortSequence in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class UshortSequenceHolder
    {
      public:
      static void fromJObject (PortTypes::UshortSequence& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const PortTypes::UshortSequence& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const PortTypes::UshortSequence& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      UshortSequenceHolder();
      ~UshortSequenceHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class FloatSequence
    {
      public:
      static inline void fromJObject (PortTypes::FloatSequence& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (PortTypes::FloatSequence in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class FloatSequenceHolder
    {
      public:
      static void fromJObject (PortTypes::FloatSequence& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const PortTypes::FloatSequence& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const PortTypes::FloatSequence& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      FloatSequenceHolder();
      ~FloatSequenceHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

  }
}

inline void fromJObject (PortTypes::BooleanSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const PortTypes::BooleanSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (PortTypes::CharSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const PortTypes::CharSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (PortTypes::DoubleSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const PortTypes::DoubleSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (PortTypes::LongLongSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const PortTypes::LongLongSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (PortTypes::LongSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const PortTypes::LongSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (PortTypes::ShortSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const PortTypes::ShortSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (PortTypes::UlongLongSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const PortTypes::UlongLongSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (PortTypes::UlongSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const PortTypes::UlongSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (PortTypes::UshortSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const PortTypes::UshortSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (PortTypes::FloatSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const PortTypes::FloatSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}


#endif // __JNI_PORTTYPES_H__
