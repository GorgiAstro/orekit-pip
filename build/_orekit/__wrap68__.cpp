#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Locale.h"
#include "java/util/Locale.h"
#include "java/util/List.h"
#include "java/io/Serializable.h"
#include "java/util/Locale$IsoCountryCode.h"
#include "java/util/Collection.h"
#include "java/util/Locale$LanguageRange.h"
#include "java/util/MissingResourceException.h"
#include "java/lang/Character.h"
#include "java/util/Locale$FilteringMode.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/Cloneable.h"
#include "java/lang/String.h"
#include "java/util/Locale$Category.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Locale::class$ = NULL;
    jmethodID *Locale::mids$ = NULL;
    bool Locale::live$ = false;
    Locale *Locale::CANADA = NULL;
    Locale *Locale::CANADA_FRENCH = NULL;
    Locale *Locale::CHINA = NULL;
    Locale *Locale::CHINESE = NULL;
    Locale *Locale::ENGLISH = NULL;
    Locale *Locale::FRANCE = NULL;
    Locale *Locale::FRENCH = NULL;
    Locale *Locale::GERMAN = NULL;
    Locale *Locale::GERMANY = NULL;
    Locale *Locale::ITALIAN = NULL;
    Locale *Locale::ITALY = NULL;
    Locale *Locale::JAPAN = NULL;
    Locale *Locale::JAPANESE = NULL;
    Locale *Locale::KOREA = NULL;
    Locale *Locale::KOREAN = NULL;
    Locale *Locale::PRC = NULL;
    jchar Locale::PRIVATE_USE_EXTENSION = (jchar) 0;
    Locale *Locale::ROOT = NULL;
    Locale *Locale::SIMPLIFIED_CHINESE = NULL;
    Locale *Locale::TAIWAN = NULL;
    Locale *Locale::TRADITIONAL_CHINESE = NULL;
    Locale *Locale::UK = NULL;
    jchar Locale::UNICODE_LOCALE_EXTENSION = (jchar) 0;
    Locale *Locale::US = NULL;

    jclass Locale::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Locale");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_630071dd94c59169] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_init$_f5c244a0f15376be] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_clone_e661fe3ba2fafb22] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_filter_e5abae9cbc97b660] = env->getStaticMethodID(cls, "filter", "(Ljava/util/List;Ljava/util/Collection;)Ljava/util/List;");
        mids$[mid_filter_3a194246cf7e18a4] = env->getStaticMethodID(cls, "filter", "(Ljava/util/List;Ljava/util/Collection;Ljava/util/Locale$FilteringMode;)Ljava/util/List;");
        mids$[mid_filterTags_e5abae9cbc97b660] = env->getStaticMethodID(cls, "filterTags", "(Ljava/util/List;Ljava/util/Collection;)Ljava/util/List;");
        mids$[mid_filterTags_3a194246cf7e18a4] = env->getStaticMethodID(cls, "filterTags", "(Ljava/util/List;Ljava/util/Collection;Ljava/util/Locale$FilteringMode;)Ljava/util/List;");
        mids$[mid_forLanguageTag_4aa291b8ae8519ed] = env->getStaticMethodID(cls, "forLanguageTag", "(Ljava/lang/String;)Ljava/util/Locale;");
        mids$[mid_getAvailableLocales_85ff0d07ca843902] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
        mids$[mid_getCountry_3cffd47377eca18a] = env->getMethodID(cls, "getCountry", "()Ljava/lang/String;");
        mids$[mid_getDefault_dbe2fc8ef8b3e0a1] = env->getStaticMethodID(cls, "getDefault", "()Ljava/util/Locale;");
        mids$[mid_getDefault_5caeacab93b07ce2] = env->getStaticMethodID(cls, "getDefault", "(Ljava/util/Locale$Category;)Ljava/util/Locale;");
        mids$[mid_getDisplayCountry_3cffd47377eca18a] = env->getMethodID(cls, "getDisplayCountry", "()Ljava/lang/String;");
        mids$[mid_getDisplayCountry_4b51060c6b7ea981] = env->getMethodID(cls, "getDisplayCountry", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_getDisplayLanguage_3cffd47377eca18a] = env->getMethodID(cls, "getDisplayLanguage", "()Ljava/lang/String;");
        mids$[mid_getDisplayLanguage_4b51060c6b7ea981] = env->getMethodID(cls, "getDisplayLanguage", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_getDisplayName_3cffd47377eca18a] = env->getMethodID(cls, "getDisplayName", "()Ljava/lang/String;");
        mids$[mid_getDisplayName_4b51060c6b7ea981] = env->getMethodID(cls, "getDisplayName", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_getDisplayScript_3cffd47377eca18a] = env->getMethodID(cls, "getDisplayScript", "()Ljava/lang/String;");
        mids$[mid_getDisplayScript_4b51060c6b7ea981] = env->getMethodID(cls, "getDisplayScript", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_getDisplayVariant_3cffd47377eca18a] = env->getMethodID(cls, "getDisplayVariant", "()Ljava/lang/String;");
        mids$[mid_getDisplayVariant_4b51060c6b7ea981] = env->getMethodID(cls, "getDisplayVariant", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_getExtension_2e13aecc9b888e11] = env->getMethodID(cls, "getExtension", "(C)Ljava/lang/String;");
        mids$[mid_getExtensionKeys_2dfcbd371d62f4e1] = env->getMethodID(cls, "getExtensionKeys", "()Ljava/util/Set;");
        mids$[mid_getISO3Country_3cffd47377eca18a] = env->getMethodID(cls, "getISO3Country", "()Ljava/lang/String;");
        mids$[mid_getISO3Language_3cffd47377eca18a] = env->getMethodID(cls, "getISO3Language", "()Ljava/lang/String;");
        mids$[mid_getISOCountries_5d7d8c500345981d] = env->getStaticMethodID(cls, "getISOCountries", "()[Ljava/lang/String;");
        mids$[mid_getISOCountries_d6a2ea42be66c213] = env->getStaticMethodID(cls, "getISOCountries", "(Ljava/util/Locale$IsoCountryCode;)Ljava/util/Set;");
        mids$[mid_getISOLanguages_5d7d8c500345981d] = env->getStaticMethodID(cls, "getISOLanguages", "()[Ljava/lang/String;");
        mids$[mid_getLanguage_3cffd47377eca18a] = env->getMethodID(cls, "getLanguage", "()Ljava/lang/String;");
        mids$[mid_getScript_3cffd47377eca18a] = env->getMethodID(cls, "getScript", "()Ljava/lang/String;");
        mids$[mid_getUnicodeLocaleAttributes_2dfcbd371d62f4e1] = env->getMethodID(cls, "getUnicodeLocaleAttributes", "()Ljava/util/Set;");
        mids$[mid_getUnicodeLocaleKeys_2dfcbd371d62f4e1] = env->getMethodID(cls, "getUnicodeLocaleKeys", "()Ljava/util/Set;");
        mids$[mid_getUnicodeLocaleType_60bb1b490b673cbf] = env->getMethodID(cls, "getUnicodeLocaleType", "(Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_getVariant_3cffd47377eca18a] = env->getMethodID(cls, "getVariant", "()Ljava/lang/String;");
        mids$[mid_hasExtensions_89b302893bdbe1f1] = env->getMethodID(cls, "hasExtensions", "()Z");
        mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_lookup_8835c81b15ca0db7] = env->getStaticMethodID(cls, "lookup", "(Ljava/util/List;Ljava/util/Collection;)Ljava/util/Locale;");
        mids$[mid_lookupTag_622b595eff3911e9] = env->getStaticMethodID(cls, "lookupTag", "(Ljava/util/List;Ljava/util/Collection;)Ljava/lang/String;");
        mids$[mid_setDefault_be68e56b20169c78] = env->getStaticMethodID(cls, "setDefault", "(Ljava/util/Locale;)V");
        mids$[mid_setDefault_ae7b51d83f3edb02] = env->getStaticMethodID(cls, "setDefault", "(Ljava/util/Locale$Category;Ljava/util/Locale;)V");
        mids$[mid_stripExtensions_dbe2fc8ef8b3e0a1] = env->getMethodID(cls, "stripExtensions", "()Ljava/util/Locale;");
        mids$[mid_toLanguageTag_3cffd47377eca18a] = env->getMethodID(cls, "toLanguageTag", "()Ljava/lang/String;");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        CANADA = new Locale(env->getStaticObjectField(cls, "CANADA", "Ljava/util/Locale;"));
        CANADA_FRENCH = new Locale(env->getStaticObjectField(cls, "CANADA_FRENCH", "Ljava/util/Locale;"));
        CHINA = new Locale(env->getStaticObjectField(cls, "CHINA", "Ljava/util/Locale;"));
        CHINESE = new Locale(env->getStaticObjectField(cls, "CHINESE", "Ljava/util/Locale;"));
        ENGLISH = new Locale(env->getStaticObjectField(cls, "ENGLISH", "Ljava/util/Locale;"));
        FRANCE = new Locale(env->getStaticObjectField(cls, "FRANCE", "Ljava/util/Locale;"));
        FRENCH = new Locale(env->getStaticObjectField(cls, "FRENCH", "Ljava/util/Locale;"));
        GERMAN = new Locale(env->getStaticObjectField(cls, "GERMAN", "Ljava/util/Locale;"));
        GERMANY = new Locale(env->getStaticObjectField(cls, "GERMANY", "Ljava/util/Locale;"));
        ITALIAN = new Locale(env->getStaticObjectField(cls, "ITALIAN", "Ljava/util/Locale;"));
        ITALY = new Locale(env->getStaticObjectField(cls, "ITALY", "Ljava/util/Locale;"));
        JAPAN = new Locale(env->getStaticObjectField(cls, "JAPAN", "Ljava/util/Locale;"));
        JAPANESE = new Locale(env->getStaticObjectField(cls, "JAPANESE", "Ljava/util/Locale;"));
        KOREA = new Locale(env->getStaticObjectField(cls, "KOREA", "Ljava/util/Locale;"));
        KOREAN = new Locale(env->getStaticObjectField(cls, "KOREAN", "Ljava/util/Locale;"));
        PRC = new Locale(env->getStaticObjectField(cls, "PRC", "Ljava/util/Locale;"));
        PRIVATE_USE_EXTENSION = env->getStaticCharField(cls, "PRIVATE_USE_EXTENSION");
        ROOT = new Locale(env->getStaticObjectField(cls, "ROOT", "Ljava/util/Locale;"));
        SIMPLIFIED_CHINESE = new Locale(env->getStaticObjectField(cls, "SIMPLIFIED_CHINESE", "Ljava/util/Locale;"));
        TAIWAN = new Locale(env->getStaticObjectField(cls, "TAIWAN", "Ljava/util/Locale;"));
        TRADITIONAL_CHINESE = new Locale(env->getStaticObjectField(cls, "TRADITIONAL_CHINESE", "Ljava/util/Locale;"));
        UK = new Locale(env->getStaticObjectField(cls, "UK", "Ljava/util/Locale;"));
        UNICODE_LOCALE_EXTENSION = env->getStaticCharField(cls, "UNICODE_LOCALE_EXTENSION");
        US = new Locale(env->getStaticObjectField(cls, "US", "Ljava/util/Locale;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Locale::Locale(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

    Locale::Locale(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_630071dd94c59169, a0.this$, a1.this$)) {}

    Locale::Locale(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5c244a0f15376be, a0.this$, a1.this$, a2.this$)) {}

    ::java::lang::Object Locale::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_e661fe3ba2fafb22]));
    }

    jboolean Locale::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
    }

    ::java::util::List Locale::filter(const ::java::util::List & a0, const ::java::util::Collection & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_filter_e5abae9cbc97b660], a0.this$, a1.this$));
    }

    ::java::util::List Locale::filter(const ::java::util::List & a0, const ::java::util::Collection & a1, const ::java::util::Locale$FilteringMode & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_filter_3a194246cf7e18a4], a0.this$, a1.this$, a2.this$));
    }

    ::java::util::List Locale::filterTags(const ::java::util::List & a0, const ::java::util::Collection & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_filterTags_e5abae9cbc97b660], a0.this$, a1.this$));
    }

    ::java::util::List Locale::filterTags(const ::java::util::List & a0, const ::java::util::Collection & a1, const ::java::util::Locale$FilteringMode & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_filterTags_3a194246cf7e18a4], a0.this$, a1.this$, a2.this$));
    }

    Locale Locale::forLanguageTag(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Locale(env->callStaticObjectMethod(cls, mids$[mid_forLanguageTag_4aa291b8ae8519ed], a0.this$));
    }

    JArray< Locale > Locale::getAvailableLocales()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_85ff0d07ca843902]));
    }

    ::java::lang::String Locale::getCountry() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCountry_3cffd47377eca18a]));
    }

    Locale Locale::getDefault()
    {
      jclass cls = env->getClass(initializeClass);
      return Locale(env->callStaticObjectMethod(cls, mids$[mid_getDefault_dbe2fc8ef8b3e0a1]));
    }

    Locale Locale::getDefault(const ::java::util::Locale$Category & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Locale(env->callStaticObjectMethod(cls, mids$[mid_getDefault_5caeacab93b07ce2], a0.this$));
    }

    ::java::lang::String Locale::getDisplayCountry() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayCountry_3cffd47377eca18a]));
    }

    ::java::lang::String Locale::getDisplayCountry(const Locale & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayCountry_4b51060c6b7ea981], a0.this$));
    }

    ::java::lang::String Locale::getDisplayLanguage() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayLanguage_3cffd47377eca18a]));
    }

    ::java::lang::String Locale::getDisplayLanguage(const Locale & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayLanguage_4b51060c6b7ea981], a0.this$));
    }

    ::java::lang::String Locale::getDisplayName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayName_3cffd47377eca18a]));
    }

    ::java::lang::String Locale::getDisplayName(const Locale & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayName_4b51060c6b7ea981], a0.this$));
    }

    ::java::lang::String Locale::getDisplayScript() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayScript_3cffd47377eca18a]));
    }

    ::java::lang::String Locale::getDisplayScript(const Locale & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayScript_4b51060c6b7ea981], a0.this$));
    }

    ::java::lang::String Locale::getDisplayVariant() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayVariant_3cffd47377eca18a]));
    }

    ::java::lang::String Locale::getDisplayVariant(const Locale & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayVariant_4b51060c6b7ea981], a0.this$));
    }

    ::java::lang::String Locale::getExtension(jchar a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getExtension_2e13aecc9b888e11], a0));
    }

    ::java::util::Set Locale::getExtensionKeys() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getExtensionKeys_2dfcbd371d62f4e1]));
    }

    ::java::lang::String Locale::getISO3Country() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getISO3Country_3cffd47377eca18a]));
    }

    ::java::lang::String Locale::getISO3Language() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getISO3Language_3cffd47377eca18a]));
    }

    JArray< ::java::lang::String > Locale::getISOCountries()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::lang::String >(env->callStaticObjectMethod(cls, mids$[mid_getISOCountries_5d7d8c500345981d]));
    }

    ::java::util::Set Locale::getISOCountries(const ::java::util::Locale$IsoCountryCode & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Set(env->callStaticObjectMethod(cls, mids$[mid_getISOCountries_d6a2ea42be66c213], a0.this$));
    }

    JArray< ::java::lang::String > Locale::getISOLanguages()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::lang::String >(env->callStaticObjectMethod(cls, mids$[mid_getISOLanguages_5d7d8c500345981d]));
    }

    ::java::lang::String Locale::getLanguage() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLanguage_3cffd47377eca18a]));
    }

    ::java::lang::String Locale::getScript() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getScript_3cffd47377eca18a]));
    }

    ::java::util::Set Locale::getUnicodeLocaleAttributes() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getUnicodeLocaleAttributes_2dfcbd371d62f4e1]));
    }

    ::java::util::Set Locale::getUnicodeLocaleKeys() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getUnicodeLocaleKeys_2dfcbd371d62f4e1]));
    }

    ::java::lang::String Locale::getUnicodeLocaleType(const ::java::lang::String & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getUnicodeLocaleType_60bb1b490b673cbf], a0.this$));
    }

    ::java::lang::String Locale::getVariant() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getVariant_3cffd47377eca18a]));
    }

    jboolean Locale::hasExtensions() const
    {
      return env->callBooleanMethod(this$, mids$[mid_hasExtensions_89b302893bdbe1f1]);
    }

    jint Locale::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
    }

    Locale Locale::lookup(const ::java::util::List & a0, const ::java::util::Collection & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Locale(env->callStaticObjectMethod(cls, mids$[mid_lookup_8835c81b15ca0db7], a0.this$, a1.this$));
    }

    ::java::lang::String Locale::lookupTag(const ::java::util::List & a0, const ::java::util::Collection & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_lookupTag_622b595eff3911e9], a0.this$, a1.this$));
    }

    void Locale::setDefault(const Locale & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setDefault_be68e56b20169c78], a0.this$);
    }

    void Locale::setDefault(const ::java::util::Locale$Category & a0, const Locale & a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setDefault_ae7b51d83f3edb02], a0.this$, a1.this$);
    }

    Locale Locale::stripExtensions() const
    {
      return Locale(env->callObjectMethod(this$, mids$[mid_stripExtensions_dbe2fc8ef8b3e0a1]));
    }

    ::java::lang::String Locale::toLanguageTag() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toLanguageTag_3cffd47377eca18a]));
    }

    ::java::lang::String Locale::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Locale_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Locale_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Locale_init_(t_Locale *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Locale_clone(t_Locale *self);
    static PyObject *t_Locale_equals(t_Locale *self, PyObject *args);
    static PyObject *t_Locale_filter(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale_filterTags(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale_forLanguageTag(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Locale_getAvailableLocales(PyTypeObject *type);
    static PyObject *t_Locale_getCountry(t_Locale *self);
    static PyObject *t_Locale_getDefault(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale_getDisplayCountry(t_Locale *self, PyObject *args);
    static PyObject *t_Locale_getDisplayLanguage(t_Locale *self, PyObject *args);
    static PyObject *t_Locale_getDisplayName(t_Locale *self, PyObject *args);
    static PyObject *t_Locale_getDisplayScript(t_Locale *self, PyObject *args);
    static PyObject *t_Locale_getDisplayVariant(t_Locale *self, PyObject *args);
    static PyObject *t_Locale_getExtension(t_Locale *self, PyObject *arg);
    static PyObject *t_Locale_getExtensionKeys(t_Locale *self);
    static PyObject *t_Locale_getISO3Country(t_Locale *self);
    static PyObject *t_Locale_getISO3Language(t_Locale *self);
    static PyObject *t_Locale_getISOCountries(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale_getISOLanguages(PyTypeObject *type);
    static PyObject *t_Locale_getLanguage(t_Locale *self);
    static PyObject *t_Locale_getScript(t_Locale *self);
    static PyObject *t_Locale_getUnicodeLocaleAttributes(t_Locale *self);
    static PyObject *t_Locale_getUnicodeLocaleKeys(t_Locale *self);
    static PyObject *t_Locale_getUnicodeLocaleType(t_Locale *self, PyObject *arg);
    static PyObject *t_Locale_getVariant(t_Locale *self);
    static PyObject *t_Locale_hasExtensions(t_Locale *self);
    static PyObject *t_Locale_hashCode(t_Locale *self, PyObject *args);
    static PyObject *t_Locale_lookup(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale_lookupTag(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale_setDefault(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale_stripExtensions(t_Locale *self);
    static PyObject *t_Locale_toLanguageTag(t_Locale *self);
    static PyObject *t_Locale_toString(t_Locale *self, PyObject *args);
    static PyObject *t_Locale_get__availableLocales(t_Locale *self, void *data);
    static PyObject *t_Locale_get__country(t_Locale *self, void *data);
    static PyObject *t_Locale_get__default(t_Locale *self, void *data);
    static int t_Locale_set__default(t_Locale *self, PyObject *arg, void *data);
    static PyObject *t_Locale_get__displayCountry(t_Locale *self, void *data);
    static PyObject *t_Locale_get__displayLanguage(t_Locale *self, void *data);
    static PyObject *t_Locale_get__displayName(t_Locale *self, void *data);
    static PyObject *t_Locale_get__displayScript(t_Locale *self, void *data);
    static PyObject *t_Locale_get__displayVariant(t_Locale *self, void *data);
    static PyObject *t_Locale_get__extensionKeys(t_Locale *self, void *data);
    static PyObject *t_Locale_get__iSO3Country(t_Locale *self, void *data);
    static PyObject *t_Locale_get__iSO3Language(t_Locale *self, void *data);
    static PyObject *t_Locale_get__iSOCountries(t_Locale *self, void *data);
    static PyObject *t_Locale_get__iSOLanguages(t_Locale *self, void *data);
    static PyObject *t_Locale_get__language(t_Locale *self, void *data);
    static PyObject *t_Locale_get__script(t_Locale *self, void *data);
    static PyObject *t_Locale_get__unicodeLocaleAttributes(t_Locale *self, void *data);
    static PyObject *t_Locale_get__unicodeLocaleKeys(t_Locale *self, void *data);
    static PyObject *t_Locale_get__variant(t_Locale *self, void *data);
    static PyGetSetDef t_Locale__fields_[] = {
      DECLARE_GET_FIELD(t_Locale, availableLocales),
      DECLARE_GET_FIELD(t_Locale, country),
      DECLARE_GETSET_FIELD(t_Locale, default),
      DECLARE_GET_FIELD(t_Locale, displayCountry),
      DECLARE_GET_FIELD(t_Locale, displayLanguage),
      DECLARE_GET_FIELD(t_Locale, displayName),
      DECLARE_GET_FIELD(t_Locale, displayScript),
      DECLARE_GET_FIELD(t_Locale, displayVariant),
      DECLARE_GET_FIELD(t_Locale, extensionKeys),
      DECLARE_GET_FIELD(t_Locale, iSO3Country),
      DECLARE_GET_FIELD(t_Locale, iSO3Language),
      DECLARE_GET_FIELD(t_Locale, iSOCountries),
      DECLARE_GET_FIELD(t_Locale, iSOLanguages),
      DECLARE_GET_FIELD(t_Locale, language),
      DECLARE_GET_FIELD(t_Locale, script),
      DECLARE_GET_FIELD(t_Locale, unicodeLocaleAttributes),
      DECLARE_GET_FIELD(t_Locale, unicodeLocaleKeys),
      DECLARE_GET_FIELD(t_Locale, variant),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Locale__methods_[] = {
      DECLARE_METHOD(t_Locale, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Locale, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Locale, clone, METH_NOARGS),
      DECLARE_METHOD(t_Locale, equals, METH_VARARGS),
      DECLARE_METHOD(t_Locale, filter, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, filterTags, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, forLanguageTag, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Locale, getAvailableLocales, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, getCountry, METH_NOARGS),
      DECLARE_METHOD(t_Locale, getDefault, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, getDisplayCountry, METH_VARARGS),
      DECLARE_METHOD(t_Locale, getDisplayLanguage, METH_VARARGS),
      DECLARE_METHOD(t_Locale, getDisplayName, METH_VARARGS),
      DECLARE_METHOD(t_Locale, getDisplayScript, METH_VARARGS),
      DECLARE_METHOD(t_Locale, getDisplayVariant, METH_VARARGS),
      DECLARE_METHOD(t_Locale, getExtension, METH_O),
      DECLARE_METHOD(t_Locale, getExtensionKeys, METH_NOARGS),
      DECLARE_METHOD(t_Locale, getISO3Country, METH_NOARGS),
      DECLARE_METHOD(t_Locale, getISO3Language, METH_NOARGS),
      DECLARE_METHOD(t_Locale, getISOCountries, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, getISOLanguages, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, getLanguage, METH_NOARGS),
      DECLARE_METHOD(t_Locale, getScript, METH_NOARGS),
      DECLARE_METHOD(t_Locale, getUnicodeLocaleAttributes, METH_NOARGS),
      DECLARE_METHOD(t_Locale, getUnicodeLocaleKeys, METH_NOARGS),
      DECLARE_METHOD(t_Locale, getUnicodeLocaleType, METH_O),
      DECLARE_METHOD(t_Locale, getVariant, METH_NOARGS),
      DECLARE_METHOD(t_Locale, hasExtensions, METH_NOARGS),
      DECLARE_METHOD(t_Locale, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Locale, lookup, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, lookupTag, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, setDefault, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, stripExtensions, METH_NOARGS),
      DECLARE_METHOD(t_Locale, toLanguageTag, METH_NOARGS),
      DECLARE_METHOD(t_Locale, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Locale)[] = {
      { Py_tp_methods, t_Locale__methods_ },
      { Py_tp_init, (void *) t_Locale_init_ },
      { Py_tp_getset, t_Locale__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Locale)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Locale, t_Locale, Locale);

    void t_Locale::install(PyObject *module)
    {
      installType(&PY_TYPE(Locale), &PY_TYPE_DEF(Locale), module, "Locale", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "LanguageRange", make_descriptor(&PY_TYPE_DEF(Locale$LanguageRange)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "FilteringMode", make_descriptor(&PY_TYPE_DEF(Locale$FilteringMode)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "Category", make_descriptor(&PY_TYPE_DEF(Locale$Category)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "IsoCountryCode", make_descriptor(&PY_TYPE_DEF(Locale$IsoCountryCode)));
    }

    void t_Locale::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "class_", make_descriptor(Locale::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "wrapfn_", make_descriptor(t_Locale::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "boxfn_", make_descriptor(boxObject));
      env->getClass(Locale::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "CANADA", make_descriptor(t_Locale::wrap_Object(*Locale::CANADA)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "CANADA_FRENCH", make_descriptor(t_Locale::wrap_Object(*Locale::CANADA_FRENCH)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "CHINA", make_descriptor(t_Locale::wrap_Object(*Locale::CHINA)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "CHINESE", make_descriptor(t_Locale::wrap_Object(*Locale::CHINESE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "ENGLISH", make_descriptor(t_Locale::wrap_Object(*Locale::ENGLISH)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "FRANCE", make_descriptor(t_Locale::wrap_Object(*Locale::FRANCE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "FRENCH", make_descriptor(t_Locale::wrap_Object(*Locale::FRENCH)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "GERMAN", make_descriptor(t_Locale::wrap_Object(*Locale::GERMAN)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "GERMANY", make_descriptor(t_Locale::wrap_Object(*Locale::GERMANY)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "ITALIAN", make_descriptor(t_Locale::wrap_Object(*Locale::ITALIAN)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "ITALY", make_descriptor(t_Locale::wrap_Object(*Locale::ITALY)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "JAPAN", make_descriptor(t_Locale::wrap_Object(*Locale::JAPAN)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "JAPANESE", make_descriptor(t_Locale::wrap_Object(*Locale::JAPANESE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "KOREA", make_descriptor(t_Locale::wrap_Object(*Locale::KOREA)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "KOREAN", make_descriptor(t_Locale::wrap_Object(*Locale::KOREAN)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "PRC", make_descriptor(t_Locale::wrap_Object(*Locale::PRC)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "PRIVATE_USE_EXTENSION", make_descriptor(Locale::PRIVATE_USE_EXTENSION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "ROOT", make_descriptor(t_Locale::wrap_Object(*Locale::ROOT)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "SIMPLIFIED_CHINESE", make_descriptor(t_Locale::wrap_Object(*Locale::SIMPLIFIED_CHINESE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "TAIWAN", make_descriptor(t_Locale::wrap_Object(*Locale::TAIWAN)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "TRADITIONAL_CHINESE", make_descriptor(t_Locale::wrap_Object(*Locale::TRADITIONAL_CHINESE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "UK", make_descriptor(t_Locale::wrap_Object(*Locale::UK)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "UNICODE_LOCALE_EXTENSION", make_descriptor(Locale::UNICODE_LOCALE_EXTENSION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "US", make_descriptor(t_Locale::wrap_Object(*Locale::US)));
    }

    static PyObject *t_Locale_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Locale::initializeClass, 1)))
        return NULL;
      return t_Locale::wrap_Object(Locale(((t_Locale *) arg)->object.this$));
    }
    static PyObject *t_Locale_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Locale::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Locale_init_(t_Locale *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Locale object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Locale(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          Locale object((jobject) NULL);

          if (!parseArgs(args, "ss", &a0, &a1))
          {
            INT_CALL(object = Locale(a0, a1));
            self->object = object;
            break;
          }
        }
        goto err;
       case 3:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          Locale object((jobject) NULL);

          if (!parseArgs(args, "sss", &a0, &a1, &a2))
          {
            INT_CALL(object = Locale(a0, a1, a2));
            self->object = object;
            break;
          }
        }
       default:
       err:
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_Locale_clone(t_Locale *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Locale_equals(t_Locale *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Locale), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Locale_filter(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Collection a1((jobject) NULL);
          PyTypeObject **p1;
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = ::java::util::Locale::filter(a0, a1));
            return ::java::util::t_List::wrap_Object(result, ::java::util::PY_TYPE(Locale));
          }
        }
        break;
       case 3:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Collection a1((jobject) NULL);
          PyTypeObject **p1;
          ::java::util::Locale$FilteringMode a2((jobject) NULL);
          PyTypeObject **p2;
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "KKK", ::java::util::List::initializeClass, ::java::util::Collection::initializeClass, ::java::util::Locale$FilteringMode::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_, &a2, &p2, ::java::util::t_Locale$FilteringMode::parameters_))
          {
            OBJ_CALL(result = ::java::util::Locale::filter(a0, a1, a2));
            return ::java::util::t_List::wrap_Object(result, ::java::util::PY_TYPE(Locale));
          }
        }
      }

      PyErr_SetArgsError(type, "filter", args);
      return NULL;
    }

    static PyObject *t_Locale_filterTags(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Collection a1((jobject) NULL);
          PyTypeObject **p1;
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = ::java::util::Locale::filterTags(a0, a1));
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }
        }
        break;
       case 3:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Collection a1((jobject) NULL);
          PyTypeObject **p1;
          ::java::util::Locale$FilteringMode a2((jobject) NULL);
          PyTypeObject **p2;
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "KKK", ::java::util::List::initializeClass, ::java::util::Collection::initializeClass, ::java::util::Locale$FilteringMode::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_, &a2, &p2, ::java::util::t_Locale$FilteringMode::parameters_))
          {
            OBJ_CALL(result = ::java::util::Locale::filterTags(a0, a1, a2));
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }
        }
      }

      PyErr_SetArgsError(type, "filterTags", args);
      return NULL;
    }

    static PyObject *t_Locale_forLanguageTag(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      Locale result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::util::Locale::forLanguageTag(a0));
        return t_Locale::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "forLanguageTag", arg);
      return NULL;
    }

    static PyObject *t_Locale_getAvailableLocales(PyTypeObject *type)
    {
      JArray< Locale > result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Locale::getAvailableLocales());
      return JArray<jobject>(result.this$).wrap(t_Locale::wrap_jobject);
    }

    static PyObject *t_Locale_getCountry(t_Locale *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getCountry());
      return j2p(result);
    }

    static PyObject *t_Locale_getDefault(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          Locale result((jobject) NULL);
          OBJ_CALL(result = ::java::util::Locale::getDefault());
          return t_Locale::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale$Category a0((jobject) NULL);
          PyTypeObject **p0;
          Locale result((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Locale$Category::initializeClass, &a0, &p0, ::java::util::t_Locale$Category::parameters_))
          {
            OBJ_CALL(result = ::java::util::Locale::getDefault(a0));
            return t_Locale::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getDefault", args);
      return NULL;
    }

    static PyObject *t_Locale_getDisplayCountry(t_Locale *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDisplayCountry());
          return j2p(result);
        }
        break;
       case 1:
        {
          Locale a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "k", Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getDisplayCountry(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getDisplayCountry", args);
      return NULL;
    }

    static PyObject *t_Locale_getDisplayLanguage(t_Locale *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDisplayLanguage());
          return j2p(result);
        }
        break;
       case 1:
        {
          Locale a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "k", Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getDisplayLanguage(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getDisplayLanguage", args);
      return NULL;
    }

    static PyObject *t_Locale_getDisplayName(t_Locale *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDisplayName());
          return j2p(result);
        }
        break;
       case 1:
        {
          Locale a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "k", Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getDisplayName(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getDisplayName", args);
      return NULL;
    }

    static PyObject *t_Locale_getDisplayScript(t_Locale *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDisplayScript());
          return j2p(result);
        }
        break;
       case 1:
        {
          Locale a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "k", Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getDisplayScript(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getDisplayScript", args);
      return NULL;
    }

    static PyObject *t_Locale_getDisplayVariant(t_Locale *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDisplayVariant());
          return j2p(result);
        }
        break;
       case 1:
        {
          Locale a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "k", Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getDisplayVariant(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getDisplayVariant", args);
      return NULL;
    }

    static PyObject *t_Locale_getExtension(t_Locale *self, PyObject *arg)
    {
      jchar a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = self->object.getExtension(a0));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getExtension", arg);
      return NULL;
    }

    static PyObject *t_Locale_getExtensionKeys(t_Locale *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.getExtensionKeys());
      return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(Character));
    }

    static PyObject *t_Locale_getISO3Country(t_Locale *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getISO3Country());
      return j2p(result);
    }

    static PyObject *t_Locale_getISO3Language(t_Locale *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getISO3Language());
      return j2p(result);
    }

    static PyObject *t_Locale_getISOCountries(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< ::java::lang::String > result((jobject) NULL);
          OBJ_CALL(result = ::java::util::Locale::getISOCountries());
          return JArray<jstring>(result.this$).wrap();
        }
        break;
       case 1:
        {
          ::java::util::Locale$IsoCountryCode a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Set result((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Locale$IsoCountryCode::initializeClass, &a0, &p0, ::java::util::t_Locale$IsoCountryCode::parameters_))
          {
            OBJ_CALL(result = ::java::util::Locale::getISOCountries(a0));
            return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }
        }
      }

      PyErr_SetArgsError(type, "getISOCountries", args);
      return NULL;
    }

    static PyObject *t_Locale_getISOLanguages(PyTypeObject *type)
    {
      JArray< ::java::lang::String > result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Locale::getISOLanguages());
      return JArray<jstring>(result.this$).wrap();
    }

    static PyObject *t_Locale_getLanguage(t_Locale *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getLanguage());
      return j2p(result);
    }

    static PyObject *t_Locale_getScript(t_Locale *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getScript());
      return j2p(result);
    }

    static PyObject *t_Locale_getUnicodeLocaleAttributes(t_Locale *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.getUnicodeLocaleAttributes());
      return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
    }

    static PyObject *t_Locale_getUnicodeLocaleKeys(t_Locale *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.getUnicodeLocaleKeys());
      return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
    }

    static PyObject *t_Locale_getUnicodeLocaleType(t_Locale *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getUnicodeLocaleType(a0));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getUnicodeLocaleType", arg);
      return NULL;
    }

    static PyObject *t_Locale_getVariant(t_Locale *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getVariant());
      return j2p(result);
    }

    static PyObject *t_Locale_hasExtensions(t_Locale *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.hasExtensions());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Locale_hashCode(t_Locale *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Locale), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Locale_lookup(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Collection a1((jobject) NULL);
      PyTypeObject **p1;
      Locale result((jobject) NULL);

      if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = ::java::util::Locale::lookup(a0, a1));
        return t_Locale::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "lookup", args);
      return NULL;
    }

    static PyObject *t_Locale_lookupTag(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Collection a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = ::java::util::Locale::lookupTag(a0, a1));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "lookupTag", args);
      return NULL;
    }

    static PyObject *t_Locale_setDefault(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          Locale a0((jobject) NULL);

          if (!parseArgs(args, "k", Locale::initializeClass, &a0))
          {
            OBJ_CALL(::java::util::Locale::setDefault(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 2:
        {
          ::java::util::Locale$Category a0((jobject) NULL);
          PyTypeObject **p0;
          Locale a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::java::util::Locale$Category::initializeClass, Locale::initializeClass, &a0, &p0, ::java::util::t_Locale$Category::parameters_, &a1))
          {
            OBJ_CALL(::java::util::Locale::setDefault(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError(type, "setDefault", args);
      return NULL;
    }

    static PyObject *t_Locale_stripExtensions(t_Locale *self)
    {
      Locale result((jobject) NULL);
      OBJ_CALL(result = self->object.stripExtensions());
      return t_Locale::wrap_Object(result);
    }

    static PyObject *t_Locale_toLanguageTag(t_Locale *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.toLanguageTag());
      return j2p(result);
    }

    static PyObject *t_Locale_toString(t_Locale *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Locale), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Locale_get__availableLocales(t_Locale *self, void *data)
    {
      JArray< Locale > value((jobject) NULL);
      OBJ_CALL(value = self->object.getAvailableLocales());
      return JArray<jobject>(value.this$).wrap(t_Locale::wrap_jobject);
    }

    static PyObject *t_Locale_get__country(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getCountry());
      return j2p(value);
    }

    static PyObject *t_Locale_get__default(t_Locale *self, void *data)
    {
      Locale value((jobject) NULL);
      OBJ_CALL(value = self->object.getDefault());
      return t_Locale::wrap_Object(value);
    }
    static int t_Locale_set__default(t_Locale *self, PyObject *arg, void *data)
    {
      {
        Locale value((jobject) NULL);
        if (!parseArg(arg, "k", Locale::initializeClass, &value))
        {
          INT_CALL(self->object.setDefault(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "default", arg);
      return -1;
    }

    static PyObject *t_Locale_get__displayCountry(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getDisplayCountry());
      return j2p(value);
    }

    static PyObject *t_Locale_get__displayLanguage(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getDisplayLanguage());
      return j2p(value);
    }

    static PyObject *t_Locale_get__displayName(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getDisplayName());
      return j2p(value);
    }

    static PyObject *t_Locale_get__displayScript(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getDisplayScript());
      return j2p(value);
    }

    static PyObject *t_Locale_get__displayVariant(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getDisplayVariant());
      return j2p(value);
    }

    static PyObject *t_Locale_get__extensionKeys(t_Locale *self, void *data)
    {
      ::java::util::Set value((jobject) NULL);
      OBJ_CALL(value = self->object.getExtensionKeys());
      return ::java::util::t_Set::wrap_Object(value);
    }

    static PyObject *t_Locale_get__iSO3Country(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getISO3Country());
      return j2p(value);
    }

    static PyObject *t_Locale_get__iSO3Language(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getISO3Language());
      return j2p(value);
    }

    static PyObject *t_Locale_get__iSOCountries(t_Locale *self, void *data)
    {
      JArray< ::java::lang::String > value((jobject) NULL);
      OBJ_CALL(value = self->object.getISOCountries());
      return JArray<jstring>(value.this$).wrap();
    }

    static PyObject *t_Locale_get__iSOLanguages(t_Locale *self, void *data)
    {
      JArray< ::java::lang::String > value((jobject) NULL);
      OBJ_CALL(value = self->object.getISOLanguages());
      return JArray<jstring>(value.this$).wrap();
    }

    static PyObject *t_Locale_get__language(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getLanguage());
      return j2p(value);
    }

    static PyObject *t_Locale_get__script(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getScript());
      return j2p(value);
    }

    static PyObject *t_Locale_get__unicodeLocaleAttributes(t_Locale *self, void *data)
    {
      ::java::util::Set value((jobject) NULL);
      OBJ_CALL(value = self->object.getUnicodeLocaleAttributes());
      return ::java::util::t_Set::wrap_Object(value);
    }

    static PyObject *t_Locale_get__unicodeLocaleKeys(t_Locale *self, void *data)
    {
      ::java::util::Set value((jobject) NULL);
      OBJ_CALL(value = self->object.getUnicodeLocaleKeys());
      return ::java::util::t_Set::wrap_Object(value);
    }

    static PyObject *t_Locale_get__variant(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getVariant());
      return j2p(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/FieldUnivariateFunction.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *FieldUnivariateFunction::class$ = NULL;
      jmethodID *FieldUnivariateFunction::mids$ = NULL;
      bool FieldUnivariateFunction::live$ = false;

      jclass FieldUnivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/FieldUnivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toCalculusFieldUnivariateFunction_5187efc2d6806a56] = env->getMethodID(cls, "toCalculusFieldUnivariateFunction", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/CalculusFieldUnivariateFunction;");
          mids$[mid_value_6672ad854985cb64] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::analysis::CalculusFieldUnivariateFunction FieldUnivariateFunction::toCalculusFieldUnivariateFunction(const ::org::hipparchus::Field & a0) const
      {
        return ::org::hipparchus::analysis::CalculusFieldUnivariateFunction(env->callObjectMethod(this$, mids$[mid_toCalculusFieldUnivariateFunction_5187efc2d6806a56], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldUnivariateFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_6672ad854985cb64], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      static PyObject *t_FieldUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldUnivariateFunction_toCalculusFieldUnivariateFunction(t_FieldUnivariateFunction *self, PyObject *arg);
      static PyObject *t_FieldUnivariateFunction_value(t_FieldUnivariateFunction *self, PyObject *arg);

      static PyMethodDef t_FieldUnivariateFunction__methods_[] = {
        DECLARE_METHOD(t_FieldUnivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldUnivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldUnivariateFunction, toCalculusFieldUnivariateFunction, METH_O),
        DECLARE_METHOD(t_FieldUnivariateFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateFunction)[] = {
        { Py_tp_methods, t_FieldUnivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldUnivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldUnivariateFunction, t_FieldUnivariateFunction, FieldUnivariateFunction);

      void t_FieldUnivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldUnivariateFunction), &PY_TYPE_DEF(FieldUnivariateFunction), module, "FieldUnivariateFunction", 0);
      }

      void t_FieldUnivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateFunction), "class_", make_descriptor(FieldUnivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateFunction), "wrapfn_", make_descriptor(t_FieldUnivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldUnivariateFunction::initializeClass, 1)))
          return NULL;
        return t_FieldUnivariateFunction::wrap_Object(FieldUnivariateFunction(((t_FieldUnivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_FieldUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldUnivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldUnivariateFunction_toCalculusFieldUnivariateFunction(t_FieldUnivariateFunction *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::analysis::CalculusFieldUnivariateFunction result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.toCalculusFieldUnivariateFunction(a0));
          return ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toCalculusFieldUnivariateFunction", arg);
        return NULL;
      }

      static PyObject *t_FieldUnivariateFunction_value(t_FieldUnivariateFunction *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmParser.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *OdmParser::class$ = NULL;
            jmethodID *OdmParser::mids$ = NULL;
            bool OdmParser::live$ = false;

            jclass OdmParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/OdmParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getMissionReferenceDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMissionReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getSelectedMu_557b8123390d8d0c] = env->getMethodID(cls, "getSelectedMu", "()D");
                mids$[mid_setMuCreated_10f281d777284cea] = env->getMethodID(cls, "setMuCreated", "(D)V");
                mids$[mid_setMuParsed_10f281d777284cea] = env->getMethodID(cls, "setMuParsed", "(D)V");
                mids$[mid_getMuSet_557b8123390d8d0c] = env->getMethodID(cls, "getMuSet", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::time::AbsoluteDate OdmParser::getMissionReferenceDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMissionReferenceDate_7a97f7e149e79afb]));
            }

            jdouble OdmParser::getSelectedMu() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSelectedMu_557b8123390d8d0c]);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            static PyObject *t_OdmParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OdmParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OdmParser_of_(t_OdmParser *self, PyObject *args);
            static PyObject *t_OdmParser_getMissionReferenceDate(t_OdmParser *self);
            static PyObject *t_OdmParser_getSelectedMu(t_OdmParser *self);
            static PyObject *t_OdmParser_get__missionReferenceDate(t_OdmParser *self, void *data);
            static PyObject *t_OdmParser_get__selectedMu(t_OdmParser *self, void *data);
            static PyObject *t_OdmParser_get__parameters_(t_OdmParser *self, void *data);
            static PyGetSetDef t_OdmParser__fields_[] = {
              DECLARE_GET_FIELD(t_OdmParser, missionReferenceDate),
              DECLARE_GET_FIELD(t_OdmParser, selectedMu),
              DECLARE_GET_FIELD(t_OdmParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_OdmParser__methods_[] = {
              DECLARE_METHOD(t_OdmParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_OdmParser, getMissionReferenceDate, METH_NOARGS),
              DECLARE_METHOD(t_OdmParser, getSelectedMu, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(OdmParser)[] = {
              { Py_tp_methods, t_OdmParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_OdmParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(OdmParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser),
              NULL
            };

            DEFINE_TYPE(OdmParser, t_OdmParser, OdmParser);
            PyObject *t_OdmParser::wrap_Object(const OdmParser& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_OdmParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_OdmParser *self = (t_OdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_OdmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_OdmParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_OdmParser *self = (t_OdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_OdmParser::install(PyObject *module)
            {
              installType(&PY_TYPE(OdmParser), &PY_TYPE_DEF(OdmParser), module, "OdmParser", 0);
            }

            void t_OdmParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmParser), "class_", make_descriptor(OdmParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmParser), "wrapfn_", make_descriptor(t_OdmParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmParser), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_OdmParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, OdmParser::initializeClass, 1)))
                return NULL;
              return t_OdmParser::wrap_Object(OdmParser(((t_OdmParser *) arg)->object.this$));
            }
            static PyObject *t_OdmParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, OdmParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_OdmParser_of_(t_OdmParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_OdmParser_getMissionReferenceDate(t_OdmParser *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMissionReferenceDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_OdmParser_getSelectedMu(t_OdmParser *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSelectedMu());
              return PyFloat_FromDouble((double) result);
            }
            static PyObject *t_OdmParser_get__parameters_(t_OdmParser *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_OdmParser_get__missionReferenceDate(t_OdmParser *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMissionReferenceDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_OdmParser_get__selectedMu(t_OdmParser *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSelectedMu());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolver.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *IntegerLeastSquareSolver::class$ = NULL;
          jmethodID *IntegerLeastSquareSolver::mids$ = NULL;
          bool IntegerLeastSquareSolver::live$ = false;

          jclass IntegerLeastSquareSolver::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolver");

              mids$ = new jmethodID[max_mid];
              mids$[mid_solveILS_1580c6ee6b7d56ce] = env->getMethodID(cls, "solveILS", "(I[D[ILorg/hipparchus/linear/RealMatrix;)[Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > IntegerLeastSquareSolver::solveILS(jint a0, const JArray< jdouble > & a1, const JArray< jint > & a2, const ::org::hipparchus::linear::RealMatrix & a3) const
          {
            return JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution >(env->callObjectMethod(this$, mids$[mid_solveILS_1580c6ee6b7d56ce], a0, a1.this$, a2.this$, a3.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_IntegerLeastSquareSolver_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntegerLeastSquareSolver_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntegerLeastSquareSolver_solveILS(t_IntegerLeastSquareSolver *self, PyObject *args);

          static PyMethodDef t_IntegerLeastSquareSolver__methods_[] = {
            DECLARE_METHOD(t_IntegerLeastSquareSolver, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntegerLeastSquareSolver, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntegerLeastSquareSolver, solveILS, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IntegerLeastSquareSolver)[] = {
            { Py_tp_methods, t_IntegerLeastSquareSolver__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IntegerLeastSquareSolver)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(IntegerLeastSquareSolver, t_IntegerLeastSquareSolver, IntegerLeastSquareSolver);

          void t_IntegerLeastSquareSolver::install(PyObject *module)
          {
            installType(&PY_TYPE(IntegerLeastSquareSolver), &PY_TYPE_DEF(IntegerLeastSquareSolver), module, "IntegerLeastSquareSolver", 0);
          }

          void t_IntegerLeastSquareSolver::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareSolver), "class_", make_descriptor(IntegerLeastSquareSolver::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareSolver), "wrapfn_", make_descriptor(t_IntegerLeastSquareSolver::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareSolver), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IntegerLeastSquareSolver_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IntegerLeastSquareSolver::initializeClass, 1)))
              return NULL;
            return t_IntegerLeastSquareSolver::wrap_Object(IntegerLeastSquareSolver(((t_IntegerLeastSquareSolver *) arg)->object.this$));
          }
          static PyObject *t_IntegerLeastSquareSolver_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IntegerLeastSquareSolver::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_IntegerLeastSquareSolver_solveILS(t_IntegerLeastSquareSolver *self, PyObject *args)
          {
            jint a0;
            JArray< jdouble > a1((jobject) NULL);
            JArray< jint > a2((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
            JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > result((jobject) NULL);

            if (!parseArgs(args, "I[D[Ik", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.solveILS(a0, a1, a2, a3));
              return JArray<jobject>(result.this$).wrap(::org::orekit::estimation::measurements::gnss::t_IntegerLeastSquareSolution::wrap_jobject);
            }

            PyErr_SetArgsError((PyObject *) self, "solveILS", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *LocalMagneticFieldFrame$LOFBuilderVector::class$ = NULL;
      jmethodID *LocalMagneticFieldFrame$LOFBuilderVector::mids$ = NULL;
      bool LocalMagneticFieldFrame$LOFBuilderVector::live$ = false;
      LocalMagneticFieldFrame$LOFBuilderVector *LocalMagneticFieldFrame$LOFBuilderVector::MINUS_MOMENTUM = NULL;
      LocalMagneticFieldFrame$LOFBuilderVector *LocalMagneticFieldFrame$LOFBuilderVector::MINUS_POSITION = NULL;
      LocalMagneticFieldFrame$LOFBuilderVector *LocalMagneticFieldFrame$LOFBuilderVector::MINUS_VELOCITY = NULL;
      LocalMagneticFieldFrame$LOFBuilderVector *LocalMagneticFieldFrame$LOFBuilderVector::PLUS_MOMENTUM = NULL;
      LocalMagneticFieldFrame$LOFBuilderVector *LocalMagneticFieldFrame$LOFBuilderVector::PLUS_POSITION = NULL;
      LocalMagneticFieldFrame$LOFBuilderVector *LocalMagneticFieldFrame$LOFBuilderVector::PLUS_VELOCITY = NULL;

      jclass LocalMagneticFieldFrame$LOFBuilderVector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_35543344c03965dc] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;");
          mids$[mid_values_96ce917f3ca49745] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          MINUS_MOMENTUM = new LocalMagneticFieldFrame$LOFBuilderVector(env->getStaticObjectField(cls, "MINUS_MOMENTUM", "Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;"));
          MINUS_POSITION = new LocalMagneticFieldFrame$LOFBuilderVector(env->getStaticObjectField(cls, "MINUS_POSITION", "Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;"));
          MINUS_VELOCITY = new LocalMagneticFieldFrame$LOFBuilderVector(env->getStaticObjectField(cls, "MINUS_VELOCITY", "Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;"));
          PLUS_MOMENTUM = new LocalMagneticFieldFrame$LOFBuilderVector(env->getStaticObjectField(cls, "PLUS_MOMENTUM", "Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;"));
          PLUS_POSITION = new LocalMagneticFieldFrame$LOFBuilderVector(env->getStaticObjectField(cls, "PLUS_POSITION", "Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;"));
          PLUS_VELOCITY = new LocalMagneticFieldFrame$LOFBuilderVector(env->getStaticObjectField(cls, "PLUS_VELOCITY", "Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LocalMagneticFieldFrame$LOFBuilderVector LocalMagneticFieldFrame$LOFBuilderVector::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LocalMagneticFieldFrame$LOFBuilderVector(env->callStaticObjectMethod(cls, mids$[mid_valueOf_35543344c03965dc], a0.this$));
      }

      JArray< LocalMagneticFieldFrame$LOFBuilderVector > LocalMagneticFieldFrame$LOFBuilderVector::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LocalMagneticFieldFrame$LOFBuilderVector >(env->callStaticObjectMethod(cls, mids$[mid_values_96ce917f3ca49745]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_of_(t_LocalMagneticFieldFrame$LOFBuilderVector *self, PyObject *args);
      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_values(PyTypeObject *type);
      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_get__parameters_(t_LocalMagneticFieldFrame$LOFBuilderVector *self, void *data);
      static PyGetSetDef t_LocalMagneticFieldFrame$LOFBuilderVector__fields_[] = {
        DECLARE_GET_FIELD(t_LocalMagneticFieldFrame$LOFBuilderVector, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalMagneticFieldFrame$LOFBuilderVector__methods_[] = {
        DECLARE_METHOD(t_LocalMagneticFieldFrame$LOFBuilderVector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame$LOFBuilderVector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame$LOFBuilderVector, of_, METH_VARARGS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame$LOFBuilderVector, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame$LOFBuilderVector, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalMagneticFieldFrame$LOFBuilderVector)[] = {
        { Py_tp_methods, t_LocalMagneticFieldFrame$LOFBuilderVector__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LocalMagneticFieldFrame$LOFBuilderVector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalMagneticFieldFrame$LOFBuilderVector)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LocalMagneticFieldFrame$LOFBuilderVector, t_LocalMagneticFieldFrame$LOFBuilderVector, LocalMagneticFieldFrame$LOFBuilderVector);
      PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(const LocalMagneticFieldFrame$LOFBuilderVector& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalMagneticFieldFrame$LOFBuilderVector *self = (t_LocalMagneticFieldFrame$LOFBuilderVector *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalMagneticFieldFrame$LOFBuilderVector *self = (t_LocalMagneticFieldFrame$LOFBuilderVector *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LocalMagneticFieldFrame$LOFBuilderVector::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), &PY_TYPE_DEF(LocalMagneticFieldFrame$LOFBuilderVector), module, "LocalMagneticFieldFrame$LOFBuilderVector", 0);
      }

      void t_LocalMagneticFieldFrame$LOFBuilderVector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "class_", make_descriptor(LocalMagneticFieldFrame$LOFBuilderVector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "wrapfn_", make_descriptor(t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "boxfn_", make_descriptor(boxObject));
        env->getClass(LocalMagneticFieldFrame$LOFBuilderVector::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "MINUS_MOMENTUM", make_descriptor(t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(*LocalMagneticFieldFrame$LOFBuilderVector::MINUS_MOMENTUM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "MINUS_POSITION", make_descriptor(t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(*LocalMagneticFieldFrame$LOFBuilderVector::MINUS_POSITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "MINUS_VELOCITY", make_descriptor(t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(*LocalMagneticFieldFrame$LOFBuilderVector::MINUS_VELOCITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "PLUS_MOMENTUM", make_descriptor(t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(*LocalMagneticFieldFrame$LOFBuilderVector::PLUS_MOMENTUM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "PLUS_POSITION", make_descriptor(t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(*LocalMagneticFieldFrame$LOFBuilderVector::PLUS_POSITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "PLUS_VELOCITY", make_descriptor(t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(*LocalMagneticFieldFrame$LOFBuilderVector::PLUS_VELOCITY)));
      }

      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalMagneticFieldFrame$LOFBuilderVector::initializeClass, 1)))
          return NULL;
        return t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(LocalMagneticFieldFrame$LOFBuilderVector(((t_LocalMagneticFieldFrame$LOFBuilderVector *) arg)->object.this$));
      }
      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalMagneticFieldFrame$LOFBuilderVector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_of_(t_LocalMagneticFieldFrame$LOFBuilderVector *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LocalMagneticFieldFrame$LOFBuilderVector result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::frames::LocalMagneticFieldFrame$LOFBuilderVector::valueOf(a0));
          return t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_values(PyTypeObject *type)
      {
        JArray< LocalMagneticFieldFrame$LOFBuilderVector > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::LocalMagneticFieldFrame$LOFBuilderVector::values());
        return JArray<jobject>(result.this$).wrap(t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_jobject);
      }
      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_get__parameters_(t_LocalMagneticFieldFrame$LOFBuilderVector *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRD$Meteo.h"
#include "java/util/List.h"
#include "java/util/SortedSet.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ilrs/CRD$MeteorologicalMeasurement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$Meteo::class$ = NULL;
        jmethodID *CRD$Meteo::mids$ = NULL;
        bool CRD$Meteo::live$ = false;

        jclass CRD$Meteo::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$Meteo");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_dd1a69b50abe9a6d] = env->getMethodID(cls, "<init>", "(Ljava/util/SortedSet;)V");
            mids$[mid_getData_0d9551367f7ecdef] = env->getMethodID(cls, "getData", "()Ljava/util/List;");
            mids$[mid_getMeteo_8b4878a989c1d971] = env->getMethodID(cls, "getMeteo", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/files/ilrs/CRD$MeteorologicalMeasurement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$Meteo::CRD$Meteo(const ::java::util::SortedSet & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dd1a69b50abe9a6d, a0.this$)) {}

        ::java::util::List CRD$Meteo::getData() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getData_0d9551367f7ecdef]));
        }

        ::org::orekit::files::ilrs::CRD$MeteorologicalMeasurement CRD$Meteo::getMeteo(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::files::ilrs::CRD$MeteorologicalMeasurement(env->callObjectMethod(this$, mids$[mid_getMeteo_8b4878a989c1d971], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        static PyObject *t_CRD$Meteo_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$Meteo_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$Meteo_init_(t_CRD$Meteo *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$Meteo_getData(t_CRD$Meteo *self);
        static PyObject *t_CRD$Meteo_getMeteo(t_CRD$Meteo *self, PyObject *arg);
        static PyObject *t_CRD$Meteo_get__data(t_CRD$Meteo *self, void *data);
        static PyGetSetDef t_CRD$Meteo__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$Meteo, data),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$Meteo__methods_[] = {
          DECLARE_METHOD(t_CRD$Meteo, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$Meteo, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$Meteo, getData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Meteo, getMeteo, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$Meteo)[] = {
          { Py_tp_methods, t_CRD$Meteo__methods_ },
          { Py_tp_init, (void *) t_CRD$Meteo_init_ },
          { Py_tp_getset, t_CRD$Meteo__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$Meteo)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD$Meteo, t_CRD$Meteo, CRD$Meteo);

        void t_CRD$Meteo::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$Meteo), &PY_TYPE_DEF(CRD$Meteo), module, "CRD$Meteo", 0);
        }

        void t_CRD$Meteo::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$Meteo), "class_", make_descriptor(CRD$Meteo::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$Meteo), "wrapfn_", make_descriptor(t_CRD$Meteo::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$Meteo), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$Meteo_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$Meteo::initializeClass, 1)))
            return NULL;
          return t_CRD$Meteo::wrap_Object(CRD$Meteo(((t_CRD$Meteo *) arg)->object.this$));
        }
        static PyObject *t_CRD$Meteo_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$Meteo::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$Meteo_init_(t_CRD$Meteo *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::SortedSet a0((jobject) NULL);
          PyTypeObject **p0;
          CRD$Meteo object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::SortedSet::initializeClass, &a0, &p0, ::java::util::t_SortedSet::parameters_))
          {
            INT_CALL(object = CRD$Meteo(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CRD$Meteo_getData(t_CRD$Meteo *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getData());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$MeteorologicalMeasurement));
        }

        static PyObject *t_CRD$Meteo_getMeteo(t_CRD$Meteo *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::files::ilrs::CRD$MeteorologicalMeasurement result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getMeteo(a0));
            return ::org::orekit::files::ilrs::t_CRD$MeteorologicalMeasurement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getMeteo", arg);
          return NULL;
        }

        static PyObject *t_CRD$Meteo_get__data(t_CRD$Meteo *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getData());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/enclosing/Encloser.h"
#include "org/hipparchus/geometry/enclosing/EnclosingBall.h"
#include "java/lang/Iterable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace enclosing {

        ::java::lang::Class *Encloser::class$ = NULL;
        jmethodID *Encloser::mids$ = NULL;
        bool Encloser::live$ = false;

        jclass Encloser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/enclosing/Encloser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_enclose_60fb4b68643b7fe8] = env->getMethodID(cls, "enclose", "(Ljava/lang/Iterable;)Lorg/hipparchus/geometry/enclosing/EnclosingBall;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::enclosing::EnclosingBall Encloser::enclose(const ::java::lang::Iterable & a0) const
        {
          return ::org::hipparchus::geometry::enclosing::EnclosingBall(env->callObjectMethod(this$, mids$[mid_enclose_60fb4b68643b7fe8], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace enclosing {
        static PyObject *t_Encloser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Encloser_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Encloser_of_(t_Encloser *self, PyObject *args);
        static PyObject *t_Encloser_enclose(t_Encloser *self, PyObject *arg);
        static PyObject *t_Encloser_get__parameters_(t_Encloser *self, void *data);
        static PyGetSetDef t_Encloser__fields_[] = {
          DECLARE_GET_FIELD(t_Encloser, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Encloser__methods_[] = {
          DECLARE_METHOD(t_Encloser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Encloser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Encloser, of_, METH_VARARGS),
          DECLARE_METHOD(t_Encloser, enclose, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Encloser)[] = {
          { Py_tp_methods, t_Encloser__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Encloser__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Encloser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Encloser, t_Encloser, Encloser);
        PyObject *t_Encloser::wrap_Object(const Encloser& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_Encloser::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Encloser *self = (t_Encloser *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_Encloser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_Encloser::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Encloser *self = (t_Encloser *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_Encloser::install(PyObject *module)
        {
          installType(&PY_TYPE(Encloser), &PY_TYPE_DEF(Encloser), module, "Encloser", 0);
        }

        void t_Encloser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Encloser), "class_", make_descriptor(Encloser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Encloser), "wrapfn_", make_descriptor(t_Encloser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Encloser), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Encloser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Encloser::initializeClass, 1)))
            return NULL;
          return t_Encloser::wrap_Object(Encloser(((t_Encloser *) arg)->object.this$));
        }
        static PyObject *t_Encloser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Encloser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Encloser_of_(t_Encloser *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Encloser_enclose(t_Encloser *self, PyObject *arg)
        {
          ::java::lang::Iterable a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::enclosing::EnclosingBall result((jobject) NULL);

          if (!parseArg(arg, "K", ::java::lang::Iterable::initializeClass, &a0, &p0, ::java::lang::t_Iterable::parameters_))
          {
            OBJ_CALL(result = self->object.enclose(a0));
            return ::org::hipparchus::geometry::enclosing::t_EnclosingBall::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "enclose", arg);
          return NULL;
        }
        static PyObject *t_Encloser_get__parameters_(t_Encloser *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/TDOATroposphericDelayModifier.h"
#include "org/orekit/estimation/measurements/TDOA.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *TDOATroposphericDelayModifier::class$ = NULL;
          jmethodID *TDOATroposphericDelayModifier::mids$ = NULL;
          bool TDOATroposphericDelayModifier::live$ = false;

          jclass TDOATroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/TDOATroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b6cf54f3c9220bc7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_0054a497255e8220] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TDOATroposphericDelayModifier::TDOATroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b6cf54f3c9220bc7, a0.this$)) {}

          ::java::util::List TDOATroposphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void TDOATroposphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_0054a497255e8220], a0.this$);
          }

          void TDOATroposphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_e471490df8741b73], a0.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          static PyObject *t_TDOATroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TDOATroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TDOATroposphericDelayModifier_init_(t_TDOATroposphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TDOATroposphericDelayModifier_getParametersDrivers(t_TDOATroposphericDelayModifier *self);
          static PyObject *t_TDOATroposphericDelayModifier_modify(t_TDOATroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_TDOATroposphericDelayModifier_modifyWithoutDerivatives(t_TDOATroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_TDOATroposphericDelayModifier_get__parametersDrivers(t_TDOATroposphericDelayModifier *self, void *data);
          static PyGetSetDef t_TDOATroposphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_TDOATroposphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TDOATroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_TDOATroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TDOATroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TDOATroposphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_TDOATroposphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_TDOATroposphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TDOATroposphericDelayModifier)[] = {
            { Py_tp_methods, t_TDOATroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_TDOATroposphericDelayModifier_init_ },
            { Py_tp_getset, t_TDOATroposphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TDOATroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TDOATroposphericDelayModifier, t_TDOATroposphericDelayModifier, TDOATroposphericDelayModifier);

          void t_TDOATroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(TDOATroposphericDelayModifier), &PY_TYPE_DEF(TDOATroposphericDelayModifier), module, "TDOATroposphericDelayModifier", 0);
          }

          void t_TDOATroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOATroposphericDelayModifier), "class_", make_descriptor(TDOATroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOATroposphericDelayModifier), "wrapfn_", make_descriptor(t_TDOATroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOATroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TDOATroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TDOATroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_TDOATroposphericDelayModifier::wrap_Object(TDOATroposphericDelayModifier(((t_TDOATroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_TDOATroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TDOATroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TDOATroposphericDelayModifier_init_(t_TDOATroposphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel a0((jobject) NULL);
            TDOATroposphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel::initializeClass, &a0))
            {
              INT_CALL(object = TDOATroposphericDelayModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TDOATroposphericDelayModifier_getParametersDrivers(t_TDOATroposphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_TDOATroposphericDelayModifier_modify(t_TDOATroposphericDelayModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.modify(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modify", arg);
            return NULL;
          }

          static PyObject *t_TDOATroposphericDelayModifier_modifyWithoutDerivatives(t_TDOATroposphericDelayModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }

          static PyObject *t_TDOATroposphericDelayModifier_get__parametersDrivers(t_TDOATroposphericDelayModifier *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/ExtremumApproachDetector.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/ExtremumApproachDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *ExtremumApproachDetector::class$ = NULL;
        jmethodID *ExtremumApproachDetector::mids$ = NULL;
        bool ExtremumApproachDetector::live$ = false;

        jclass ExtremumApproachDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/ExtremumApproachDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_89227d950841a6f5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;)V");
            mids$[mid_computeDeltaPV_2ff7722dce730b48] = env->getMethodID(cls, "computeDeltaPV", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/utils/PVCoordinates;");
            mids$[mid_g_1bbf81d80c47ecdd] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getSecondaryPVProvider_dec199e86bf037eb] = env->getMethodID(cls, "getSecondaryPVProvider", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_create_2d7055924d24a311] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/ExtremumApproachDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ExtremumApproachDetector::ExtremumApproachDetector(const ::org::orekit::utils::PVCoordinatesProvider & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_89227d950841a6f5, a0.this$)) {}

        ::org::orekit::utils::PVCoordinates ExtremumApproachDetector::computeDeltaPV(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_computeDeltaPV_2ff7722dce730b48], a0.this$));
        }

        jdouble ExtremumApproachDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_1bbf81d80c47ecdd], a0.this$);
        }

        ::org::orekit::utils::PVCoordinatesProvider ExtremumApproachDetector::getSecondaryPVProvider() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getSecondaryPVProvider_dec199e86bf037eb]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        static PyObject *t_ExtremumApproachDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ExtremumApproachDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ExtremumApproachDetector_of_(t_ExtremumApproachDetector *self, PyObject *args);
        static int t_ExtremumApproachDetector_init_(t_ExtremumApproachDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ExtremumApproachDetector_computeDeltaPV(t_ExtremumApproachDetector *self, PyObject *arg);
        static PyObject *t_ExtremumApproachDetector_g(t_ExtremumApproachDetector *self, PyObject *args);
        static PyObject *t_ExtremumApproachDetector_getSecondaryPVProvider(t_ExtremumApproachDetector *self);
        static PyObject *t_ExtremumApproachDetector_get__secondaryPVProvider(t_ExtremumApproachDetector *self, void *data);
        static PyObject *t_ExtremumApproachDetector_get__parameters_(t_ExtremumApproachDetector *self, void *data);
        static PyGetSetDef t_ExtremumApproachDetector__fields_[] = {
          DECLARE_GET_FIELD(t_ExtremumApproachDetector, secondaryPVProvider),
          DECLARE_GET_FIELD(t_ExtremumApproachDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ExtremumApproachDetector__methods_[] = {
          DECLARE_METHOD(t_ExtremumApproachDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ExtremumApproachDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ExtremumApproachDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_ExtremumApproachDetector, computeDeltaPV, METH_O),
          DECLARE_METHOD(t_ExtremumApproachDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_ExtremumApproachDetector, getSecondaryPVProvider, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ExtremumApproachDetector)[] = {
          { Py_tp_methods, t_ExtremumApproachDetector__methods_ },
          { Py_tp_init, (void *) t_ExtremumApproachDetector_init_ },
          { Py_tp_getset, t_ExtremumApproachDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ExtremumApproachDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(ExtremumApproachDetector, t_ExtremumApproachDetector, ExtremumApproachDetector);
        PyObject *t_ExtremumApproachDetector::wrap_Object(const ExtremumApproachDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ExtremumApproachDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ExtremumApproachDetector *self = (t_ExtremumApproachDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ExtremumApproachDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ExtremumApproachDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ExtremumApproachDetector *self = (t_ExtremumApproachDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ExtremumApproachDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(ExtremumApproachDetector), &PY_TYPE_DEF(ExtremumApproachDetector), module, "ExtremumApproachDetector", 0);
        }

        void t_ExtremumApproachDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExtremumApproachDetector), "class_", make_descriptor(ExtremumApproachDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExtremumApproachDetector), "wrapfn_", make_descriptor(t_ExtremumApproachDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExtremumApproachDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ExtremumApproachDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ExtremumApproachDetector::initializeClass, 1)))
            return NULL;
          return t_ExtremumApproachDetector::wrap_Object(ExtremumApproachDetector(((t_ExtremumApproachDetector *) arg)->object.this$));
        }
        static PyObject *t_ExtremumApproachDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ExtremumApproachDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ExtremumApproachDetector_of_(t_ExtremumApproachDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ExtremumApproachDetector_init_(t_ExtremumApproachDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
          ExtremumApproachDetector object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0))
          {
            INT_CALL(object = ExtremumApproachDetector(a0));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ExtremumApproachDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ExtremumApproachDetector_computeDeltaPV(t_ExtremumApproachDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::utils::PVCoordinates result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.computeDeltaPV(a0));
            return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "computeDeltaPV", arg);
          return NULL;
        }

        static PyObject *t_ExtremumApproachDetector_g(t_ExtremumApproachDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExtremumApproachDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_ExtremumApproachDetector_getSecondaryPVProvider(t_ExtremumApproachDetector *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getSecondaryPVProvider());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }
        static PyObject *t_ExtremumApproachDetector_get__parameters_(t_ExtremumApproachDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ExtremumApproachDetector_get__secondaryPVProvider(t_ExtremumApproachDetector *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getSecondaryPVProvider());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/MultiDirectionalSimplex.h"
#include "java/util/Comparator.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *MultiDirectionalSimplex::class$ = NULL;
            jmethodID *MultiDirectionalSimplex::mids$ = NULL;
            bool MultiDirectionalSimplex::live$ = false;

            jclass MultiDirectionalSimplex::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/MultiDirectionalSimplex");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_cc18240f4a737f14] = env->getMethodID(cls, "<init>", "([D)V");
                mids$[mid_init$_edb361bfdd1ad9ae] = env->getMethodID(cls, "<init>", "([[D)V");
                mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_init$_89aad365fb0ed8da] = env->getMethodID(cls, "<init>", "(ID)V");
                mids$[mid_init$_8e61ad7da0e712b8] = env->getMethodID(cls, "<init>", "([DDD)V");
                mids$[mid_init$_b7c3bc06d75adfa4] = env->getMethodID(cls, "<init>", "([[DDD)V");
                mids$[mid_init$_79cfe3f564275380] = env->getMethodID(cls, "<init>", "(IDD)V");
                mids$[mid_init$_c4eb928bd0dae600] = env->getMethodID(cls, "<init>", "(IDDD)V");
                mids$[mid_iterate_5af60315979aa937] = env->getMethodID(cls, "iterate", "(Lorg/hipparchus/analysis/MultivariateFunction;Ljava/util/Comparator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            MultiDirectionalSimplex::MultiDirectionalSimplex(const JArray< jdouble > & a0) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_cc18240f4a737f14, a0.this$)) {}

            MultiDirectionalSimplex::MultiDirectionalSimplex(const JArray< JArray< jdouble > > & a0) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_edb361bfdd1ad9ae, a0.this$)) {}

            MultiDirectionalSimplex::MultiDirectionalSimplex(jint a0) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

            MultiDirectionalSimplex::MultiDirectionalSimplex(jint a0, jdouble a1) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_89aad365fb0ed8da, a0, a1)) {}

            MultiDirectionalSimplex::MultiDirectionalSimplex(const JArray< jdouble > & a0, jdouble a1, jdouble a2) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_8e61ad7da0e712b8, a0.this$, a1, a2)) {}

            MultiDirectionalSimplex::MultiDirectionalSimplex(const JArray< JArray< jdouble > > & a0, jdouble a1, jdouble a2) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_b7c3bc06d75adfa4, a0.this$, a1, a2)) {}

            MultiDirectionalSimplex::MultiDirectionalSimplex(jint a0, jdouble a1, jdouble a2) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_79cfe3f564275380, a0, a1, a2)) {}

            MultiDirectionalSimplex::MultiDirectionalSimplex(jint a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_c4eb928bd0dae600, a0, a1, a2, a3)) {}

            void MultiDirectionalSimplex::iterate(const ::org::hipparchus::analysis::MultivariateFunction & a0, const ::java::util::Comparator & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_iterate_5af60315979aa937], a0.this$, a1.this$);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {
            static PyObject *t_MultiDirectionalSimplex_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MultiDirectionalSimplex_instance_(PyTypeObject *type, PyObject *arg);
            static int t_MultiDirectionalSimplex_init_(t_MultiDirectionalSimplex *self, PyObject *args, PyObject *kwds);
            static PyObject *t_MultiDirectionalSimplex_iterate(t_MultiDirectionalSimplex *self, PyObject *args);

            static PyMethodDef t_MultiDirectionalSimplex__methods_[] = {
              DECLARE_METHOD(t_MultiDirectionalSimplex, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MultiDirectionalSimplex, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MultiDirectionalSimplex, iterate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MultiDirectionalSimplex)[] = {
              { Py_tp_methods, t_MultiDirectionalSimplex__methods_ },
              { Py_tp_init, (void *) t_MultiDirectionalSimplex_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MultiDirectionalSimplex)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex),
              NULL
            };

            DEFINE_TYPE(MultiDirectionalSimplex, t_MultiDirectionalSimplex, MultiDirectionalSimplex);

            void t_MultiDirectionalSimplex::install(PyObject *module)
            {
              installType(&PY_TYPE(MultiDirectionalSimplex), &PY_TYPE_DEF(MultiDirectionalSimplex), module, "MultiDirectionalSimplex", 0);
            }

            void t_MultiDirectionalSimplex::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MultiDirectionalSimplex), "class_", make_descriptor(MultiDirectionalSimplex::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MultiDirectionalSimplex), "wrapfn_", make_descriptor(t_MultiDirectionalSimplex::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MultiDirectionalSimplex), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MultiDirectionalSimplex_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MultiDirectionalSimplex::initializeClass, 1)))
                return NULL;
              return t_MultiDirectionalSimplex::wrap_Object(MultiDirectionalSimplex(((t_MultiDirectionalSimplex *) arg)->object.this$));
            }
            static PyObject *t_MultiDirectionalSimplex_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MultiDirectionalSimplex::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_MultiDirectionalSimplex_init_(t_MultiDirectionalSimplex *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  MultiDirectionalSimplex object((jobject) NULL);

                  if (!parseArgs(args, "[D", &a0))
                  {
                    INT_CALL(object = MultiDirectionalSimplex(a0));
                    self->object = object;
                    break;
                  }
                }
                {
                  JArray< JArray< jdouble > > a0((jobject) NULL);
                  MultiDirectionalSimplex object((jobject) NULL);

                  if (!parseArgs(args, "[[D", &a0))
                  {
                    INT_CALL(object = MultiDirectionalSimplex(a0));
                    self->object = object;
                    break;
                  }
                }
                {
                  jint a0;
                  MultiDirectionalSimplex object((jobject) NULL);

                  if (!parseArgs(args, "I", &a0))
                  {
                    INT_CALL(object = MultiDirectionalSimplex(a0));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 2:
                {
                  jint a0;
                  jdouble a1;
                  MultiDirectionalSimplex object((jobject) NULL);

                  if (!parseArgs(args, "ID", &a0, &a1))
                  {
                    INT_CALL(object = MultiDirectionalSimplex(a0, a1));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 3:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  jdouble a1;
                  jdouble a2;
                  MultiDirectionalSimplex object((jobject) NULL);

                  if (!parseArgs(args, "[DDD", &a0, &a1, &a2))
                  {
                    INT_CALL(object = MultiDirectionalSimplex(a0, a1, a2));
                    self->object = object;
                    break;
                  }
                }
                {
                  JArray< JArray< jdouble > > a0((jobject) NULL);
                  jdouble a1;
                  jdouble a2;
                  MultiDirectionalSimplex object((jobject) NULL);

                  if (!parseArgs(args, "[[DDD", &a0, &a1, &a2))
                  {
                    INT_CALL(object = MultiDirectionalSimplex(a0, a1, a2));
                    self->object = object;
                    break;
                  }
                }
                {
                  jint a0;
                  jdouble a1;
                  jdouble a2;
                  MultiDirectionalSimplex object((jobject) NULL);

                  if (!parseArgs(args, "IDD", &a0, &a1, &a2))
                  {
                    INT_CALL(object = MultiDirectionalSimplex(a0, a1, a2));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 4:
                {
                  jint a0;
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  MultiDirectionalSimplex object((jobject) NULL);

                  if (!parseArgs(args, "IDDD", &a0, &a1, &a2, &a3))
                  {
                    INT_CALL(object = MultiDirectionalSimplex(a0, a1, a2, a3));
                    self->object = object;
                    break;
                  }
                }
               default:
               err:
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_MultiDirectionalSimplex_iterate(t_MultiDirectionalSimplex *self, PyObject *args)
            {
              ::org::hipparchus::analysis::MultivariateFunction a0((jobject) NULL);
              ::java::util::Comparator a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::hipparchus::analysis::MultivariateFunction::initializeClass, ::java::util::Comparator::initializeClass, &a0, &a1, &p1, ::java::util::t_Comparator::parameters_))
              {
                OBJ_CALL(self->object.iterate(a0, a1));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(MultiDirectionalSimplex), (PyObject *) self, "iterate", args, 2);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/AdamsMoultonIntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *AdamsMoultonIntegratorBuilder::class$ = NULL;
        jmethodID *AdamsMoultonIntegratorBuilder::mids$ = NULL;
        bool AdamsMoultonIntegratorBuilder::live$ = false;

        jclass AdamsMoultonIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AdamsMoultonIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c4eb928bd0dae600] = env->getMethodID(cls, "<init>", "(IDDD)V");
            mids$[mid_buildIntegrator_f50d555477b898d8] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsMoultonIntegratorBuilder::AdamsMoultonIntegratorBuilder(jint a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c4eb928bd0dae600, a0, a1, a2, a3)) {}

        ::org::hipparchus::ode::AbstractIntegrator AdamsMoultonIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_f50d555477b898d8], a0.this$, a1.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        static PyObject *t_AdamsMoultonIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsMoultonIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdamsMoultonIntegratorBuilder_init_(t_AdamsMoultonIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdamsMoultonIntegratorBuilder_buildIntegrator(t_AdamsMoultonIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_AdamsMoultonIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_AdamsMoultonIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsMoultonIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsMoultonIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsMoultonIntegratorBuilder)[] = {
          { Py_tp_methods, t_AdamsMoultonIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_AdamsMoultonIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsMoultonIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdamsMoultonIntegratorBuilder, t_AdamsMoultonIntegratorBuilder, AdamsMoultonIntegratorBuilder);

        void t_AdamsMoultonIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsMoultonIntegratorBuilder), &PY_TYPE_DEF(AdamsMoultonIntegratorBuilder), module, "AdamsMoultonIntegratorBuilder", 0);
        }

        void t_AdamsMoultonIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonIntegratorBuilder), "class_", make_descriptor(AdamsMoultonIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonIntegratorBuilder), "wrapfn_", make_descriptor(t_AdamsMoultonIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsMoultonIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsMoultonIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_AdamsMoultonIntegratorBuilder::wrap_Object(AdamsMoultonIntegratorBuilder(((t_AdamsMoultonIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AdamsMoultonIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsMoultonIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdamsMoultonIntegratorBuilder_init_(t_AdamsMoultonIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          AdamsMoultonIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "IDDD", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = AdamsMoultonIntegratorBuilder(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AdamsMoultonIntegratorBuilder_buildIntegrator(t_AdamsMoultonIntegratorBuilder *self, PyObject *args)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::orbits::OrbitType a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::ode::AbstractIntegrator result((jobject) NULL);

          if (!parseArgs(args, "kK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1));
            return ::org::hipparchus::ode::t_AbstractIntegrator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "buildIntegrator", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/MultiSatFixedStepHandler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *MultiSatFixedStepHandler::class$ = NULL;
        jmethodID *MultiSatFixedStepHandler::mids$ = NULL;
        bool MultiSatFixedStepHandler::live$ = false;

        jclass MultiSatFixedStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/MultiSatFixedStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finish_4ccaedadb068bdeb] = env->getMethodID(cls, "finish", "(Ljava/util/List;)V");
            mids$[mid_handleStep_4ccaedadb068bdeb] = env->getMethodID(cls, "handleStep", "(Ljava/util/List;)V");
            mids$[mid_init_fefad6c1f262d1e2] = env->getMethodID(cls, "init", "(Ljava/util/List;Lorg/orekit/time/AbsoluteDate;D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void MultiSatFixedStepHandler::finish(const ::java::util::List & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_4ccaedadb068bdeb], a0.this$);
        }

        void MultiSatFixedStepHandler::handleStep(const ::java::util::List & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_4ccaedadb068bdeb], a0.this$);
        }

        void MultiSatFixedStepHandler::init(const ::java::util::List & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
        {
          env->callVoidMethod(this$, mids$[mid_init_fefad6c1f262d1e2], a0.this$, a1.this$, a2);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {
        static PyObject *t_MultiSatFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultiSatFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultiSatFixedStepHandler_finish(t_MultiSatFixedStepHandler *self, PyObject *arg);
        static PyObject *t_MultiSatFixedStepHandler_handleStep(t_MultiSatFixedStepHandler *self, PyObject *arg);
        static PyObject *t_MultiSatFixedStepHandler_init(t_MultiSatFixedStepHandler *self, PyObject *args);

        static PyMethodDef t_MultiSatFixedStepHandler__methods_[] = {
          DECLARE_METHOD(t_MultiSatFixedStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultiSatFixedStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultiSatFixedStepHandler, finish, METH_O),
          DECLARE_METHOD(t_MultiSatFixedStepHandler, handleStep, METH_O),
          DECLARE_METHOD(t_MultiSatFixedStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultiSatFixedStepHandler)[] = {
          { Py_tp_methods, t_MultiSatFixedStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultiSatFixedStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MultiSatFixedStepHandler, t_MultiSatFixedStepHandler, MultiSatFixedStepHandler);

        void t_MultiSatFixedStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(MultiSatFixedStepHandler), &PY_TYPE_DEF(MultiSatFixedStepHandler), module, "MultiSatFixedStepHandler", 0);
        }

        void t_MultiSatFixedStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiSatFixedStepHandler), "class_", make_descriptor(MultiSatFixedStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiSatFixedStepHandler), "wrapfn_", make_descriptor(t_MultiSatFixedStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiSatFixedStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultiSatFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultiSatFixedStepHandler::initializeClass, 1)))
            return NULL;
          return t_MultiSatFixedStepHandler::wrap_Object(MultiSatFixedStepHandler(((t_MultiSatFixedStepHandler *) arg)->object.this$));
        }
        static PyObject *t_MultiSatFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultiSatFixedStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MultiSatFixedStepHandler_finish(t_MultiSatFixedStepHandler *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_MultiSatFixedStepHandler_handleStep(t_MultiSatFixedStepHandler *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_MultiSatFixedStepHandler_init(t_MultiSatFixedStepHandler *self, PyObject *args)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          jdouble a2;

          if (!parseArgs(args, "KkD", ::java::util::List::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
          {
            OBJ_CALL(self->object.init(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/TriangularDistribution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *TriangularDistribution::class$ = NULL;
        jmethodID *TriangularDistribution::mids$ = NULL;
        bool TriangularDistribution::live$ = false;

        jclass TriangularDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/TriangularDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_cumulativeProbability_7e960cd6eee376d8] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_7e960cd6eee376d8] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getMode_557b8123390d8d0c] = env->getMethodID(cls, "getMode", "()D");
            mids$[mid_getNumericalMean_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_7e960cd6eee376d8] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_89b302893bdbe1f1] = env->getMethodID(cls, "isSupportConnected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TriangularDistribution::TriangularDistribution(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}

        jdouble TriangularDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_7e960cd6eee376d8], a0);
        }

        jdouble TriangularDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_7e960cd6eee376d8], a0);
        }

        jdouble TriangularDistribution::getMode() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMode_557b8123390d8d0c]);
        }

        jdouble TriangularDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_557b8123390d8d0c]);
        }

        jdouble TriangularDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_557b8123390d8d0c]);
        }

        jdouble TriangularDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_557b8123390d8d0c]);
        }

        jdouble TriangularDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_557b8123390d8d0c]);
        }

        jdouble TriangularDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_7e960cd6eee376d8], a0);
        }

        jboolean TriangularDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_89b302893bdbe1f1]);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {
        static PyObject *t_TriangularDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TriangularDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TriangularDistribution_init_(t_TriangularDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TriangularDistribution_cumulativeProbability(t_TriangularDistribution *self, PyObject *args);
        static PyObject *t_TriangularDistribution_density(t_TriangularDistribution *self, PyObject *args);
        static PyObject *t_TriangularDistribution_getMode(t_TriangularDistribution *self);
        static PyObject *t_TriangularDistribution_getNumericalMean(t_TriangularDistribution *self, PyObject *args);
        static PyObject *t_TriangularDistribution_getNumericalVariance(t_TriangularDistribution *self, PyObject *args);
        static PyObject *t_TriangularDistribution_getSupportLowerBound(t_TriangularDistribution *self, PyObject *args);
        static PyObject *t_TriangularDistribution_getSupportUpperBound(t_TriangularDistribution *self, PyObject *args);
        static PyObject *t_TriangularDistribution_inverseCumulativeProbability(t_TriangularDistribution *self, PyObject *args);
        static PyObject *t_TriangularDistribution_isSupportConnected(t_TriangularDistribution *self, PyObject *args);
        static PyObject *t_TriangularDistribution_get__mode(t_TriangularDistribution *self, void *data);
        static PyObject *t_TriangularDistribution_get__numericalMean(t_TriangularDistribution *self, void *data);
        static PyObject *t_TriangularDistribution_get__numericalVariance(t_TriangularDistribution *self, void *data);
        static PyObject *t_TriangularDistribution_get__supportConnected(t_TriangularDistribution *self, void *data);
        static PyObject *t_TriangularDistribution_get__supportLowerBound(t_TriangularDistribution *self, void *data);
        static PyObject *t_TriangularDistribution_get__supportUpperBound(t_TriangularDistribution *self, void *data);
        static PyGetSetDef t_TriangularDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_TriangularDistribution, mode),
          DECLARE_GET_FIELD(t_TriangularDistribution, numericalMean),
          DECLARE_GET_FIELD(t_TriangularDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_TriangularDistribution, supportConnected),
          DECLARE_GET_FIELD(t_TriangularDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_TriangularDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TriangularDistribution__methods_[] = {
          DECLARE_METHOD(t_TriangularDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TriangularDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TriangularDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_TriangularDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_TriangularDistribution, getMode, METH_NOARGS),
          DECLARE_METHOD(t_TriangularDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_TriangularDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_TriangularDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_TriangularDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_TriangularDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_TriangularDistribution, isSupportConnected, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TriangularDistribution)[] = {
          { Py_tp_methods, t_TriangularDistribution__methods_ },
          { Py_tp_init, (void *) t_TriangularDistribution_init_ },
          { Py_tp_getset, t_TriangularDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TriangularDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(TriangularDistribution, t_TriangularDistribution, TriangularDistribution);

        void t_TriangularDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(TriangularDistribution), &PY_TYPE_DEF(TriangularDistribution), module, "TriangularDistribution", 0);
        }

        void t_TriangularDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TriangularDistribution), "class_", make_descriptor(TriangularDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TriangularDistribution), "wrapfn_", make_descriptor(t_TriangularDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TriangularDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TriangularDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TriangularDistribution::initializeClass, 1)))
            return NULL;
          return t_TriangularDistribution::wrap_Object(TriangularDistribution(((t_TriangularDistribution *) arg)->object.this$));
        }
        static PyObject *t_TriangularDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TriangularDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TriangularDistribution_init_(t_TriangularDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          TriangularDistribution object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = TriangularDistribution(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_TriangularDistribution_cumulativeProbability(t_TriangularDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TriangularDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_TriangularDistribution_density(t_TriangularDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TriangularDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_TriangularDistribution_getMode(t_TriangularDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMode());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_TriangularDistribution_getNumericalMean(t_TriangularDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TriangularDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_TriangularDistribution_getNumericalVariance(t_TriangularDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TriangularDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_TriangularDistribution_getSupportLowerBound(t_TriangularDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TriangularDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_TriangularDistribution_getSupportUpperBound(t_TriangularDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TriangularDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_TriangularDistribution_inverseCumulativeProbability(t_TriangularDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TriangularDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_TriangularDistribution_isSupportConnected(t_TriangularDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(TriangularDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_TriangularDistribution_get__mode(t_TriangularDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMode());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_TriangularDistribution_get__numericalMean(t_TriangularDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_TriangularDistribution_get__numericalVariance(t_TriangularDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_TriangularDistribution_get__supportConnected(t_TriangularDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_TriangularDistribution_get__supportLowerBound(t_TriangularDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_TriangularDistribution_get__supportUpperBound(t_TriangularDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/util/Map.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *XmlTokenBuilder::class$ = NULL;
            jmethodID *XmlTokenBuilder::mids$ = NULL;
            bool XmlTokenBuilder::live$ = false;

            jclass XmlTokenBuilder::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder");

                mids$ = new jmethodID[max_mid];
                mids$[mid_buildTokens_5a8e94497b45a4c0] = env->getMethodID(cls, "buildTokens", "(ZZLjava/lang/String;Ljava/lang/String;Ljava/util/Map;ILjava/lang/String;)Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::util::List XmlTokenBuilder::buildTokens(jboolean a0, jboolean a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::util::Map & a4, jint a5, const ::java::lang::String & a6) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_buildTokens_5a8e94497b45a4c0], a0, a1, a2.this$, a3.this$, a4.this$, a5, a6.this$));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            static PyObject *t_XmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XmlTokenBuilder_buildTokens(t_XmlTokenBuilder *self, PyObject *args);

            static PyMethodDef t_XmlTokenBuilder__methods_[] = {
              DECLARE_METHOD(t_XmlTokenBuilder, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XmlTokenBuilder, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XmlTokenBuilder, buildTokens, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(XmlTokenBuilder)[] = {
              { Py_tp_methods, t_XmlTokenBuilder__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(XmlTokenBuilder)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(XmlTokenBuilder, t_XmlTokenBuilder, XmlTokenBuilder);

            void t_XmlTokenBuilder::install(PyObject *module)
            {
              installType(&PY_TYPE(XmlTokenBuilder), &PY_TYPE_DEF(XmlTokenBuilder), module, "XmlTokenBuilder", 0);
            }

            void t_XmlTokenBuilder::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlTokenBuilder), "class_", make_descriptor(XmlTokenBuilder::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlTokenBuilder), "wrapfn_", make_descriptor(t_XmlTokenBuilder::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlTokenBuilder), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_XmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, XmlTokenBuilder::initializeClass, 1)))
                return NULL;
              return t_XmlTokenBuilder::wrap_Object(XmlTokenBuilder(((t_XmlTokenBuilder *) arg)->object.this$));
            }
            static PyObject *t_XmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, XmlTokenBuilder::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_XmlTokenBuilder_buildTokens(t_XmlTokenBuilder *self, PyObject *args)
            {
              jboolean a0;
              jboolean a1;
              ::java::lang::String a2((jobject) NULL);
              ::java::lang::String a3((jobject) NULL);
              ::java::util::Map a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              ::java::lang::String a6((jobject) NULL);
              ::java::util::List result((jobject) NULL);

              if (!parseArgs(args, "ZZssKIs", ::java::util::Map::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_Map::parameters_, &a5, &a6))
              {
                OBJ_CALL(result = self->object.buildTokens(a0, a1, a2, a3, a4, a5, a6));
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(ParseToken));
              }

              PyErr_SetArgsError((PyObject *) self, "buildTokens", args);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/partitioning/Embedding.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/oned/Vector1D.h"
#include "org/hipparchus/geometry/euclidean/threed/SubLine.h"
#include "org/hipparchus/geometry/Vector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *Line::class$ = NULL;
          jmethodID *Line::mids$ = NULL;
          bool Line::live$ = false;

          jclass Line::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/Line");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8a3775c012d81228] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
              mids$[mid_closestPoint_915d07ea0c621755] = env->getMethodID(cls, "closestPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_contains_7ccf3b3f40d5fcd3] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Z");
              mids$[mid_distance_4aa316f686c1a1eb] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/Line;)D");
              mids$[mid_distance_8ddca7bd73e586da] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_fromDirection_d19a50c1011094cf] = env->getStaticMethodID(cls, "fromDirection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)Lorg/hipparchus/geometry/euclidean/threed/Line;");
              mids$[mid_getAbscissa_8ddca7bd73e586da] = env->getMethodID(cls, "getAbscissa", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_getDirection_f88961cca75a2c0a] = env->getMethodID(cls, "getDirection", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getOrigin_f88961cca75a2c0a] = env->getMethodID(cls, "getOrigin", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getTolerance_557b8123390d8d0c] = env->getMethodID(cls, "getTolerance", "()D");
              mids$[mid_intersection_915d07ea0c621755] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/euclidean/threed/Line;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_isSimilarTo_78ea6c7fe91873db] = env->getMethodID(cls, "isSimilarTo", "(Lorg/hipparchus/geometry/euclidean/threed/Line;)Z");
              mids$[mid_pointAt_20de5f9d51c6611f] = env->getMethodID(cls, "pointAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_reset_be9548a8a583a03d] = env->getMethodID(cls, "reset", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_revert_50dd992767fffc25] = env->getMethodID(cls, "revert", "()Lorg/hipparchus/geometry/euclidean/threed/Line;");
              mids$[mid_toSpace_78d94b5fd2b1ad0c] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_toSpace_5d6b94fad5d111c4] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_toSubSpace_42ff1f7fd4bd45c4] = env->getMethodID(cls, "toSubSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_toSubSpace_be3d5e0f525cd980] = env->getMethodID(cls, "toSubSpace", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_wholeLine_40fe3d99fdc690cd] = env->getMethodID(cls, "wholeLine", "()Lorg/hipparchus/geometry/euclidean/threed/SubLine;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Line::Line(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8a3775c012d81228, a0.this$, a1.this$, a2)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Line::closestPoint(const Line & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_closestPoint_915d07ea0c621755], a0.this$));
          }

          jboolean Line::contains(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_contains_7ccf3b3f40d5fcd3], a0.this$);
          }

          jdouble Line::distance(const Line & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_4aa316f686c1a1eb], a0.this$);
          }

          jdouble Line::distance(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_8ddca7bd73e586da], a0.this$);
          }

          Line Line::fromDirection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2)
          {
            jclass cls = env->getClass(initializeClass);
            return Line(env->callStaticObjectMethod(cls, mids$[mid_fromDirection_d19a50c1011094cf], a0.this$, a1.this$, a2));
          }

          jdouble Line::getAbscissa(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAbscissa_8ddca7bd73e586da], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Line::getDirection() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDirection_f88961cca75a2c0a]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Line::getOrigin() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getOrigin_f88961cca75a2c0a]));
          }

          jdouble Line::getTolerance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTolerance_557b8123390d8d0c]);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Line::intersection(const Line & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_intersection_915d07ea0c621755], a0.this$));
          }

          jboolean Line::isSimilarTo(const Line & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isSimilarTo_78ea6c7fe91873db], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Line::pointAt(jdouble a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_pointAt_20de5f9d51c6611f], a0));
          }

          void Line::reset(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_reset_be9548a8a583a03d], a0.this$, a1.this$);
          }

          Line Line::revert() const
          {
            return Line(env->callObjectMethod(this$, mids$[mid_revert_50dd992767fffc25]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Line::toSpace(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_toSpace_78d94b5fd2b1ad0c], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Line::toSpace(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_toSpace_5d6b94fad5d111c4], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::oned::Vector1D Line::toSubSpace(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::oned::Vector1D(env->callObjectMethod(this$, mids$[mid_toSubSpace_42ff1f7fd4bd45c4], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::oned::Vector1D Line::toSubSpace(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::oned::Vector1D(env->callObjectMethod(this$, mids$[mid_toSubSpace_be3d5e0f525cd980], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::SubLine Line::wholeLine() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::SubLine(env->callObjectMethod(this$, mids$[mid_wholeLine_40fe3d99fdc690cd]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          static PyObject *t_Line_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Line_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Line_init_(t_Line *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Line_closestPoint(t_Line *self, PyObject *arg);
          static PyObject *t_Line_contains(t_Line *self, PyObject *arg);
          static PyObject *t_Line_distance(t_Line *self, PyObject *args);
          static PyObject *t_Line_fromDirection(PyTypeObject *type, PyObject *args);
          static PyObject *t_Line_getAbscissa(t_Line *self, PyObject *arg);
          static PyObject *t_Line_getDirection(t_Line *self);
          static PyObject *t_Line_getOrigin(t_Line *self);
          static PyObject *t_Line_getTolerance(t_Line *self);
          static PyObject *t_Line_intersection(t_Line *self, PyObject *arg);
          static PyObject *t_Line_isSimilarTo(t_Line *self, PyObject *arg);
          static PyObject *t_Line_pointAt(t_Line *self, PyObject *arg);
          static PyObject *t_Line_reset(t_Line *self, PyObject *args);
          static PyObject *t_Line_revert(t_Line *self);
          static PyObject *t_Line_toSpace(t_Line *self, PyObject *args);
          static PyObject *t_Line_toSubSpace(t_Line *self, PyObject *args);
          static PyObject *t_Line_wholeLine(t_Line *self);
          static PyObject *t_Line_get__direction(t_Line *self, void *data);
          static PyObject *t_Line_get__origin(t_Line *self, void *data);
          static PyObject *t_Line_get__tolerance(t_Line *self, void *data);
          static PyGetSetDef t_Line__fields_[] = {
            DECLARE_GET_FIELD(t_Line, direction),
            DECLARE_GET_FIELD(t_Line, origin),
            DECLARE_GET_FIELD(t_Line, tolerance),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Line__methods_[] = {
            DECLARE_METHOD(t_Line, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Line, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Line, closestPoint, METH_O),
            DECLARE_METHOD(t_Line, contains, METH_O),
            DECLARE_METHOD(t_Line, distance, METH_VARARGS),
            DECLARE_METHOD(t_Line, fromDirection, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Line, getAbscissa, METH_O),
            DECLARE_METHOD(t_Line, getDirection, METH_NOARGS),
            DECLARE_METHOD(t_Line, getOrigin, METH_NOARGS),
            DECLARE_METHOD(t_Line, getTolerance, METH_NOARGS),
            DECLARE_METHOD(t_Line, intersection, METH_O),
            DECLARE_METHOD(t_Line, isSimilarTo, METH_O),
            DECLARE_METHOD(t_Line, pointAt, METH_O),
            DECLARE_METHOD(t_Line, reset, METH_VARARGS),
            DECLARE_METHOD(t_Line, revert, METH_NOARGS),
            DECLARE_METHOD(t_Line, toSpace, METH_VARARGS),
            DECLARE_METHOD(t_Line, toSubSpace, METH_VARARGS),
            DECLARE_METHOD(t_Line, wholeLine, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Line)[] = {
            { Py_tp_methods, t_Line__methods_ },
            { Py_tp_init, (void *) t_Line_init_ },
            { Py_tp_getset, t_Line__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Line)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Line, t_Line, Line);

          void t_Line::install(PyObject *module)
          {
            installType(&PY_TYPE(Line), &PY_TYPE_DEF(Line), module, "Line", 0);
          }

          void t_Line::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Line), "class_", make_descriptor(Line::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Line), "wrapfn_", make_descriptor(t_Line::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Line), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Line_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Line::initializeClass, 1)))
              return NULL;
            return t_Line::wrap_Object(Line(((t_Line *) arg)->object.this$));
          }
          static PyObject *t_Line_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Line::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Line_init_(t_Line *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            jdouble a2;
            Line object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Line(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Line_closestPoint(t_Line *self, PyObject *arg)
          {
            Line a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArg(arg, "k", Line::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.closestPoint(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "closestPoint", arg);
            return NULL;
          }

          static PyObject *t_Line_contains(t_Line *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.contains(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "contains", arg);
            return NULL;
          }

          static PyObject *t_Line_distance(t_Line *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                Line a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", Line::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distance", args);
            return NULL;
          }

          static PyObject *t_Line_fromDirection(PyTypeObject *type, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            jdouble a2;
            Line result((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Line::fromDirection(a0, a1, a2));
              return t_Line::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "fromDirection", args);
            return NULL;
          }

          static PyObject *t_Line_getAbscissa(t_Line *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getAbscissa(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getAbscissa", arg);
            return NULL;
          }

          static PyObject *t_Line_getDirection(t_Line *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getDirection());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Line_getOrigin(t_Line *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getOrigin());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Line_getTolerance(t_Line *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTolerance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Line_intersection(t_Line *self, PyObject *arg)
          {
            Line a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArg(arg, "k", Line::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.intersection(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "intersection", arg);
            return NULL;
          }

          static PyObject *t_Line_isSimilarTo(t_Line *self, PyObject *arg)
          {
            Line a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", Line::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.isSimilarTo(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "isSimilarTo", arg);
            return NULL;
          }

          static PyObject *t_Line_pointAt(t_Line *self, PyObject *arg)
          {
            jdouble a0;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.pointAt(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "pointAt", arg);
            return NULL;
          }

          static PyObject *t_Line_reset(t_Line *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.reset(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "reset", args);
            return NULL;
          }

          static PyObject *t_Line_revert(t_Line *self)
          {
            Line result((jobject) NULL);
            OBJ_CALL(result = self->object.revert());
            return t_Line::wrap_Object(result);
          }

          static PyObject *t_Line_toSpace(t_Line *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.toSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.toSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "toSpace", args);
            return NULL;
          }

          static PyObject *t_Line_toSubSpace(t_Line *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::oned::Vector1D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.toSubSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::oned::t_Vector1D::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::oned::Vector1D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.toSubSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::oned::t_Vector1D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "toSubSpace", args);
            return NULL;
          }

          static PyObject *t_Line_wholeLine(t_Line *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::SubLine result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeLine());
            return ::org::hipparchus::geometry::euclidean::threed::t_SubLine::wrap_Object(result);
          }

          static PyObject *t_Line_get__direction(t_Line *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getDirection());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Line_get__origin(t_Line *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getOrigin());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Line_get__tolerance(t_Line *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTolerance());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/Binary64.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/util/Binary64.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Binary64::class$ = NULL;
      jmethodID *Binary64::mids$ = NULL;
      bool Binary64::live$ = false;
      Binary64 *Binary64::NAN$ = NULL;
      Binary64 *Binary64::NEGATIVE_INFINITY = NULL;
      Binary64 *Binary64::ONE = NULL;
      Binary64 *Binary64::PI = NULL;
      Binary64 *Binary64::POSITIVE_INFINITY = NULL;
      Binary64 *Binary64::ZERO = NULL;

      jclass Binary64::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Binary64");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_abs_2ca6539856dec86f] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_acos_2ca6539856dec86f] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_acosh_2ca6539856dec86f] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_add_ef5ca0a4483420e5] = env->getMethodID(cls, "add", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_add_ab2c7224a6bdab9c] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/util/Binary64;");
          mids$[mid_asin_2ca6539856dec86f] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_asinh_2ca6539856dec86f] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_atan_2ca6539856dec86f] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_atan2_ef5ca0a4483420e5] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_atanh_2ca6539856dec86f] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_byteValue_acadfed42a0dbd0d] = env->getMethodID(cls, "byteValue", "()B");
          mids$[mid_cbrt_2ca6539856dec86f] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_ceil_2ca6539856dec86f] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_compareTo_67a4d668525f869a] = env->getMethodID(cls, "compareTo", "(Lorg/hipparchus/util/Binary64;)I");
          mids$[mid_copySign_ef5ca0a4483420e5] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_copySign_ab2c7224a6bdab9c] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/util/Binary64;");
          mids$[mid_cos_2ca6539856dec86f] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_cosh_2ca6539856dec86f] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_divide_ef5ca0a4483420e5] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_divide_ab2c7224a6bdab9c] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/util/Binary64;");
          mids$[mid_doubleValue_557b8123390d8d0c] = env->getMethodID(cls, "doubleValue", "()D");
          mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_exp_2ca6539856dec86f] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_expm1_2ca6539856dec86f] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_floatValue_04fe014f7609dc26] = env->getMethodID(cls, "floatValue", "()F");
          mids$[mid_floor_2ca6539856dec86f] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_getField_20f98801541dcec1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getPi_2ca6539856dec86f] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_getReal_557b8123390d8d0c] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_hypot_ef5ca0a4483420e5] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_intValue_412668abc8d889e9] = env->getMethodID(cls, "intValue", "()I");
          mids$[mid_isInfinite_89b302893bdbe1f1] = env->getMethodID(cls, "isInfinite", "()Z");
          mids$[mid_isNaN_89b302893bdbe1f1] = env->getMethodID(cls, "isNaN", "()Z");
          mids$[mid_isZero_89b302893bdbe1f1] = env->getMethodID(cls, "isZero", "()Z");
          mids$[mid_linearCombination_7ab285ad5966413b] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_linearCombination_39e6d185b6b6b86d] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/util/Binary64;[Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_linearCombination_9c881be78a00ab28] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_linearCombination_0514bd18ee18d65e] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/Binary64;DLorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_linearCombination_d1e60602e804c7c6] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_linearCombination_9aaf381aef8ad32b] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/Binary64;DLorg/hipparchus/util/Binary64;DLorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_linearCombination_8e3245438f13438c] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_linearCombination_28cb0ce4595b180a] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/Binary64;DLorg/hipparchus/util/Binary64;DLorg/hipparchus/util/Binary64;DLorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_log_2ca6539856dec86f] = env->getMethodID(cls, "log", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_log10_2ca6539856dec86f] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_log1p_2ca6539856dec86f] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_longValue_9e26256fb0d384a2] = env->getMethodID(cls, "longValue", "()J");
          mids$[mid_multiply_ef5ca0a4483420e5] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_multiply_ab2c7224a6bdab9c] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/util/Binary64;");
          mids$[mid_multiply_4168d4dc99739cfe] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/util/Binary64;");
          mids$[mid_negate_2ca6539856dec86f] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_newInstance_ab2c7224a6bdab9c] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/util/Binary64;");
          mids$[mid_pow_ef5ca0a4483420e5] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_pow_ab2c7224a6bdab9c] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/util/Binary64;");
          mids$[mid_pow_4168d4dc99739cfe] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/util/Binary64;");
          mids$[mid_reciprocal_2ca6539856dec86f] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_remainder_ef5ca0a4483420e5] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_remainder_ab2c7224a6bdab9c] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/util/Binary64;");
          mids$[mid_rint_2ca6539856dec86f] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_rootN_4168d4dc99739cfe] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/util/Binary64;");
          mids$[mid_scalb_4168d4dc99739cfe] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/util/Binary64;");
          mids$[mid_shortValue_2554afc868a7ba2a] = env->getMethodID(cls, "shortValue", "()S");
          mids$[mid_sign_2ca6539856dec86f] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_sin_2ca6539856dec86f] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_sinCos_5efdd92d175db117] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
          mids$[mid_sinh_2ca6539856dec86f] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_sinhCosh_e5a948cfec461975] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
          mids$[mid_sqrt_2ca6539856dec86f] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_subtract_ef5ca0a4483420e5] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_subtract_ab2c7224a6bdab9c] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/util/Binary64;");
          mids$[mid_tan_2ca6539856dec86f] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_tanh_2ca6539856dec86f] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_toDegrees_2ca6539856dec86f] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_toRadians_2ca6539856dec86f] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_ulp_2ca6539856dec86f] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/util/Binary64;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          NAN$ = new Binary64(env->getStaticObjectField(cls, "NAN", "Lorg/hipparchus/util/Binary64;"));
          NEGATIVE_INFINITY = new Binary64(env->getStaticObjectField(cls, "NEGATIVE_INFINITY", "Lorg/hipparchus/util/Binary64;"));
          ONE = new Binary64(env->getStaticObjectField(cls, "ONE", "Lorg/hipparchus/util/Binary64;"));
          PI = new Binary64(env->getStaticObjectField(cls, "PI", "Lorg/hipparchus/util/Binary64;"));
          POSITIVE_INFINITY = new Binary64(env->getStaticObjectField(cls, "POSITIVE_INFINITY", "Lorg/hipparchus/util/Binary64;"));
          ZERO = new Binary64(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/util/Binary64;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Binary64::Binary64(jdouble a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

      Binary64 Binary64::abs() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_abs_2ca6539856dec86f]));
      }

      Binary64 Binary64::acos() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_acos_2ca6539856dec86f]));
      }

      Binary64 Binary64::acosh() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_acosh_2ca6539856dec86f]));
      }

      Binary64 Binary64::add(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_add_ef5ca0a4483420e5], a0.this$));
      }

      Binary64 Binary64::add(jdouble a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_add_ab2c7224a6bdab9c], a0));
      }

      Binary64 Binary64::asin() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_asin_2ca6539856dec86f]));
      }

      Binary64 Binary64::asinh() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_asinh_2ca6539856dec86f]));
      }

      Binary64 Binary64::atan() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_atan_2ca6539856dec86f]));
      }

      Binary64 Binary64::atan2(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_atan2_ef5ca0a4483420e5], a0.this$));
      }

      Binary64 Binary64::atanh() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_atanh_2ca6539856dec86f]));
      }

      jbyte Binary64::byteValue() const
      {
        return env->callByteMethod(this$, mids$[mid_byteValue_acadfed42a0dbd0d]);
      }

      Binary64 Binary64::cbrt() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_cbrt_2ca6539856dec86f]));
      }

      Binary64 Binary64::ceil() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_ceil_2ca6539856dec86f]));
      }

      jint Binary64::compareTo(const Binary64 & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_67a4d668525f869a], a0.this$);
      }

      Binary64 Binary64::copySign(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_copySign_ef5ca0a4483420e5], a0.this$));
      }

      Binary64 Binary64::copySign(jdouble a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_copySign_ab2c7224a6bdab9c], a0));
      }

      Binary64 Binary64::cos() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_cos_2ca6539856dec86f]));
      }

      Binary64 Binary64::cosh() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_cosh_2ca6539856dec86f]));
      }

      Binary64 Binary64::divide(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_divide_ef5ca0a4483420e5], a0.this$));
      }

      Binary64 Binary64::divide(jdouble a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_divide_ab2c7224a6bdab9c], a0));
      }

      jdouble Binary64::doubleValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_doubleValue_557b8123390d8d0c]);
      }

      jboolean Binary64::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
      }

      Binary64 Binary64::exp() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_exp_2ca6539856dec86f]));
      }

      Binary64 Binary64::expm1() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_expm1_2ca6539856dec86f]));
      }

      jfloat Binary64::floatValue() const
      {
        return env->callFloatMethod(this$, mids$[mid_floatValue_04fe014f7609dc26]);
      }

      Binary64 Binary64::floor() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_floor_2ca6539856dec86f]));
      }

      ::org::hipparchus::Field Binary64::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_20f98801541dcec1]));
      }

      Binary64 Binary64::getPi() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_getPi_2ca6539856dec86f]));
      }

      jdouble Binary64::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_557b8123390d8d0c]);
      }

      jint Binary64::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
      }

      Binary64 Binary64::hypot(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_hypot_ef5ca0a4483420e5], a0.this$));
      }

      jint Binary64::intValue() const
      {
        return env->callIntMethod(this$, mids$[mid_intValue_412668abc8d889e9]);
      }

      jboolean Binary64::isInfinite() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInfinite_89b302893bdbe1f1]);
      }

      jboolean Binary64::isNaN() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNaN_89b302893bdbe1f1]);
      }

      jboolean Binary64::isZero() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isZero_89b302893bdbe1f1]);
      }

      Binary64 Binary64::linearCombination(const JArray< jdouble > & a0, const JArray< Binary64 > & a1) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_linearCombination_7ab285ad5966413b], a0.this$, a1.this$));
      }

      Binary64 Binary64::linearCombination(const JArray< Binary64 > & a0, const JArray< Binary64 > & a1) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_linearCombination_39e6d185b6b6b86d], a0.this$, a1.this$));
      }

      Binary64 Binary64::linearCombination(const Binary64 & a0, const Binary64 & a1, const Binary64 & a2, const Binary64 & a3) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_linearCombination_9c881be78a00ab28], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      Binary64 Binary64::linearCombination(jdouble a0, const Binary64 & a1, jdouble a2, const Binary64 & a3) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_linearCombination_0514bd18ee18d65e], a0, a1.this$, a2, a3.this$));
      }

      Binary64 Binary64::linearCombination(const Binary64 & a0, const Binary64 & a1, const Binary64 & a2, const Binary64 & a3, const Binary64 & a4, const Binary64 & a5) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_linearCombination_d1e60602e804c7c6], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
      }

      Binary64 Binary64::linearCombination(jdouble a0, const Binary64 & a1, jdouble a2, const Binary64 & a3, jdouble a4, const Binary64 & a5) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_linearCombination_9aaf381aef8ad32b], a0, a1.this$, a2, a3.this$, a4, a5.this$));
      }

      Binary64 Binary64::linearCombination(const Binary64 & a0, const Binary64 & a1, const Binary64 & a2, const Binary64 & a3, const Binary64 & a4, const Binary64 & a5, const Binary64 & a6, const Binary64 & a7) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_linearCombination_8e3245438f13438c], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
      }

      Binary64 Binary64::linearCombination(jdouble a0, const Binary64 & a1, jdouble a2, const Binary64 & a3, jdouble a4, const Binary64 & a5, jdouble a6, const Binary64 & a7) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_linearCombination_28cb0ce4595b180a], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
      }

      Binary64 Binary64::log() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_log_2ca6539856dec86f]));
      }

      Binary64 Binary64::log10() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_log10_2ca6539856dec86f]));
      }

      Binary64 Binary64::log1p() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_log1p_2ca6539856dec86f]));
      }

      jlong Binary64::longValue() const
      {
        return env->callLongMethod(this$, mids$[mid_longValue_9e26256fb0d384a2]);
      }

      Binary64 Binary64::multiply(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_multiply_ef5ca0a4483420e5], a0.this$));
      }

      Binary64 Binary64::multiply(jdouble a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_multiply_ab2c7224a6bdab9c], a0));
      }

      Binary64 Binary64::multiply(jint a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_multiply_4168d4dc99739cfe], a0));
      }

      Binary64 Binary64::negate() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_negate_2ca6539856dec86f]));
      }

      Binary64 Binary64::newInstance(jdouble a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_newInstance_ab2c7224a6bdab9c], a0));
      }

      Binary64 Binary64::pow(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_pow_ef5ca0a4483420e5], a0.this$));
      }

      Binary64 Binary64::pow(jdouble a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_pow_ab2c7224a6bdab9c], a0));
      }

      Binary64 Binary64::pow(jint a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_pow_4168d4dc99739cfe], a0));
      }

      Binary64 Binary64::reciprocal() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_reciprocal_2ca6539856dec86f]));
      }

      Binary64 Binary64::remainder(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_remainder_ef5ca0a4483420e5], a0.this$));
      }

      Binary64 Binary64::remainder(jdouble a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_remainder_ab2c7224a6bdab9c], a0));
      }

      Binary64 Binary64::rint() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_rint_2ca6539856dec86f]));
      }

      Binary64 Binary64::rootN(jint a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_rootN_4168d4dc99739cfe], a0));
      }

      Binary64 Binary64::scalb(jint a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_scalb_4168d4dc99739cfe], a0));
      }

      jshort Binary64::shortValue() const
      {
        return env->callShortMethod(this$, mids$[mid_shortValue_2554afc868a7ba2a]);
      }

      Binary64 Binary64::sign() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_sign_2ca6539856dec86f]));
      }

      Binary64 Binary64::sin() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_sin_2ca6539856dec86f]));
      }

      ::org::hipparchus::util::FieldSinCos Binary64::sinCos() const
      {
        return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_5efdd92d175db117]));
      }

      Binary64 Binary64::sinh() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_sinh_2ca6539856dec86f]));
      }

      ::org::hipparchus::util::FieldSinhCosh Binary64::sinhCosh() const
      {
        return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_e5a948cfec461975]));
      }

      Binary64 Binary64::sqrt() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_sqrt_2ca6539856dec86f]));
      }

      Binary64 Binary64::subtract(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_subtract_ef5ca0a4483420e5], a0.this$));
      }

      Binary64 Binary64::subtract(jdouble a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_subtract_ab2c7224a6bdab9c], a0));
      }

      Binary64 Binary64::tan() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_tan_2ca6539856dec86f]));
      }

      Binary64 Binary64::tanh() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_tanh_2ca6539856dec86f]));
      }

      Binary64 Binary64::toDegrees() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_toDegrees_2ca6539856dec86f]));
      }

      Binary64 Binary64::toRadians() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_toRadians_2ca6539856dec86f]));
      }

      ::java::lang::String Binary64::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
      }

      Binary64 Binary64::ulp() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_ulp_2ca6539856dec86f]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_Binary64_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Binary64_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Binary64_init_(t_Binary64 *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Binary64_abs(t_Binary64 *self);
      static PyObject *t_Binary64_acos(t_Binary64 *self);
      static PyObject *t_Binary64_acosh(t_Binary64 *self);
      static PyObject *t_Binary64_add(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_asin(t_Binary64 *self);
      static PyObject *t_Binary64_asinh(t_Binary64 *self);
      static PyObject *t_Binary64_atan(t_Binary64 *self);
      static PyObject *t_Binary64_atan2(t_Binary64 *self, PyObject *arg);
      static PyObject *t_Binary64_atanh(t_Binary64 *self);
      static PyObject *t_Binary64_byteValue(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_cbrt(t_Binary64 *self);
      static PyObject *t_Binary64_ceil(t_Binary64 *self);
      static PyObject *t_Binary64_compareTo(t_Binary64 *self, PyObject *arg);
      static PyObject *t_Binary64_copySign(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_cos(t_Binary64 *self);
      static PyObject *t_Binary64_cosh(t_Binary64 *self);
      static PyObject *t_Binary64_divide(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_doubleValue(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_equals(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_exp(t_Binary64 *self);
      static PyObject *t_Binary64_expm1(t_Binary64 *self);
      static PyObject *t_Binary64_floatValue(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_floor(t_Binary64 *self);
      static PyObject *t_Binary64_getField(t_Binary64 *self);
      static PyObject *t_Binary64_getPi(t_Binary64 *self);
      static PyObject *t_Binary64_getReal(t_Binary64 *self);
      static PyObject *t_Binary64_hashCode(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_hypot(t_Binary64 *self, PyObject *arg);
      static PyObject *t_Binary64_intValue(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_isInfinite(t_Binary64 *self);
      static PyObject *t_Binary64_isNaN(t_Binary64 *self);
      static PyObject *t_Binary64_isZero(t_Binary64 *self);
      static PyObject *t_Binary64_linearCombination(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_log(t_Binary64 *self);
      static PyObject *t_Binary64_log10(t_Binary64 *self);
      static PyObject *t_Binary64_log1p(t_Binary64 *self);
      static PyObject *t_Binary64_longValue(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_multiply(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_negate(t_Binary64 *self);
      static PyObject *t_Binary64_newInstance(t_Binary64 *self, PyObject *arg);
      static PyObject *t_Binary64_pow(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_reciprocal(t_Binary64 *self);
      static PyObject *t_Binary64_remainder(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_rint(t_Binary64 *self);
      static PyObject *t_Binary64_rootN(t_Binary64 *self, PyObject *arg);
      static PyObject *t_Binary64_scalb(t_Binary64 *self, PyObject *arg);
      static PyObject *t_Binary64_shortValue(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_sign(t_Binary64 *self);
      static PyObject *t_Binary64_sin(t_Binary64 *self);
      static PyObject *t_Binary64_sinCos(t_Binary64 *self);
      static PyObject *t_Binary64_sinh(t_Binary64 *self);
      static PyObject *t_Binary64_sinhCosh(t_Binary64 *self);
      static PyObject *t_Binary64_sqrt(t_Binary64 *self);
      static PyObject *t_Binary64_subtract(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_tan(t_Binary64 *self);
      static PyObject *t_Binary64_tanh(t_Binary64 *self);
      static PyObject *t_Binary64_toDegrees(t_Binary64 *self);
      static PyObject *t_Binary64_toRadians(t_Binary64 *self);
      static PyObject *t_Binary64_toString(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_ulp(t_Binary64 *self);
      static PyObject *t_Binary64_get__field(t_Binary64 *self, void *data);
      static PyObject *t_Binary64_get__infinite(t_Binary64 *self, void *data);
      static PyObject *t_Binary64_get__naN(t_Binary64 *self, void *data);
      static PyObject *t_Binary64_get__pi(t_Binary64 *self, void *data);
      static PyObject *t_Binary64_get__real(t_Binary64 *self, void *data);
      static PyObject *t_Binary64_get__zero(t_Binary64 *self, void *data);
      static PyGetSetDef t_Binary64__fields_[] = {
        DECLARE_GET_FIELD(t_Binary64, field),
        DECLARE_GET_FIELD(t_Binary64, infinite),
        DECLARE_GET_FIELD(t_Binary64, naN),
        DECLARE_GET_FIELD(t_Binary64, pi),
        DECLARE_GET_FIELD(t_Binary64, real),
        DECLARE_GET_FIELD(t_Binary64, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Binary64__methods_[] = {
        DECLARE_METHOD(t_Binary64, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Binary64, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Binary64, abs, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, acos, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, acosh, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, add, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, asin, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, asinh, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, atan, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, atan2, METH_O),
        DECLARE_METHOD(t_Binary64, atanh, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, byteValue, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, cbrt, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, ceil, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, compareTo, METH_O),
        DECLARE_METHOD(t_Binary64, copySign, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, cos, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, cosh, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, divide, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, doubleValue, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, equals, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, exp, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, expm1, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, floatValue, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, floor, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, getField, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, getPi, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, getReal, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, hypot, METH_O),
        DECLARE_METHOD(t_Binary64, intValue, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, isInfinite, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, isNaN, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, isZero, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, linearCombination, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, log, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, log10, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, log1p, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, longValue, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, multiply, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, negate, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, newInstance, METH_O),
        DECLARE_METHOD(t_Binary64, pow, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, remainder, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, rint, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, rootN, METH_O),
        DECLARE_METHOD(t_Binary64, scalb, METH_O),
        DECLARE_METHOD(t_Binary64, shortValue, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, sign, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, sin, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, sinCos, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, sinh, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, sinhCosh, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, sqrt, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, subtract, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, tan, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, tanh, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, toDegrees, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, toRadians, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, toString, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, ulp, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Binary64)[] = {
        { Py_tp_methods, t_Binary64__methods_ },
        { Py_tp_init, (void *) t_Binary64_init_ },
        { Py_tp_getset, t_Binary64__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Binary64)[] = {
        &PY_TYPE_DEF(::java::lang::Number),
        NULL
      };

      DEFINE_TYPE(Binary64, t_Binary64, Binary64);

      void t_Binary64::install(PyObject *module)
      {
        installType(&PY_TYPE(Binary64), &PY_TYPE_DEF(Binary64), module, "Binary64", 0);
      }

      void t_Binary64::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "class_", make_descriptor(Binary64::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "wrapfn_", make_descriptor(t_Binary64::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "boxfn_", make_descriptor(boxObject));
        env->getClass(Binary64::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "NAN", make_descriptor(t_Binary64::wrap_Object(*Binary64::NAN$)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "NEGATIVE_INFINITY", make_descriptor(t_Binary64::wrap_Object(*Binary64::NEGATIVE_INFINITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "ONE", make_descriptor(t_Binary64::wrap_Object(*Binary64::ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "PI", make_descriptor(t_Binary64::wrap_Object(*Binary64::PI)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "POSITIVE_INFINITY", make_descriptor(t_Binary64::wrap_Object(*Binary64::POSITIVE_INFINITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "ZERO", make_descriptor(t_Binary64::wrap_Object(*Binary64::ZERO)));
      }

      static PyObject *t_Binary64_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Binary64::initializeClass, 1)))
          return NULL;
        return t_Binary64::wrap_Object(Binary64(((t_Binary64 *) arg)->object.this$));
      }
      static PyObject *t_Binary64_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Binary64::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Binary64_init_(t_Binary64 *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        Binary64 object((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          INT_CALL(object = Binary64(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_Binary64_abs(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.abs());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_acos(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.acos());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_acosh(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.acosh());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_add(t_Binary64 *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Binary64 a0((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "k", Binary64::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_Binary64_asin(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.asin());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_asinh(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.asinh());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_atan(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.atan());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_atan2(t_Binary64 *self, PyObject *arg)
      {
        Binary64 a0((jobject) NULL);
        Binary64 result((jobject) NULL);

        if (!parseArg(arg, "k", Binary64::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.atan2(a0));
          return t_Binary64::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "atan2", arg);
        return NULL;
      }

      static PyObject *t_Binary64_atanh(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.atanh());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_byteValue(t_Binary64 *self, PyObject *args)
      {
        jbyte result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.byteValue());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "byteValue", args, 2);
      }

      static PyObject *t_Binary64_cbrt(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.cbrt());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_ceil(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.ceil());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_compareTo(t_Binary64 *self, PyObject *arg)
      {
        Binary64 a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", Binary64::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_Binary64_copySign(t_Binary64 *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Binary64 a0((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "k", Binary64::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySign", args);
        return NULL;
      }

      static PyObject *t_Binary64_cos(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.cos());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_cosh(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.cosh());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_divide(t_Binary64 *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Binary64 a0((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "k", Binary64::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "divide", args);
        return NULL;
      }

      static PyObject *t_Binary64_doubleValue(t_Binary64 *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.doubleValue());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "doubleValue", args, 2);
      }

      static PyObject *t_Binary64_equals(t_Binary64 *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Binary64_exp(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.exp());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_expm1(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.expm1());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_floatValue(t_Binary64 *self, PyObject *args)
      {
        jfloat result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.floatValue());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "floatValue", args, 2);
      }

      static PyObject *t_Binary64_floor(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.floor());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_getField(t_Binary64 *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(Binary64));
      }

      static PyObject *t_Binary64_getPi(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.getPi());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_getReal(t_Binary64 *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Binary64_hashCode(t_Binary64 *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Binary64_hypot(t_Binary64 *self, PyObject *arg)
      {
        Binary64 a0((jobject) NULL);
        Binary64 result((jobject) NULL);

        if (!parseArg(arg, "k", Binary64::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.hypot(a0));
          return t_Binary64::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "hypot", arg);
        return NULL;
      }

      static PyObject *t_Binary64_intValue(t_Binary64 *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.intValue());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "intValue", args, 2);
      }

      static PyObject *t_Binary64_isInfinite(t_Binary64 *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isInfinite());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Binary64_isNaN(t_Binary64 *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isNaN());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Binary64_isZero(t_Binary64 *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isZero());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Binary64_linearCombination(t_Binary64 *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< Binary64 > a1((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "[D[k", Binary64::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            JArray< Binary64 > a0((jobject) NULL);
            JArray< Binary64 > a1((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "[k[k", Binary64::initializeClass, Binary64::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_Binary64::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            Binary64 a0((jobject) NULL);
            Binary64 a1((jobject) NULL);
            Binary64 a2((jobject) NULL);
            Binary64 a3((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "kkkk", Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 a1((jobject) NULL);
            jdouble a2;
            Binary64 a3((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "DkDk", Binary64::initializeClass, Binary64::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_Binary64::wrap_Object(result);
            }
          }
          break;
         case 6:
          {
            Binary64 a0((jobject) NULL);
            Binary64 a1((jobject) NULL);
            Binary64 a2((jobject) NULL);
            Binary64 a3((jobject) NULL);
            Binary64 a4((jobject) NULL);
            Binary64 a5((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "kkkkkk", Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 a1((jobject) NULL);
            jdouble a2;
            Binary64 a3((jobject) NULL);
            jdouble a4;
            Binary64 a5((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "DkDkDk", Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_Binary64::wrap_Object(result);
            }
          }
          break;
         case 8:
          {
            Binary64 a0((jobject) NULL);
            Binary64 a1((jobject) NULL);
            Binary64 a2((jobject) NULL);
            Binary64 a3((jobject) NULL);
            Binary64 a4((jobject) NULL);
            Binary64 a5((jobject) NULL);
            Binary64 a6((jobject) NULL);
            Binary64 a7((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "kkkkkkkk", Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 a1((jobject) NULL);
            jdouble a2;
            Binary64 a3((jobject) NULL);
            jdouble a4;
            Binary64 a5((jobject) NULL);
            jdouble a6;
            Binary64 a7((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "DkDkDkDk", Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_Binary64::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
        return NULL;
      }

      static PyObject *t_Binary64_log(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.log());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_log10(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.log10());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_log1p(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.log1p());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_longValue(t_Binary64 *self, PyObject *args)
      {
        jlong result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.longValue());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "longValue", args, 2);
      }

      static PyObject *t_Binary64_multiply(t_Binary64 *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Binary64 a0((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "k", Binary64::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jint a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_Binary64_negate(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_newInstance(t_Binary64 *self, PyObject *arg)
      {
        jdouble a0;
        Binary64 result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.newInstance(a0));
          return t_Binary64::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
        return NULL;
      }

      static PyObject *t_Binary64_pow(t_Binary64 *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Binary64 a0((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "k", Binary64::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jint a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pow", args);
        return NULL;
      }

      static PyObject *t_Binary64_reciprocal(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_remainder(t_Binary64 *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Binary64 a0((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "k", Binary64::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "remainder", args);
        return NULL;
      }

      static PyObject *t_Binary64_rint(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.rint());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_rootN(t_Binary64 *self, PyObject *arg)
      {
        jint a0;
        Binary64 result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.rootN(a0));
          return t_Binary64::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "rootN", arg);
        return NULL;
      }

      static PyObject *t_Binary64_scalb(t_Binary64 *self, PyObject *arg)
      {
        jint a0;
        Binary64 result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.scalb(a0));
          return t_Binary64::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalb", arg);
        return NULL;
      }

      static PyObject *t_Binary64_shortValue(t_Binary64 *self, PyObject *args)
      {
        jshort result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.shortValue());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "shortValue", args, 2);
      }

      static PyObject *t_Binary64_sign(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.sign());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_sin(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.sin());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_sinCos(t_Binary64 *self)
      {
        ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
        OBJ_CALL(result = self->object.sinCos());
        return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(Binary64));
      }

      static PyObject *t_Binary64_sinh(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.sinh());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_sinhCosh(t_Binary64 *self)
      {
        ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
        OBJ_CALL(result = self->object.sinhCosh());
        return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(Binary64));
      }

      static PyObject *t_Binary64_sqrt(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.sqrt());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_subtract(t_Binary64 *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Binary64 a0((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "k", Binary64::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_Binary64_tan(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.tan());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_tanh(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.tanh());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_toDegrees(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.toDegrees());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_toRadians(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.toRadians());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_toString(t_Binary64 *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_Binary64_ulp(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.ulp());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_get__field(t_Binary64 *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_Binary64_get__infinite(t_Binary64 *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInfinite());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Binary64_get__naN(t_Binary64 *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNaN());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Binary64_get__pi(t_Binary64 *self, void *data)
      {
        Binary64 value((jobject) NULL);
        OBJ_CALL(value = self->object.getPi());
        return t_Binary64::wrap_Object(value);
      }

      static PyObject *t_Binary64_get__real(t_Binary64 *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReal());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Binary64_get__zero(t_Binary64 *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isZero());
        Py_RETURN_BOOL(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalProperties.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitPhysicalPropertiesKey::class$ = NULL;
              jmethodID *OrbitPhysicalPropertiesKey::mids$ = NULL;
              bool OrbitPhysicalPropertiesKey::live$ = false;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::AREA_ALONG_OEB_INT = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::AREA_ALONG_OEB_MAX = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::AREA_ALONG_OEB_MIN = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::AREA_MAX_FOR_PC = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::AREA_MIN_FOR_PC = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::AREA_TYP_FOR_PC = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::ATT_ACTUATOR_TYPE = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::ATT_CONTROL = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::ATT_CONTROL_MODE = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::ATT_KNOWLEDGE = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::ATT_POINTING = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::AVG_MANEUVER_FREQ = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::BUS_MODEL = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::COMMENT = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::DOCKED_WITH = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::DRAG_COEFF_NOM = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::DRAG_CONST_AREA = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::DRAG_UNCERTAINTY = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::DRY_MASS = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::DV_BOL = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::DV_REMAINING = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::INITIAL_WET_MASS = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::IXX = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::IXY = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::IXZ = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::IYY = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::IYZ = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::IZZ = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::MANUFACTURER = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::MAX_THRUST = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_INT = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_MAX = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_MIN = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_PARENT_FRAME = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_PARENT_FRAME_EPOCH = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_Q1 = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_Q2 = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_Q3 = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_QC = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::RCS = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::RCS_MAX = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::RCS_MIN = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::REFLECTANCE = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::SOLAR_RAD_COEFF = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::SOLAR_RAD_UNCERTAINTY = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::SRP_CONST_AREA = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::VM_ABSOLUTE = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::VM_APPARENT = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::VM_APPARENT_MAX = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::VM_APPARENT_MIN = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::WET_MASS = NULL;

              jclass OrbitPhysicalPropertiesKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_22b76e5a05430141] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalProperties;)Z");
                  mids$[mid_valueOf_5ab20fb966246ef9] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;");
                  mids$[mid_values_4b251283a15eeb91] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  AREA_ALONG_OEB_INT = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "AREA_ALONG_OEB_INT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  AREA_ALONG_OEB_MAX = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "AREA_ALONG_OEB_MAX", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  AREA_ALONG_OEB_MIN = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "AREA_ALONG_OEB_MIN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  AREA_MAX_FOR_PC = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "AREA_MAX_FOR_PC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  AREA_MIN_FOR_PC = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "AREA_MIN_FOR_PC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  AREA_TYP_FOR_PC = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "AREA_TYP_FOR_PC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  ATT_ACTUATOR_TYPE = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "ATT_ACTUATOR_TYPE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  ATT_CONTROL = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "ATT_CONTROL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  ATT_CONTROL_MODE = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "ATT_CONTROL_MODE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  ATT_KNOWLEDGE = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "ATT_KNOWLEDGE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  ATT_POINTING = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "ATT_POINTING", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  AVG_MANEUVER_FREQ = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "AVG_MANEUVER_FREQ", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  BUS_MODEL = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "BUS_MODEL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  COMMENT = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  DOCKED_WITH = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "DOCKED_WITH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  DRAG_COEFF_NOM = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "DRAG_COEFF_NOM", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  DRAG_CONST_AREA = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "DRAG_CONST_AREA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  DRAG_UNCERTAINTY = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "DRAG_UNCERTAINTY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  DRY_MASS = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "DRY_MASS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  DV_BOL = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "DV_BOL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  DV_REMAINING = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "DV_REMAINING", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  INITIAL_WET_MASS = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "INITIAL_WET_MASS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  IXX = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "IXX", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  IXY = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "IXY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  IXZ = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "IXZ", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  IYY = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "IYY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  IYZ = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "IYZ", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  IZZ = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "IZZ", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  MANUFACTURER = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "MANUFACTURER", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  MAX_THRUST = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "MAX_THRUST", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_INT = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_INT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_MAX = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_MAX", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_MIN = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_MIN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_PARENT_FRAME = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_PARENT_FRAME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_PARENT_FRAME_EPOCH = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_PARENT_FRAME_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_Q1 = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_Q1", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_Q2 = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_Q2", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_Q3 = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_Q3", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_QC = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_QC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  RCS = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "RCS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  RCS_MAX = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "RCS_MAX", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  RCS_MIN = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "RCS_MIN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  REFLECTANCE = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "REFLECTANCE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  SOLAR_RAD_COEFF = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "SOLAR_RAD_COEFF", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  SOLAR_RAD_UNCERTAINTY = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "SOLAR_RAD_UNCERTAINTY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  SRP_CONST_AREA = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "SRP_CONST_AREA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  VM_ABSOLUTE = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "VM_ABSOLUTE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  VM_APPARENT = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "VM_APPARENT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  VM_APPARENT_MAX = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "VM_APPARENT_MAX", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  VM_APPARENT_MIN = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "VM_APPARENT_MIN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  WET_MASS = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "WET_MASS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OrbitPhysicalPropertiesKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_22b76e5a05430141], a0.this$, a1.this$, a2.this$);
              }

              OrbitPhysicalPropertiesKey OrbitPhysicalPropertiesKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OrbitPhysicalPropertiesKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_5ab20fb966246ef9], a0.this$));
              }

              JArray< OrbitPhysicalPropertiesKey > OrbitPhysicalPropertiesKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OrbitPhysicalPropertiesKey >(env->callStaticObjectMethod(cls, mids$[mid_values_4b251283a15eeb91]));
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              static PyObject *t_OrbitPhysicalPropertiesKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitPhysicalPropertiesKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitPhysicalPropertiesKey_of_(t_OrbitPhysicalPropertiesKey *self, PyObject *args);
              static PyObject *t_OrbitPhysicalPropertiesKey_process(t_OrbitPhysicalPropertiesKey *self, PyObject *args);
              static PyObject *t_OrbitPhysicalPropertiesKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OrbitPhysicalPropertiesKey_values(PyTypeObject *type);
              static PyObject *t_OrbitPhysicalPropertiesKey_get__parameters_(t_OrbitPhysicalPropertiesKey *self, void *data);
              static PyGetSetDef t_OrbitPhysicalPropertiesKey__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitPhysicalPropertiesKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitPhysicalPropertiesKey__methods_[] = {
                DECLARE_METHOD(t_OrbitPhysicalPropertiesKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitPhysicalPropertiesKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitPhysicalPropertiesKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OrbitPhysicalPropertiesKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OrbitPhysicalPropertiesKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OrbitPhysicalPropertiesKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitPhysicalPropertiesKey)[] = {
                { Py_tp_methods, t_OrbitPhysicalPropertiesKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OrbitPhysicalPropertiesKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitPhysicalPropertiesKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OrbitPhysicalPropertiesKey, t_OrbitPhysicalPropertiesKey, OrbitPhysicalPropertiesKey);
              PyObject *t_OrbitPhysicalPropertiesKey::wrap_Object(const OrbitPhysicalPropertiesKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitPhysicalPropertiesKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitPhysicalPropertiesKey *self = (t_OrbitPhysicalPropertiesKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OrbitPhysicalPropertiesKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitPhysicalPropertiesKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitPhysicalPropertiesKey *self = (t_OrbitPhysicalPropertiesKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OrbitPhysicalPropertiesKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitPhysicalPropertiesKey), &PY_TYPE_DEF(OrbitPhysicalPropertiesKey), module, "OrbitPhysicalPropertiesKey", 0);
              }

              void t_OrbitPhysicalPropertiesKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "class_", make_descriptor(OrbitPhysicalPropertiesKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "wrapfn_", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OrbitPhysicalPropertiesKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "AREA_ALONG_OEB_INT", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::AREA_ALONG_OEB_INT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "AREA_ALONG_OEB_MAX", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::AREA_ALONG_OEB_MAX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "AREA_ALONG_OEB_MIN", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::AREA_ALONG_OEB_MIN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "AREA_MAX_FOR_PC", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::AREA_MAX_FOR_PC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "AREA_MIN_FOR_PC", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::AREA_MIN_FOR_PC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "AREA_TYP_FOR_PC", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::AREA_TYP_FOR_PC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "ATT_ACTUATOR_TYPE", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::ATT_ACTUATOR_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "ATT_CONTROL", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::ATT_CONTROL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "ATT_CONTROL_MODE", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::ATT_CONTROL_MODE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "ATT_KNOWLEDGE", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::ATT_KNOWLEDGE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "ATT_POINTING", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::ATT_POINTING)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "AVG_MANEUVER_FREQ", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::AVG_MANEUVER_FREQ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "BUS_MODEL", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::BUS_MODEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "COMMENT", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "DOCKED_WITH", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::DOCKED_WITH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "DRAG_COEFF_NOM", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::DRAG_COEFF_NOM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "DRAG_CONST_AREA", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::DRAG_CONST_AREA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "DRAG_UNCERTAINTY", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::DRAG_UNCERTAINTY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "DRY_MASS", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::DRY_MASS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "DV_BOL", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::DV_BOL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "DV_REMAINING", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::DV_REMAINING)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "INITIAL_WET_MASS", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::INITIAL_WET_MASS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "IXX", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::IXX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "IXY", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::IXY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "IXZ", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::IXZ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "IYY", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::IYY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "IYZ", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::IYZ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "IZZ", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::IZZ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "MANUFACTURER", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::MANUFACTURER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "MAX_THRUST", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::MAX_THRUST)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_INT", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_INT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_MAX", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_MAX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_MIN", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_MIN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_PARENT_FRAME", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_PARENT_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_PARENT_FRAME_EPOCH", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_PARENT_FRAME_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_Q1", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_Q1)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_Q2", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_Q2)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_Q3", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_Q3)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_QC", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_QC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "RCS", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::RCS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "RCS_MAX", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::RCS_MAX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "RCS_MIN", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::RCS_MIN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "REFLECTANCE", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::REFLECTANCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "SOLAR_RAD_COEFF", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::SOLAR_RAD_COEFF)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "SOLAR_RAD_UNCERTAINTY", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::SOLAR_RAD_UNCERTAINTY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "SRP_CONST_AREA", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::SRP_CONST_AREA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "VM_ABSOLUTE", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::VM_ABSOLUTE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "VM_APPARENT", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::VM_APPARENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "VM_APPARENT_MAX", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::VM_APPARENT_MAX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "VM_APPARENT_MIN", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::VM_APPARENT_MIN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "WET_MASS", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::WET_MASS)));
              }

              static PyObject *t_OrbitPhysicalPropertiesKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitPhysicalPropertiesKey::initializeClass, 1)))
                  return NULL;
                return t_OrbitPhysicalPropertiesKey::wrap_Object(OrbitPhysicalPropertiesKey(((t_OrbitPhysicalPropertiesKey *) arg)->object.this$));
              }
              static PyObject *t_OrbitPhysicalPropertiesKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitPhysicalPropertiesKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OrbitPhysicalPropertiesKey_of_(t_OrbitPhysicalPropertiesKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OrbitPhysicalPropertiesKey_process(t_OrbitPhysicalPropertiesKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalPropertiesKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OrbitPhysicalPropertiesKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalPropertiesKey::valueOf(a0));
                  return t_OrbitPhysicalPropertiesKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OrbitPhysicalPropertiesKey_values(PyTypeObject *type)
              {
                JArray< OrbitPhysicalPropertiesKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalPropertiesKey::values());
                return JArray<jobject>(result.this$).wrap(t_OrbitPhysicalPropertiesKey::wrap_jobject);
              }
              static PyObject *t_OrbitPhysicalPropertiesKey_get__parameters_(t_OrbitPhysicalPropertiesKey *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FixedNumberInterpolationGrid.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/InterpolationGrid.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FixedNumberInterpolationGrid::class$ = NULL;
            jmethodID *FixedNumberInterpolationGrid::mids$ = NULL;
            bool FixedNumberInterpolationGrid::live$ = false;

            jclass FixedNumberInterpolationGrid::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FixedNumberInterpolationGrid");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_getGridPoints_0699cadabd57760f] = env->getMethodID(cls, "getGridPoints", "(DD)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FixedNumberInterpolationGrid::FixedNumberInterpolationGrid(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

            JArray< jdouble > FixedNumberInterpolationGrid::getGridPoints(jdouble a0, jdouble a1) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getGridPoints_0699cadabd57760f], a0, a1));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            static PyObject *t_FixedNumberInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FixedNumberInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg);
            static int t_FixedNumberInterpolationGrid_init_(t_FixedNumberInterpolationGrid *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FixedNumberInterpolationGrid_getGridPoints(t_FixedNumberInterpolationGrid *self, PyObject *args);

            static PyMethodDef t_FixedNumberInterpolationGrid__methods_[] = {
              DECLARE_METHOD(t_FixedNumberInterpolationGrid, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FixedNumberInterpolationGrid, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FixedNumberInterpolationGrid, getGridPoints, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FixedNumberInterpolationGrid)[] = {
              { Py_tp_methods, t_FixedNumberInterpolationGrid__methods_ },
              { Py_tp_init, (void *) t_FixedNumberInterpolationGrid_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FixedNumberInterpolationGrid)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FixedNumberInterpolationGrid, t_FixedNumberInterpolationGrid, FixedNumberInterpolationGrid);

            void t_FixedNumberInterpolationGrid::install(PyObject *module)
            {
              installType(&PY_TYPE(FixedNumberInterpolationGrid), &PY_TYPE_DEF(FixedNumberInterpolationGrid), module, "FixedNumberInterpolationGrid", 0);
            }

            void t_FixedNumberInterpolationGrid::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedNumberInterpolationGrid), "class_", make_descriptor(FixedNumberInterpolationGrid::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedNumberInterpolationGrid), "wrapfn_", make_descriptor(t_FixedNumberInterpolationGrid::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedNumberInterpolationGrid), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FixedNumberInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FixedNumberInterpolationGrid::initializeClass, 1)))
                return NULL;
              return t_FixedNumberInterpolationGrid::wrap_Object(FixedNumberInterpolationGrid(((t_FixedNumberInterpolationGrid *) arg)->object.this$));
            }
            static PyObject *t_FixedNumberInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FixedNumberInterpolationGrid::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_FixedNumberInterpolationGrid_init_(t_FixedNumberInterpolationGrid *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              FixedNumberInterpolationGrid object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = FixedNumberInterpolationGrid(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FixedNumberInterpolationGrid_getGridPoints(t_FixedNumberInterpolationGrid *self, PyObject *args)
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getGridPoints(a0, a1));
                return result.wrap();
              }

              PyErr_SetArgsError((PyObject *) self, "getGridPoints", args);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/parsing/ErrorState.h"
#include "org/orekit/files/ccsds/utils/parsing/ProcessingState.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {

            ::java::lang::Class *ErrorState::class$ = NULL;
            jmethodID *ErrorState::mids$ = NULL;
            bool ErrorState::live$ = false;

            jclass ErrorState::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/parsing/ErrorState");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_processToken_7f6d4ab73f1deb26] = env->getMethodID(cls, "processToken", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ErrorState::ErrorState() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            jboolean ErrorState::processToken(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processToken_7f6d4ab73f1deb26], a0.this$);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {
            static PyObject *t_ErrorState_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ErrorState_instance_(PyTypeObject *type, PyObject *arg);
            static int t_ErrorState_init_(t_ErrorState *self, PyObject *args, PyObject *kwds);
            static PyObject *t_ErrorState_processToken(t_ErrorState *self, PyObject *arg);

            static PyMethodDef t_ErrorState__methods_[] = {
              DECLARE_METHOD(t_ErrorState, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ErrorState, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ErrorState, processToken, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ErrorState)[] = {
              { Py_tp_methods, t_ErrorState__methods_ },
              { Py_tp_init, (void *) t_ErrorState_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ErrorState)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ErrorState, t_ErrorState, ErrorState);

            void t_ErrorState::install(PyObject *module)
            {
              installType(&PY_TYPE(ErrorState), &PY_TYPE_DEF(ErrorState), module, "ErrorState", 0);
            }

            void t_ErrorState::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ErrorState), "class_", make_descriptor(ErrorState::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ErrorState), "wrapfn_", make_descriptor(t_ErrorState::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ErrorState), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ErrorState_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ErrorState::initializeClass, 1)))
                return NULL;
              return t_ErrorState::wrap_Object(ErrorState(((t_ErrorState *) arg)->object.this$));
            }
            static PyObject *t_ErrorState_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ErrorState::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_ErrorState_init_(t_ErrorState *self, PyObject *args, PyObject *kwds)
            {
              ErrorState object((jobject) NULL);

              INT_CALL(object = ErrorState());
              self->object = object;

              return 0;
            }

            static PyObject *t_ErrorState_processToken(t_ErrorState *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processToken(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processToken", arg);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/PythonSatelliteAttitudeEphemeris.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$AttitudeEphemerisSegment.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$SatelliteAttitudeEphemeris.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *PythonSatelliteAttitudeEphemeris::class$ = NULL;
        jmethodID *PythonSatelliteAttitudeEphemeris::mids$ = NULL;
        bool PythonSatelliteAttitudeEphemeris::live$ = false;

        jclass PythonSatelliteAttitudeEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/PythonSatelliteAttitudeEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getAttitudeProvider_b44a04493534d299] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;");
            mids$[mid_getId_3cffd47377eca18a] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
            mids$[mid_getSegments_0d9551367f7ecdef] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
            mids$[mid_getStart_7a97f7e149e79afb] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_7a97f7e149e79afb] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonSatelliteAttitudeEphemeris::PythonSatelliteAttitudeEphemeris() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonSatelliteAttitudeEphemeris::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonSatelliteAttitudeEphemeris::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonSatelliteAttitudeEphemeris::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        static PyObject *t_PythonSatelliteAttitudeEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonSatelliteAttitudeEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonSatelliteAttitudeEphemeris_init_(t_PythonSatelliteAttitudeEphemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonSatelliteAttitudeEphemeris_finalize(t_PythonSatelliteAttitudeEphemeris *self);
        static PyObject *t_PythonSatelliteAttitudeEphemeris_pythonExtension(t_PythonSatelliteAttitudeEphemeris *self, PyObject *args);
        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getAttitudeProvider0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getId1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getSegments2(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getStart3(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getStop4(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonSatelliteAttitudeEphemeris_pythonDecRef5(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonSatelliteAttitudeEphemeris_get__self(t_PythonSatelliteAttitudeEphemeris *self, void *data);
        static PyGetSetDef t_PythonSatelliteAttitudeEphemeris__fields_[] = {
          DECLARE_GET_FIELD(t_PythonSatelliteAttitudeEphemeris, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonSatelliteAttitudeEphemeris__methods_[] = {
          DECLARE_METHOD(t_PythonSatelliteAttitudeEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonSatelliteAttitudeEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonSatelliteAttitudeEphemeris, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonSatelliteAttitudeEphemeris, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonSatelliteAttitudeEphemeris)[] = {
          { Py_tp_methods, t_PythonSatelliteAttitudeEphemeris__methods_ },
          { Py_tp_init, (void *) t_PythonSatelliteAttitudeEphemeris_init_ },
          { Py_tp_getset, t_PythonSatelliteAttitudeEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonSatelliteAttitudeEphemeris)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonSatelliteAttitudeEphemeris, t_PythonSatelliteAttitudeEphemeris, PythonSatelliteAttitudeEphemeris);

        void t_PythonSatelliteAttitudeEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonSatelliteAttitudeEphemeris), &PY_TYPE_DEF(PythonSatelliteAttitudeEphemeris), module, "PythonSatelliteAttitudeEphemeris", 1);
        }

        void t_PythonSatelliteAttitudeEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSatelliteAttitudeEphemeris), "class_", make_descriptor(PythonSatelliteAttitudeEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSatelliteAttitudeEphemeris), "wrapfn_", make_descriptor(t_PythonSatelliteAttitudeEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSatelliteAttitudeEphemeris), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonSatelliteAttitudeEphemeris::initializeClass);
          JNINativeMethod methods[] = {
            { "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;", (void *) t_PythonSatelliteAttitudeEphemeris_getAttitudeProvider0 },
            { "getId", "()Ljava/lang/String;", (void *) t_PythonSatelliteAttitudeEphemeris_getId1 },
            { "getSegments", "()Ljava/util/List;", (void *) t_PythonSatelliteAttitudeEphemeris_getSegments2 },
            { "getStart", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonSatelliteAttitudeEphemeris_getStart3 },
            { "getStop", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonSatelliteAttitudeEphemeris_getStop4 },
            { "pythonDecRef", "()V", (void *) t_PythonSatelliteAttitudeEphemeris_pythonDecRef5 },
          };
          env->registerNatives(cls, methods, 6);
        }

        static PyObject *t_PythonSatelliteAttitudeEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonSatelliteAttitudeEphemeris::initializeClass, 1)))
            return NULL;
          return t_PythonSatelliteAttitudeEphemeris::wrap_Object(PythonSatelliteAttitudeEphemeris(((t_PythonSatelliteAttitudeEphemeris *) arg)->object.this$));
        }
        static PyObject *t_PythonSatelliteAttitudeEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonSatelliteAttitudeEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonSatelliteAttitudeEphemeris_init_(t_PythonSatelliteAttitudeEphemeris *self, PyObject *args, PyObject *kwds)
        {
          PythonSatelliteAttitudeEphemeris object((jobject) NULL);

          INT_CALL(object = PythonSatelliteAttitudeEphemeris());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonSatelliteAttitudeEphemeris_finalize(t_PythonSatelliteAttitudeEphemeris *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonSatelliteAttitudeEphemeris_pythonExtension(t_PythonSatelliteAttitudeEphemeris *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jlong result;
              OBJ_CALL(result = self->object.pythonExtension());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
            break;
           case 1:
            {
              jlong a0;

              if (!parseArgs(args, "J", &a0))
              {
                OBJ_CALL(self->object.pythonExtension(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
          return NULL;
        }

        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getAttitudeProvider0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSatelliteAttitudeEphemeris::mids$[PythonSatelliteAttitudeEphemeris::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::attitudes::BoundedAttitudeProvider value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getAttitudeProvider", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::attitudes::BoundedAttitudeProvider::initializeClass, &value))
          {
            throwTypeError("getAttitudeProvider", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getId1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSatelliteAttitudeEphemeris::mids$[PythonSatelliteAttitudeEphemeris::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::lang::String value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getId", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "s", &value))
          {
            throwTypeError("getId", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getSegments2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSatelliteAttitudeEphemeris::mids$[PythonSatelliteAttitudeEphemeris::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getSegments", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getSegments", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getStart3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSatelliteAttitudeEphemeris::mids$[PythonSatelliteAttitudeEphemeris::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getStart", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("getStart", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getStop4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSatelliteAttitudeEphemeris::mids$[PythonSatelliteAttitudeEphemeris::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getStop", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("getStop", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static void JNICALL t_PythonSatelliteAttitudeEphemeris_pythonDecRef5(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSatelliteAttitudeEphemeris::mids$[PythonSatelliteAttitudeEphemeris::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonSatelliteAttitudeEphemeris::mids$[PythonSatelliteAttitudeEphemeris::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonSatelliteAttitudeEphemeris_get__self(t_PythonSatelliteAttitudeEphemeris *self, void *data)
        {
          jlong ptr;
          OBJ_CALL(ptr = self->object.pythonExtension());
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            Py_INCREF(obj);
            return obj;
          }
          else
            Py_RETURN_NONE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/PythonBodyShape.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Throwable.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *PythonBodyShape::class$ = NULL;
      jmethodID *PythonBodyShape::mids$ = NULL;
      bool PythonBodyShape::live$ = false;

      jclass PythonBodyShape::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/PythonBodyShape");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getBodyFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getBodyFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getIntersectionPoint_6391bd6fdaac29a3] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_getIntersectionPoint_884873e1d3d77c4e] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
          mids$[mid_projectToGround_3d4e9a6447a03aa9] = env->getMethodID(cls, "projectToGround", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_projectToGround_4c5eeaf1ff845fca] = env->getMethodID(cls, "projectToGround", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_transform_8b70a50ea3e1f728] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_transform_8b264141c1de262c] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_transform_8e052cb77f98e021] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
          mids$[mid_transform_4dfad8dc678d42b2] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonBodyShape::PythonBodyShape() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonBodyShape::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonBodyShape::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonBodyShape::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_PythonBodyShape_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonBodyShape_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonBodyShape_init_(t_PythonBodyShape *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonBodyShape_finalize(t_PythonBodyShape *self);
      static PyObject *t_PythonBodyShape_pythonExtension(t_PythonBodyShape *self, PyObject *args);
      static jobject JNICALL t_PythonBodyShape_getBodyFrame0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBodyShape_getIntersectionPoint1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
      static jobject JNICALL t_PythonBodyShape_getIntersectionPoint2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
      static jobject JNICALL t_PythonBodyShape_projectToGround3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jobject JNICALL t_PythonBodyShape_projectToGround4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static void JNICALL t_PythonBodyShape_pythonDecRef5(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBodyShape_transform6(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonBodyShape_transform7(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonBodyShape_transform8(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static jobject JNICALL t_PythonBodyShape_transform9(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static PyObject *t_PythonBodyShape_get__self(t_PythonBodyShape *self, void *data);
      static PyGetSetDef t_PythonBodyShape__fields_[] = {
        DECLARE_GET_FIELD(t_PythonBodyShape, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonBodyShape__methods_[] = {
        DECLARE_METHOD(t_PythonBodyShape, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonBodyShape, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonBodyShape, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonBodyShape, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonBodyShape)[] = {
        { Py_tp_methods, t_PythonBodyShape__methods_ },
        { Py_tp_init, (void *) t_PythonBodyShape_init_ },
        { Py_tp_getset, t_PythonBodyShape__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonBodyShape)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonBodyShape, t_PythonBodyShape, PythonBodyShape);

      void t_PythonBodyShape::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonBodyShape), &PY_TYPE_DEF(PythonBodyShape), module, "PythonBodyShape", 1);
      }

      void t_PythonBodyShape::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBodyShape), "class_", make_descriptor(PythonBodyShape::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBodyShape), "wrapfn_", make_descriptor(t_PythonBodyShape::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBodyShape), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonBodyShape::initializeClass);
        JNINativeMethod methods[] = {
          { "getBodyFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonBodyShape_getBodyFrame0 },
          { "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;", (void *) t_PythonBodyShape_getIntersectionPoint1 },
          { "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;", (void *) t_PythonBodyShape_getIntersectionPoint2 },
          { "projectToGround", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonBodyShape_projectToGround3 },
          { "projectToGround", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonBodyShape_projectToGround4 },
          { "pythonDecRef", "()V", (void *) t_PythonBodyShape_pythonDecRef5 },
          { "transform", "(Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonBodyShape_transform6 },
          { "transform", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonBodyShape_transform7 },
          { "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;", (void *) t_PythonBodyShape_transform8 },
          { "transform", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;", (void *) t_PythonBodyShape_transform9 },
        };
        env->registerNatives(cls, methods, 10);
      }

      static PyObject *t_PythonBodyShape_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonBodyShape::initializeClass, 1)))
          return NULL;
        return t_PythonBodyShape::wrap_Object(PythonBodyShape(((t_PythonBodyShape *) arg)->object.this$));
      }
      static PyObject *t_PythonBodyShape_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonBodyShape::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonBodyShape_init_(t_PythonBodyShape *self, PyObject *args, PyObject *kwds)
      {
        PythonBodyShape object((jobject) NULL);

        INT_CALL(object = PythonBodyShape());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonBodyShape_finalize(t_PythonBodyShape *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonBodyShape_pythonExtension(t_PythonBodyShape *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.pythonExtension());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.pythonExtension(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
        return NULL;
      }

      static jobject JNICALL t_PythonBodyShape_getBodyFrame0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getBodyFrame", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("getBodyFrame", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonBodyShape_getIntersectionPoint1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::FieldGeodeticPoint value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_FieldLine::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldLine(a0));
        PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *o3 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a3));
        PyObject *result = PyObject_CallMethod(obj, "getIntersectionPoint", "OOOO", o0, o1, o2, o3);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        Py_DECREF(o3);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &value))
        {
          throwTypeError("getIntersectionPoint", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonBodyShape_getIntersectionPoint2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Line::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Line(a0));
        PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *o3 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a3));
        PyObject *result = PyObject_CallMethod(obj, "getIntersectionPoint", "OOOO", o0, o1, o2, o3);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        Py_DECREF(o3);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &value))
        {
          throwTypeError("getIntersectionPoint", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonBodyShape_projectToGround3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(::org::orekit::utils::TimeStampedPVCoordinates(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *result = PyObject_CallMethod(obj, "projectToGround", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &value))
        {
          throwTypeError("projectToGround", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonBodyShape_projectToGround4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *result = PyObject_CallMethod(obj, "projectToGround", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
        {
          throwTypeError("projectToGround", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static void JNICALL t_PythonBodyShape_pythonDecRef5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonBodyShape_transform6(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        PyObject *o0 = ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(::org::orekit::bodies::FieldGeodeticPoint(a0));
        PyObject *result = PyObject_CallMethod(obj, "transform", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
        {
          throwTypeError("transform", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonBodyShape_transform7(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        PyObject *o0 = ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(::org::orekit::bodies::GeodeticPoint(a0));
        PyObject *result = PyObject_CallMethod(obj, "transform", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
        {
          throwTypeError("transform", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonBodyShape_transform8(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *o2 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a2));
        PyObject *result = PyObject_CallMethod(obj, "transform", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &value))
        {
          throwTypeError("transform", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonBodyShape_transform9(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::FieldGeodeticPoint value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *o2 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a2));
        PyObject *result = PyObject_CallMethod(obj, "transform", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &value))
        {
          throwTypeError("transform", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static PyObject *t_PythonBodyShape_get__self(t_PythonBodyShape *self, void *data)
      {
        jlong ptr;
        OBJ_CALL(ptr = self->object.pythonExtension());
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          Py_INCREF(obj);
          return obj;
        }
        else
          Py_RETURN_NONE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/PythonFieldODEIntegratorBuilder.h"
#include "org/orekit/orbits/Orbit.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/conversion/FieldODEIntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *PythonFieldODEIntegratorBuilder::class$ = NULL;
        jmethodID *PythonFieldODEIntegratorBuilder::mids$ = NULL;
        bool PythonFieldODEIntegratorBuilder::live$ = false;

        jclass PythonFieldODEIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/PythonFieldODEIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_buildIntegrator_da5761494991d7f4] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");
            mids$[mid_buildIntegrator_3a1ee7ebe4f0e344] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldODEIntegratorBuilder::PythonFieldODEIntegratorBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonFieldODEIntegratorBuilder::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonFieldODEIntegratorBuilder::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonFieldODEIntegratorBuilder::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        static PyObject *t_PythonFieldODEIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldODEIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldODEIntegratorBuilder_of_(t_PythonFieldODEIntegratorBuilder *self, PyObject *args);
        static int t_PythonFieldODEIntegratorBuilder_init_(t_PythonFieldODEIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldODEIntegratorBuilder_finalize(t_PythonFieldODEIntegratorBuilder *self);
        static PyObject *t_PythonFieldODEIntegratorBuilder_pythonExtension(t_PythonFieldODEIntegratorBuilder *self, PyObject *args);
        static jobject JNICALL t_PythonFieldODEIntegratorBuilder_buildIntegrator0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static jobject JNICALL t_PythonFieldODEIntegratorBuilder_buildIntegrator1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static void JNICALL t_PythonFieldODEIntegratorBuilder_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldODEIntegratorBuilder_get__self(t_PythonFieldODEIntegratorBuilder *self, void *data);
        static PyObject *t_PythonFieldODEIntegratorBuilder_get__parameters_(t_PythonFieldODEIntegratorBuilder *self, void *data);
        static PyGetSetDef t_PythonFieldODEIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldODEIntegratorBuilder, self),
          DECLARE_GET_FIELD(t_PythonFieldODEIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldODEIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_PythonFieldODEIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldODEIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldODEIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldODEIntegratorBuilder, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldODEIntegratorBuilder, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldODEIntegratorBuilder)[] = {
          { Py_tp_methods, t_PythonFieldODEIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_PythonFieldODEIntegratorBuilder_init_ },
          { Py_tp_getset, t_PythonFieldODEIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldODEIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldODEIntegratorBuilder, t_PythonFieldODEIntegratorBuilder, PythonFieldODEIntegratorBuilder);
        PyObject *t_PythonFieldODEIntegratorBuilder::wrap_Object(const PythonFieldODEIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldODEIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldODEIntegratorBuilder *self = (t_PythonFieldODEIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldODEIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldODEIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldODEIntegratorBuilder *self = (t_PythonFieldODEIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldODEIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldODEIntegratorBuilder), &PY_TYPE_DEF(PythonFieldODEIntegratorBuilder), module, "PythonFieldODEIntegratorBuilder", 1);
        }

        void t_PythonFieldODEIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldODEIntegratorBuilder), "class_", make_descriptor(PythonFieldODEIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldODEIntegratorBuilder), "wrapfn_", make_descriptor(t_PythonFieldODEIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldODEIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldODEIntegratorBuilder::initializeClass);
          JNINativeMethod methods[] = {
            { "buildIntegrator", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;", (void *) t_PythonFieldODEIntegratorBuilder_buildIntegrator0 },
            { "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;", (void *) t_PythonFieldODEIntegratorBuilder_buildIntegrator1 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldODEIntegratorBuilder_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonFieldODEIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldODEIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_PythonFieldODEIntegratorBuilder::wrap_Object(PythonFieldODEIntegratorBuilder(((t_PythonFieldODEIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldODEIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldODEIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldODEIntegratorBuilder_of_(t_PythonFieldODEIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldODEIntegratorBuilder_init_(t_PythonFieldODEIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldODEIntegratorBuilder object((jobject) NULL);

          INT_CALL(object = PythonFieldODEIntegratorBuilder());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldODEIntegratorBuilder_finalize(t_PythonFieldODEIntegratorBuilder *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldODEIntegratorBuilder_pythonExtension(t_PythonFieldODEIntegratorBuilder *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jlong result;
              OBJ_CALL(result = self->object.pythonExtension());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
            break;
           case 1:
            {
              jlong a0;

              if (!parseArgs(args, "J", &a0))
              {
                OBJ_CALL(self->object.pythonExtension(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
          return NULL;
        }

        static jobject JNICALL t_PythonFieldODEIntegratorBuilder_buildIntegrator0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldODEIntegratorBuilder::mids$[PythonFieldODEIntegratorBuilder::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::ode::AbstractFieldIntegrator value((jobject) NULL);
          PyObject *o0 = ::org::orekit::orbits::t_FieldOrbit::wrap_Object(::org::orekit::orbits::FieldOrbit(a0));
          PyObject *o1 = ::org::orekit::orbits::t_OrbitType::wrap_Object(::org::orekit::orbits::OrbitType(a1));
          PyObject *result = PyObject_CallMethod(obj, "buildIntegrator", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::ode::AbstractFieldIntegrator::initializeClass, &value))
          {
            throwTypeError("buildIntegrator", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jobject JNICALL t_PythonFieldODEIntegratorBuilder_buildIntegrator1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldODEIntegratorBuilder::mids$[PythonFieldODEIntegratorBuilder::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::ode::AbstractFieldIntegrator value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
          PyObject *o1 = ::org::orekit::orbits::t_Orbit::wrap_Object(::org::orekit::orbits::Orbit(a1));
          PyObject *o2 = ::org::orekit::orbits::t_OrbitType::wrap_Object(::org::orekit::orbits::OrbitType(a2));
          PyObject *result = PyObject_CallMethod(obj, "buildIntegrator", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::ode::AbstractFieldIntegrator::initializeClass, &value))
          {
            throwTypeError("buildIntegrator", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static void JNICALL t_PythonFieldODEIntegratorBuilder_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldODEIntegratorBuilder::mids$[PythonFieldODEIntegratorBuilder::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldODEIntegratorBuilder::mids$[PythonFieldODEIntegratorBuilder::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldODEIntegratorBuilder_get__self(t_PythonFieldODEIntegratorBuilder *self, void *data)
        {
          jlong ptr;
          OBJ_CALL(ptr = self->object.pythonExtension());
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            Py_INCREF(obj);
            return obj;
          }
          else
            Py_RETURN_NONE;
        }
        static PyObject *t_PythonFieldODEIntegratorBuilder_get__parameters_(t_PythonFieldODEIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/moment/StandardDeviation.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/descriptive/moment/StandardDeviation.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/moment/SecondMoment.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *StandardDeviation::class$ = NULL;
          jmethodID *StandardDeviation::mids$ = NULL;
          bool StandardDeviation::live$ = false;

          jclass StandardDeviation::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/StandardDeviation");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_b42241ac9de9fb3c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/descriptive/moment/SecondMoment;)V");
              mids$[mid_init$_ed2afdb8506b9742] = env->getMethodID(cls, "<init>", "(Z)V");
              mids$[mid_init$_466cd392a0f97ab1] = env->getMethodID(cls, "<init>", "(ZLorg/hipparchus/stat/descriptive/moment/SecondMoment;)V");
              mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_7712cb22347034aa] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/StandardDeviation;");
              mids$[mid_evaluate_05f591cf0826202b] = env->getMethodID(cls, "evaluate", "([DD)D");
              mids$[mid_evaluate_9eeeb1ae977f525d] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_evaluate_134920ed0a3e958a] = env->getMethodID(cls, "evaluate", "([DDII)D");
              mids$[mid_getN_9e26256fb0d384a2] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_557b8123390d8d0c] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_10f281d777284cea] = env->getMethodID(cls, "increment", "(D)V");
              mids$[mid_isBiasCorrected_89b302893bdbe1f1] = env->getMethodID(cls, "isBiasCorrected", "()Z");
              mids$[mid_withBiasCorrection_31819963ee766f94] = env->getMethodID(cls, "withBiasCorrection", "(Z)Lorg/hipparchus/stat/descriptive/moment/StandardDeviation;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          StandardDeviation::StandardDeviation() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          StandardDeviation::StandardDeviation(const ::org::hipparchus::stat::descriptive::moment::SecondMoment & a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_b42241ac9de9fb3c, a0.this$)) {}

          StandardDeviation::StandardDeviation(jboolean a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_ed2afdb8506b9742, a0)) {}

          StandardDeviation::StandardDeviation(jboolean a0, const ::org::hipparchus::stat::descriptive::moment::SecondMoment & a1) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_466cd392a0f97ab1, a0, a1.this$)) {}

          void StandardDeviation::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
          }

          StandardDeviation StandardDeviation::copy() const
          {
            return StandardDeviation(env->callObjectMethod(this$, mids$[mid_copy_7712cb22347034aa]));
          }

          jdouble StandardDeviation::evaluate(const JArray< jdouble > & a0, jdouble a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_05f591cf0826202b], a0.this$, a1);
          }

          jdouble StandardDeviation::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_9eeeb1ae977f525d], a0.this$, a1, a2);
          }

          jdouble StandardDeviation::evaluate(const JArray< jdouble > & a0, jdouble a1, jint a2, jint a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_134920ed0a3e958a], a0.this$, a1, a2, a3);
          }

          jlong StandardDeviation::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_9e26256fb0d384a2]);
          }

          jdouble StandardDeviation::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_557b8123390d8d0c]);
          }

          void StandardDeviation::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_10f281d777284cea], a0);
          }

          jboolean StandardDeviation::isBiasCorrected() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isBiasCorrected_89b302893bdbe1f1]);
          }

          StandardDeviation StandardDeviation::withBiasCorrection(jboolean a0) const
          {
            return StandardDeviation(env->callObjectMethod(this$, mids$[mid_withBiasCorrection_31819963ee766f94], a0));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {
          static PyObject *t_StandardDeviation_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StandardDeviation_instance_(PyTypeObject *type, PyObject *arg);
          static int t_StandardDeviation_init_(t_StandardDeviation *self, PyObject *args, PyObject *kwds);
          static PyObject *t_StandardDeviation_clear(t_StandardDeviation *self, PyObject *args);
          static PyObject *t_StandardDeviation_copy(t_StandardDeviation *self, PyObject *args);
          static PyObject *t_StandardDeviation_evaluate(t_StandardDeviation *self, PyObject *args);
          static PyObject *t_StandardDeviation_getN(t_StandardDeviation *self, PyObject *args);
          static PyObject *t_StandardDeviation_getResult(t_StandardDeviation *self, PyObject *args);
          static PyObject *t_StandardDeviation_increment(t_StandardDeviation *self, PyObject *args);
          static PyObject *t_StandardDeviation_isBiasCorrected(t_StandardDeviation *self);
          static PyObject *t_StandardDeviation_withBiasCorrection(t_StandardDeviation *self, PyObject *arg);
          static PyObject *t_StandardDeviation_get__biasCorrected(t_StandardDeviation *self, void *data);
          static PyObject *t_StandardDeviation_get__n(t_StandardDeviation *self, void *data);
          static PyObject *t_StandardDeviation_get__result(t_StandardDeviation *self, void *data);
          static PyGetSetDef t_StandardDeviation__fields_[] = {
            DECLARE_GET_FIELD(t_StandardDeviation, biasCorrected),
            DECLARE_GET_FIELD(t_StandardDeviation, n),
            DECLARE_GET_FIELD(t_StandardDeviation, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_StandardDeviation__methods_[] = {
            DECLARE_METHOD(t_StandardDeviation, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StandardDeviation, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StandardDeviation, clear, METH_VARARGS),
            DECLARE_METHOD(t_StandardDeviation, copy, METH_VARARGS),
            DECLARE_METHOD(t_StandardDeviation, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_StandardDeviation, getN, METH_VARARGS),
            DECLARE_METHOD(t_StandardDeviation, getResult, METH_VARARGS),
            DECLARE_METHOD(t_StandardDeviation, increment, METH_VARARGS),
            DECLARE_METHOD(t_StandardDeviation, isBiasCorrected, METH_NOARGS),
            DECLARE_METHOD(t_StandardDeviation, withBiasCorrection, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(StandardDeviation)[] = {
            { Py_tp_methods, t_StandardDeviation__methods_ },
            { Py_tp_init, (void *) t_StandardDeviation_init_ },
            { Py_tp_getset, t_StandardDeviation__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(StandardDeviation)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(StandardDeviation, t_StandardDeviation, StandardDeviation);

          void t_StandardDeviation::install(PyObject *module)
          {
            installType(&PY_TYPE(StandardDeviation), &PY_TYPE_DEF(StandardDeviation), module, "StandardDeviation", 0);
          }

          void t_StandardDeviation::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(StandardDeviation), "class_", make_descriptor(StandardDeviation::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StandardDeviation), "wrapfn_", make_descriptor(t_StandardDeviation::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StandardDeviation), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_StandardDeviation_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, StandardDeviation::initializeClass, 1)))
              return NULL;
            return t_StandardDeviation::wrap_Object(StandardDeviation(((t_StandardDeviation *) arg)->object.this$));
          }
          static PyObject *t_StandardDeviation_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, StandardDeviation::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_StandardDeviation_init_(t_StandardDeviation *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                StandardDeviation object((jobject) NULL);

                INT_CALL(object = StandardDeviation());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::hipparchus::stat::descriptive::moment::SecondMoment a0((jobject) NULL);
                StandardDeviation object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::stat::descriptive::moment::SecondMoment::initializeClass, &a0))
                {
                  INT_CALL(object = StandardDeviation(a0));
                  self->object = object;
                  break;
                }
              }
              {
                jboolean a0;
                StandardDeviation object((jobject) NULL);

                if (!parseArgs(args, "Z", &a0))
                {
                  INT_CALL(object = StandardDeviation(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jboolean a0;
                ::org::hipparchus::stat::descriptive::moment::SecondMoment a1((jobject) NULL);
                StandardDeviation object((jobject) NULL);

                if (!parseArgs(args, "Zk", ::org::hipparchus::stat::descriptive::moment::SecondMoment::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = StandardDeviation(a0, a1));
                  self->object = object;
                  break;
                }
              }
             default:
             err:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_StandardDeviation_clear(t_StandardDeviation *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(StandardDeviation), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_StandardDeviation_copy(t_StandardDeviation *self, PyObject *args)
          {
            StandardDeviation result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_StandardDeviation::wrap_Object(result);
            }

            return callSuper(PY_TYPE(StandardDeviation), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_StandardDeviation_evaluate(t_StandardDeviation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "[DD", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 3:
              {
                JArray< jdouble > a0((jobject) NULL);
                jint a1;
                jint a2;
                jdouble result;

                if (!parseArgs(args, "[DII", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 4:
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble a1;
                jint a2;
                jint a3;
                jdouble result;

                if (!parseArgs(args, "[DDII", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(StandardDeviation), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_StandardDeviation_getN(t_StandardDeviation *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(StandardDeviation), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_StandardDeviation_getResult(t_StandardDeviation *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(StandardDeviation), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_StandardDeviation_increment(t_StandardDeviation *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(StandardDeviation), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_StandardDeviation_isBiasCorrected(t_StandardDeviation *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isBiasCorrected());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_StandardDeviation_withBiasCorrection(t_StandardDeviation *self, PyObject *arg)
          {
            jboolean a0;
            StandardDeviation result((jobject) NULL);

            if (!parseArg(arg, "Z", &a0))
            {
              OBJ_CALL(result = self->object.withBiasCorrection(a0));
              return t_StandardDeviation::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withBiasCorrection", arg);
            return NULL;
          }

          static PyObject *t_StandardDeviation_get__biasCorrected(t_StandardDeviation *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isBiasCorrected());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_StandardDeviation_get__n(t_StandardDeviation *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_StandardDeviation_get__result(t_StandardDeviation *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getResult());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/TrivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *TrivariateFunction::class$ = NULL;
      jmethodID *TrivariateFunction::mids$ = NULL;
      bool TrivariateFunction::live$ = false;

      jclass TrivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/TrivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_8d02ba458f22e508] = env->getMethodID(cls, "value", "(DDD)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble TrivariateFunction::value(jdouble a0, jdouble a1, jdouble a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_8d02ba458f22e508], a0, a1, a2);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      static PyObject *t_TrivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TrivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TrivariateFunction_value(t_TrivariateFunction *self, PyObject *args);

      static PyMethodDef t_TrivariateFunction__methods_[] = {
        DECLARE_METHOD(t_TrivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TrivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TrivariateFunction, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TrivariateFunction)[] = {
        { Py_tp_methods, t_TrivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TrivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TrivariateFunction, t_TrivariateFunction, TrivariateFunction);

      void t_TrivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(TrivariateFunction), &PY_TYPE_DEF(TrivariateFunction), module, "TrivariateFunction", 0);
      }

      void t_TrivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TrivariateFunction), "class_", make_descriptor(TrivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TrivariateFunction), "wrapfn_", make_descriptor(t_TrivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TrivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TrivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TrivariateFunction::initializeClass, 1)))
          return NULL;
        return t_TrivariateFunction::wrap_Object(TrivariateFunction(((t_TrivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_TrivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TrivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TrivariateFunction_value(t_TrivariateFunction *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.value(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/ThreeEighthesFieldIntegratorBuilder.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *ThreeEighthesFieldIntegratorBuilder::class$ = NULL;
        jmethodID *ThreeEighthesFieldIntegratorBuilder::mids$ = NULL;
        bool ThreeEighthesFieldIntegratorBuilder::live$ = false;

        jclass ThreeEighthesFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/ThreeEighthesFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_1ee4bed350fde589] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_buildIntegrator_3a1ee7ebe4f0e344] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ThreeEighthesFieldIntegratorBuilder::ThreeEighthesFieldIntegratorBuilder(jdouble a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        ThreeEighthesFieldIntegratorBuilder::ThreeEighthesFieldIntegratorBuilder(const ::org::hipparchus::CalculusFieldElement & a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_1ee4bed350fde589, a0.this$)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator ThreeEighthesFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_3a1ee7ebe4f0e344], a0.this$, a1.this$, a2.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_of_(t_ThreeEighthesFieldIntegratorBuilder *self, PyObject *args);
        static int t_ThreeEighthesFieldIntegratorBuilder_init_(t_ThreeEighthesFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_buildIntegrator(t_ThreeEighthesFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_get__parameters_(t_ThreeEighthesFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_ThreeEighthesFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_ThreeEighthesFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ThreeEighthesFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_ThreeEighthesFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThreeEighthesFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThreeEighthesFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_ThreeEighthesFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ThreeEighthesFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_ThreeEighthesFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_ThreeEighthesFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_ThreeEighthesFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ThreeEighthesFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(ThreeEighthesFieldIntegratorBuilder, t_ThreeEighthesFieldIntegratorBuilder, ThreeEighthesFieldIntegratorBuilder);
        PyObject *t_ThreeEighthesFieldIntegratorBuilder::wrap_Object(const ThreeEighthesFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ThreeEighthesFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ThreeEighthesFieldIntegratorBuilder *self = (t_ThreeEighthesFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ThreeEighthesFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ThreeEighthesFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ThreeEighthesFieldIntegratorBuilder *self = (t_ThreeEighthesFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ThreeEighthesFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(ThreeEighthesFieldIntegratorBuilder), &PY_TYPE_DEF(ThreeEighthesFieldIntegratorBuilder), module, "ThreeEighthesFieldIntegratorBuilder", 0);
        }

        void t_ThreeEighthesFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesFieldIntegratorBuilder), "class_", make_descriptor(ThreeEighthesFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_ThreeEighthesFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ThreeEighthesFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_ThreeEighthesFieldIntegratorBuilder::wrap_Object(ThreeEighthesFieldIntegratorBuilder(((t_ThreeEighthesFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ThreeEighthesFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_of_(t_ThreeEighthesFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ThreeEighthesFieldIntegratorBuilder_init_(t_ThreeEighthesFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ThreeEighthesFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = ThreeEighthesFieldIntegratorBuilder(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ThreeEighthesFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = ThreeEighthesFieldIntegratorBuilder(a0));
                self->object = object;
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_buildIntegrator(t_ThreeEighthesFieldIntegratorBuilder *self, PyObject *args)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::orbits::Orbit a1((jobject) NULL);
          ::org::orekit::orbits::OrbitType a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::ode::AbstractFieldIntegrator result((jobject) NULL);

          if (!parseArgs(args, "KkK", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1, a2));
            return ::org::hipparchus::ode::t_AbstractFieldIntegrator::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(ThreeEighthesFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_get__parameters_(t_ThreeEighthesFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *OemMetadata::class$ = NULL;
              jmethodID *OemMetadata::mids$ = NULL;
              bool OemMetadata::live$ = false;

              jclass OemMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/OemMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
                  mids$[mid_getInterpolationDegree_412668abc8d889e9] = env->getMethodID(cls, "getInterpolationDegree", "()I");
                  mids$[mid_getInterpolationMethod_8efb284b7b2c86d2] = env->getMethodID(cls, "getInterpolationMethod", "()Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;");
                  mids$[mid_getStartTime_7a97f7e149e79afb] = env->getMethodID(cls, "getStartTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStopTime_7a97f7e149e79afb] = env->getMethodID(cls, "getStopTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getUseableStartTime_7a97f7e149e79afb] = env->getMethodID(cls, "getUseableStartTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getUseableStopTime_7a97f7e149e79afb] = env->getMethodID(cls, "getUseableStopTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_setInterpolationDegree_a3da1a935cb37f7b] = env->getMethodID(cls, "setInterpolationDegree", "(I)V");
                  mids$[mid_setInterpolationMethod_db5b325923fed9a5] = env->getMethodID(cls, "setInterpolationMethod", "(Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;)V");
                  mids$[mid_setStartTime_20affcbd28542333] = env->getMethodID(cls, "setStartTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setStopTime_20affcbd28542333] = env->getMethodID(cls, "setStopTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setUseableStartTime_20affcbd28542333] = env->getMethodID(cls, "setUseableStartTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setUseableStopTime_20affcbd28542333] = env->getMethodID(cls, "setUseableStopTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OemMetadata::OemMetadata(jint a0) : ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

              jint OemMetadata::getInterpolationDegree() const
              {
                return env->callIntMethod(this$, mids$[mid_getInterpolationDegree_412668abc8d889e9]);
              }

              ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod OemMetadata::getInterpolationMethod() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod(env->callObjectMethod(this$, mids$[mid_getInterpolationMethod_8efb284b7b2c86d2]));
              }

              ::org::orekit::time::AbsoluteDate OemMetadata::getStartTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartTime_7a97f7e149e79afb]));
              }

              ::org::orekit::time::AbsoluteDate OemMetadata::getStopTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStopTime_7a97f7e149e79afb]));
              }

              ::org::orekit::time::AbsoluteDate OemMetadata::getUseableStartTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getUseableStartTime_7a97f7e149e79afb]));
              }

              ::org::orekit::time::AbsoluteDate OemMetadata::getUseableStopTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getUseableStopTime_7a97f7e149e79afb]));
              }

              void OemMetadata::setInterpolationDegree(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInterpolationDegree_a3da1a935cb37f7b], a0);
              }

              void OemMetadata::setInterpolationMethod(const ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInterpolationMethod_db5b325923fed9a5], a0.this$);
              }

              void OemMetadata::setStartTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setStartTime_20affcbd28542333], a0.this$);
              }

              void OemMetadata::setStopTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setStopTime_20affcbd28542333], a0.this$);
              }

              void OemMetadata::setUseableStartTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setUseableStartTime_20affcbd28542333], a0.this$);
              }

              void OemMetadata::setUseableStopTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setUseableStopTime_20affcbd28542333], a0.this$);
              }

              void OemMetadata::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_10f281d777284cea], a0);
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {
              static PyObject *t_OemMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OemMetadata_init_(t_OemMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OemMetadata_getInterpolationDegree(t_OemMetadata *self);
              static PyObject *t_OemMetadata_getInterpolationMethod(t_OemMetadata *self);
              static PyObject *t_OemMetadata_getStartTime(t_OemMetadata *self);
              static PyObject *t_OemMetadata_getStopTime(t_OemMetadata *self);
              static PyObject *t_OemMetadata_getUseableStartTime(t_OemMetadata *self);
              static PyObject *t_OemMetadata_getUseableStopTime(t_OemMetadata *self);
              static PyObject *t_OemMetadata_setInterpolationDegree(t_OemMetadata *self, PyObject *arg);
              static PyObject *t_OemMetadata_setInterpolationMethod(t_OemMetadata *self, PyObject *arg);
              static PyObject *t_OemMetadata_setStartTime(t_OemMetadata *self, PyObject *arg);
              static PyObject *t_OemMetadata_setStopTime(t_OemMetadata *self, PyObject *arg);
              static PyObject *t_OemMetadata_setUseableStartTime(t_OemMetadata *self, PyObject *arg);
              static PyObject *t_OemMetadata_setUseableStopTime(t_OemMetadata *self, PyObject *arg);
              static PyObject *t_OemMetadata_validate(t_OemMetadata *self, PyObject *args);
              static PyObject *t_OemMetadata_get__interpolationDegree(t_OemMetadata *self, void *data);
              static int t_OemMetadata_set__interpolationDegree(t_OemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OemMetadata_get__interpolationMethod(t_OemMetadata *self, void *data);
              static int t_OemMetadata_set__interpolationMethod(t_OemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OemMetadata_get__startTime(t_OemMetadata *self, void *data);
              static int t_OemMetadata_set__startTime(t_OemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OemMetadata_get__stopTime(t_OemMetadata *self, void *data);
              static int t_OemMetadata_set__stopTime(t_OemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OemMetadata_get__useableStartTime(t_OemMetadata *self, void *data);
              static int t_OemMetadata_set__useableStartTime(t_OemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OemMetadata_get__useableStopTime(t_OemMetadata *self, void *data);
              static int t_OemMetadata_set__useableStopTime(t_OemMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_OemMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_OemMetadata, interpolationDegree),
                DECLARE_GETSET_FIELD(t_OemMetadata, interpolationMethod),
                DECLARE_GETSET_FIELD(t_OemMetadata, startTime),
                DECLARE_GETSET_FIELD(t_OemMetadata, stopTime),
                DECLARE_GETSET_FIELD(t_OemMetadata, useableStartTime),
                DECLARE_GETSET_FIELD(t_OemMetadata, useableStopTime),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OemMetadata__methods_[] = {
                DECLARE_METHOD(t_OemMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemMetadata, getInterpolationDegree, METH_NOARGS),
                DECLARE_METHOD(t_OemMetadata, getInterpolationMethod, METH_NOARGS),
                DECLARE_METHOD(t_OemMetadata, getStartTime, METH_NOARGS),
                DECLARE_METHOD(t_OemMetadata, getStopTime, METH_NOARGS),
                DECLARE_METHOD(t_OemMetadata, getUseableStartTime, METH_NOARGS),
                DECLARE_METHOD(t_OemMetadata, getUseableStopTime, METH_NOARGS),
                DECLARE_METHOD(t_OemMetadata, setInterpolationDegree, METH_O),
                DECLARE_METHOD(t_OemMetadata, setInterpolationMethod, METH_O),
                DECLARE_METHOD(t_OemMetadata, setStartTime, METH_O),
                DECLARE_METHOD(t_OemMetadata, setStopTime, METH_O),
                DECLARE_METHOD(t_OemMetadata, setUseableStartTime, METH_O),
                DECLARE_METHOD(t_OemMetadata, setUseableStopTime, METH_O),
                DECLARE_METHOD(t_OemMetadata, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OemMetadata)[] = {
                { Py_tp_methods, t_OemMetadata__methods_ },
                { Py_tp_init, (void *) t_OemMetadata_init_ },
                { Py_tp_getset, t_OemMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OemMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata),
                NULL
              };

              DEFINE_TYPE(OemMetadata, t_OemMetadata, OemMetadata);

              void t_OemMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(OemMetadata), &PY_TYPE_DEF(OemMetadata), module, "OemMetadata", 0);
              }

              void t_OemMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadata), "class_", make_descriptor(OemMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadata), "wrapfn_", make_descriptor(t_OemMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadata), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OemMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OemMetadata::initializeClass, 1)))
                  return NULL;
                return t_OemMetadata::wrap_Object(OemMetadata(((t_OemMetadata *) arg)->object.this$));
              }
              static PyObject *t_OemMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OemMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OemMetadata_init_(t_OemMetadata *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                OemMetadata object((jobject) NULL);

                if (!parseArgs(args, "I", &a0))
                {
                  INT_CALL(object = OemMetadata(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OemMetadata_getInterpolationDegree(t_OemMetadata *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getInterpolationDegree());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OemMetadata_getInterpolationMethod(t_OemMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod result((jobject) NULL);
                OBJ_CALL(result = self->object.getInterpolationMethod());
                return ::org::orekit::files::ccsds::ndm::odm::oem::t_InterpolationMethod::wrap_Object(result);
              }

              static PyObject *t_OemMetadata_getStartTime(t_OemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OemMetadata_getStopTime(t_OemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OemMetadata_getUseableStartTime(t_OemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getUseableStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OemMetadata_getUseableStopTime(t_OemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getUseableStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OemMetadata_setInterpolationDegree(t_OemMetadata *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setInterpolationDegree(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInterpolationDegree", arg);
                return NULL;
              }

              static PyObject *t_OemMetadata_setInterpolationMethod(t_OemMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::oem::t_InterpolationMethod::parameters_))
                {
                  OBJ_CALL(self->object.setInterpolationMethod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInterpolationMethod", arg);
                return NULL;
              }

              static PyObject *t_OemMetadata_setStartTime(t_OemMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setStartTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setStartTime", arg);
                return NULL;
              }

              static PyObject *t_OemMetadata_setStopTime(t_OemMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setStopTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setStopTime", arg);
                return NULL;
              }

              static PyObject *t_OemMetadata_setUseableStartTime(t_OemMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setUseableStartTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setUseableStartTime", arg);
                return NULL;
              }

              static PyObject *t_OemMetadata_setUseableStopTime(t_OemMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setUseableStopTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setUseableStopTime", arg);
                return NULL;
              }

              static PyObject *t_OemMetadata_validate(t_OemMetadata *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OemMetadata), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_OemMetadata_get__interpolationDegree(t_OemMetadata *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getInterpolationDegree());
                return PyLong_FromLong((long) value);
              }
              static int t_OemMetadata_set__interpolationDegree(t_OemMetadata *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setInterpolationDegree(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "interpolationDegree", arg);
                return -1;
              }

              static PyObject *t_OemMetadata_get__interpolationMethod(t_OemMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod value((jobject) NULL);
                OBJ_CALL(value = self->object.getInterpolationMethod());
                return ::org::orekit::files::ccsds::ndm::odm::oem::t_InterpolationMethod::wrap_Object(value);
              }
              static int t_OemMetadata_set__interpolationMethod(t_OemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod::initializeClass, &value))
                  {
                    INT_CALL(self->object.setInterpolationMethod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "interpolationMethod", arg);
                return -1;
              }

              static PyObject *t_OemMetadata_get__startTime(t_OemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OemMetadata_set__startTime(t_OemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setStartTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "startTime", arg);
                return -1;
              }

              static PyObject *t_OemMetadata_get__stopTime(t_OemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OemMetadata_set__stopTime(t_OemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setStopTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "stopTime", arg);
                return -1;
              }

              static PyObject *t_OemMetadata_get__useableStartTime(t_OemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getUseableStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OemMetadata_set__useableStartTime(t_OemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setUseableStartTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "useableStartTime", arg);
                return -1;
              }

              static PyObject *t_OemMetadata_get__useableStopTime(t_OemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getUseableStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OemMetadata_set__useableStopTime(t_OemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setUseableStopTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "useableStopTime", arg);
                return -1;
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistory.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadata.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitManeuverHistory::class$ = NULL;
              jmethodID *OrbitManeuverHistory::mids$ = NULL;
              bool OrbitManeuverHistory::live$ = false;

              jclass OrbitManeuverHistory::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistory");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_9b5d2eef65de2111] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadata;Ljava/util/List;)V");
                  mids$[mid_getManeuvers_0d9551367f7ecdef] = env->getMethodID(cls, "getManeuvers", "()Ljava/util/List;");
                  mids$[mid_getMetadata_3be9b3636297daeb] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadata;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OrbitManeuverHistory::OrbitManeuverHistory(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata & a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9b5d2eef65de2111, a0.this$, a1.this$)) {}

              ::java::util::List OrbitManeuverHistory::getManeuvers() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManeuvers_0d9551367f7ecdef]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata OrbitManeuverHistory::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_3be9b3636297daeb]));
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              static PyObject *t_OrbitManeuverHistory_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitManeuverHistory_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OrbitManeuverHistory_init_(t_OrbitManeuverHistory *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OrbitManeuverHistory_getManeuvers(t_OrbitManeuverHistory *self);
              static PyObject *t_OrbitManeuverHistory_getMetadata(t_OrbitManeuverHistory *self);
              static PyObject *t_OrbitManeuverHistory_get__maneuvers(t_OrbitManeuverHistory *self, void *data);
              static PyObject *t_OrbitManeuverHistory_get__metadata(t_OrbitManeuverHistory *self, void *data);
              static PyGetSetDef t_OrbitManeuverHistory__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitManeuverHistory, maneuvers),
                DECLARE_GET_FIELD(t_OrbitManeuverHistory, metadata),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitManeuverHistory__methods_[] = {
                DECLARE_METHOD(t_OrbitManeuverHistory, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuverHistory, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuverHistory, getManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistory, getMetadata, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitManeuverHistory)[] = {
                { Py_tp_methods, t_OrbitManeuverHistory__methods_ },
                { Py_tp_init, (void *) t_OrbitManeuverHistory_init_ },
                { Py_tp_getset, t_OrbitManeuverHistory__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitManeuverHistory)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OrbitManeuverHistory, t_OrbitManeuverHistory, OrbitManeuverHistory);

              void t_OrbitManeuverHistory::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitManeuverHistory), &PY_TYPE_DEF(OrbitManeuverHistory), module, "OrbitManeuverHistory", 0);
              }

              void t_OrbitManeuverHistory::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistory), "class_", make_descriptor(OrbitManeuverHistory::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistory), "wrapfn_", make_descriptor(t_OrbitManeuverHistory::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistory), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OrbitManeuverHistory_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitManeuverHistory::initializeClass, 1)))
                  return NULL;
                return t_OrbitManeuverHistory::wrap_Object(OrbitManeuverHistory(((t_OrbitManeuverHistory *) arg)->object.this$));
              }
              static PyObject *t_OrbitManeuverHistory_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitManeuverHistory::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OrbitManeuverHistory_init_(t_OrbitManeuverHistory *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                OrbitManeuverHistory object((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = OrbitManeuverHistory(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OrbitManeuverHistory_getManeuvers(t_OrbitManeuverHistory *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManeuvers());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(OrbitManeuver));
              }

              static PyObject *t_OrbitManeuverHistory_getMetadata(t_OrbitManeuverHistory *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitManeuverHistoryMetadata::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistory_get__maneuvers(t_OrbitManeuverHistory *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManeuvers());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OrbitManeuverHistory_get__metadata(t_OrbitManeuverHistory *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitManeuverHistoryMetadata::wrap_Object(value);
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepHandler.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *FieldOrekitStepHandler::class$ = NULL;
        jmethodID *FieldOrekitStepHandler::mids$ = NULL;
        bool FieldOrekitStepHandler::live$ = false;

        jclass FieldOrekitStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/FieldOrekitStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finish_b66c84a5711243d5] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_handleStep_c006764357a9d9b2] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;)V");
            mids$[mid_init_811e49dad2467b67] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void FieldOrekitStepHandler::finish(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_b66c84a5711243d5], a0.this$);
        }

        void FieldOrekitStepHandler::handleStep(const ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_c006764357a9d9b2], a0.this$);
        }

        void FieldOrekitStepHandler::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_811e49dad2467b67], a0.this$, a1.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {
        static PyObject *t_FieldOrekitStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOrekitStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOrekitStepHandler_of_(t_FieldOrekitStepHandler *self, PyObject *args);
        static PyObject *t_FieldOrekitStepHandler_finish(t_FieldOrekitStepHandler *self, PyObject *arg);
        static PyObject *t_FieldOrekitStepHandler_handleStep(t_FieldOrekitStepHandler *self, PyObject *arg);
        static PyObject *t_FieldOrekitStepHandler_init(t_FieldOrekitStepHandler *self, PyObject *args);
        static PyObject *t_FieldOrekitStepHandler_get__parameters_(t_FieldOrekitStepHandler *self, void *data);
        static PyGetSetDef t_FieldOrekitStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_FieldOrekitStepHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldOrekitStepHandler__methods_[] = {
          DECLARE_METHOD(t_FieldOrekitStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOrekitStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOrekitStepHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldOrekitStepHandler, finish, METH_O),
          DECLARE_METHOD(t_FieldOrekitStepHandler, handleStep, METH_O),
          DECLARE_METHOD(t_FieldOrekitStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldOrekitStepHandler)[] = {
          { Py_tp_methods, t_FieldOrekitStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldOrekitStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldOrekitStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldOrekitStepHandler, t_FieldOrekitStepHandler, FieldOrekitStepHandler);
        PyObject *t_FieldOrekitStepHandler::wrap_Object(const FieldOrekitStepHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOrekitStepHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOrekitStepHandler *self = (t_FieldOrekitStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldOrekitStepHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOrekitStepHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOrekitStepHandler *self = (t_FieldOrekitStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldOrekitStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldOrekitStepHandler), &PY_TYPE_DEF(FieldOrekitStepHandler), module, "FieldOrekitStepHandler", 0);
        }

        void t_FieldOrekitStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitStepHandler), "class_", make_descriptor(FieldOrekitStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitStepHandler), "wrapfn_", make_descriptor(t_FieldOrekitStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldOrekitStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldOrekitStepHandler::initializeClass, 1)))
            return NULL;
          return t_FieldOrekitStepHandler::wrap_Object(FieldOrekitStepHandler(((t_FieldOrekitStepHandler *) arg)->object.this$));
        }
        static PyObject *t_FieldOrekitStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldOrekitStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldOrekitStepHandler_of_(t_FieldOrekitStepHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldOrekitStepHandler_finish(t_FieldOrekitStepHandler *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_FieldOrekitStepHandler_handleStep(t_FieldOrekitStepHandler *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator::initializeClass, &a0, &p0, ::org::orekit::propagation::sampling::t_FieldOrekitStepInterpolator::parameters_))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_FieldOrekitStepHandler_init(t_FieldOrekitStepHandler *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
        static PyObject *t_FieldOrekitStepHandler_get__parameters_(t_FieldOrekitStepHandler *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader$LineParameters.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *CssiSpaceWeatherDataLoader$LineParameters::class$ = NULL;
            jmethodID *CssiSpaceWeatherDataLoader$LineParameters::mids$ = NULL;
            bool CssiSpaceWeatherDataLoader$LineParameters::live$ = false;

            jclass CssiSpaceWeatherDataLoader$LineParameters::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader$LineParameters");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_88d2fc14161786f9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;[DD[DDDIDDDDD)V");
                mids$[mid_compareTo_2ef76e9305253641] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader$LineParameters;)I");
                mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
                mids$[mid_getApAvg_557b8123390d8d0c] = env->getMethodID(cls, "getApAvg", "()D");
                mids$[mid_getCtr81Adj_557b8123390d8d0c] = env->getMethodID(cls, "getCtr81Adj", "()D");
                mids$[mid_getCtr81Obs_557b8123390d8d0c] = env->getMethodID(cls, "getCtr81Obs", "()D");
                mids$[mid_getF107Adj_557b8123390d8d0c] = env->getMethodID(cls, "getF107Adj", "()D");
                mids$[mid_getF107Obs_557b8123390d8d0c] = env->getMethodID(cls, "getF107Obs", "()D");
                mids$[mid_getFluxQualifier_412668abc8d889e9] = env->getMethodID(cls, "getFluxQualifier", "()I");
                mids$[mid_getKpSum_557b8123390d8d0c] = env->getMethodID(cls, "getKpSum", "()D");
                mids$[mid_getLst81Adj_557b8123390d8d0c] = env->getMethodID(cls, "getLst81Adj", "()D");
                mids$[mid_getLst81Obs_557b8123390d8d0c] = env->getMethodID(cls, "getLst81Obs", "()D");
                mids$[mid_getThreeHourlyAp_a53a7513ecedada2] = env->getMethodID(cls, "getThreeHourlyAp", "()[D");
                mids$[mid_getThreeHourlyAp_69cfb132c661aca4] = env->getMethodID(cls, "getThreeHourlyAp", "(I)D");
                mids$[mid_getThreeHourlyKp_a53a7513ecedada2] = env->getMethodID(cls, "getThreeHourlyKp", "()[D");
                mids$[mid_getThreeHourlyKp_69cfb132c661aca4] = env->getMethodID(cls, "getThreeHourlyKp", "(I)D");
                mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CssiSpaceWeatherDataLoader$LineParameters::CssiSpaceWeatherDataLoader$LineParameters(const ::org::orekit::time::AbsoluteDate & a0, const JArray< jdouble > & a1, jdouble a2, const JArray< jdouble > & a3, jdouble a4, jdouble a5, jint a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters(env->newObject(initializeClass, &mids$, mid_init$_88d2fc14161786f9, a0.this$, a1.this$, a2, a3.this$, a4, a5, a6, a7, a8, a9, a10, a11)) {}

            jint CssiSpaceWeatherDataLoader$LineParameters::compareTo(const ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters & a0) const
            {
              return env->callIntMethod(this$, mids$[mid_compareTo_2ef76e9305253641], a0.this$);
            }

            jboolean CssiSpaceWeatherDataLoader$LineParameters::equals(const ::java::lang::Object & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getApAvg() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getApAvg_557b8123390d8d0c]);
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getCtr81Adj() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtr81Adj_557b8123390d8d0c]);
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getCtr81Obs() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtr81Obs_557b8123390d8d0c]);
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getF107Adj() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getF107Adj_557b8123390d8d0c]);
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getF107Obs() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getF107Obs_557b8123390d8d0c]);
            }

            jint CssiSpaceWeatherDataLoader$LineParameters::getFluxQualifier() const
            {
              return env->callIntMethod(this$, mids$[mid_getFluxQualifier_412668abc8d889e9]);
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getKpSum() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getKpSum_557b8123390d8d0c]);
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getLst81Adj() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getLst81Adj_557b8123390d8d0c]);
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getLst81Obs() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getLst81Obs_557b8123390d8d0c]);
            }

            JArray< jdouble > CssiSpaceWeatherDataLoader$LineParameters::getThreeHourlyAp() const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getThreeHourlyAp_a53a7513ecedada2]));
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getThreeHourlyAp(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getThreeHourlyAp_69cfb132c661aca4], a0);
            }

            JArray< jdouble > CssiSpaceWeatherDataLoader$LineParameters::getThreeHourlyKp() const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getThreeHourlyKp_a53a7513ecedada2]));
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getThreeHourlyKp(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getThreeHourlyKp_69cfb132c661aca4], a0);
            }

            jint CssiSpaceWeatherDataLoader$LineParameters::hashCode() const
            {
              return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_of_(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args);
            static int t_CssiSpaceWeatherDataLoader$LineParameters_init_(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_compareTo(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_equals(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getApAvg(t_CssiSpaceWeatherDataLoader$LineParameters *self);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getCtr81Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getCtr81Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getF107Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getF107Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getFluxQualifier(t_CssiSpaceWeatherDataLoader$LineParameters *self);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getKpSum(t_CssiSpaceWeatherDataLoader$LineParameters *self);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getLst81Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getLst81Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getThreeHourlyAp(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getThreeHourlyKp(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_hashCode(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__apAvg(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__ctr81Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__ctr81Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__f107Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__f107Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__fluxQualifier(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__kpSum(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__lst81Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__lst81Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__threeHourlyAp(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__threeHourlyKp(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__parameters_(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyGetSetDef t_CssiSpaceWeatherDataLoader$LineParameters__fields_[] = {
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, apAvg),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, ctr81Adj),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, ctr81Obs),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, f107Adj),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, f107Obs),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, fluxQualifier),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, kpSum),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, lst81Adj),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, lst81Obs),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, threeHourlyAp),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, threeHourlyKp),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CssiSpaceWeatherDataLoader$LineParameters__methods_[] = {
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, of_, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, compareTo, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, equals, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getApAvg, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getCtr81Adj, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getCtr81Obs, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getF107Adj, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getF107Obs, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getFluxQualifier, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getKpSum, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getLst81Adj, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getLst81Obs, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getThreeHourlyAp, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getThreeHourlyKp, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, hashCode, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CssiSpaceWeatherDataLoader$LineParameters)[] = {
              { Py_tp_methods, t_CssiSpaceWeatherDataLoader$LineParameters__methods_ },
              { Py_tp_init, (void *) t_CssiSpaceWeatherDataLoader$LineParameters_init_ },
              { Py_tp_getset, t_CssiSpaceWeatherDataLoader$LineParameters__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CssiSpaceWeatherDataLoader$LineParameters)[] = {
              &PY_TYPE_DEF(::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters),
              NULL
            };

            DEFINE_TYPE(CssiSpaceWeatherDataLoader$LineParameters, t_CssiSpaceWeatherDataLoader$LineParameters, CssiSpaceWeatherDataLoader$LineParameters);
            PyObject *t_CssiSpaceWeatherDataLoader$LineParameters::wrap_Object(const CssiSpaceWeatherDataLoader$LineParameters& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CssiSpaceWeatherDataLoader$LineParameters::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CssiSpaceWeatherDataLoader$LineParameters *self = (t_CssiSpaceWeatherDataLoader$LineParameters *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CssiSpaceWeatherDataLoader$LineParameters::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CssiSpaceWeatherDataLoader$LineParameters::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CssiSpaceWeatherDataLoader$LineParameters *self = (t_CssiSpaceWeatherDataLoader$LineParameters *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CssiSpaceWeatherDataLoader$LineParameters::install(PyObject *module)
            {
              installType(&PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters), &PY_TYPE_DEF(CssiSpaceWeatherDataLoader$LineParameters), module, "CssiSpaceWeatherDataLoader$LineParameters", 0);
            }

            void t_CssiSpaceWeatherDataLoader$LineParameters::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters), "class_", make_descriptor(CssiSpaceWeatherDataLoader$LineParameters::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters), "wrapfn_", make_descriptor(t_CssiSpaceWeatherDataLoader$LineParameters::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CssiSpaceWeatherDataLoader$LineParameters::initializeClass, 1)))
                return NULL;
              return t_CssiSpaceWeatherDataLoader$LineParameters::wrap_Object(CssiSpaceWeatherDataLoader$LineParameters(((t_CssiSpaceWeatherDataLoader$LineParameters *) arg)->object.this$));
            }
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CssiSpaceWeatherDataLoader$LineParameters::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_of_(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_CssiSpaceWeatherDataLoader$LineParameters_init_(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              JArray< jdouble > a3((jobject) NULL);
              jdouble a4;
              jdouble a5;
              jint a6;
              jdouble a7;
              jdouble a8;
              jdouble a9;
              jdouble a10;
              jdouble a11;
              CssiSpaceWeatherDataLoader$LineParameters object((jobject) NULL);

              if (!parseArgs(args, "k[DD[DDDIDDDDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11))
              {
                INT_CALL(object = CssiSpaceWeatherDataLoader$LineParameters(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_compareTo(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args)
            {
              ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters a0((jobject) NULL);
              PyTypeObject **p0;
              jint result;

              if (!parseArgs(args, "K", ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters::initializeClass, &a0, &p0, ::org::orekit::models::earth::atmosphere::data::t_AbstractSolarActivityDataLoader$LineParameters::parameters_))
              {
                OBJ_CALL(result = self->object.compareTo(a0));
                return PyLong_FromLong((long) result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters), (PyObject *) self, "compareTo", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_equals(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args)
            {
              ::java::lang::Object a0((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "o", &a0))
              {
                OBJ_CALL(result = self->object.equals(a0));
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters), (PyObject *) self, "equals", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getApAvg(t_CssiSpaceWeatherDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getApAvg());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getCtr81Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtr81Adj());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getCtr81Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtr81Obs());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getF107Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getF107Adj());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getF107Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getF107Obs());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getFluxQualifier(t_CssiSpaceWeatherDataLoader$LineParameters *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getFluxQualifier());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getKpSum(t_CssiSpaceWeatherDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getKpSum());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getLst81Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getLst81Adj());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getLst81Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getLst81Obs());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getThreeHourlyAp(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  JArray< jdouble > result((jobject) NULL);
                  OBJ_CALL(result = self->object.getThreeHourlyAp());
                  return result.wrap();
                }
                break;
               case 1:
                {
                  jint a0;
                  jdouble result;

                  if (!parseArgs(args, "I", &a0))
                  {
                    OBJ_CALL(result = self->object.getThreeHourlyAp(a0));
                    return PyFloat_FromDouble((double) result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getThreeHourlyAp", args);
              return NULL;
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getThreeHourlyKp(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  JArray< jdouble > result((jobject) NULL);
                  OBJ_CALL(result = self->object.getThreeHourlyKp());
                  return result.wrap();
                }
                break;
               case 1:
                {
                  jint a0;
                  jdouble result;

                  if (!parseArgs(args, "I", &a0))
                  {
                    OBJ_CALL(result = self->object.getThreeHourlyKp(a0));
                    return PyFloat_FromDouble((double) result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getThreeHourlyKp", args);
              return NULL;
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_hashCode(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args)
            {
              jint result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.hashCode());
                return PyLong_FromLong((long) result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters), (PyObject *) self, "hashCode", args, 2);
            }
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__parameters_(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__apAvg(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getApAvg());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__ctr81Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtr81Adj());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__ctr81Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtr81Obs());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__f107Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getF107Adj());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__f107Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getF107Obs());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__fluxQualifier(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getFluxQualifier());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__kpSum(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getKpSum());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__lst81Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getLst81Adj());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__lst81Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getLst81Obs());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__threeHourlyAp(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              JArray< jdouble > value((jobject) NULL);
              OBJ_CALL(value = self->object.getThreeHourlyAp());
              return value.wrap();
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__threeHourlyKp(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              JArray< jdouble > value((jobject) NULL);
              OBJ_CALL(value = self->object.getThreeHourlyKp());
              return value.wrap();
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver$Interval.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BracketedRealFieldUnivariateSolver$Interval::class$ = NULL;
        jmethodID *BracketedRealFieldUnivariateSolver$Interval::mids$ = NULL;
        bool BracketedRealFieldUnivariateSolver$Interval::live$ = false;

        jclass BracketedRealFieldUnivariateSolver$Interval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver$Interval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_56d3d4aaadd7d7a1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getLeftAbscissa_613c8f46c659f636] = env->getMethodID(cls, "getLeftAbscissa", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getLeftValue_613c8f46c659f636] = env->getMethodID(cls, "getLeftValue", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getRightAbscissa_613c8f46c659f636] = env->getMethodID(cls, "getRightAbscissa", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getRightValue_613c8f46c659f636] = env->getMethodID(cls, "getRightValue", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getSide_96d774d32e5e5661] = env->getMethodID(cls, "getSide", "(Lorg/hipparchus/analysis/solvers/AllowedSolution;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BracketedRealFieldUnivariateSolver$Interval::BracketedRealFieldUnivariateSolver$Interval(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_56d3d4aaadd7d7a1, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver$Interval::getLeftAbscissa() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLeftAbscissa_613c8f46c659f636]));
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver$Interval::getLeftValue() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLeftValue_613c8f46c659f636]));
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver$Interval::getRightAbscissa() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRightAbscissa_613c8f46c659f636]));
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver$Interval::getRightValue() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRightValue_613c8f46c659f636]));
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver$Interval::getSide(const ::org::hipparchus::analysis::solvers::AllowedSolution & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getSide_96d774d32e5e5661], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_of_(t_BracketedRealFieldUnivariateSolver$Interval *self, PyObject *args);
        static int t_BracketedRealFieldUnivariateSolver$Interval_init_(t_BracketedRealFieldUnivariateSolver$Interval *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getLeftAbscissa(t_BracketedRealFieldUnivariateSolver$Interval *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getLeftValue(t_BracketedRealFieldUnivariateSolver$Interval *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getRightAbscissa(t_BracketedRealFieldUnivariateSolver$Interval *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getRightValue(t_BracketedRealFieldUnivariateSolver$Interval *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getSide(t_BracketedRealFieldUnivariateSolver$Interval *self, PyObject *arg);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__leftAbscissa(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__leftValue(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__rightAbscissa(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__rightValue(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__parameters_(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data);
        static PyGetSetDef t_BracketedRealFieldUnivariateSolver$Interval__fields_[] = {
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver$Interval, leftAbscissa),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver$Interval, leftValue),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver$Interval, rightAbscissa),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver$Interval, rightValue),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver$Interval, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BracketedRealFieldUnivariateSolver$Interval__methods_[] = {
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver$Interval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver$Interval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver$Interval, of_, METH_VARARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver$Interval, getLeftAbscissa, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver$Interval, getLeftValue, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver$Interval, getRightAbscissa, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver$Interval, getRightValue, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver$Interval, getSide, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BracketedRealFieldUnivariateSolver$Interval)[] = {
          { Py_tp_methods, t_BracketedRealFieldUnivariateSolver$Interval__methods_ },
          { Py_tp_init, (void *) t_BracketedRealFieldUnivariateSolver$Interval_init_ },
          { Py_tp_getset, t_BracketedRealFieldUnivariateSolver$Interval__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BracketedRealFieldUnivariateSolver$Interval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BracketedRealFieldUnivariateSolver$Interval, t_BracketedRealFieldUnivariateSolver$Interval, BracketedRealFieldUnivariateSolver$Interval);
        PyObject *t_BracketedRealFieldUnivariateSolver$Interval::wrap_Object(const BracketedRealFieldUnivariateSolver$Interval& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketedRealFieldUnivariateSolver$Interval::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketedRealFieldUnivariateSolver$Interval *self = (t_BracketedRealFieldUnivariateSolver$Interval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BracketedRealFieldUnivariateSolver$Interval::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketedRealFieldUnivariateSolver$Interval::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketedRealFieldUnivariateSolver$Interval *self = (t_BracketedRealFieldUnivariateSolver$Interval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BracketedRealFieldUnivariateSolver$Interval::install(PyObject *module)
        {
          installType(&PY_TYPE(BracketedRealFieldUnivariateSolver$Interval), &PY_TYPE_DEF(BracketedRealFieldUnivariateSolver$Interval), module, "BracketedRealFieldUnivariateSolver$Interval", 0);
        }

        void t_BracketedRealFieldUnivariateSolver$Interval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedRealFieldUnivariateSolver$Interval), "class_", make_descriptor(BracketedRealFieldUnivariateSolver$Interval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedRealFieldUnivariateSolver$Interval), "wrapfn_", make_descriptor(t_BracketedRealFieldUnivariateSolver$Interval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedRealFieldUnivariateSolver$Interval), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BracketedRealFieldUnivariateSolver$Interval::initializeClass, 1)))
            return NULL;
          return t_BracketedRealFieldUnivariateSolver$Interval::wrap_Object(BracketedRealFieldUnivariateSolver$Interval(((t_BracketedRealFieldUnivariateSolver$Interval *) arg)->object.this$));
        }
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BracketedRealFieldUnivariateSolver$Interval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_of_(t_BracketedRealFieldUnivariateSolver$Interval *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BracketedRealFieldUnivariateSolver$Interval_init_(t_BracketedRealFieldUnivariateSolver$Interval *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          BracketedRealFieldUnivariateSolver$Interval object((jobject) NULL);

          if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = BracketedRealFieldUnivariateSolver$Interval(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getLeftAbscissa(t_BracketedRealFieldUnivariateSolver$Interval *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getLeftAbscissa());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getLeftValue(t_BracketedRealFieldUnivariateSolver$Interval *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getLeftValue());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getRightAbscissa(t_BracketedRealFieldUnivariateSolver$Interval *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getRightAbscissa());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getRightValue(t_BracketedRealFieldUnivariateSolver$Interval *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getRightValue());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getSide(t_BracketedRealFieldUnivariateSolver$Interval *self, PyObject *arg)
        {
          ::org::hipparchus::analysis::solvers::AllowedSolution a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &p0, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
          {
            OBJ_CALL(result = self->object.getSide(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getSide", arg);
          return NULL;
        }
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__parameters_(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__leftAbscissa(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getLeftAbscissa());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__leftValue(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getLeftValue());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__rightAbscissa(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getRightAbscissa());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__rightValue(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getRightValue());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/EstimationsProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *EstimationsProvider::class$ = NULL;
        jmethodID *EstimationsProvider::mids$ = NULL;
        bool EstimationsProvider::live$ = false;

        jclass EstimationsProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/EstimationsProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getEstimatedMeasurement_6247f00f8564bd44] = env->getMethodID(cls, "getEstimatedMeasurement", "(I)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getNumber_412668abc8d889e9] = env->getMethodID(cls, "getNumber", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement EstimationsProvider::getEstimatedMeasurement(jint a0) const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurement_6247f00f8564bd44], a0));
        }

        jint EstimationsProvider::getNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumber_412668abc8d889e9]);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        static PyObject *t_EstimationsProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimationsProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimationsProvider_getEstimatedMeasurement(t_EstimationsProvider *self, PyObject *arg);
        static PyObject *t_EstimationsProvider_getNumber(t_EstimationsProvider *self);
        static PyObject *t_EstimationsProvider_get__number(t_EstimationsProvider *self, void *data);
        static PyGetSetDef t_EstimationsProvider__fields_[] = {
          DECLARE_GET_FIELD(t_EstimationsProvider, number),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EstimationsProvider__methods_[] = {
          DECLARE_METHOD(t_EstimationsProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimationsProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimationsProvider, getEstimatedMeasurement, METH_O),
          DECLARE_METHOD(t_EstimationsProvider, getNumber, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EstimationsProvider)[] = {
          { Py_tp_methods, t_EstimationsProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EstimationsProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EstimationsProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EstimationsProvider, t_EstimationsProvider, EstimationsProvider);

        void t_EstimationsProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(EstimationsProvider), &PY_TYPE_DEF(EstimationsProvider), module, "EstimationsProvider", 0);
        }

        void t_EstimationsProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimationsProvider), "class_", make_descriptor(EstimationsProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimationsProvider), "wrapfn_", make_descriptor(t_EstimationsProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimationsProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EstimationsProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EstimationsProvider::initializeClass, 1)))
            return NULL;
          return t_EstimationsProvider::wrap_Object(EstimationsProvider(((t_EstimationsProvider *) arg)->object.this$));
        }
        static PyObject *t_EstimationsProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EstimationsProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EstimationsProvider_getEstimatedMeasurement(t_EstimationsProvider *self, PyObject *arg)
        {
          jint a0;
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getEstimatedMeasurement(a0));
            return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getEstimatedMeasurement", arg);
          return NULL;
        }

        static PyObject *t_EstimationsProvider_getNumber(t_EstimationsProvider *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EstimationsProvider_get__number(t_EstimationsProvider *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumber());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PythonMeasurementCombination.h"
#include "org/orekit/estimation/measurements/gnss/MeasurementCombination.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationDataSet.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonMeasurementCombination::class$ = NULL;
          jmethodID *PythonMeasurementCombination::mids$ = NULL;
          bool PythonMeasurementCombination::live$ = false;

          jclass PythonMeasurementCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonMeasurementCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_combine_82c5de1a9cc4c5da] = env->getMethodID(cls, "combine", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)Lorg/orekit/estimation/measurements/gnss/CombinedObservationDataSet;");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonMeasurementCombination::PythonMeasurementCombination() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonMeasurementCombination::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonMeasurementCombination::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonMeasurementCombination::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_PythonMeasurementCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonMeasurementCombination_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonMeasurementCombination_init_(t_PythonMeasurementCombination *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonMeasurementCombination_finalize(t_PythonMeasurementCombination *self);
          static PyObject *t_PythonMeasurementCombination_pythonExtension(t_PythonMeasurementCombination *self, PyObject *args);
          static jobject JNICALL t_PythonMeasurementCombination_combine0(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonMeasurementCombination_getName1(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonMeasurementCombination_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonMeasurementCombination_get__self(t_PythonMeasurementCombination *self, void *data);
          static PyGetSetDef t_PythonMeasurementCombination__fields_[] = {
            DECLARE_GET_FIELD(t_PythonMeasurementCombination, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonMeasurementCombination__methods_[] = {
            DECLARE_METHOD(t_PythonMeasurementCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMeasurementCombination, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMeasurementCombination, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonMeasurementCombination, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonMeasurementCombination)[] = {
            { Py_tp_methods, t_PythonMeasurementCombination__methods_ },
            { Py_tp_init, (void *) t_PythonMeasurementCombination_init_ },
            { Py_tp_getset, t_PythonMeasurementCombination__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonMeasurementCombination)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonMeasurementCombination, t_PythonMeasurementCombination, PythonMeasurementCombination);

          void t_PythonMeasurementCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonMeasurementCombination), &PY_TYPE_DEF(PythonMeasurementCombination), module, "PythonMeasurementCombination", 1);
          }

          void t_PythonMeasurementCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementCombination), "class_", make_descriptor(PythonMeasurementCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementCombination), "wrapfn_", make_descriptor(t_PythonMeasurementCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementCombination), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonMeasurementCombination::initializeClass);
            JNINativeMethod methods[] = {
              { "combine", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)Lorg/orekit/estimation/measurements/gnss/CombinedObservationDataSet;", (void *) t_PythonMeasurementCombination_combine0 },
              { "getName", "()Ljava/lang/String;", (void *) t_PythonMeasurementCombination_getName1 },
              { "pythonDecRef", "()V", (void *) t_PythonMeasurementCombination_pythonDecRef2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonMeasurementCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonMeasurementCombination::initializeClass, 1)))
              return NULL;
            return t_PythonMeasurementCombination::wrap_Object(PythonMeasurementCombination(((t_PythonMeasurementCombination *) arg)->object.this$));
          }
          static PyObject *t_PythonMeasurementCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonMeasurementCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonMeasurementCombination_init_(t_PythonMeasurementCombination *self, PyObject *args, PyObject *kwds)
          {
            PythonMeasurementCombination object((jobject) NULL);

            INT_CALL(object = PythonMeasurementCombination());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonMeasurementCombination_finalize(t_PythonMeasurementCombination *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonMeasurementCombination_pythonExtension(t_PythonMeasurementCombination *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jlong result;
                OBJ_CALL(result = self->object.pythonExtension());
                return PyLong_FromLongLong((PY_LONG_LONG) result);
              }
              break;
             case 1:
              {
                jlong a0;

                if (!parseArgs(args, "J", &a0))
                {
                  OBJ_CALL(self->object.pythonExtension(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
            return NULL;
          }

          static jobject JNICALL t_PythonMeasurementCombination_combine0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementCombination::mids$[PythonMeasurementCombination::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet value((jobject) NULL);
            PyObject *o0 = ::org::orekit::files::rinex::observation::t_ObservationDataSet::wrap_Object(::org::orekit::files::rinex::observation::ObservationDataSet(a0));
            PyObject *result = PyObject_CallMethod(obj, "combine", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet::initializeClass, &value))
            {
              throwTypeError("combine", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static jobject JNICALL t_PythonMeasurementCombination_getName1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementCombination::mids$[PythonMeasurementCombination::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::lang::String value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getName", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "s", &value))
            {
              throwTypeError("getName", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static void JNICALL t_PythonMeasurementCombination_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementCombination::mids$[PythonMeasurementCombination::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonMeasurementCombination::mids$[PythonMeasurementCombination::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonMeasurementCombination_get__self(t_PythonMeasurementCombination *self, void *data)
          {
            jlong ptr;
            OBJ_CALL(ptr = self->object.pythonExtension());
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              Py_INCREF(obj);
              return obj;
            }
            else
              Py_RETURN_NONE;
          }
        }
      }
    }
  }
}
