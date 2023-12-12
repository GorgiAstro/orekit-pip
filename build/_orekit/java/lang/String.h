#ifndef java_lang_String_H
#define java_lang_String_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class StringBuilder;
    class Iterable;
    class CharSequence;
    class Class;
    class StringBuffer;
    class String;
    class Comparable;
  }
  namespace io {
    class UnsupportedEncodingException;
    class Serializable;
  }
  namespace util {
    class Locale;
    class Comparator;
    namespace stream {
      class Stream;
    }
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class String : public ::java::lang::Object {
     public:
      enum {
        mid_init$_0640e6acf969ed28,
        mid_init$_49deac4a1f3c8251,
        mid_init$_cc721af50c26f2c0,
        mid_init$_d759c70c6670fd89,
        mid_init$_916bf6d42d285c69,
        mid_init$_71c023902f34f4ff,
        mid_init$_06927c633a4e39a9,
        mid_init$_ac782c7077255dd3,
        mid_init$_5421d1c1f03cf945,
        mid_init$_6e90031d211c9708,
        mid_init$_e545af98154aef15,
        mid_init$_36f62450844d555f,
        mid_charAt_4affd00329d5d4cf,
        mid_codePointAt_0092017e99012694,
        mid_codePointBefore_0092017e99012694,
        mid_codePointCount_5625cf3db98dadc1,
        mid_compareTo_a6602ba493f77974,
        mid_compareToIgnoreCase_a6602ba493f77974,
        mid_concat_60bb1b490b673cbf,
        mid_contains_5a9971a665a2a1ae,
        mid_contentEquals_29fd06131cd190d5,
        mid_contentEquals_5a9971a665a2a1ae,
        mid_copyValueOf_019265aa2e3f6a5e,
        mid_copyValueOf_18fb590a4349320e,
        mid_endsWith_fd2162b8a05a22fe,
        mid_equals_221e8e85cb385209,
        mid_equalsIgnoreCase_fd2162b8a05a22fe,
        mid_format_46364ebe4fe35fca,
        mid_format_120989496d3396e1,
        mid_getBytes_db390e6336d82be3,
        mid_getBytes_01895d4b83897a8e,
        mid_getBytes_f9e67f939ad9e0e1,
        mid_getChars_def23ac70d649d11,
        mid_hashCode_412668abc8d889e9,
        mid_indexOf_a6602ba493f77974,
        mid_indexOf_0092017e99012694,
        mid_indexOf_f5fd9af3faa747d5,
        mid_indexOf_5625cf3db98dadc1,
        mid_intern_3cffd47377eca18a,
        mid_isBlank_89b302893bdbe1f1,
        mid_isEmpty_89b302893bdbe1f1,
        mid_join_bbd9cb23e518eeaf,
        mid_join_04e42523fba4bea7,
        mid_lastIndexOf_a6602ba493f77974,
        mid_lastIndexOf_0092017e99012694,
        mid_lastIndexOf_f5fd9af3faa747d5,
        mid_lastIndexOf_5625cf3db98dadc1,
        mid_length_412668abc8d889e9,
        mid_lines_d7cce92225eb0db2,
        mid_matches_fd2162b8a05a22fe,
        mid_offsetByCodePoints_5625cf3db98dadc1,
        mid_regionMatches_3241c554c97a0407,
        mid_regionMatches_d93fd603dec17aa4,
        mid_repeat_0f10d4a5e06f61c0,
        mid_replace_7d103dd056937320,
        mid_replace_008c0b6449a773bf,
        mid_replaceAll_495add03b8c9417b,
        mid_replaceFirst_495add03b8c9417b,
        mid_split_c6b001d9fe3bba6d,
        mid_split_67e28a0d1fc6cb86,
        mid_startsWith_fd2162b8a05a22fe,
        mid_startsWith_a0a4dacb02cd39c9,
        mid_strip_3cffd47377eca18a,
        mid_stripLeading_3cffd47377eca18a,
        mid_stripTrailing_3cffd47377eca18a,
        mid_subSequence_581d824833fd6c72,
        mid_substring_0f10d4a5e06f61c0,
        mid_substring_637f0334ff6ee92d,
        mid_toCharArray_36b234749513863e,
        mid_toLowerCase_3cffd47377eca18a,
        mid_toLowerCase_4b51060c6b7ea981,
        mid_toString_3cffd47377eca18a,
        mid_toUpperCase_3cffd47377eca18a,
        mid_toUpperCase_4b51060c6b7ea981,
        mid_trim_3cffd47377eca18a,
        mid_valueOf_019265aa2e3f6a5e,
        mid_valueOf_2d14bb496c734036,
        mid_valueOf_2e13aecc9b888e11,
        mid_valueOf_c03a7791f2fcb1f1,
        mid_valueOf_d2dc74ed6e6ec7d8,
        mid_valueOf_0f10d4a5e06f61c0,
        mid_valueOf_fa48e6cfb0766bbf,
        mid_valueOf_dffed0dde596e613,
        mid_valueOf_18fb590a4349320e,
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
