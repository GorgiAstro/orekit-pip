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
        mid_init$_a1fa5dae97ea5ed2,
        mid_init$_734b91ac30d5f9b4,
        mid_init$_44ed599e93e8a30c,
        mid_init$_902d69c788edaf18,
        mid_append_eaf3dbbe8784abe8,
        mid_append_60666db53c5b6ff6,
        mid_append_d7f33ece59807efe,
        mid_append_1a984036c7a418a8,
        mid_append_e1ef0a90caab12b1,
        mid_append_4136421e4010964e,
        mid_append_7f35b1ce88919449,
        mid_append_3131a63bcbb46a0e,
        mid_append_f3de7c767fb9db3e,
        mid_append_7fb954e26d2c2ba8,
        mid_append_c9be8ccc27b6d3d0,
        mid_append_85cc82ac5ff3bf6c,
        mid_append_c90be53f3f034b2f,
        mid_appendCodePoint_3131a63bcbb46a0e,
        mid_compareTo_7eaeb3f2ac2a5ee7,
        mid_delete_57f14c54eea385e8,
        mid_deleteCharAt_3131a63bcbb46a0e,
        mid_indexOf_f0ba70671b70c6e5,
        mid_indexOf_7c969bab81d289ef,
        mid_insert_e491aa6ca9aaa9ec,
        mid_insert_27ec6ebf960d2b36,
        mid_insert_03438f7a5e3f3482,
        mid_insert_3f3466f78dbd2832,
        mid_insert_2976292770885946,
        mid_insert_6e2b08c50ff3f4e8,
        mid_insert_57f14c54eea385e8,
        mid_insert_a9c2d1fe30557a4c,
        mid_insert_f7710146c89f9ad4,
        mid_insert_be480f02a6f4d23e,
        mid_insert_80f63834055f1167,
        mid_insert_32cd181c7712e29d,
        mid_lastIndexOf_f0ba70671b70c6e5,
        mid_lastIndexOf_7c969bab81d289ef,
        mid_replace_5fd2d8c00b76997f,
        mid_reverse_0a26bdc413493a71,
        mid_toString_1c1fa1e935d6cdcf,
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
