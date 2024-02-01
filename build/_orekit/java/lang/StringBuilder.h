#ifndef java_lang_StringBuilder_H
#define java_lang_StringBuilder_H

#include "java/lang/AbstractStringBuilder.h"

namespace java {
  namespace lang {
    class StringBuilder;
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

    class StringBuilder : public ::java::lang::AbstractStringBuilder {
     public:
      enum {
        mid_init$_ff7cb6c242604316,
        mid_init$_105e1eadb709d9ac,
        mid_init$_8fd427ab23829bf5,
        mid_init$_b81bfb528ebad57a,
        mid_append_0c761b3f007c21e7,
        mid_append_eb791e28837cce88,
        mid_append_b75430db76a3dad4,
        mid_append_27b7815b260a153f,
        mid_append_270b1e5eb06c89f0,
        mid_append_3889f5ea35d142da,
        mid_append_ac8f6d43231c5228,
        mid_append_206e407e207f1721,
        mid_append_89bb5dfe1e995ae3,
        mid_append_deb522cddb0e3b43,
        mid_append_9cb76ec21cbb0222,
        mid_append_e71f87a0e9add56f,
        mid_append_ebe3468e985a743d,
        mid_appendCodePoint_206e407e207f1721,
        mid_compareTo_e2b23be63ff75330,
        mid_delete_0dd106bd695d21d7,
        mid_deleteCharAt_206e407e207f1721,
        mid_indexOf_84fe1f8fbbcb0268,
        mid_indexOf_36da4b2d3bc5085f,
        mid_insert_e4c7ac385522d820,
        mid_insert_f6489dada9aa9cf8,
        mid_insert_9e9dfceaf7d53d56,
        mid_insert_f9e5df203a2f9328,
        mid_insert_3cded527d96361c1,
        mid_insert_8436321bc7143b59,
        mid_insert_0dd106bd695d21d7,
        mid_insert_eb8e797de1d8fab0,
        mid_insert_6d8b2982d8c58cd2,
        mid_insert_26bee8309f52e8a2,
        mid_insert_b2ac9a95c2df40d7,
        mid_insert_3770e95f04a64467,
        mid_lastIndexOf_84fe1f8fbbcb0268,
        mid_lastIndexOf_36da4b2d3bc5085f,
        mid_replace_18966afd4f6f73da,
        mid_reverse_edef93a791ce9c05,
        mid_toString_d2c8eb4129821f0e,
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
