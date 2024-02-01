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
    namespace stream {
      class Stream;
    }
    class Comparator;
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
        mid_init$_ff7cb6c242604316,
        mid_init$_0a9ea6096ddfe2cc,
        mid_init$_59d3cc8e4d4cc5c4,
        mid_init$_bba2a19638de22ff,
        mid_init$_e22e96b35f4145e4,
        mid_init$_53599daa54a53068,
        mid_init$_20d21be51afdcd58,
        mid_init$_e4288ba5fbf20d28,
        mid_init$_6f10578448832e2a,
        mid_init$_9faac5a856899214,
        mid_init$_bdd9412ce6ca987d,
        mid_init$_1ad7c6da88120e43,
        mid_charAt_80723b5d4f0fdfa2,
        mid_codePointAt_d938fc64e8c6df2d,
        mid_codePointBefore_d938fc64e8c6df2d,
        mid_codePointCount_91b9e1e34b2235d5,
        mid_compareTo_84fe1f8fbbcb0268,
        mid_compareToIgnoreCase_84fe1f8fbbcb0268,
        mid_concat_95277969d373e11f,
        mid_contains_6925c1b6417dac5a,
        mid_contentEquals_8412cb24aad4c2a7,
        mid_contentEquals_6925c1b6417dac5a,
        mid_copyValueOf_8b7706fe569efa7c,
        mid_copyValueOf_8d06f8552b96f415,
        mid_endsWith_df4c65b2aede5c41,
        mid_equals_72faff9b05f5ed5e,
        mid_equalsIgnoreCase_df4c65b2aede5c41,
        mid_format_c9595ebc2d5f5371,
        mid_format_57221315aa959ae0,
        mid_getBytes_7b0acd212e47f280,
        mid_getBytes_f72ab673b8410e58,
        mid_getBytes_10cd2f0eea9eff04,
        mid_getChars_58054e664fd79305,
        mid_hashCode_d6ab429752e7c267,
        mid_indexOf_84fe1f8fbbcb0268,
        mid_indexOf_d938fc64e8c6df2d,
        mid_indexOf_36da4b2d3bc5085f,
        mid_indexOf_91b9e1e34b2235d5,
        mid_intern_d2c8eb4129821f0e,
        mid_isBlank_eee3de00fe971136,
        mid_isEmpty_eee3de00fe971136,
        mid_join_d8e93d2e0339e49e,
        mid_join_021aa3ea429d2850,
        mid_lastIndexOf_84fe1f8fbbcb0268,
        mid_lastIndexOf_d938fc64e8c6df2d,
        mid_lastIndexOf_36da4b2d3bc5085f,
        mid_lastIndexOf_91b9e1e34b2235d5,
        mid_length_d6ab429752e7c267,
        mid_lines_11e4ca8182c1933d,
        mid_matches_df4c65b2aede5c41,
        mid_offsetByCodePoints_91b9e1e34b2235d5,
        mid_regionMatches_247919e242b6983c,
        mid_regionMatches_ea488fcbe6582fe5,
        mid_repeat_c81987d6b0e2977a,
        mid_replace_ac77d7ed8c59eb58,
        mid_replace_71fa18b1decd95a9,
        mid_replaceAll_91d6dcf90111829e,
        mid_replaceFirst_91d6dcf90111829e,
        mid_split_8e8aaefa3268abcf,
        mid_split_cf27dd36351064f2,
        mid_startsWith_df4c65b2aede5c41,
        mid_startsWith_ece0a4045ea089c1,
        mid_strip_d2c8eb4129821f0e,
        mid_stripLeading_d2c8eb4129821f0e,
        mid_stripTrailing_d2c8eb4129821f0e,
        mid_subSequence_b87db528df453723,
        mid_substring_c81987d6b0e2977a,
        mid_substring_43e3765e4d074a90,
        mid_toCharArray_dc85a3bfc14a8b31,
        mid_toLowerCase_d2c8eb4129821f0e,
        mid_toLowerCase_5969ecf7afac3dba,
        mid_toString_d2c8eb4129821f0e,
        mid_toUpperCase_d2c8eb4129821f0e,
        mid_toUpperCase_5969ecf7afac3dba,
        mid_trim_d2c8eb4129821f0e,
        mid_valueOf_8b7706fe569efa7c,
        mid_valueOf_512646e36b2b1871,
        mid_valueOf_53bd6cb431dc0332,
        mid_valueOf_e3ac8af686594d08,
        mid_valueOf_7e1d4f43ec30f721,
        mid_valueOf_c81987d6b0e2977a,
        mid_valueOf_60ee6fc56bffa550,
        mid_valueOf_7fdd1777495672ef,
        mid_valueOf_8d06f8552b96f415,
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
