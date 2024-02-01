#ifndef org_orekit_propagation_events_FieldParameterDrivenDateIntervalDetector_H
#define org_orekit_propagation_events_FieldParameterDrivenDateIntervalDetector_H

#include "org/orekit/propagation/events/FieldAbstractDetector.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace propagation {
      class FieldSpacecraftState;
    }
    namespace utils {
      class DateDriver;
      class ParameterDriver;
    }
  }
  namespace hipparchus {
    class Field;
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
    namespace propagation {
      namespace events {

        class FieldParameterDrivenDateIntervalDetector : public ::org::orekit::propagation::events::FieldAbstractDetector {
         public:
          enum {
            mid_init$_fde21e25e89b1726,
            mid_init$_51a5fabee2c842d1,
            mid_g_ac6fccc69d1b2d9e,
            mid_getDurationDriver_7daccb22665e511b,
            mid_getMedianDriver_b88c1aa4fa123324,
            mid_getStartDriver_b88c1aa4fa123324,
            mid_getStopDriver_b88c1aa4fa123324,
            mid_create_98c23a5d6f32f529,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldParameterDrivenDateIntervalDetector(jobject obj) : ::org::orekit::propagation::events::FieldAbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldParameterDrivenDateIntervalDetector(const FieldParameterDrivenDateIntervalDetector& obj) : ::org::orekit::propagation::events::FieldAbstractDetector(obj) {}

          static ::java::lang::String *DURATION_SUFFIX;
          static ::java::lang::String *MEDIAN_SUFFIX;
          static ::java::lang::String *START_SUFFIX;
          static ::java::lang::String *STOP_SUFFIX;

          FieldParameterDrivenDateIntervalDetector(const ::org::hipparchus::Field &, const ::java::lang::String &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &);
          FieldParameterDrivenDateIntervalDetector(const ::org::hipparchus::Field &, const ::java::lang::String &, const ::org::orekit::time::AbsoluteDate &, jdouble);

          ::org::hipparchus::CalculusFieldElement g(const ::org::orekit::propagation::FieldSpacecraftState &) const;
          ::org::orekit::utils::ParameterDriver getDurationDriver() const;
          ::org::orekit::utils::DateDriver getMedianDriver() const;
          ::org::orekit::utils::DateDriver getStartDriver() const;
          ::org::orekit::utils::DateDriver getStopDriver() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        extern PyType_Def PY_TYPE_DEF(FieldParameterDrivenDateIntervalDetector);
        extern PyTypeObject *PY_TYPE(FieldParameterDrivenDateIntervalDetector);

        class t_FieldParameterDrivenDateIntervalDetector {
        public:
          PyObject_HEAD
          FieldParameterDrivenDateIntervalDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldParameterDrivenDateIntervalDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldParameterDrivenDateIntervalDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldParameterDrivenDateIntervalDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
