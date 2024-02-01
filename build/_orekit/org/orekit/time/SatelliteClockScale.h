#ifndef org_orekit_time_SatelliteClockScale_H
#define org_orekit_time_SatelliteClockScale_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
      class TimeComponents;
      class DateComponents;
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
          mid_init$_4dd3b836baadd31c,
          mid_countAtDate_209f08246d708042,
          mid_dateAtCount_d2854c25a21df51f,
          mid_getName_d2c8eb4129821f0e,
          mid_offsetFromTAI_209f08246d708042,
          mid_offsetFromTAI_cf010978f3c5a913,
          mid_offsetToTAI_50aa1fdea9b81950,
          mid_toString_d2c8eb4129821f0e,
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
