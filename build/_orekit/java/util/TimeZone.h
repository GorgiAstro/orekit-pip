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
        mid_init$_7ae3461a92a43152,
        mid_clone_dfd7647d9110ac9f,
        mid_getAvailableIDs_0f62ccf08eef5924,
        mid_getAvailableIDs_7a8dea0226b5c4de,
        mid_getDSTSavings_f2f64475e4580546,
        mid_getDefault_2bae121e118f90cd,
        mid_getDisplayName_0090f7797e403f43,
        mid_getDisplayName_bab3be9b232acc5a,
        mid_getDisplayName_fc552db7a75e88b2,
        mid_getDisplayName_9b86a39bda85e3a9,
        mid_getID_0090f7797e403f43,
        mid_getOffset_81b31113dbb4e784,
        mid_getOffset_2d3410165b8129ba,
        mid_getRawOffset_f2f64475e4580546,
        mid_getTimeZone_79ef52cf2a3dbdd1,
        mid_hasSameRules_f43e15a16368e629,
        mid_inDaylightTime_7b40bfcd353b1f24,
        mid_observesDaylightTime_e470b6d9e0d979db,
        mid_setDefault_c8bdf74fe0df1c6e,
        mid_setID_e939c6558ae8d313,
        mid_setRawOffset_0a2a1ac2721c0336,
        mid_useDaylightTime_e470b6d9e0d979db,
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
