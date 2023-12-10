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
      class Month;
      class DateComponents;
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
          mid_init$_9c14c403a5c352d6,
          mid_init$_68cb5421234eef18,
          mid_init$_2981819d13ae2f57,
          mid_init$_8336200ef3dde36b,
          mid_init$_e057cf067cded0b1,
          mid_init$_ed1b0bf4ea7912b1,
          mid_compareTo_580f9f152eeb57a7,
          mid_equals_65c7d273e80d497a,
          mid_getDate_06e6477664d37caa,
          mid_getTime_844c883de8de25a4,
          mid_hashCode_570ce0828f81a2c1,
          mid_offsetFrom_d9ea92929f2fc1c4,
          mid_parseDateTime_a1ae90bb1e45c6d8,
          mid_roundIfNeeded_63daf82408c2d953,
          mid_toString_11b109bd155ca898,
          mid_toString_8cc8a10236476f23,
          mid_toString_5d51f1f447446760,
          mid_toStringRfc3339_11b109bd155ca898,
          mid_toStringWithoutUtcOffset_11b109bd155ca898,
          mid_toStringWithoutUtcOffset_5d51f1f447446760,
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
