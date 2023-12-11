#ifndef java_util_TimeZone_H
#define java_util_TimeZone_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Locale;
    class Date;
    class TimeZone;
  }
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
    class Cloneable;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class TimeZone : public ::java::lang::Object {
     public:
      enum {
        mid_init$_0640e6acf969ed28,
        mid_clone_e661fe3ba2fafb22,
        mid_getAvailableIDs_5d7d8c500345981d,
        mid_getAvailableIDs_ca5a49efb19c248d,
        mid_getDSTSavings_412668abc8d889e9,
        mid_getDefault_563b8f745e53061a,
        mid_getDisplayName_3cffd47377eca18a,
        mid_getDisplayName_4b51060c6b7ea981,
        mid_getDisplayName_9fe888b76619a8fc,
        mid_getDisplayName_3e08261d24845327,
        mid_getID_3cffd47377eca18a,
        mid_getOffset_06110d73d878b7ae,
        mid_getOffset_52f61e804885b536,
        mid_getRawOffset_412668abc8d889e9,
        mid_getTimeZone_86d2eab6e9f4099c,
        mid_hasSameRules_3ccea581b2301e3f,
        mid_inDaylightTime_7bb053a7183a5e9b,
        mid_observesDaylightTime_89b302893bdbe1f1,
        mid_setDefault_49fea68be1a6ef85,
        mid_setID_f5ffdf29129ef90a,
        mid_setRawOffset_a3da1a935cb37f7b,
        mid_useDaylightTime_89b302893bdbe1f1,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit TimeZone(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      TimeZone(const TimeZone& obj) : ::java::lang::Object(obj) {}

      static jint LONG;
      static jint SHORT;

      TimeZone();

      ::java::lang::Object clone() const;
      static JArray< ::java::lang::String > getAvailableIDs();
      static JArray< ::java::lang::String > getAvailableIDs(jint);
      jint getDSTSavings() const;
      static TimeZone getDefault();
      ::java::lang::String getDisplayName() const;
      ::java::lang::String getDisplayName(const ::java::util::Locale &) const;
      ::java::lang::String getDisplayName(jboolean, jint) const;
      ::java::lang::String getDisplayName(jboolean, jint, const ::java::util::Locale &) const;
      ::java::lang::String getID() const;
      jint getOffset(jlong) const;
      jint getOffset(jint, jint, jint, jint, jint, jint) const;
      jint getRawOffset() const;
      static TimeZone getTimeZone(const ::java::lang::String &);
      jboolean hasSameRules(const TimeZone &) const;
      jboolean inDaylightTime(const ::java::util::Date &) const;
      jboolean observesDaylightTime() const;
      static void setDefault(const TimeZone &);
      void setID(const ::java::lang::String &) const;
      void setRawOffset(jint) const;
      jboolean useDaylightTime() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(TimeZone);
    extern PyTypeObject *PY_TYPE(TimeZone);

    class t_TimeZone {
    public:
      PyObject_HEAD
      TimeZone object;
      static PyObject *wrap_Object(const TimeZone&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
