#ifndef java_lang_String_H
#define java_lang_String_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class StringBuilder;
    class StringBuffer;
    class Iterable;
    class CharSequence;
    class Class;
    class String;
    class Comparable;
  }
  namespace util {
    class Locale;
    class Comparator;
    namespace stream {
      class Stream;
    }
  }
  namespace io {
    class Serializable;
    class UnsupportedEncodingException;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class String : public ::java::lang::Object {
     public:
      enum {
        mid_init$_7ae3461a92a43152,
        mid_init$_a6ba1b711f136c8b,
        mid_init$_637f103bf67eb332,
        mid_init$_9c4b35f0a6dc87f3,
        mid_init$_819ed274952f967e,
        mid_init$_d17e4ab6c0951bf6,
        mid_init$_1fa9249f4a2aa117,
        mid_init$_125b1e9f043b29f8,
        mid_init$_2df38be22737223f,
        mid_init$_32b3bfc37fd90cb0,
        mid_init$_23e6b6385093e6cb,
        mid_init$_068fdb1edf87e615,
        mid_charAt_52047e692b58eb87,
        mid_codePointAt_38565d58479aa24a,
        mid_codePointBefore_38565d58479aa24a,
        mid_codePointCount_d9790ac9eecfe931,
        mid_compareTo_5d6fce34d596f8f0,
        mid_compareToIgnoreCase_5d6fce34d596f8f0,
        mid_concat_43625fc1c3d86afe,
        mid_contains_dadf85946695cbec,
        mid_contentEquals_ad98fc65393ebcf0,
        mid_contentEquals_dadf85946695cbec,
        mid_copyValueOf_7faef32e6b4dd67a,
        mid_copyValueOf_b27b10e3c7ff4c43,
        mid_endsWith_6b161f495ea569b8,
        mid_equals_229c87223f486349,
        mid_equalsIgnoreCase_6b161f495ea569b8,
        mid_format_800b9a7564ae3d87,
        mid_format_f4558bf34d230bb6,
        mid_getBytes_89bfc9a589d9cd37,
        mid_getBytes_1444722a095e6891,
        mid_getBytes_4f3c9ee97860e729,
        mid_getChars_6a4fae412727af3a,
        mid_hashCode_f2f64475e4580546,
        mid_indexOf_5d6fce34d596f8f0,
        mid_indexOf_38565d58479aa24a,
        mid_indexOf_4918d8aef83f928e,
        mid_indexOf_d9790ac9eecfe931,
        mid_intern_0090f7797e403f43,
        mid_isBlank_e470b6d9e0d979db,
        mid_isEmpty_e470b6d9e0d979db,
        mid_join_c8b76c27ca9a9196,
        mid_join_adf7fa7b91236ee9,
        mid_lastIndexOf_5d6fce34d596f8f0,
        mid_lastIndexOf_38565d58479aa24a,
        mid_lastIndexOf_4918d8aef83f928e,
        mid_lastIndexOf_d9790ac9eecfe931,
        mid_length_f2f64475e4580546,
        mid_lines_a68a17dd093f796d,
        mid_matches_6b161f495ea569b8,
        mid_offsetByCodePoints_d9790ac9eecfe931,
        mid_regionMatches_2358ea4050598726,
        mid_regionMatches_cdfc076d2b3aee21,
        mid_repeat_90cbcc0b7a5ddae9,
        mid_replace_7365bde3c39d4280,
        mid_replace_281ed31d1c1f61f2,
        mid_replaceAll_01d87ea922ecee51,
        mid_replaceFirst_01d87ea922ecee51,
        mid_split_1c925abc6f702288,
        mid_split_dc570674be780b54,
        mid_startsWith_6b161f495ea569b8,
        mid_startsWith_8bfc3b25361c76f9,
        mid_strip_0090f7797e403f43,
        mid_stripLeading_0090f7797e403f43,
        mid_stripTrailing_0090f7797e403f43,
        mid_subSequence_d0ccff93b0cd9262,
        mid_substring_90cbcc0b7a5ddae9,
        mid_substring_a1a389fa4c946a7a,
        mid_toCharArray_946e97d3d5d65de5,
        mid_toLowerCase_0090f7797e403f43,
        mid_toLowerCase_bab3be9b232acc5a,
        mid_toString_0090f7797e403f43,
        mid_toUpperCase_0090f7797e403f43,
        mid_toUpperCase_bab3be9b232acc5a,
        mid_trim_0090f7797e403f43,
        mid_valueOf_7faef32e6b4dd67a,
        mid_valueOf_59ba897c407f128d,
        mid_valueOf_1e1a62b6126a9504,
        mid_valueOf_085bbc49599fa163,
        mid_valueOf_9173130ae370f7b2,
        mid_valueOf_90cbcc0b7a5ddae9,
        mid_valueOf_d5950e748b97110b,
        mid_valueOf_8da367bd62adf91c,
        mid_valueOf_b27b10e3c7ff4c43,
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
