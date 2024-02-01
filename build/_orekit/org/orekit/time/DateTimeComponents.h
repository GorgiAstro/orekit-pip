#ifndef org_orekit_time_DateTimeComponents_H
#define org_orekit_time_DateTimeComponents_H

#include "java/lang/Object.h"

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
namespace org {
  namespace orekit {
    namespace time {
      class DateTimeComponents;
      class TimeComponents;
      class DateComponents;
      class Month;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class DateTimeComponents : public ::java::lang::Object {
       public:
        enum {
          mid_init$_408842433aa637da,
          mid_init$_364448e3d432e55c,
          mid_init$_1a20c824be86d0cc,
          mid_init$_48ca1125d4856a74,
          mid_init$_d4484dbea0a74f40,
          mid_init$_bd1b5b9b8a9ca435,
          mid_compareTo_4ce484ce2d47b705,
          mid_equals_72faff9b05f5ed5e,
          mid_getDate_70bc100457881a79,
          mid_getTime_89ad8c5e8df19e40,
          mid_hashCode_d6ab429752e7c267,
          mid_offsetFrom_479207b71ea7b88f,
          mid_parseDateTime_c7836527d5fdb45c,
          mid_roundIfNeeded_5a9d1878c9abb114,
          mid_toString_d2c8eb4129821f0e,
          mid_toString_c81987d6b0e2977a,
          mid_toString_43e3765e4d074a90,
          mid_toStringRfc3339_d2c8eb4129821f0e,
          mid_toStringWithoutUtcOffset_d2c8eb4129821f0e,
          mid_toStringWithoutUtcOffset_43e3765e4d074a90,
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
