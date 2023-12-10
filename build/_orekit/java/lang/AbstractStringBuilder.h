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
        mid_append_a7f9e24d54f82e7c,
        mid_append_e07b6958d316ef26,
        mid_append_094038b24f05c210,
        mid_append_52409847a4351914,
        mid_append_a163f5b4ff8c1475,
        mid_append_05a87123a30e1204,
        mid_append_5062e3be717b6b28,
        mid_append_0b4b027b59141751,
        mid_append_c75f8a74e560bfd4,
        mid_append_e88f92449c45bc8a,
        mid_append_e95a4479e5e16041,
        mid_append_9febeb146f58279d,
        mid_append_7dbec4c35feb59b6,
        mid_appendCodePoint_0b4b027b59141751,
        mid_capacity_f2f64475e4580546,
        mid_charAt_52047e692b58eb87,
        mid_codePointAt_38565d58479aa24a,
        mid_codePointBefore_38565d58479aa24a,
        mid_codePointCount_d9790ac9eecfe931,
        mid_delete_cfa0a453cf433343,
        mid_deleteCharAt_0b4b027b59141751,
        mid_ensureCapacity_0a2a1ac2721c0336,
        mid_getChars_6a4fae412727af3a,
        mid_indexOf_5d6fce34d596f8f0,
        mid_indexOf_4918d8aef83f928e,
        mid_insert_55c09eeabccc6cb5,
        mid_insert_b8002054b59d7524,
        mid_insert_6b4ad20a80a21354,
        mid_insert_21c9928a7558695a,
        mid_insert_3c0bcc27a258ae58,
        mid_insert_66ea3ff032e56a4c,
        mid_insert_cfa0a453cf433343,
        mid_insert_b105c4fd379b16d3,
        mid_insert_f44ebefe2198fb84,
        mid_insert_cc4e92aea9565e65,
        mid_insert_6599dfc97deb717c,
        mid_insert_7f17da23221acefe,
        mid_lastIndexOf_5d6fce34d596f8f0,
        mid_lastIndexOf_4918d8aef83f928e,
        mid_length_f2f64475e4580546,
        mid_offsetByCodePoints_d9790ac9eecfe931,
        mid_replace_496bb4de9b7f94f7,
        mid_reverse_abde0dd7f2414337,
        mid_setCharAt_897ba55cae2e4418,
        mid_setLength_0a2a1ac2721c0336,
        mid_subSequence_d0ccff93b0cd9262,
        mid_substring_90cbcc0b7a5ddae9,
        mid_substring_a1a389fa4c946a7a,
        mid_toString_0090f7797e403f43,
        mid_trimToSize_7ae3461a92a43152,
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
