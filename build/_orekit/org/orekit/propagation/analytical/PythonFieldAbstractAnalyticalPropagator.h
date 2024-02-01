#ifndef org_orekit_propagation_analytical_PythonFieldAbstractAnalyticalPropagator_H
#define org_orekit_propagation_analytical_PythonFieldAbstractAnalyticalPropagator_H

#include "org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace orbits {
      class FieldOrbit;
    }
    namespace propagation {
      class FieldSpacecraftState;
    }
    namespace utils {
      class ParameterDriver;
    }
  }
  namespace hipparchus {
    class Field;
    class CalculusFieldElement;
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        class PythonFieldAbstractAnalyticalPropagator : public ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator {
         public:
          enum {
            mid_init$_001311851f02a8f1,
            mid_finalize_ff7cb6c242604316,
            mid_getMass_cf010978f3c5a913,
            mid_getParametersDrivers_d751c1a57012b438,
            mid_propagateOrbit_78985b34baac5c8e,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
            mid_resetIntermediateState_e90aea08a7a0ab5e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonFieldAbstractAnalyticalPropagator(jobject obj) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonFieldAbstractAnalyticalPropagator(const PythonFieldAbstractAnalyticalPropagator& obj) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(obj) {}

          PythonFieldAbstractAnalyticalPropagator(const ::org::hipparchus::Field &, const ::org::orekit::attitudes::AttitudeProvider &);

          void finalize() const;
          ::org::hipparchus::CalculusFieldElement getMass(const ::org::orekit::time::FieldAbsoluteDate &) const;
          ::java::util::List getParametersDrivers() const;
          ::org::orekit::orbits::FieldOrbit propagateOrbit(const ::org::orekit::time::FieldAbsoluteDate &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          void resetIntermediateState(const ::org::orekit::propagation::FieldSpacecraftState &, jboolean) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        extern PyType_Def PY_TYPE_DEF(PythonFieldAbstractAnalyticalPropagator);
        extern PyTypeObject *PY_TYPE(PythonFieldAbstractAnalyticalPropagator);

        class t_PythonFieldAbstractAnalyticalPropagator {
        public:
          PyObject_HEAD
          PythonFieldAbstractAnalyticalPropagator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_PythonFieldAbstractAnalyticalPropagator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const PythonFieldAbstractAnalyticalPropagator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const PythonFieldAbstractAnalyticalPropagator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
