#ifndef java_util_Locale_H
#define java_util_Locale_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Locale;
    class List;
    class Locale$IsoCountryCode;
    class Collection;
    class Locale$LanguageRange;
    class MissingResourceException;
    class Locale$FilteringMode;
    class Set;
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
        mid_init$_f5ffdf29129ef90a,
        mid_init$_630071dd94c59169,
        mid_init$_f5c244a0f15376be,
        mid_clone_e661fe3ba2fafb22,
        mid_equals_221e8e85cb385209,
        mid_filter_e5abae9cbc97b660,
        mid_filter_3a194246cf7e18a4,
        mid_filterTags_e5abae9cbc97b660,
        mid_filterTags_3a194246cf7e18a4,
        mid_forLanguageTag_4aa291b8ae8519ed,
        mid_getAvailableLocales_85ff0d07ca843902,
        mid_getCountry_3cffd47377eca18a,
        mid_getDefault_dbe2fc8ef8b3e0a1,
        mid_getDefault_5caeacab93b07ce2,
        mid_getDisplayCountry_3cffd47377eca18a,
        mid_getDisplayCountry_4b51060c6b7ea981,
        mid_getDisplayLanguage_3cffd47377eca18a,
        mid_getDisplayLanguage_4b51060c6b7ea981,
        mid_getDisplayName_3cffd47377eca18a,
        mid_getDisplayName_4b51060c6b7ea981,
        mid_getDisplayScript_3cffd47377eca18a,
        mid_getDisplayScript_4b51060c6b7ea981,
        mid_getDisplayVariant_3cffd47377eca18a,
        mid_getDisplayVariant_4b51060c6b7ea981,
        mid_getExtension_2e13aecc9b888e11,
        mid_getExtensionKeys_2dfcbd371d62f4e1,
        mid_getISO3Country_3cffd47377eca18a,
        mid_getISO3Language_3cffd47377eca18a,
        mid_getISOCountries_5d7d8c500345981d,
        mid_getISOCountries_d6a2ea42be66c213,
        mid_getISOLanguages_5d7d8c500345981d,
        mid_getLanguage_3cffd47377eca18a,
        mid_getScript_3cffd47377eca18a,
        mid_getUnicodeLocaleAttributes_2dfcbd371d62f4e1,
        mid_getUnicodeLocaleKeys_2dfcbd371d62f4e1,
        mid_getUnicodeLocaleType_60bb1b490b673cbf,
        mid_getVariant_3cffd47377eca18a,
        mid_hasExtensions_89b302893bdbe1f1,
        mid_hashCode_412668abc8d889e9,
        mid_lookup_8835c81b15ca0db7,
        mid_lookupTag_622b595eff3911e9,
        mid_setDefault_be68e56b20169c78,
        mid_setDefault_ae7b51d83f3edb02,
        mid_stripExtensions_dbe2fc8ef8b3e0a1,
        mid_toLanguageTag_3cffd47377eca18a,
        mid_toString_3cffd47377eca18a,
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
