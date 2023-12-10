#ifndef org_orekit_time_SatelliteClockScale_H
#define org_orekit_time_SatelliteClockScale_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace time {
      class DateComponents;
      class AbsoluteDate;
      class TimeComponents;
      class FieldAbsoluteDate;
      class TimeScale;
    }
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
          mid_init$_ae7ac509037aa9d2,
          mid_countAtDate_bf1d7732f1acb697,
          mid_dateAtCount_149a9211a037d799,
          mid_getName_11b109bd155ca898,
          mid_offsetFromTAI_bf1d7732f1acb697,
          mid_offsetFromTAI_2a5f05be83ff251d,
          mid_offsetToTAI_56358b00ba005b52,
          mid_toString_11b109bd155ca898,
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
