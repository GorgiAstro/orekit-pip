#ifndef org_hipparchus_ode_nonstiff_GraggBulirschStoerIntegrator_H
#define org_hipparchus_ode_nonstiff_GraggBulirschStoerIntegrator_H

#include "org/hipparchus/ode/nonstiff/AdaptiveStepsizeIntegrator.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class ODEState;
      class ExpandableODE;
      class ODEStateAndDerivative;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
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

        class GraggBulirschStoerIntegrator : public ::org::hipparchus::ode::nonstiff::AdaptiveStepsizeIntegrator {
         public:
          enum {
            mid_init$_c13e969c0f339014,
            mid_init$_bc3712e794ac7a81,
            mid_integrate_7b1e7ccc98e27149,
            mid_setControlFactors_bc3712e794ac7a81,
            mid_setInterpolationControl_edc332450b7dadf1,
            mid_setOrderControl_79cfe3f564275380,
            mid_setStabilityCheck_7d55e66ed9bc9409,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GraggBulirschStoerIntegrator(jobject obj) : ::org::hipparchus::ode::nonstiff::AdaptiveStepsizeIntegrator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GraggBulirschStoerIntegrator(const GraggBulirschStoerIntegrator& obj) : ::org::hipparchus::ode::nonstiff::AdaptiveStepsizeIntegrator(obj) {}

          GraggBulirschStoerIntegrator(jdouble, jdouble, const JArray< jdouble > &, const JArray< jdouble > &);
          GraggBulirschStoerIntegrator(jdouble, jdouble, jdouble, jdouble);

          ::org::hipparchus::ode::ODEStateAndDerivative integrate(const ::org::hipparchus::ode::ExpandableODE &, const ::org::hipparchus::ode::ODEState &, jdouble) const;
          void setControlFactors(jdouble, jdouble, jdouble, jdouble) const;
          void setInterpolationControl(jboolean, jint) const;
          void setOrderControl(jint, jdouble, jdouble) const;
          void setStabilityCheck(jboolean, jint, jint, jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(GraggBulirschStoerIntegrator);
        extern PyTypeObject *PY_TYPE(GraggBulirschStoerIntegrator);

        class t_GraggBulirschStoerIntegrator {
        public:
          PyObject_HEAD
          GraggBulirschStoerIntegrator object;
          static PyObject *wrap_Object(const GraggBulirschStoerIntegrator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
