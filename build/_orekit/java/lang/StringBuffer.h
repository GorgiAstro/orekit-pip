#ifndef java_lang_StringBuffer_H
#define java_lang_StringBuffer_H

#include "java/lang/AbstractStringBuilder.h"

namespace java {
  namespace lang {
    class StringBuffer;
    class CharSequence;
    class Class;
    class Object;
    class String;
    class Comparable;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class StringBuffer : public ::java::lang::AbstractStringBuilder {
     public:
      enum {
        mid_init$_7ae3461a92a43152,
        mid_init$_e939c6558ae8d313,
        mid_init$_0a2a1ac2721c0336,
        mid_init$_d77f10dac029c69d,
        mid_append_57c70f71f2367c30,
        mid_append_1cddcd4cde4f0228,
        mid_append_648d5173f9653196,
        mid_append_92ed7440a231bd8e,
        mid_append_6709bae0613860a1,
        mid_append_2dbfa38bc898b70b,
        mid_append_35e96278c06ac341,
        mid_append_36c92fb928d8ac3d,
        mid_append_6785dcf8b9fc8b93,
        mid_append_615df75cc02d182e,
        mid_append_66899a876bc84d80,
        mid_append_bf45c8407c15aea6,
        mid_append_0a8a7e1784a5d0de,
        mid_appendCodePoint_36c92fb928d8ac3d,
        mid_capacity_f2f64475e4580546,
        mid_charAt_52047e692b58eb87,
        mid_codePointAt_38565d58479aa24a,
        mid_codePointBefore_38565d58479aa24a,
        mid_codePointCount_d9790ac9eecfe931,
        mid_compareTo_b89723a79bf3d461,
        mid_delete_86aaf45d47b94be5,
        mid_deleteCharAt_36c92fb928d8ac3d,
        mid_ensureCapacity_0a2a1ac2721c0336,
        mid_getChars_6a4fae412727af3a,
        mid_indexOf_5d6fce34d596f8f0,
        mid_indexOf_4918d8aef83f928e,
        mid_insert_7a711016174c8c92,
        mid_insert_85ef637eed308a73,
        mid_insert_21c73412c0f0304a,
        mid_insert_7141cc402a547b1d,
        mid_insert_c0698c06976c6df0,
        mid_insert_7300e96d123991a9,
        mid_insert_86aaf45d47b94be5,
        mid_insert_b5df3623094760b7,
        mid_insert_84b53a0d98d40b65,
        mid_insert_22f0afa5aaffec92,
        mid_insert_d40746eaa44e7d0d,
        mid_insert_296378f8d412950b,
        mid_lastIndexOf_5d6fce34d596f8f0,
        mid_lastIndexOf_4918d8aef83f928e,
        mid_length_f2f64475e4580546,
        mid_offsetByCodePoints_d9790ac9eecfe931,
        mid_replace_cde24e08eb8fd5d9,
        mid_reverse_d50cbf6320007b5d,
        mid_setCharAt_897ba55cae2e4418,
        mid_setLength_0a2a1ac2721c0336,
        mid_subSequence_d0ccff93b0cd9262,
        mid_substring_90cbcc0b7a5ddae9,
        mid_substring_a1a389fa4c946a7a,
        mid_toString_0090f7797e403f43,
        mid_trimToSize_7ae3461a92a43152,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit StringBuffer(jobject obj) : ::java::lang::AbstractStringBuilder(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      StringBuffer(const StringBuffer& obj) : ::java::lang::AbstractStringBuilder(obj) {}

      StringBuffer();
      StringBuffer(const ::java::lang::String &);
      StringBuffer(jint);
      StringBuffer(const ::java::lang::CharSequence &);

      StringBuffer append(const StringBuffer &) const;
      StringBuffer append(const JArray< jchar > &) const;
      StringBuffer append(const ::java::lang::String &) const;
      StringBuffer append(jboolean) const;
      StringBuffer append(jchar) const;
      StringBuffer append(jdouble) const;
      StringBuffer append(jfloat) const;
      StringBuffer append(jint) const;
      StringBuffer append(const ::java::lang::CharSequence &) const;
      StringBuffer append(const ::java::lang::Object &) const;
      StringBuffer append(jlong) const;
      StringBuffer append(const JArray< jchar > &, jint, jint) const;
      StringBuffer append(const ::java::lang::CharSequence &, jint, jint) const;
      StringBuffer appendCodePoint(jint) const;
      jint capacity() const;
      jchar charAt(jint) const;
      jint codePointAt(jint) const;
      jint codePointBefore(jint) const;
      jint codePointCount(jint, jint) const;
      jint compareTo(const StringBuffer &) const;
      StringBuffer delete$(jint, jint) const;
      StringBuffer deleteCharAt(jint) const;
      void ensureCapacity(jint) const;
      void getChars(jint, jint, const JArray< jchar > &, jint) const;
      jint indexOf(const ::java::lang::String &) const;
      jint indexOf(const ::java::lang::String &, jint) const;
      StringBuffer insert(jint, const JArray< jchar > &) const;
      StringBuffer insert(jint, const ::java::lang::String &) const;
      StringBuffer insert(jint, jboolean) const;
      StringBuffer insert(jint, jchar) const;
      StringBuffer insert(jint, jdouble) const;
      StringBuffer insert(jint, jfloat) const;
      StringBuffer insert(jint, jint) const;
      StringBuffer insert(jint, const ::java::lang::CharSequence &) const;
      StringBuffer insert(jint, const ::java::lang::Object &) const;
      StringBuffer insert(jint, jlong) const;
      StringBuffer insert(jint, const JArray< jchar > &, jint, jint) const;
      StringBuffer insert(jint, const ::java::lang::CharSequence &, jint, jint) const;
      jint lastIndexOf(const ::java::lang::String &) const;
      jint lastIndexOf(const ::java::lang::String &, jint) const;
      jint length() const;
      jint offsetByCodePoints(jint, jint) const;
      StringBuffer replace(jint, jint, const ::java::lang::String &) const;
      StringBuffer reverse() const;
      void setCharAt(jint, jchar) const;
      void setLength(jint) const;
      ::java::lang::CharSequence subSequence(jint, jint) const;
      ::java::lang::String substring(jint) const;
      ::java::lang::String substring(jint, jint) const;
      ::java::lang::String toString() const;
      void trimToSize() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(StringBuffer);
    extern PyTypeObject *PY_TYPE(StringBuffer);

    class t_StringBuffer {
    public:
      PyObject_HEAD
      StringBuffer object;
      static PyObject *wrap_Object(const StringBuffer&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
