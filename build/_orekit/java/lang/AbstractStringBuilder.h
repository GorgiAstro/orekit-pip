#ifndef java_lang_AbstractStringBuilder_H
#define java_lang_AbstractStringBuilder_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class StringBuffer;
    class CharSequence;
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
        mid_append_8ce5b97b03671e04,
        mid_append_4f3e4c687632b3b1,
        mid_append_d12ee5a47026a6c0,
        mid_append_23c6d23458c3e098,
        mid_append_f98a32ff637b4879,
        mid_append_aafd223a2f867236,
        mid_append_9074be2309e33cad,
        mid_append_03874bf5ea9bbbf6,
        mid_append_67bf5ec4fd826cad,
        mid_append_db5721482488f530,
        mid_append_e2ca16355ce213f1,
        mid_append_0bff3dc9397af00b,
        mid_append_bd2737514828488f,
        mid_appendCodePoint_03874bf5ea9bbbf6,
        mid_capacity_d6ab429752e7c267,
        mid_charAt_80723b5d4f0fdfa2,
        mid_codePointAt_d938fc64e8c6df2d,
        mid_codePointBefore_d938fc64e8c6df2d,
        mid_codePointCount_91b9e1e34b2235d5,
        mid_delete_b81670d10f98786b,
        mid_deleteCharAt_03874bf5ea9bbbf6,
        mid_ensureCapacity_8fd427ab23829bf5,
        mid_getChars_58054e664fd79305,
        mid_indexOf_84fe1f8fbbcb0268,
        mid_indexOf_36da4b2d3bc5085f,
        mid_insert_bfec7548c25557fc,
        mid_insert_0c5ff0819faaf979,
        mid_insert_ea8ab3af43bea4d8,
        mid_insert_4d1dbc48a152ac59,
        mid_insert_9955ea9a894d21d4,
        mid_insert_92c5ed6fa9245033,
        mid_insert_b81670d10f98786b,
        mid_insert_c1759b722bf488c8,
        mid_insert_ac047cd895cc2283,
        mid_insert_f040af584a9bec42,
        mid_insert_099204001724bc39,
        mid_insert_5bbfca80aed43587,
        mid_lastIndexOf_84fe1f8fbbcb0268,
        mid_lastIndexOf_36da4b2d3bc5085f,
        mid_length_d6ab429752e7c267,
        mid_offsetByCodePoints_91b9e1e34b2235d5,
        mid_replace_1cfd722d6a2f4e89,
        mid_reverse_18fd5c3d0d9616dd,
        mid_setCharAt_2768c52161be0306,
        mid_setLength_8fd427ab23829bf5,
        mid_subSequence_b87db528df453723,
        mid_substring_c81987d6b0e2977a,
        mid_substring_43e3765e4d074a90,
        mid_toString_d2c8eb4129821f0e,
        mid_trimToSize_ff7cb6c242604316,
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
