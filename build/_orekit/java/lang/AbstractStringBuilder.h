#ifndef java_lang_AbstractStringBuilder_H
#define java_lang_AbstractStringBuilder_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class CharSequence;
    class StringBuffer;
    class Appendable;
    class AbstractStringBuilder;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class AbstractStringBuilder : public ::java::lang::Object {
     public:
      enum {
        mid_append_789199c921fb81ae,
        mid_append_023c4ab037999251,
        mid_append_50d484150b26fc68,
        mid_append_cda713969d64138b,
        mid_append_c646c13db396d9d9,
        mid_append_211393865aff5fc1,
        mid_append_c010ce00dea1d397,
        mid_append_935ed557695c97f3,
        mid_append_4e65da57e456c46a,
        mid_append_ba6e275d17c81b83,
        mid_append_00b916e4abf025fc,
        mid_append_c8d567c9c7a32c85,
        mid_append_b80e8c96e830f1cd,
        mid_appendCodePoint_935ed557695c97f3,
        mid_capacity_570ce0828f81a2c1,
        mid_charAt_9d4c2604195fbadb,
        mid_codePointAt_2235cd056f5a882b,
        mid_codePointBefore_2235cd056f5a882b,
        mid_codePointCount_819f91eddf220c5b,
        mid_delete_889a471a4c4e2398,
        mid_deleteCharAt_935ed557695c97f3,
        mid_ensureCapacity_99803b0791f320ff,
        mid_getChars_805ac8fcb83c07e9,
        mid_indexOf_02f02486e9727d8f,
        mid_indexOf_01c41545a950bc7c,
        mid_insert_c04bc992b8fcc397,
        mid_insert_6c2b2d17dd92942a,
        mid_insert_65dcea3ce7c3bfa9,
        mid_insert_214fb2d3b0740a38,
        mid_insert_dd88a29e78a19bb1,
        mid_insert_59ebd321938b9bb5,
        mid_insert_889a471a4c4e2398,
        mid_insert_b4a7eb16fc72d9aa,
        mid_insert_9003b6ba4b9ae110,
        mid_insert_e0e36a95c33d83df,
        mid_insert_edc96446c10df860,
        mid_insert_1e6f94b6d66a7421,
        mid_lastIndexOf_02f02486e9727d8f,
        mid_lastIndexOf_01c41545a950bc7c,
        mid_length_570ce0828f81a2c1,
        mid_offsetByCodePoints_819f91eddf220c5b,
        mid_replace_ff93337fa985cbda,
        mid_reverse_af06493e34075193,
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

      explicit AbstractStringBuilder(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      AbstractStringBuilder(const AbstractStringBuilder& obj) : ::java::lang::Object(obj) {}

      AbstractStringBuilder append(const ::java::lang::StringBuffer &) const;
      AbstractStringBuilder append(const JArray< jchar > &) const;
      AbstractStringBuilder append(const ::java::lang::String &) const;
      AbstractStringBuilder append(jboolean) const;
      AbstractStringBuilder append(jchar) const;
      AbstractStringBuilder append(jdouble) const;
      AbstractStringBuilder append(jfloat) const;
      AbstractStringBuilder append(jint) const;
      AbstractStringBuilder append(const ::java::lang::CharSequence &) const;
      AbstractStringBuilder append(const ::java::lang::Object &) const;
      AbstractStringBuilder append(jlong) const;
      AbstractStringBuilder append(const JArray< jchar > &, jint, jint) const;
      AbstractStringBuilder append(const ::java::lang::CharSequence &, jint, jint) const;
      AbstractStringBuilder appendCodePoint(jint) const;
      jint capacity() const;
      jchar charAt(jint) const;
      jint codePointAt(jint) const;
      jint codePointBefore(jint) const;
      jint codePointCount(jint, jint) const;
      AbstractStringBuilder delete$(jint, jint) const;
      AbstractStringBuilder deleteCharAt(jint) const;
      void ensureCapacity(jint) const;
      void getChars(jint, jint, const JArray< jchar > &, jint) const;
      jint indexOf(const ::java::lang::String &) const;
      jint indexOf(const ::java::lang::String &, jint) const;
      AbstractStringBuilder insert(jint, const JArray< jchar > &) const;
      AbstractStringBuilder insert(jint, const ::java::lang::String &) const;
      AbstractStringBuilder insert(jint, jboolean) const;
      AbstractStringBuilder insert(jint, jchar) const;
      AbstractStringBuilder insert(jint, jdouble) const;
      AbstractStringBuilder insert(jint, jfloat) const;
      AbstractStringBuilder insert(jint, jint) const;
      AbstractStringBuilder insert(jint, const ::java::lang::CharSequence &) const;
      AbstractStringBuilder insert(jint, const ::java::lang::Object &) const;
      AbstractStringBuilder insert(jint, jlong) const;
      AbstractStringBuilder insert(jint, const JArray< jchar > &, jint, jint) const;
      AbstractStringBuilder insert(jint, const ::java::lang::CharSequence &, jint, jint) const;
      jint lastIndexOf(const ::java::lang::String &) const;
      jint lastIndexOf(const ::java::lang::String &, jint) const;
      jint length() const;
      jint offsetByCodePoints(jint, jint) const;
      AbstractStringBuilder replace(jint, jint, const ::java::lang::String &) const;
      AbstractStringBuilder reverse() const;
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
    extern PyType_Def PY_TYPE_DEF(AbstractStringBuilder);
    extern PyTypeObject *PY_TYPE(AbstractStringBuilder);

    class t_AbstractStringBuilder {
    public:
      PyObject_HEAD
      AbstractStringBuilder object;
      static PyObject *wrap_Object(const AbstractStringBuilder&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
