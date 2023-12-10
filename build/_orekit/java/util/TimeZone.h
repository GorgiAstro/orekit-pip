#ifndef java_util_TimeZone_H
#define java_util_TimeZone_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Date;
    class TimeZone;
    class Locale;
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
        mid_init$_0fa09c18fee449d5,
        mid_clone_4d26fd885228c716,
        mid_getAvailableIDs_692f4257baa8d3c3,
        mid_getAvailableIDs_054ff2a17c4a1ad4,
        mid_getDSTSavings_570ce0828f81a2c1,
        mid_getDefault_e40c7977e71c6d44,
        mid_getDisplayName_11b109bd155ca898,
        mid_getDisplayName_3cd873bfb132c4fd,
        mid_getDisplayName_7715d8a8570f7999,
        mid_getDisplayName_03b5069145ddcf0f,
        mid_getID_11b109bd155ca898,
        mid_getOffset_d0f2acf0c955e055,
        mid_getOffset_763c8980911abee3,
        mid_getRawOffset_570ce0828f81a2c1,
        mid_getTimeZone_cda1c9cb9ac735cd,
        mid_hasSameRules_df28b4e23f90f50d,
        mid_inDaylightTime_f90360441aeddba6,
        mid_observesDaylightTime_b108b35ef48e27bd,
        mid_setDefault_5598c38439d340f6,
        mid_setID_d0bc48d5b00dc40c,
        mid_setRawOffset_99803b0791f320ff,
        mid_useDaylightTime_b108b35ef48e27bd,
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
