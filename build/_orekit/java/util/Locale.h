#ifndef java_util_Locale_H
#define java_util_Locale_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Locale;
    class List;
    class Locale$IsoCountryCode;
    class MissingResourceException;
    class Collection;
    class Locale$Category;
    class Set;
    class Locale$LanguageRange;
    class Locale$FilteringMode;
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
        mid_init$_e939c6558ae8d313,
        mid_init$_96073c87872b7a97,
        mid_init$_de8316969b81209c,
        mid_clone_dfd7647d9110ac9f,
        mid_equals_229c87223f486349,
        mid_filter_56d1abdcfed9e3ce,
        mid_filter_306c2e2a3b1fbe34,
        mid_filterTags_56d1abdcfed9e3ce,
        mid_filterTags_306c2e2a3b1fbe34,
        mid_forLanguageTag_edb959298a7071d1,
        mid_getAvailableLocales_81e8fdf65840780c,
        mid_getCountry_0090f7797e403f43,
        mid_getDefault_5e8efe29e6703a20,
        mid_getDefault_1019c09d5ac29358,
        mid_getDisplayCountry_0090f7797e403f43,
        mid_getDisplayCountry_bab3be9b232acc5a,
        mid_getDisplayLanguage_0090f7797e403f43,
        mid_getDisplayLanguage_bab3be9b232acc5a,
        mid_getDisplayName_0090f7797e403f43,
        mid_getDisplayName_bab3be9b232acc5a,
        mid_getDisplayScript_0090f7797e403f43,
        mid_getDisplayScript_bab3be9b232acc5a,
        mid_getDisplayVariant_0090f7797e403f43,
        mid_getDisplayVariant_bab3be9b232acc5a,
        mid_getExtension_1e1a62b6126a9504,
        mid_getExtensionKeys_e9e1a6780fe94297,
        mid_getISO3Country_0090f7797e403f43,
        mid_getISO3Language_0090f7797e403f43,
        mid_getISOCountries_0f62ccf08eef5924,
        mid_getISOCountries_6dff41f981093328,
        mid_getISOLanguages_0f62ccf08eef5924,
        mid_getLanguage_0090f7797e403f43,
        mid_getScript_0090f7797e403f43,
        mid_getUnicodeLocaleAttributes_e9e1a6780fe94297,
        mid_getUnicodeLocaleKeys_e9e1a6780fe94297,
        mid_getUnicodeLocaleType_43625fc1c3d86afe,
        mid_getVariant_0090f7797e403f43,
        mid_hasExtensions_e470b6d9e0d979db,
        mid_hashCode_f2f64475e4580546,
        mid_lookup_3d197a4bdc2e37e9,
        mid_lookupTag_b44f48305c4052f2,
        mid_setDefault_9ea720baeb257525,
        mid_setDefault_2c847bf37b9d570a,
        mid_stripExtensions_5e8efe29e6703a20,
        mid_toLanguageTag_0090f7797e403f43,
        mid_toString_0090f7797e403f43,
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
