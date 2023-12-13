#ifndef java_util_Locale_H
#define java_util_Locale_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Locale;
    class List;
    class Collection;
    class Locale$FilteringMode;
    class Locale$Category;
    class Set;
    class Locale$IsoCountryCode;
    class Locale$LanguageRange;
    class MissingResourceException;
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
        mid_init$_734b91ac30d5f9b4,
        mid_init$_a627ad9c5959309d,
        mid_init$_ee9345b4af8c40df,
        mid_clone_541690f9ee81d3ad,
        mid_equals_460c5e2d9d51c6cc,
        mid_filter_1915ec30f0862566,
        mid_filter_3b3f98365f51562d,
        mid_filterTags_1915ec30f0862566,
        mid_filterTags_3b3f98365f51562d,
        mid_forLanguageTag_33ee00791c8367dc,
        mid_getAvailableLocales_8d2cd0b971cc7b85,
        mid_getCountry_1c1fa1e935d6cdcf,
        mid_getDefault_179409cdd40bde08,
        mid_getDefault_4e0b35e2ea6f264f,
        mid_getDisplayCountry_1c1fa1e935d6cdcf,
        mid_getDisplayCountry_26070c28e6ea354d,
        mid_getDisplayLanguage_1c1fa1e935d6cdcf,
        mid_getDisplayLanguage_26070c28e6ea354d,
        mid_getDisplayName_1c1fa1e935d6cdcf,
        mid_getDisplayName_26070c28e6ea354d,
        mid_getDisplayScript_1c1fa1e935d6cdcf,
        mid_getDisplayScript_26070c28e6ea354d,
        mid_getDisplayVariant_1c1fa1e935d6cdcf,
        mid_getDisplayVariant_26070c28e6ea354d,
        mid_getExtension_935421dbce990c9c,
        mid_getExtensionKeys_7e8f11dd23d1142c,
        mid_getISO3Country_1c1fa1e935d6cdcf,
        mid_getISO3Language_1c1fa1e935d6cdcf,
        mid_getISOCountries_0f94e41879ab7062,
        mid_getISOCountries_44bdd6d01a477236,
        mid_getISOLanguages_0f94e41879ab7062,
        mid_getLanguage_1c1fa1e935d6cdcf,
        mid_getScript_1c1fa1e935d6cdcf,
        mid_getUnicodeLocaleAttributes_7e8f11dd23d1142c,
        mid_getUnicodeLocaleKeys_7e8f11dd23d1142c,
        mid_getUnicodeLocaleType_6f0f3576df9f75ee,
        mid_getVariant_1c1fa1e935d6cdcf,
        mid_hasExtensions_9ab94ac1dc23b105,
        mid_hashCode_55546ef6a647f39b,
        mid_lookup_67d6e04b0528b226,
        mid_lookupTag_9ebbf9f7118c2a86,
        mid_setDefault_ae952945a283d1a5,
        mid_setDefault_3dc719733eff2849,
        mid_stripExtensions_179409cdd40bde08,
        mid_toLanguageTag_1c1fa1e935d6cdcf,
        mid_toString_1c1fa1e935d6cdcf,
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
