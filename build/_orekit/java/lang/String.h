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
        mid_init$_a1fa5dae97ea5ed2,
        mid_init$_c7b545693fad9323,
        mid_init$_7c8a8d7c52f9458f,
        mid_init$_459771b03534868e,
        mid_init$_dd3f254991df5d48,
        mid_init$_6b491b52531e1592,
        mid_init$_fdec0c33477ce5f0,
        mid_init$_a9fddc59b07ce512,
        mid_init$_d23ba6c655e17478,
        mid_init$_a811d6c26b223197,
        mid_init$_4be9f619cb439efa,
        mid_init$_946b45b77d949193,
        mid_charAt_f41af25e73e22f74,
        mid_codePointAt_0e7cf35192c3effe,
        mid_codePointBefore_0e7cf35192c3effe,
        mid_codePointCount_92ecd94558bf0c68,
        mid_compareTo_f0ba70671b70c6e5,
        mid_compareToIgnoreCase_f0ba70671b70c6e5,
        mid_concat_6f0f3576df9f75ee,
        mid_contains_256f6bc28bb8672e,
        mid_contentEquals_da9a9535ac5687c2,
        mid_contentEquals_256f6bc28bb8672e,
        mid_copyValueOf_9a53c61542f295a1,
        mid_copyValueOf_cd50bad0f18710de,
        mid_endsWith_cde6b28e15c96b75,
        mid_equals_460c5e2d9d51c6cc,
        mid_equalsIgnoreCase_cde6b28e15c96b75,
        mid_format_a04f4df1a34e49bc,
        mid_format_3e036a048b920b1c,
        mid_getBytes_b7afa59f65f6aa9b,
        mid_getBytes_6d75204e3bcb0459,
        mid_getBytes_691cab49c6242e6d,
        mid_getChars_cc06cb22124df445,
        mid_hashCode_55546ef6a647f39b,
        mid_indexOf_f0ba70671b70c6e5,
        mid_indexOf_0e7cf35192c3effe,
        mid_indexOf_7c969bab81d289ef,
        mid_indexOf_92ecd94558bf0c68,
        mid_intern_1c1fa1e935d6cdcf,
        mid_isBlank_9ab94ac1dc23b105,
        mid_isEmpty_9ab94ac1dc23b105,
        mid_join_23872f907ebf329c,
        mid_join_577a3534e2df5ab3,
        mid_lastIndexOf_f0ba70671b70c6e5,
        mid_lastIndexOf_0e7cf35192c3effe,
        mid_lastIndexOf_7c969bab81d289ef,
        mid_lastIndexOf_92ecd94558bf0c68,
        mid_length_55546ef6a647f39b,
        mid_lines_14e21bf777ff0ccf,
        mid_matches_cde6b28e15c96b75,
        mid_offsetByCodePoints_92ecd94558bf0c68,
        mid_regionMatches_345a9ae949824f63,
        mid_regionMatches_47186190fa4b45e3,
        mid_repeat_2a9bffd3d5397f7c,
        mid_replace_630648127d9d065e,
        mid_replace_2643f345e997a30b,
        mid_replaceAll_88f2f8c619f3cbd0,
        mid_replaceFirst_88f2f8c619f3cbd0,
        mid_split_fb693b259486c655,
        mid_split_672f537cbc3e50a9,
        mid_startsWith_cde6b28e15c96b75,
        mid_startsWith_e584c514b8852171,
        mid_strip_1c1fa1e935d6cdcf,
        mid_stripLeading_1c1fa1e935d6cdcf,
        mid_stripTrailing_1c1fa1e935d6cdcf,
        mid_subSequence_e866f407305d4016,
        mid_substring_2a9bffd3d5397f7c,
        mid_substring_e91e53c42d39aef9,
        mid_toCharArray_53a37b9a05d57059,
        mid_toLowerCase_1c1fa1e935d6cdcf,
        mid_toLowerCase_26070c28e6ea354d,
        mid_toString_1c1fa1e935d6cdcf,
        mid_toUpperCase_1c1fa1e935d6cdcf,
        mid_toUpperCase_26070c28e6ea354d,
        mid_trim_1c1fa1e935d6cdcf,
        mid_valueOf_9a53c61542f295a1,
        mid_valueOf_8603157c6408b5bf,
        mid_valueOf_935421dbce990c9c,
        mid_valueOf_11ae2994efd15504,
        mid_valueOf_2dfeb5b800d7df61,
        mid_valueOf_2a9bffd3d5397f7c,
        mid_valueOf_9a3ac03d9f8571c6,
        mid_valueOf_9078858c11a58b1e,
        mid_valueOf_cd50bad0f18710de,
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
