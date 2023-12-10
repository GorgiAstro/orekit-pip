#ifndef org_orekit_propagation_events_FieldParameterDrivenDateIntervalDetector_H
#define org_orekit_propagation_events_FieldParameterDrivenDateIntervalDetector_H

#include "org/orekit/propagation/events/FieldAbstractDetector.h"

namespace org {
  namespace hipparchus {
    class Field;
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace utils {
      class ParameterDriver;
      class DateDriver;
    }
    namespace propagation {
      class FieldSpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
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
    namespace propagation {
      namespace events {

        class FieldParameterDrivenDateIntervalDetector : public ::org::orekit::propagation::events::FieldAbstractDetector {
         public:
          enum {
            mid_init$_001cfff1d8a098d1,
            mid_init$_4be12dbe8df27106,
            mid_g_cc79c2733879de35,
            mid_getDurationDriver_ac0e5f8f2fa86f4f,
            mid_getMedianDriver_bacf6e93022fe00a,
            mid_getStartDriver_bacf6e93022fe00a,
            mid_getStopDriver_bacf6e93022fe00a,
            mid_create_e5e3e68fedf11d94,
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
