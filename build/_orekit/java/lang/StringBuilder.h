#ifndef java_lang_StringBuilder_H
#define java_lang_StringBuilder_H

#include "java/lang/AbstractStringBuilder.h"

namespace java {
  namespace lang {
    class StringBuilder;
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

    class StringBuilder : public ::java::lang::AbstractStringBuilder {
     public:
      enum {
        mid_init$_0fa09c18fee449d5,
        mid_init$_d0bc48d5b00dc40c,
        mid_init$_99803b0791f320ff,
        mid_init$_5e688138ffe60231,
        mid_append_9a9fc1d2cacd1642,
        mid_append_e12dcf6200c02bd1,
        mid_append_b522ded3bced2266,
        mid_append_72008f50aac6d333,
        mid_append_e2a1a728a151ea6a,
        mid_append_efb77b1debb6dec0,
        mid_append_2810637a96e2ae4c,
        mid_append_71ddcaede8baf208,
        mid_append_012c4ea332e1d6a4,
        mid_append_aa8fb57032cd1438,
        mid_append_67e569b57185f328,
        mid_append_dd3884ec73b6afb5,
        mid_append_b2e3c866f26fc95a,
        mid_appendCodePoint_71ddcaede8baf208,
        mid_compareTo_ee737e20be30dc5d,
        mid_delete_75228ce3be4f9cb1,
        mid_deleteCharAt_71ddcaede8baf208,
        mid_indexOf_02f02486e9727d8f,
        mid_indexOf_01c41545a950bc7c,
        mid_insert_511e5a671a76e38c,
        mid_insert_fa1705ddf339ac90,
        mid_insert_8eee6ed1e1eee660,
        mid_insert_47443ceab765fd37,
        mid_insert_7c7e0a4fe85b0b44,
        mid_insert_6f51f8df789463b7,
        mid_insert_75228ce3be4f9cb1,
        mid_insert_2e2aad39af136c0e,
        mid_insert_35b96895dd2fe144,
        mid_insert_569431f514deddd9,
        mid_insert_c5b18066db7da846,
        mid_insert_dd1b63c6ae54e393,
        mid_lastIndexOf_02f02486e9727d8f,
        mid_lastIndexOf_01c41545a950bc7c,
        mid_replace_0989af9060b298e8,
        mid_reverse_0bf1b6be8e0d7c9e,
        mid_toString_11b109bd155ca898,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit StringBuilder(jobject obj) : ::java::lang::AbstractStringBuilder(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      StringBuilder(const StringBuilder& obj) : ::java::lang::AbstractStringBuilder(obj) {}

      StringBuilder();
      StringBuilder(const ::java::lang::String &);
      StringBuilder(jint);
      StringBuilder(const ::java::lang::CharSequence &);

      StringBuilder append(const ::java::lang::StringBuffer &) const;
      StringBuilder append(const JArray< jchar > &) const;
      StringBuilder append(const ::java::lang::String &) const;
      StringBuilder append(jboolean) const;
      StringBuilder append(jchar) const;
      StringBuilder append(jdouble) const;
      StringBuilder append(jfloat) const;
      StringBuilder append(jint) const;
      StringBuilder append(const ::java::lang::CharSequence &) const;
      StringBuilder append(const ::java::lang::Object &) const;
      StringBuilder append(jlong) const;
      StringBuilder append(const JArray< jchar > &, jint, jint) const;
      StringBuilder append(const ::java::lang::CharSequence &, jint, jint) const;
      StringBuilder appendCodePoint(jint) const;
      jint compareTo(const StringBuilder &) const;
      StringBuilder delete$(jint, jint) const;
      StringBuilder deleteCharAt(jint) const;
      jint indexOf(const ::java::lang::String &) const;
      jint indexOf(const ::java::lang::String &, jint) const;
      StringBuilder insert(jint, const JArray< jchar > &) const;
      StringBuilder insert(jint, const ::java::lang::String &) const;
      StringBuilder insert(jint, jboolean) const;
      StringBuilder insert(jint, jchar) const;
      StringBuilder insert(jint, jdouble) const;
      StringBuilder insert(jint, jfloat) const;
      StringBuilder insert(jint, jint) const;
      StringBuilder insert(jint, const ::java::lang::CharSequence &) const;
      StringBuilder insert(jint, const ::java::lang::Object &) const;
      StringBuilder insert(jint, jlong) const;
      StringBuilder insert(jint, const JArray< jchar > &, jint, jint) const;
      StringBuilder insert(jint, const ::java::lang::CharSequence &, jint, jint) const;
      jint lastIndexOf(const ::java::lang::String &) const;
      jint lastIndexOf(const ::java::lang::String &, jint) const;
      StringBuilder replace(jint, jint, const ::java::lang::String &) const;
      StringBuilder reverse() const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(StringBuilder);
    extern PyTypeObject *PY_TYPE(StringBuilder);

    class t_StringBuilder {
    public:
      PyObject_HEAD
      StringBuilder object;
      static PyObject *wrap_Object(const StringBuilder&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
