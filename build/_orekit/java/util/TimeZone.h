#ifndef java_util_TimeZone_H
#define java_util_TimeZone_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Locale;
    class TimeZone;
    class Date;
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
        mid_init$_a1fa5dae97ea5ed2,
        mid_clone_541690f9ee81d3ad,
        mid_getAvailableIDs_0f94e41879ab7062,
        mid_getAvailableIDs_e3e694d37be98bf0,
        mid_getDSTSavings_55546ef6a647f39b,
        mid_getDefault_e127b2db209cd4d5,
        mid_getDisplayName_1c1fa1e935d6cdcf,
        mid_getDisplayName_26070c28e6ea354d,
        mid_getDisplayName_16bc9a45a1084794,
        mid_getDisplayName_7f7535daaf64de9e,
        mid_getID_1c1fa1e935d6cdcf,
        mid_getOffset_da24d9dc605e436c,
        mid_getOffset_cdfca057dbea3f1b,
        mid_getRawOffset_55546ef6a647f39b,
        mid_getTimeZone_506a2259b58ff4d1,
        mid_hasSameRules_265f2b9e996450e2,
        mid_inDaylightTime_e7dfa6240fa69edb,
        mid_observesDaylightTime_9ab94ac1dc23b105,
        mid_setDefault_6ad8873b96f16bda,
        mid_setID_734b91ac30d5f9b4,
        mid_setRawOffset_44ed599e93e8a30c,
        mid_useDaylightTime_9ab94ac1dc23b105,
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
