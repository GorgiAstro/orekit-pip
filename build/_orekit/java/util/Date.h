#ifndef java_util_Date_H
#define java_util_Date_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
    class Cloneable;
    class String;
    class Comparable;
  }
  namespace util {
    class Date;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Date : public ::java::lang::Object {
     public:
      enum {
        mid_init$_7ae3461a92a43152,
        mid_init$_e939c6558ae8d313,
        mid_init$_fefb08975c10f0a1,
        mid_init$_c80ec2f7d8b5fe87,
        mid_init$_863ad0cd78e98df4,
        mid_init$_47d591670cfcc314,
        mid_UTC_065681c4d7d832d5,
        mid_after_7b40bfcd353b1f24,
        mid_before_7b40bfcd353b1f24,
        mid_clone_dfd7647d9110ac9f,
        mid_compareTo_f4beb817ef3c3ede,
        mid_equals_229c87223f486349,
        mid_getDate_f2f64475e4580546,
        mid_getDay_f2f64475e4580546,
        mid_getHours_f2f64475e4580546,
        mid_getMinutes_f2f64475e4580546,
        mid_getMonth_f2f64475e4580546,
        mid_getSeconds_f2f64475e4580546,
        mid_getTime_a27fc9afd27e559d,
        mid_getTimezoneOffset_f2f64475e4580546,
        mid_getYear_f2f64475e4580546,
        mid_hashCode_f2f64475e4580546,
        mid_parse_cd11fe529eef6ae9,
        mid_setDate_0a2a1ac2721c0336,
        mid_setHours_0a2a1ac2721c0336,
        mid_setMinutes_0a2a1ac2721c0336,
        mid_setMonth_0a2a1ac2721c0336,
        mid_setSeconds_0a2a1ac2721c0336,
        mid_setTime_fefb08975c10f0a1,
        mid_setYear_0a2a1ac2721c0336,
        mid_toGMTString_0090f7797e403f43,
        mid_toLocaleString_0090f7797e403f43,
        mid_toString_0090f7797e403f43,
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
