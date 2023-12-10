#ifndef org_orekit_propagation_analytical_PythonFieldAbstractAnalyticalPropagator_H
#define org_orekit_propagation_analytical_PythonFieldAbstractAnalyticalPropagator_H

#include "org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    class Field;
  }
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace orbits {
      class FieldOrbit;
    }
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
            mid_init$_38ba1f88f1fedcab,
            mid_finalize_0fa09c18fee449d5,
            mid_getMass_2a5f05be83ff251d,
            mid_getParametersDrivers_2afa36052df4765d,
            mid_propagateOrbit_3de5e0312fd3e848,
            mid_pythonDecRef_0fa09c18fee449d5,
            mid_pythonExtension_492808a339bfa35f,
            mid_pythonExtension_3a8e7649f31fdb20,
            mid_resetIntermediateState_33f1c56ea7775d4e,
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
