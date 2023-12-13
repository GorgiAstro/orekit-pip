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
          mid_init$_87bf07f0ebe49ff9,
          mid_init$_c643d20492025243,
          mid_init$_cb5fad2f35fdd552,
          mid_init$_a0df4b8e4ed3805e,
          mid_init$_99718373fb134ca1,
          mid_init$_95f55466c5eda770,
          mid_compareTo_167562ea0d5aaaa3,
          mid_equals_460c5e2d9d51c6cc,
          mid_getDate_357436921b6db81c,
          mid_getTime_f6de698ca751b724,
          mid_hashCode_55546ef6a647f39b,
          mid_offsetFrom_67953e0a78e1093f,
          mid_parseDateTime_c468f224154d2782,
          mid_roundIfNeeded_86222a613b253114,
          mid_toString_1c1fa1e935d6cdcf,
          mid_toString_2a9bffd3d5397f7c,
          mid_toString_e91e53c42d39aef9,
          mid_toStringRfc3339_1c1fa1e935d6cdcf,
          mid_toStringWithoutUtcOffset_1c1fa1e935d6cdcf,
          mid_toStringWithoutUtcOffset_e91e53c42d39aef9,
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
