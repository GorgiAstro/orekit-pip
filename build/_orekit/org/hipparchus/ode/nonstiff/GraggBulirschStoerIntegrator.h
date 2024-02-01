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
            mid_init$_e3195482263a60ce,
            mid_init$_cd5724127cc72e96,
            mid_integrate_3b00c059d3ccb86d,
            mid_setControlFactors_cd5724127cc72e96,
            mid_setInterpolationControl_9ad18b76c4bb23bb,
            mid_setOrderControl_aaed259e1b5f1153,
            mid_setStabilityCheck_7b4ee475caeca5a6,
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
