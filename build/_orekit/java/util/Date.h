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
        mid_init$_0fa09c18fee449d5,
        mid_init$_d0bc48d5b00dc40c,
        mid_init$_3a8e7649f31fdb20,
        mid_init$_8336200ef3dde36b,
        mid_init$_602d537927d23d46,
        mid_init$_5aa4d40be6f39408,
        mid_UTC_8b560538e4d540bd,
        mid_after_f90360441aeddba6,
        mid_before_f90360441aeddba6,
        mid_clone_4d26fd885228c716,
        mid_compareTo_25678526ebc7785e,
        mid_equals_65c7d273e80d497a,
        mid_getDate_570ce0828f81a2c1,
        mid_getDay_570ce0828f81a2c1,
        mid_getHours_570ce0828f81a2c1,
        mid_getMinutes_570ce0828f81a2c1,
        mid_getMonth_570ce0828f81a2c1,
        mid_getSeconds_570ce0828f81a2c1,
        mid_getTime_492808a339bfa35f,
        mid_getTimezoneOffset_570ce0828f81a2c1,
        mid_getYear_570ce0828f81a2c1,
        mid_hashCode_570ce0828f81a2c1,
        mid_parse_e3831db48e197f9e,
        mid_setDate_99803b0791f320ff,
        mid_setHours_99803b0791f320ff,
        mid_setMinutes_99803b0791f320ff,
        mid_setMonth_99803b0791f320ff,
        mid_setSeconds_99803b0791f320ff,
        mid_setTime_3a8e7649f31fdb20,
        mid_setYear_99803b0791f320ff,
        mid_toGMTString_11b109bd155ca898,
        mid_toLocaleString_11b109bd155ca898,
        mid_toString_11b109bd155ca898,
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
