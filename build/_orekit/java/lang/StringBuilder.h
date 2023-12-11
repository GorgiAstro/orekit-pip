#ifndef java_lang_StringBuilder_H
#define java_lang_StringBuilder_H

#include "java/lang/AbstractStringBuilder.h"

namespace java {
  namespace lang {
    class StringBuilder;
    class CharSequence;
    class Class;
    class StringBuffer;
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
        mid_init$_0640e6acf969ed28,
        mid_init$_f5ffdf29129ef90a,
        mid_init$_a3da1a935cb37f7b,
        mid_init$_01ce980d49cb2b81,
        mid_append_4eb629a678a5438a,
        mid_append_67d31a10d1b66370,
        mid_append_30a02fb062a53140,
        mid_append_b6592747f23042e1,
        mid_append_78d3e2bb2470d52d,
        mid_append_d40b9c8372ccb999,
        mid_append_8762ac7bc07ce051,
        mid_append_04be543eea8e509a,
        mid_append_811f9a8f8f04c39b,
        mid_append_70165461a3c2750f,
        mid_append_fe25195e2f981967,
        mid_append_9b30b0538463bf3d,
        mid_append_5b56b9c4be3377cd,
        mid_appendCodePoint_04be543eea8e509a,
        mid_compareTo_8f6a446c021f2909,
        mid_delete_07f4d5e9eafd22d8,
        mid_deleteCharAt_04be543eea8e509a,
        mid_indexOf_a6602ba493f77974,
        mid_indexOf_f5fd9af3faa747d5,
        mid_insert_c20a6ee729f88f0f,
        mid_insert_88267049b2e6211c,
        mid_insert_d575e604fc7eba28,
        mid_insert_e498cd55f6c4096a,
        mid_insert_9cd603b217a3b8d4,
        mid_insert_348c227d1e03dc9c,
        mid_insert_07f4d5e9eafd22d8,
        mid_insert_9d88889b6a25a3b9,
        mid_insert_63aa9eb5dd471294,
        mid_insert_971841535d646fd5,
        mid_insert_7ebb45d7a6dc031e,
        mid_insert_bdd302e6c0e10dc9,
        mid_lastIndexOf_a6602ba493f77974,
        mid_lastIndexOf_f5fd9af3faa747d5,
        mid_replace_a09ebe03c050a311,
        mid_reverse_42f76bd4b2671584,
        mid_toString_3cffd47377eca18a,
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
