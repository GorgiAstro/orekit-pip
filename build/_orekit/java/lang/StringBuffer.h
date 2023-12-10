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
        mid_init$_0fa09c18fee449d5,
        mid_init$_d0bc48d5b00dc40c,
        mid_init$_99803b0791f320ff,
        mid_init$_5e688138ffe60231,
        mid_append_d63e618e54305c25,
        mid_append_e2a8e75a9f64ce9a,
        mid_append_1ee142df065b7c14,
        mid_append_501cfe7a6ccfbca3,
        mid_append_9b9290318e5b4e64,
        mid_append_5ebd6fc6f4a101a2,
        mid_append_5c397d14cfa3bcc9,
        mid_append_36febeaff75ddf89,
        mid_append_3f11f705825c413c,
        mid_append_e23e6047e9427d79,
        mid_append_843e68f8c95bcf54,
        mid_append_f62f12fd5a8811e5,
        mid_append_bd15fc762c9b47e1,
        mid_appendCodePoint_36febeaff75ddf89,
        mid_capacity_570ce0828f81a2c1,
        mid_charAt_9d4c2604195fbadb,
        mid_codePointAt_2235cd056f5a882b,
        mid_codePointBefore_2235cd056f5a882b,
        mid_codePointCount_819f91eddf220c5b,
        mid_compareTo_6ee9c1a1075782b3,
        mid_delete_19966ea78884e925,
        mid_deleteCharAt_36febeaff75ddf89,
        mid_ensureCapacity_99803b0791f320ff,
        mid_getChars_805ac8fcb83c07e9,
        mid_indexOf_02f02486e9727d8f,
        mid_indexOf_01c41545a950bc7c,
        mid_insert_c9eacee037d85dfc,
        mid_insert_d650023aff65c33a,
        mid_insert_647577cad4bb29d1,
        mid_insert_6d6bcce9bb290dad,
        mid_insert_31db0f4b6b6b12ac,
        mid_insert_ace13ba1e44c37e9,
        mid_insert_19966ea78884e925,
        mid_insert_4afd9a264a11798e,
        mid_insert_ce87f9c56e57e3f2,
        mid_insert_6eabe3559ca3d641,
        mid_insert_8c1acdc965e2f05f,
        mid_insert_1df060702cf535b4,
        mid_lastIndexOf_02f02486e9727d8f,
        mid_lastIndexOf_01c41545a950bc7c,
        mid_length_570ce0828f81a2c1,
        mid_offsetByCodePoints_819f91eddf220c5b,
        mid_replace_3d833d50d0046758,
        mid_reverse_8ebc622be17217f1,
        mid_setCharAt_8c560582d522cb03,
        mid_setLength_99803b0791f320ff,
        mid_subSequence_be25fa7011a1ec8f,
        mid_substring_8cc8a10236476f23,
        mid_substring_5d51f1f447446760,
        mid_toString_11b109bd155ca898,
        mid_trimToSize_0fa09c18fee449d5,
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
