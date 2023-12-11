#ifndef java_util_Date_H
#define java_util_Date_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Date;
  }
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
    class Cloneable;
    class String;
    class Comparable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Date : public ::java::lang::Object {
     public:
      enum {
        mid_init$_0640e6acf969ed28,
        mid_init$_f5ffdf29129ef90a,
        mid_init$_3cd6a6b354c6aa22,
        mid_init$_3796b665437eba81,
        mid_init$_a0ab3b1da64ee815,
        mid_init$_b02282271d2e33e3,
        mid_UTC_b0db397422ad42fa,
        mid_after_7bb053a7183a5e9b,
        mid_before_7bb053a7183a5e9b,
        mid_clone_e661fe3ba2fafb22,
        mid_compareTo_690e4181a3b58622,
        mid_equals_221e8e85cb385209,
        mid_getDate_412668abc8d889e9,
        mid_getDay_412668abc8d889e9,
        mid_getHours_412668abc8d889e9,
        mid_getMinutes_412668abc8d889e9,
        mid_getMonth_412668abc8d889e9,
        mid_getSeconds_412668abc8d889e9,
        mid_getTime_9e26256fb0d384a2,
        mid_getTimezoneOffset_412668abc8d889e9,
        mid_getYear_412668abc8d889e9,
        mid_hashCode_412668abc8d889e9,
        mid_parse_8524bc32bc995ef2,
        mid_setDate_a3da1a935cb37f7b,
        mid_setHours_a3da1a935cb37f7b,
        mid_setMinutes_a3da1a935cb37f7b,
        mid_setMonth_a3da1a935cb37f7b,
        mid_setSeconds_a3da1a935cb37f7b,
        mid_setTime_3cd6a6b354c6aa22,
        mid_setYear_a3da1a935cb37f7b,
        mid_toGMTString_3cffd47377eca18a,
        mid_toLocaleString_3cffd47377eca18a,
        mid_toString_3cffd47377eca18a,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Date(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Date(const Date& obj) : ::java::lang::Object(obj) {}

      Date();
      Date(const ::java::lang::String &);
      Date(jlong);
      Date(jint, jint, jint);
      Date(jint, jint, jint, jint, jint);
      Date(jint, jint, jint, jint, jint, jint);

      static jlong UTC(jint, jint, jint, jint, jint, jint);
      jboolean after(const Date &) const;
      jboolean before(const Date &) const;
      ::java::lang::Object clone() const;
      jint compareTo(const Date &) const;
      jboolean equals(const ::java::lang::Object &) const;
      jint getDate() const;
      jint getDay() const;
      jint getHours() const;
      jint getMinutes() const;
      jint getMonth() const;
      jint getSeconds() const;
      jlong getTime() const;
      jint getTimezoneOffset() const;
      jint getYear() const;
      jint hashCode() const;
      static jlong parse(const ::java::lang::String &);
      void setDate(jint) const;
      void setHours(jint) const;
      void setMinutes(jint) const;
      void setMonth(jint) const;
      void setSeconds(jint) const;
      void setTime(jlong) const;
      void setYear(jint) const;
      ::java::lang::String toGMTString() const;
      ::java::lang::String toLocaleString() const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Date);
    extern PyTypeObject *PY_TYPE(Date);

    class t_Date {
    public:
      PyObject_HEAD
      Date object;
      static PyObject *wrap_Object(const Date&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
