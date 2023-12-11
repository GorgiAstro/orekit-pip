#ifndef java_lang_AbstractStringBuilder_H
#define java_lang_AbstractStringBuilder_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class CharSequence;
    class Appendable;
    class AbstractStringBuilder;
    class Class;
    class StringBuffer;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class AbstractStringBuilder : public ::java::lang::Object {
     public:
      enum {
        mid_append_f6082975e180feeb,
        mid_append_b6ed8a5cb0a2770d,
        mid_append_082c7f6bb830efdc,
        mid_append_a7cced13fa82bd5d,
        mid_append_71345092dac66fc6,
        mid_append_8747da8391566d0d,
        mid_append_8b973b79711b9293,
        mid_append_04fbb7fbc0c29a33,
        mid_append_4770ffb3deac32bb,
        mid_append_5b0f824771e71e37,
        mid_append_4a647b089cf46e9b,
        mid_append_ffa2235235481015,
        mid_append_3fcb810e736e3f72,
        mid_appendCodePoint_04fbb7fbc0c29a33,
        mid_capacity_412668abc8d889e9,
        mid_charAt_4affd00329d5d4cf,
        mid_codePointAt_0092017e99012694,
        mid_codePointBefore_0092017e99012694,
        mid_codePointCount_5625cf3db98dadc1,
        mid_delete_2a59179949309dc1,
        mid_deleteCharAt_04fbb7fbc0c29a33,
        mid_ensureCapacity_a3da1a935cb37f7b,
        mid_getChars_def23ac70d649d11,
        mid_indexOf_a6602ba493f77974,
        mid_indexOf_f5fd9af3faa747d5,
        mid_insert_90063871a1416a32,
        mid_insert_b5dc80095e63574e,
        mid_insert_7f01e17795c15b49,
        mid_insert_7a3e34ef662e274a,
        mid_insert_67ed86606ca743bf,
        mid_insert_8423a3f832409310,
        mid_insert_2a59179949309dc1,
        mid_insert_6c5e46b13308829d,
        mid_insert_62ef126560196c10,
        mid_insert_492bac5354193d3d,
        mid_insert_3c9e9a75e8d5e058,
        mid_insert_4c64de8b65936738,
        mid_lastIndexOf_a6602ba493f77974,
        mid_lastIndexOf_f5fd9af3faa747d5,
        mid_length_412668abc8d889e9,
        mid_offsetByCodePoints_5625cf3db98dadc1,
        mid_replace_07eb9e870078998b,
        mid_reverse_4300524965bcf09f,
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
