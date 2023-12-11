#ifndef org_orekit_propagation_events_FieldParameterDrivenDateIntervalDetector_H
#define org_orekit_propagation_events_FieldParameterDrivenDateIntervalDetector_H

#include "org/orekit/propagation/events/FieldAbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
    }
    namespace utils {
      class DateDriver;
      class ParameterDriver;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
    class Field;
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
            mid_init$_2b833fd21087965f,
            mid_init$_9966c0d31c17c449,
            mid_g_de1c2d709eb2829c,
            mid_getDurationDriver_4194657b5e280ddc,
            mid_getMedianDriver_e73bc59e931ba25e,
            mid_getStartDriver_e73bc59e931ba25e,
            mid_getStopDriver_e73bc59e931ba25e,
            mid_create_f408a982afeb758b,
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
