#ifndef java_lang_String_H
#define java_lang_String_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class StringBuilder;
    class Iterable;
    class CharSequence;
    class StringBuffer;
    class Class;
    class String;
    class Comparable;
  }
  namespace io {
    class UnsupportedEncodingException;
    class Serializable;
  }
  namespace util {
    class Locale;
    namespace stream {
      class Stream;
    }
    class Comparator;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class String : public ::java::lang::Object {
     public:
      enum {
        mid_init$_0fa09c18fee449d5,
        mid_init$_c736565a86f3e46c,
        mid_init$_fb2243bad23af5ae,
        mid_init$_20012b3010a39c05,
        mid_init$_3534e8e092c162a5,
        mid_init$_bf0e85c813575f9f,
        mid_init$_96122b01d902d997,
        mid_init$_d7af9aedcdd3845b,
        mid_init$_44aecef33af91018,
        mid_init$_503826ec0042272d,
        mid_init$_bc959a9eb70e99ec,
        mid_init$_a04357e2a7d2670c,
        mid_charAt_9d4c2604195fbadb,
        mid_codePointAt_2235cd056f5a882b,
        mid_codePointBefore_2235cd056f5a882b,
        mid_codePointCount_819f91eddf220c5b,
        mid_compareTo_02f02486e9727d8f,
        mid_compareToIgnoreCase_02f02486e9727d8f,
        mid_concat_92807efd57acb082,
        mid_contains_fbd87e4016dad4aa,
        mid_contentEquals_6ce03af34b269366,
        mid_contentEquals_fbd87e4016dad4aa,
        mid_copyValueOf_1ecedce87d38e8f2,
        mid_copyValueOf_ee201a4067d63b32,
        mid_endsWith_7edad2c2f64f4d68,
        mid_equals_65c7d273e80d497a,
        mid_equalsIgnoreCase_7edad2c2f64f4d68,
        mid_format_f5b4dd623dba97e9,
        mid_format_9466e64decd6a405,
        mid_getBytes_d1c0cd497c1897cd,
        mid_getBytes_155563b72e02774f,
        mid_getBytes_70bc49679ed117f2,
        mid_getChars_805ac8fcb83c07e9,
        mid_hashCode_570ce0828f81a2c1,
        mid_indexOf_02f02486e9727d8f,
        mid_indexOf_2235cd056f5a882b,
        mid_indexOf_01c41545a950bc7c,
        mid_indexOf_819f91eddf220c5b,
        mid_intern_11b109bd155ca898,
        mid_isBlank_b108b35ef48e27bd,
        mid_isEmpty_b108b35ef48e27bd,
        mid_join_84b31266508c9c49,
        mid_join_8644ab475918f376,
        mid_lastIndexOf_02f02486e9727d8f,
        mid_lastIndexOf_2235cd056f5a882b,
        mid_lastIndexOf_01c41545a950bc7c,
        mid_lastIndexOf_819f91eddf220c5b,
        mid_length_570ce0828f81a2c1,
        mid_lines_20f6d2b462aaef4b,
        mid_matches_7edad2c2f64f4d68,
        mid_offsetByCodePoints_819f91eddf220c5b,
        mid_regionMatches_9f0940db23f45f2a,
        mid_regionMatches_79a54a9d8a991b7c,
        mid_repeat_8cc8a10236476f23,
        mid_replace_a6d86b276213a2d5,
        mid_replace_446f566a5a1a40d2,
        mid_replaceAll_d3f6016a3bf93dcd,
        mid_replaceFirst_d3f6016a3bf93dcd,
        mid_split_f96e27ad15cba282,
        mid_split_2e41084c19bacd70,
        mid_startsWith_7edad2c2f64f4d68,
        mid_startsWith_0594bb83145ef6ac,
        mid_strip_11b109bd155ca898,
        mid_stripLeading_11b109bd155ca898,
        mid_stripTrailing_11b109bd155ca898,
        mid_subSequence_be25fa7011a1ec8f,
        mid_substring_8cc8a10236476f23,
        mid_substring_5d51f1f447446760,
        mid_toCharArray_1c41284d788a6957,
        mid_toLowerCase_11b109bd155ca898,
        mid_toLowerCase_3cd873bfb132c4fd,
        mid_toString_11b109bd155ca898,
        mid_toUpperCase_11b109bd155ca898,
        mid_toUpperCase_3cd873bfb132c4fd,
        mid_trim_11b109bd155ca898,
        mid_valueOf_1ecedce87d38e8f2,
        mid_valueOf_924df160f5ad43c5,
        mid_valueOf_3371cef512ec7a0c,
        mid_valueOf_e8f51f84167aafbd,
        mid_valueOf_fd11166b57af1364,
        mid_valueOf_8cc8a10236476f23,
        mid_valueOf_e816b890c4273bbd,
        mid_valueOf_b42814811762ffb5,
        mid_valueOf_ee201a4067d63b32,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit String(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      String(const String& obj) : ::java::lang::Object(obj) {}

      static ::java::util::Comparator *CASE_INSENSITIVE_ORDER;

      String();
      String(const ::java::lang::StringBuffer &);
      String(const ::java::lang::StringBuilder &);
      String(const JArray< jbyte > &);
      String(const JArray< jchar > &);
      String(const JArray< jbyte > &, const String &);
      String(const JArray< jbyte > &, jint);
      String(const JArray< jbyte > &, jint, jint);
      String(const JArray< jchar > &, jint, jint);
      String(const JArray< jint > &, jint, jint);
      String(const JArray< jbyte > &, jint, jint, const String &);
      String(const JArray< jbyte > &, jint, jint, jint);

      jchar charAt(jint) const;
      jint codePointAt(jint) const;
      jint codePointBefore(jint) const;
      jint codePointCount(jint, jint) const;
      jint compareTo(const String &) const;
      jint compareToIgnoreCase(const String &) const;
      String concat(const String &) const;
      jboolean contains(const ::java::lang::CharSequence &) const;
      jboolean contentEquals(const ::java::lang::StringBuffer &) const;
      jboolean contentEquals(const ::java::lang::CharSequence &) const;
      static String copyValueOf(const JArray< jchar > &);
      static String copyValueOf(const JArray< jchar > &, jint, jint);
      jboolean endsWith(const String &) const;
      jboolean equals(const ::java::lang::Object &) const;
      jboolean equalsIgnoreCase(const String &) const;
      static String format(const String &, const JArray< ::java::lang::Object > &);
      static String format(const ::java::util::Locale &, const String &, const JArray< ::java::lang::Object > &);
      JArray< jbyte > getBytes() const;
      JArray< jbyte > getBytes(const String &) const;
      void getBytes(jint, jint, const JArray< jbyte > &, jint) const;
      void getChars(jint, jint, const JArray< jchar > &, jint) const;
      jint hashCode() const;
      jint indexOf(const String &) const;
      jint indexOf(jint) const;
      jint indexOf(const String &, jint) const;
      jint indexOf(jint, jint) const;
      String intern() const;
      jboolean isBlank() const;
      jboolean isEmpty() const;
      static String join(const ::java::lang::CharSequence &, const JArray< ::java::lang::CharSequence > &);
      static String join(const ::java::lang::CharSequence &, const ::java::lang::Iterable &);
      jint lastIndexOf(const String &) const;
      jint lastIndexOf(jint) const;
      jint lastIndexOf(const String &, jint) const;
      jint lastIndexOf(jint, jint) const;
      jint length() const;
      ::java::util::stream::Stream lines() const;
      jboolean matches(const String &) const;
      jint offsetByCodePoints(jint, jint) const;
      jboolean regionMatches(jint, const String &, jint, jint) const;
      jboolean regionMatches(jboolean, jint, const String &, jint, jint) const;
      String repeat(jint) const;
      String replace(jchar, jchar) const;
      String replace(const ::java::lang::CharSequence &, const ::java::lang::CharSequence &) const;
      String replaceAll(const String &, const String &) const;
      String replaceFirst(const String &, const String &) const;
      JArray< String > split(const String &) const;
      JArray< String > split(const String &, jint) const;
      jboolean startsWith(const String &) const;
      jboolean startsWith(const String &, jint) const;
      String strip() const;
      String stripLeading() const;
      String stripTrailing() const;
      ::java::lang::CharSequence subSequence(jint, jint) const;
      String substring(jint) const;
      String substring(jint, jint) const;
      JArray< jchar > toCharArray() const;
      String toLowerCase() const;
      String toLowerCase(const ::java::util::Locale &) const;
      String toString() const;
      String toUpperCase() const;
      String toUpperCase(const ::java::util::Locale &) const;
      String trim() const;
      static String valueOf(const JArray< jchar > &);
      static String valueOf(jboolean);
      static String valueOf(jchar);
      static String valueOf(jdouble);
      static String valueOf(jfloat);
      static String valueOf(jint);
      static String valueOf(const ::java::lang::Object &);
      static String valueOf(jlong);
      static String valueOf(const JArray< jchar > &, jint, jint);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(String);
    extern PyTypeObject *PY_TYPE(String);

    class t_String {
    public:
      PyObject_HEAD
      String object;
      static PyObject *wrap_Object(const String&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
