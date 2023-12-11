#ifndef org_orekit_time_SatelliteClockScale_H
#define org_orekit_time_SatelliteClockScale_H

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

      class SatelliteClockScale : public ::java::lang::Object {
       public:
        enum {
          mid_init$_a44bd2f874dc9b6c,
          mid_countAtDate_b0b988f941da47d8,
          mid_dateAtCount_8ef471ef852a9678,
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

        explicit SatelliteClockScale(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        SatelliteClockScale(const SatelliteClockScale& obj) : ::java::lang::Object(obj) {}

        SatelliteClockScale(const ::java::lang::String &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::TimeScale &, jdouble, jdouble);

        jdouble countAtDate(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::orekit::time::AbsoluteDate dateAtCount(jdouble) const;
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
      extern PyType_Def PY_TYPE_DEF(SatelliteClockScale);
      extern PyTypeObject *PY_TYPE(SatelliteClockScale);

      class t_SatelliteClockScale {
      public:
        PyObject_HEAD
        SatelliteClockScale object;
        static PyObject *wrap_Object(const SatelliteClockScale&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
