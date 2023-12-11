#ifndef org_orekit_time_GPSScale_H
#define org_orekit_time_GPSScale_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class DateComponents;
      class FieldAbsoluteDate;
      class TimeComponents;
      class AbsoluteDate;
      class TimeScale;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class GPSScale : public ::java::lang::Object {
       public:
        enum {
          mid_getName_3cffd47377eca18a,
          mid_offsetFromTAI_b0b988f941da47d8,
          mid_offsetFromTAI_b884068a2c99f6ca,
          mid_offsetToTAI_e4171ab80e571373,
          mid_toString_3cffd47377eca18a,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit GPSScale(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        GPSScale(const GPSScale& obj) : ::java::lang::Object(obj) {}

        ::java::lang::String getName() const;
        jdouble offsetFromTAI(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::hipparchus::CalculusFieldElement offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate &) const;
        jdouble offsetToTAI(const ::org::orekit::time::DateComponents &, const ::org::orekit::time::TimeComponents &) const;
        ::java::lang::String toString() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(GPSScale);
      extern PyTypeObject *PY_TYPE(GPSScale);

      class t_GPSScale {
      public:
        PyObject_HEAD
        GPSScale object;
        static PyObject *wrap_Object(const GPSScale&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
