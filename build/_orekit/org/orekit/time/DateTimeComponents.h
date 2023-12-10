#ifndef org_orekit_time_DateTimeComponents_H
#define org_orekit_time_DateTimeComponents_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class Month;
      class DateComponents;
      class DateTimeComponents;
      class TimeComponents;
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
          mid_init$_c59017c2d3bb8717,
          mid_init$_fc6bc8202122a8f1,
          mid_init$_2bb2179709f1d894,
          mid_init$_c80ec2f7d8b5fe87,
          mid_init$_cf0f9df8b51490d3,
          mid_init$_433efde14d0a0a90,
          mid_compareTo_19d4f1c80ae0a237,
          mid_equals_229c87223f486349,
          mid_getDate_d592c1a2c355eb35,
          mid_getTime_273de7e53b98ff3a,
          mid_hashCode_f2f64475e4580546,
          mid_offsetFrom_12de8ce32bd22524,
          mid_parseDateTime_d6be31dda1bc187a,
          mid_roundIfNeeded_5cb2789988ff697c,
          mid_toString_0090f7797e403f43,
          mid_toString_90cbcc0b7a5ddae9,
          mid_toString_a1a389fa4c946a7a,
          mid_toStringRfc3339_0090f7797e403f43,
          mid_toStringWithoutUtcOffset_0090f7797e403f43,
          mid_toStringWithoutUtcOffset_a1a389fa4c946a7a,
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
