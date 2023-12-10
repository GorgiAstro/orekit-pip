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
        mid_init$_7ae3461a92a43152,
        mid_init$_e939c6558ae8d313,
        mid_init$_0a2a1ac2721c0336,
        mid_init$_d77f10dac029c69d,
        mid_append_fa8f5d48ee424651,
        mid_append_534b4e41ec880cae,
        mid_append_5f19be2f6db7abbd,
        mid_append_6663da7e0639d104,
        mid_append_a960a594334810c2,
        mid_append_843cd84ad22988e0,
        mid_append_0d57976ebc59b319,
        mid_append_f085109d198d622a,
        mid_append_082793cbe2d9d1e6,
        mid_append_af8f283a3389dd42,
        mid_append_673412bef2cd320f,
        mid_append_bc65d94c4c7afd09,
        mid_append_c6323851041862ca,
        mid_appendCodePoint_f085109d198d622a,
        mid_compareTo_68bdd967160764f2,
        mid_delete_e57dda636d270552,
        mid_deleteCharAt_f085109d198d622a,
        mid_indexOf_5d6fce34d596f8f0,
        mid_indexOf_4918d8aef83f928e,
        mid_insert_d6b8a895ab694d5f,
        mid_insert_e0372c521d30712a,
        mid_insert_3592d69ed34d3e5d,
        mid_insert_3246f6607b301170,
        mid_insert_8c3668c492bf154f,
        mid_insert_2fcd9b97ada86ce7,
        mid_insert_e57dda636d270552,
        mid_insert_934e3e07ce24a594,
        mid_insert_6fe224b70cafcd20,
        mid_insert_78cb38d22903561e,
        mid_insert_c7742f1c316c4f5e,
        mid_insert_d07c8e2cadd18181,
        mid_lastIndexOf_5d6fce34d596f8f0,
        mid_lastIndexOf_4918d8aef83f928e,
        mid_replace_08c4dc5657b17769,
        mid_reverse_bc6e901998de2662,
        mid_toString_0090f7797e403f43,
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
