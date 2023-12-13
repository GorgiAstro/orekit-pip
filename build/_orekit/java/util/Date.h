#ifndef java_util_Date_H
#define java_util_Date_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class Cloneable;
    class String;
  }
  namespace io {
    class Serializable;
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
        mid_init$_a1fa5dae97ea5ed2,
        mid_init$_734b91ac30d5f9b4,
        mid_init$_3d7dd2314a0dd456,
        mid_init$_a0df4b8e4ed3805e,
        mid_init$_a5f63d2987dd5c80,
        mid_init$_ea412797eafea800,
        mid_UTC_93463d78a2f9e946,
        mid_after_e7dfa6240fa69edb,
        mid_before_e7dfa6240fa69edb,
        mid_clone_541690f9ee81d3ad,
        mid_compareTo_f96b06ef9e3ac00c,
        mid_equals_460c5e2d9d51c6cc,
        mid_getDate_55546ef6a647f39b,
        mid_getDay_55546ef6a647f39b,
        mid_getHours_55546ef6a647f39b,
        mid_getMinutes_55546ef6a647f39b,
        mid_getMonth_55546ef6a647f39b,
        mid_getSeconds_55546ef6a647f39b,
        mid_getTime_6c0ce7e438e5ded4,
        mid_getTimezoneOffset_55546ef6a647f39b,
        mid_getYear_55546ef6a647f39b,
        mid_hashCode_55546ef6a647f39b,
        mid_parse_cbeeb2314499c200,
        mid_setDate_44ed599e93e8a30c,
        mid_setHours_44ed599e93e8a30c,
        mid_setMinutes_44ed599e93e8a30c,
        mid_setMonth_44ed599e93e8a30c,
        mid_setSeconds_44ed599e93e8a30c,
        mid_setTime_3d7dd2314a0dd456,
        mid_setYear_44ed599e93e8a30c,
        mid_toGMTString_1c1fa1e935d6cdcf,
        mid_toLocaleString_1c1fa1e935d6cdcf,
        mid_toString_1c1fa1e935d6cdcf,
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
