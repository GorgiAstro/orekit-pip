#ifndef java_util_Locale_H
#define java_util_Locale_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Locale;
    class List;
    class Locale$LanguageRange;
    class Collection;
    class MissingResourceException;
    class Set;
    class Locale$FilteringMode;
    class Locale$IsoCountryCode;
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
        mid_init$_105e1eadb709d9ac,
        mid_init$_771aee6c143cc92a,
        mid_init$_56b987237c71cdbb,
        mid_clone_704a5bee58538972,
        mid_equals_72faff9b05f5ed5e,
        mid_filter_570fd4d42ca575c4,
        mid_filter_9b965386df8a151c,
        mid_filterTags_570fd4d42ca575c4,
        mid_filterTags_9b965386df8a151c,
        mid_forLanguageTag_afd8135728425baf,
        mid_getAvailableLocales_faf2576acf90261b,
        mid_getCountry_d2c8eb4129821f0e,
        mid_getDefault_19f55af8c42f77cb,
        mid_getDefault_364b32676511573d,
        mid_getDisplayCountry_d2c8eb4129821f0e,
        mid_getDisplayCountry_5969ecf7afac3dba,
        mid_getDisplayLanguage_d2c8eb4129821f0e,
        mid_getDisplayLanguage_5969ecf7afac3dba,
        mid_getDisplayName_d2c8eb4129821f0e,
        mid_getDisplayName_5969ecf7afac3dba,
        mid_getDisplayScript_d2c8eb4129821f0e,
        mid_getDisplayScript_5969ecf7afac3dba,
        mid_getDisplayVariant_d2c8eb4129821f0e,
        mid_getDisplayVariant_5969ecf7afac3dba,
        mid_getExtension_53bd6cb431dc0332,
        mid_getExtensionKeys_6b191a9b12c1004b,
        mid_getISO3Country_d2c8eb4129821f0e,
        mid_getISO3Language_d2c8eb4129821f0e,
        mid_getISOCountries_f81c0644d57ae495,
        mid_getISOCountries_c059b98d83dd93ed,
        mid_getISOLanguages_f81c0644d57ae495,
        mid_getLanguage_d2c8eb4129821f0e,
        mid_getScript_d2c8eb4129821f0e,
        mid_getUnicodeLocaleAttributes_6b191a9b12c1004b,
        mid_getUnicodeLocaleKeys_6b191a9b12c1004b,
        mid_getUnicodeLocaleType_95277969d373e11f,
        mid_getVariant_d2c8eb4129821f0e,
        mid_hasExtensions_eee3de00fe971136,
        mid_hashCode_d6ab429752e7c267,
        mid_lookup_7cadb821e6138862,
        mid_lookupTag_1a7106e226416152,
        mid_setDefault_febf24135e738502,
        mid_setDefault_838769081f7eb6a7,
        mid_stripExtensions_19f55af8c42f77cb,
        mid_toLanguageTag_d2c8eb4129821f0e,
        mid_toString_d2c8eb4129821f0e,
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
