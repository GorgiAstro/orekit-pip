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
        mid_init$_a1fa5dae97ea5ed2,
        mid_init$_734b91ac30d5f9b4,
        mid_init$_44ed599e93e8a30c,
        mid_init$_902d69c788edaf18,
        mid_append_fa3378c84c73c389,
        mid_append_6ca3f4f4f896dca7,
        mid_append_42f96e3bc49c61ac,
        mid_append_826f6e0ca1f4ffed,
        mid_append_1e5da03d09e26c49,
        mid_append_72fb30885e89c135,
        mid_append_44f616479c34a342,
        mid_append_5dfcd56c557a6531,
        mid_append_ea749a7520ec3726,
        mid_append_8d95941741691e18,
        mid_append_69cca44123d02dab,
        mid_append_b447a3eb13d2d19b,
        mid_append_3107e5564546aed8,
        mid_appendCodePoint_5dfcd56c557a6531,
        mid_capacity_55546ef6a647f39b,
        mid_charAt_f41af25e73e22f74,
        mid_codePointAt_0e7cf35192c3effe,
        mid_codePointBefore_0e7cf35192c3effe,
        mid_codePointCount_92ecd94558bf0c68,
        mid_compareTo_91c511f9684a490f,
        mid_delete_218365242bbef6b3,
        mid_deleteCharAt_5dfcd56c557a6531,
        mid_ensureCapacity_44ed599e93e8a30c,
        mid_getChars_cc06cb22124df445,
        mid_indexOf_f0ba70671b70c6e5,
        mid_indexOf_7c969bab81d289ef,
        mid_insert_b86e44840f8e76d1,
        mid_insert_ecff9b94e6c87832,
        mid_insert_37006c27c67a6d26,
        mid_insert_6ded3e0ae9f2e0e2,
        mid_insert_bfda01dc7b136f17,
        mid_insert_81771ec591e22854,
        mid_insert_218365242bbef6b3,
        mid_insert_f0254728b08c3986,
        mid_insert_049a66b753ac35eb,
        mid_insert_b33d0f8053813292,
        mid_insert_7fe89215d4be2797,
        mid_insert_9c20be3a115a7e19,
        mid_lastIndexOf_f0ba70671b70c6e5,
        mid_lastIndexOf_7c969bab81d289ef,
        mid_length_55546ef6a647f39b,
        mid_offsetByCodePoints_92ecd94558bf0c68,
        mid_replace_dbe9640be2cd8bda,
        mid_reverse_9ddc431ab9a0d12b,
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
