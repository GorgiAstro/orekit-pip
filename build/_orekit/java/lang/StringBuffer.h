#ifndef java_lang_StringBuffer_H
#define java_lang_StringBuffer_H

#include "java/lang/AbstractStringBuilder.h"

namespace java {
  namespace lang {
    class CharSequence;
    class StringBuffer;
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
        mid_init$_0640e6acf969ed28,
        mid_init$_f5ffdf29129ef90a,
        mid_init$_a3da1a935cb37f7b,
        mid_init$_01ce980d49cb2b81,
        mid_append_884cc2a03611cb8e,
        mid_append_8ae777a43862da8d,
        mid_append_2f0b0e3bc024adda,
        mid_append_9eea0c4c917f2124,
        mid_append_cb2315bcbf608d35,
        mid_append_39b17f1c7d7004eb,
        mid_append_7bfa49bdcf0ccc78,
        mid_append_4df8ab8c549ce9bf,
        mid_append_e3ac1af7ce0393a9,
        mid_append_3c0302142c625b21,
        mid_append_d6d93e2cc52ed0b8,
        mid_append_f0e791f399dadfc6,
        mid_append_86fea91c752fca9f,
        mid_appendCodePoint_4df8ab8c549ce9bf,
        mid_capacity_412668abc8d889e9,
        mid_charAt_4affd00329d5d4cf,
        mid_codePointAt_0092017e99012694,
        mid_codePointBefore_0092017e99012694,
        mid_codePointCount_5625cf3db98dadc1,
        mid_compareTo_656f80e312790297,
        mid_delete_ba962b872ad2ee19,
        mid_deleteCharAt_4df8ab8c549ce9bf,
        mid_ensureCapacity_a3da1a935cb37f7b,
        mid_getChars_def23ac70d649d11,
        mid_indexOf_a6602ba493f77974,
        mid_indexOf_f5fd9af3faa747d5,
        mid_insert_8d4819c2e2817add,
        mid_insert_4cb21c33cddb24ac,
        mid_insert_ce40bb490e8b82ba,
        mid_insert_4a5c55d5d82c503f,
        mid_insert_0665758adca21f6b,
        mid_insert_9757033019944ea7,
        mid_insert_ba962b872ad2ee19,
        mid_insert_a2526e36d1b3af89,
        mid_insert_28685d51c7a292e5,
        mid_insert_907387537ae85b1c,
        mid_insert_b32211a1f9aba15c,
        mid_insert_2f6be358e3e0e1bf,
        mid_lastIndexOf_a6602ba493f77974,
        mid_lastIndexOf_f5fd9af3faa747d5,
        mid_length_412668abc8d889e9,
        mid_offsetByCodePoints_5625cf3db98dadc1,
        mid_replace_4080ae73b5538c67,
        mid_reverse_94bc674fec0d7bbe,
        mid_setCharAt_e8edb89802967796,
        mid_setLength_a3da1a935cb37f7b,
        mid_subSequence_581d824833fd6c72,
        mid_substring_0f10d4a5e06f61c0,
        mid_substring_637f0334ff6ee92d,
        mid_toString_3cffd47377eca18a,
        mid_trimToSize_0640e6acf969ed28,
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
