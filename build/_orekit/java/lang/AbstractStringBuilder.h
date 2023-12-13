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
        mid_append_eeac46bfc5f19911,
        mid_append_8ac7bbdcf0772301,
        mid_append_08954f20614f99db,
        mid_append_6651db8017a8ea53,
        mid_append_eda3b36379a08278,
        mid_append_dc1ead4f63fabc8d,
        mid_append_ff567bdc3be68f09,
        mid_append_7305a33cb3e778be,
        mid_append_c0ab81aca510f711,
        mid_append_99bead36cc783dc8,
        mid_append_5906a161daedef20,
        mid_append_ea386cc9cae6c17c,
        mid_append_3663a1a487f3dd95,
        mid_appendCodePoint_7305a33cb3e778be,
        mid_capacity_55546ef6a647f39b,
        mid_charAt_f41af25e73e22f74,
        mid_codePointAt_0e7cf35192c3effe,
        mid_codePointBefore_0e7cf35192c3effe,
        mid_codePointCount_92ecd94558bf0c68,
        mid_delete_60790849b0f0e1a8,
        mid_deleteCharAt_7305a33cb3e778be,
        mid_ensureCapacity_44ed599e93e8a30c,
        mid_getChars_cc06cb22124df445,
        mid_indexOf_f0ba70671b70c6e5,
        mid_indexOf_7c969bab81d289ef,
        mid_insert_33fc2f95fbac3d97,
        mid_insert_1d1ac2fd9bef7ed4,
        mid_insert_01cbf6814da1cd55,
        mid_insert_d77df14c68e11d0c,
        mid_insert_6558d544bddc1743,
        mid_insert_d02424327d0fecba,
        mid_insert_60790849b0f0e1a8,
        mid_insert_9746bc0a4b697bb0,
        mid_insert_a84a06cbeb7afbb2,
        mid_insert_e678c6eeb049af0c,
        mid_insert_0d71fee93d9b2c2f,
        mid_insert_a606b35b64d29ff6,
        mid_lastIndexOf_f0ba70671b70c6e5,
        mid_lastIndexOf_7c969bab81d289ef,
        mid_length_55546ef6a647f39b,
        mid_offsetByCodePoints_92ecd94558bf0c68,
        mid_replace_5c2ff25829a959e6,
        mid_reverse_c0b9788e67e64e56,
        mid_setCharAt_563c77446852e53d,
        mid_setLength_44ed599e93e8a30c,
        mid_subSequence_e866f407305d4016,
        mid_substring_2a9bffd3d5397f7c,
        mid_substring_e91e53c42d39aef9,
        mid_toString_1c1fa1e935d6cdcf,
        mid_trimToSize_a1fa5dae97ea5ed2,
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
