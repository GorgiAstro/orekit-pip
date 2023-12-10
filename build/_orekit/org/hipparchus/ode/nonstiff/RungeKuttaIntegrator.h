#ifndef org_hipparchus_ode_nonstiff_RungeKuttaIntegrator_H
#define org_hipparchus_ode_nonstiff_RungeKuttaIntegrator_H

#include "org/hipparchus/ode/AbstractIntegrator.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {
        class ButcherArrayProvider;
      }
      class ExpandableODE;
      class OrdinaryDifferentialEquation;
      class ODEState;
      class ODEStateAndDerivative;
    }
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        class RungeKuttaIntegrator : public ::org::hipparchus::ode::AbstractIntegrator {
         public:
          enum {
            mid_getDefaultStep_456d9a2f64d6b28d,
            mid_integrate_7efcd57267e426c3,
            mid_singleStep_eafa4a11995bfc56,
            mid_createInterpolator_34096714306c5ce7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RungeKuttaIntegrator(jobject obj) : ::org::hipparchus::ode::AbstractIntegrator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RungeKuttaIntegrator(const RungeKuttaIntegrator& obj) : ::org::hipparchus::ode::AbstractIntegrator(obj) {}

          jdouble getDefaultStep() const;
          ::org::hipparchus::ode::ODEStateAndDerivative integrate(const ::org::hipparchus::ode::ExpandableODE &, const ::org::hipparchus::ode::ODEState &, jdouble) const;
          JArray< jdouble > singleStep(const ::org::hipparchus::ode::OrdinaryDifferentialEquation &, jdouble, const JArray< jdouble > &, jdouble) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {
        extern PyType_Def PY_TYPE_DEF(RungeKuttaIntegrator);
        extern PyTypeObject *PY_TYPE(RungeKuttaIntegrator);

        class t_RungeKuttaIntegrator {
        public:
          PyObject_HEAD
          RungeKuttaIntegrator object;
          static PyObject *wrap_Object(const RungeKuttaIntegrator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif