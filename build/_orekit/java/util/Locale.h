#ifndef java_util_Locale_H
#define java_util_Locale_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Locale$LanguageRange;
    class Locale;
    class List;
    class Locale$IsoCountryCode;
    class Collection;
    class MissingResourceException;
    class Set;
    class Locale$FilteringMode;
    class Locale$Category;
  }
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Character;
    class Class;
    class Cloneable;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Locale : public ::java::lang::Object {
     public:
      enum {
        mid_init$_d0bc48d5b00dc40c,
        mid_init$_6a2001eff0605f71,
        mid_init$_3c57e287341c9288,
        mid_clone_4d26fd885228c716,
        mid_equals_65c7d273e80d497a,
        mid_filter_b2f6453fa339c571,
        mid_filter_45a99bc2d8a88bd5,
        mid_filterTags_b2f6453fa339c571,
        mid_filterTags_45a99bc2d8a88bd5,
        mid_forLanguageTag_c4d4adcf8a8ee36c,
        mid_getAvailableLocales_c5ed07ebd55821bb,
        mid_getCountry_11b109bd155ca898,
        mid_getDefault_d31b3a14c10c739b,
        mid_getDefault_856f9de903087aa2,
        mid_getDisplayCountry_11b109bd155ca898,
        mid_getDisplayCountry_3cd873bfb132c4fd,
        mid_getDisplayLanguage_11b109bd155ca898,
        mid_getDisplayLanguage_3cd873bfb132c4fd,
        mid_getDisplayName_11b109bd155ca898,
        mid_getDisplayName_3cd873bfb132c4fd,
        mid_getDisplayScript_11b109bd155ca898,
        mid_getDisplayScript_3cd873bfb132c4fd,
        mid_getDisplayVariant_11b109bd155ca898,
        mid_getDisplayVariant_3cd873bfb132c4fd,
        mid_getExtension_3371cef512ec7a0c,
        mid_getExtensionKeys_015730311a5bacdc,
        mid_getISO3Country_11b109bd155ca898,
        mid_getISO3Language_11b109bd155ca898,
        mid_getISOCountries_692f4257baa8d3c3,
        mid_getISOCountries_266c1c6971f89c7b,
        mid_getISOLanguages_692f4257baa8d3c3,
        mid_getLanguage_11b109bd155ca898,
        mid_getScript_11b109bd155ca898,
        mid_getUnicodeLocaleAttributes_015730311a5bacdc,
        mid_getUnicodeLocaleKeys_015730311a5bacdc,
        mid_getUnicodeLocaleType_92807efd57acb082,
        mid_getVariant_11b109bd155ca898,
        mid_hasExtensions_b108b35ef48e27bd,
        mid_hashCode_570ce0828f81a2c1,
        mid_lookup_394e13a16d002490,
        mid_lookupTag_092deffdd375d0a1,
        mid_setDefault_c0d4c4b5d69513bc,
        mid_setDefault_5a42e6843c463d64,
        mid_stripExtensions_d31b3a14c10c739b,
        mid_toLanguageTag_11b109bd155ca898,
        mid_toString_11b109bd155ca898,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Locale(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Locale(const Locale& obj) : ::java::lang::Object(obj) {}

      static Locale *CANADA;
      static Locale *CANADA_FRENCH;
      static Locale *CHINA;
      static Locale *CHINESE;
      static Locale *ENGLISH;
      static Locale *FRANCE;
      static Locale *FRENCH;
      static Locale *GERMAN;
      static Locale *GERMANY;
      static Locale *ITALIAN;
      static Locale *ITALY;
      static Locale *JAPAN;
      static Locale *JAPANESE;
      static Locale *KOREA;
      static Locale *KOREAN;
      static Locale *PRC;
      static jchar PRIVATE_USE_EXTENSION;
      static Locale *ROOT;
      static Locale *SIMPLIFIED_CHINESE;
      static Locale *TAIWAN;
      static Locale *TRADITIONAL_CHINESE;
      static Locale *UK;
      static jchar UNICODE_LOCALE_EXTENSION;
      static Locale *US;

      Locale(const ::java::lang::String &);
      Locale(const ::java::lang::String &, const ::java::lang::String &);
      Locale(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &);

      ::java::lang::Object clone() const;
      jboolean equals(const ::java::lang::Object &) const;
      static ::java::util::List filter(const ::java::util::List &, const ::java::util::Collection &);
      static ::java::util::List filter(const ::java::util::List &, const ::java::util::Collection &, const ::java::util::Locale$FilteringMode &);
      static ::java::util::List filterTags(const ::java::util::List &, const ::java::util::Collection &);
      static ::java::util::List filterTags(const ::java::util::List &, const ::java::util::Collection &, const ::java::util::Locale$FilteringMode &);
      static Locale forLanguageTag(const ::java::lang::String &);
      static JArray< Locale > getAvailableLocales();
      ::java::lang::String getCountry() const;
      static Locale getDefault();
      static Locale getDefault(const ::java::util::Locale$Category &);
      ::java::lang::String getDisplayCountry() const;
      ::java::lang::String getDisplayCountry(const Locale &) const;
      ::java::lang::String getDisplayLanguage() const;
      ::java::lang::String getDisplayLanguage(const Locale &) const;
      ::java::lang::String getDisplayName() const;
      ::java::lang::String getDisplayName(const Locale &) const;
      ::java::lang::String getDisplayScript() const;
      ::java::lang::String getDisplayScript(const Locale &) const;
      ::java::lang::String getDisplayVariant() const;
      ::java::lang::String getDisplayVariant(const Locale &) const;
      ::java::lang::String getExtension(jchar) const;
      ::java::util::Set getExtensionKeys() const;
      ::java::lang::String getISO3Country() const;
      ::java::lang::String getISO3Language() const;
      static JArray< ::java::lang::String > getISOCountries();
      static ::java::util::Set getISOCountries(const ::java::util::Locale$IsoCountryCode &);
      static JArray< ::java::lang::String > getISOLanguages();
      ::java::lang::String getLanguage() const;
      ::java::lang::String getScript() const;
      ::java::util::Set getUnicodeLocaleAttributes() const;
      ::java::util::Set getUnicodeLocaleKeys() const;
      ::java::lang::String getUnicodeLocaleType(const ::java::lang::String &) const;
      ::java::lang::String getVariant() const;
      jboolean hasExtensions() const;
      jint hashCode() const;
      static Locale lookup(const ::java::util::List &, const ::java::util::Collection &);
      static ::java::lang::String lookupTag(const ::java::util::List &, const ::java::util::Collection &);
      static void setDefault(const Locale &);
      static void setDefault(const ::java::util::Locale$Category &, const Locale &);
      Locale stripExtensions() const;
      ::java::lang::String toLanguageTag() const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Locale);
    extern PyTypeObject *PY_TYPE(Locale);

    class t_Locale {
    public:
      PyObject_HEAD
      Locale object;
      static PyObject *wrap_Object(const Locale&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
