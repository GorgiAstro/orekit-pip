#ifndef java_util_TimeZone_H
#define java_util_TimeZone_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Date;
    class Locale;
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
        mid_init$_ff7cb6c242604316,
        mid_clone_704a5bee58538972,
        mid_getAvailableIDs_f81c0644d57ae495,
        mid_getAvailableIDs_31ca0f511704e78c,
        mid_getDSTSavings_d6ab429752e7c267,
        mid_getDefault_7755099100e77ba2,
        mid_getDisplayName_d2c8eb4129821f0e,
        mid_getDisplayName_5969ecf7afac3dba,
        mid_getDisplayName_0f83359d8cbe4821,
        mid_getDisplayName_a015903bb3bf1c24,
        mid_getID_d2c8eb4129821f0e,
        mid_getOffset_e9d351dcffb1a696,
        mid_getOffset_45302a2248be8069,
        mid_getRawOffset_d6ab429752e7c267,
        mid_getTimeZone_29d7696d4fe6c776,
        mid_hasSameRules_c6a169791b399bc2,
        mid_inDaylightTime_aa8a9ab2727cc0c7,
        mid_observesDaylightTime_eee3de00fe971136,
        mid_setDefault_f21da9779bf2bfbd,
        mid_setID_105e1eadb709d9ac,
        mid_setRawOffset_8fd427ab23829bf5,
        mid_useDaylightTime_eee3de00fe971136,
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
