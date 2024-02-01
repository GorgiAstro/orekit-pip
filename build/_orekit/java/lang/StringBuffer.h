#ifndef java_lang_StringBuffer_H
#define java_lang_StringBuffer_H

#include "java/lang/AbstractStringBuilder.h"

namespace java {
  namespace lang {
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

    class StringBuffer : public ::java::lang::AbstractStringBuilder {
     public:
      enum {
        mid_init$_ff7cb6c242604316,
        mid_init$_105e1eadb709d9ac,
        mid_init$_8fd427ab23829bf5,
        mid_init$_b81bfb528ebad57a,
        mid_append_60c78eaed7f43823,
        mid_append_31c41d09a7ea99fa,
        mid_append_ed1730020567e64b,
        mid_append_3c12cc20a7e0c9ea,
        mid_append_876a6f9f943e9a14,
        mid_append_e140ccb2146a2c77,
        mid_append_ed0b3f8d6c31c024,
        mid_append_10ef5de1d62708bc,
        mid_append_cbc3364f099331a3,
        mid_append_8970d593c3656003,
        mid_append_25dd54b120065f77,
        mid_append_590a93b593f1f442,
        mid_append_8ceea8bfcde8c18d,
        mid_appendCodePoint_10ef5de1d62708bc,
        mid_capacity_d6ab429752e7c267,
        mid_charAt_80723b5d4f0fdfa2,
        mid_codePointAt_d938fc64e8c6df2d,
        mid_codePointBefore_d938fc64e8c6df2d,
        mid_codePointCount_91b9e1e34b2235d5,
        mid_compareTo_784eae7abd0959fa,
        mid_delete_0c570a0b511c51e8,
        mid_deleteCharAt_10ef5de1d62708bc,
        mid_ensureCapacity_8fd427ab23829bf5,
        mid_getChars_58054e664fd79305,
        mid_indexOf_84fe1f8fbbcb0268,
        mid_indexOf_36da4b2d3bc5085f,
        mid_insert_d4ec284f93191e28,
        mid_insert_33fd3fbd551e1b26,
        mid_insert_a3e3eb30c2154b50,
        mid_insert_33bf2983adaf1dc2,
        mid_insert_977c128c195ab5fa,
        mid_insert_1c0ff125d719562c,
        mid_insert_0c570a0b511c51e8,
        mid_insert_bafd4d793786699f,
        mid_insert_6011c2f77755ce72,
        mid_insert_2e4552e0a1b72aba,
        mid_insert_41a884c10db78a4d,
        mid_insert_750c8059b29e93ff,
        mid_lastIndexOf_84fe1f8fbbcb0268,
        mid_lastIndexOf_36da4b2d3bc5085f,
        mid_length_d6ab429752e7c267,
        mid_offsetByCodePoints_91b9e1e34b2235d5,
        mid_replace_0817eecda047e3ef,
        mid_reverse_eb1ec7cf84c46af7,
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
