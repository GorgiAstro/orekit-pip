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
        mid_init$_ff7cb6c242604316,
        mid_init$_105e1eadb709d9ac,
        mid_init$_f5bbab7e97879358,
        mid_init$_48ca1125d4856a74,
        mid_init$_cd8b07b153e58289,
        mid_init$_ee5da648d666a7a9,
        mid_UTC_af32f82a1a8be01f,
        mid_after_aa8a9ab2727cc0c7,
        mid_before_aa8a9ab2727cc0c7,
        mid_clone_704a5bee58538972,
        mid_compareTo_d16b285d3cef665d,
        mid_equals_72faff9b05f5ed5e,
        mid_getDate_d6ab429752e7c267,
        mid_getDay_d6ab429752e7c267,
        mid_getHours_d6ab429752e7c267,
        mid_getMinutes_d6ab429752e7c267,
        mid_getMonth_d6ab429752e7c267,
        mid_getSeconds_d6ab429752e7c267,
        mid_getTime_42c72b98e3c2e08a,
        mid_getTimezoneOffset_d6ab429752e7c267,
        mid_getYear_d6ab429752e7c267,
        mid_hashCode_d6ab429752e7c267,
        mid_parse_bd9949f7787fa510,
        mid_setDate_8fd427ab23829bf5,
        mid_setHours_8fd427ab23829bf5,
        mid_setMinutes_8fd427ab23829bf5,
        mid_setMonth_8fd427ab23829bf5,
        mid_setSeconds_8fd427ab23829bf5,
        mid_setTime_f5bbab7e97879358,
        mid_setYear_8fd427ab23829bf5,
        mid_toGMTString_d2c8eb4129821f0e,
        mid_toLocaleString_d2c8eb4129821f0e,
        mid_toString_d2c8eb4129821f0e,
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
