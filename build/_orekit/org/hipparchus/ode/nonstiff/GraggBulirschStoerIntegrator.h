#ifndef org_hipparchus_ode_nonstiff_GraggBulirschStoerIntegrator_H
#define org_hipparchus_ode_nonstiff_GraggBulirschStoerIntegrator_H

#include "org/hipparchus/ode/nonstiff/AdaptiveStepsizeIntegrator.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
    }
    namespace ode {
      class ODEState;
      class ExpandableODE;
      class ODEStateAndDerivative;
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
            mid_init$_36e977212374ff6b,
            mid_init$_b0a935b68e41d65a,
            mid_integrate_3c1cc820e563e3e9,
            mid_setControlFactors_b0a935b68e41d65a,
            mid_setInterpolationControl_4e8bfd776ac72344,
            mid_setOrderControl_07bf81310115068c,
            mid_setStabilityCheck_ddfb2ccab8f58347,
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
