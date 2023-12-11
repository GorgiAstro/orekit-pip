#ifndef org_orekit_time_DateTimeComponents_H
#define org_orekit_time_DateTimeComponents_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class DateComponents;
      class Month;
      class TimeComponents;
      class DateTimeComponents;
    }
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
    class IllegalArgumentException;
    class String;
    class Comparable;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class DateTimeComponents : public ::java::lang::Object {
       public:
        enum {
          mid_init$_97334b4cde36fee4,
          mid_init$_353be96736eb4a0e,
          mid_init$_c01975213386f6a3,
          mid_init$_3796b665437eba81,
          mid_init$_3b45da7a278589bc,
          mid_init$_053a596a1809d580,
          mid_compareTo_0b255e184011a8ea,
          mid_equals_221e8e85cb385209,
          mid_getDate_ef81839d8717cc3a,
          mid_getTime_6230b16c2680001d,
          mid_hashCode_412668abc8d889e9,
          mid_offsetFrom_9e85e6d4a4eee270,
          mid_parseDateTime_3d71e8ecdce2fb61,
          mid_roundIfNeeded_3765068295c1bb88,
          mid_toString_3cffd47377eca18a,
          mid_toString_0f10d4a5e06f61c0,
          mid_toString_637f0334ff6ee92d,
          mid_toStringRfc3339_3cffd47377eca18a,
          mid_toStringWithoutUtcOffset_3cffd47377eca18a,
          mid_toStringWithoutUtcOffset_637f0334ff6ee92d,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit DateTimeComponents(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        DateTimeComponents(const DateTimeComponents& obj) : ::java::lang::Object(obj) {}

        static DateTimeComponents *JULIAN_EPOCH;

        DateTimeComponents(const ::org::orekit::time::DateComponents &, const ::org::orekit::time::TimeComponents &);
        DateTimeComponents(const DateTimeComponents &, jdouble);
        DateTimeComponents(jint, const ::org::orekit::time::Month &, jint);
        DateTimeComponents(jint, jint, jint);
        DateTimeComponents(jint, const ::org::orekit::time::Month &, jint, jint, jint, jdouble);
        DateTimeComponents(jint, jint, jint, jint, jint, jdouble);

        jint compareTo(const DateTimeComponents &) const;
        jboolean equals(const ::java::lang::Object &) const;
        ::org::orekit::time::DateComponents getDate() const;
        ::org::orekit::time::TimeComponents getTime() const;
        jint hashCode() const;
        jdouble offsetFrom(const DateTimeComponents &) const;
        static DateTimeComponents parseDateTime(const ::java::lang::String &);
        DateTimeComponents roundIfNeeded(jint, jint) const;
        ::java::lang::String toString() const;
        ::java::lang::String toString(jint) const;
        ::java::lang::String toString(jint, jint) const;
        ::java::lang::String toStringRfc3339() const;
        ::java::lang::String toStringWithoutUtcOffset() const;
        ::java::lang::String toStringWithoutUtcOffset(jint, jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(DateTimeComponents);
      extern PyTypeObject *PY_TYPE(DateTimeComponents);

      class t_DateTimeComponents {
      public:
        PyObject_HEAD
        DateTimeComponents object;
        static PyObject *wrap_Object(const DateTimeComponents&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
