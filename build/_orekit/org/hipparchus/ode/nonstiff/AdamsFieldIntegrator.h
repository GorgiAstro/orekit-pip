#ifndef org_hipparchus_ode_nonstiff_AdamsFieldIntegrator_H
#define org_hipparchus_ode_nonstiff_AdamsFieldIntegrator_H

#include "org/hipparchus/ode/MultistepFieldIntegrator.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
    }
    namespace ode {
      class FieldODEStateAndDerivative;
      class FieldODEState;
      class FieldExpandableODE;
    }
    class Field;
    namespace linear {
      class Array2DRowFieldMatrix;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class IllegalArgumentException;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        class AdamsFieldIntegrator : public ::org::hipparchus::ode::MultistepFieldIntegrator {
         public:
          enum {
            mid_init$_e1ecee2c65e08f00,
            mid_init$_3019bf1e0a456e3e,
            mid_integrate_d8a6319aba9a7b17,
            mid_updateHighOrderDerivativesPhase1_e3fbb99b5c5aabb2,
            mid_updateHighOrderDerivativesPhase2_ecf8fc9f38ab7a9d,
            mid_initializeHighOrderDerivatives_8a387f2c5f491083,
            mid_errorEstimation_41f9dcc5eb20f1cb,
            mid_finalizeStep_cf78fb7ef1b60a21,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AdamsFieldIntegrator(jobject obj) : ::org::hipparchus::ode::MultistepFieldIntegrator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AdamsFieldIntegrator(const AdamsFieldIntegrator& obj) : ::org::hipparchus::ode::MultistepFieldIntegrator(obj) {}

          AdamsFieldIntegrator(const ::org::hipparchus::Field &, const ::java::lang::String &, jint, jint, jdouble, jdouble, const JArray< jdouble > &, const JArray< jdouble > &);
          AdamsFieldIntegrator(const ::org::hipparchus::Field &, const ::java::lang::String &, jint, jint, jdouble, jdouble, jdouble, jdouble);

          ::org::hipparchus::ode::FieldODEStateAndDerivative integrate(const ::org::hipparchus::ode::FieldExpandableODE &, const ::org::hipparchus::ode::FieldODEState &, const ::org::hipparchus::CalculusFieldElement &) const;
          ::org::hipparchus::linear::Array2DRowFieldMatrix updateHighOrderDerivativesPhase1(const ::org::hipparchus::linear::Array2DRowFieldMatrix &) const;
          void updateHighOrderDerivativesPhase2(const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< ::org::hipparchus::CalculusFieldElement > &, const ::org::hipparchus::linear::Array2DRowFieldMatrix &) const;
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
        extern PyType_Def PY_TYPE_DEF(AdamsFieldIntegrator);
        extern PyTypeObject *PY_TYPE(AdamsFieldIntegrator);

        class t_AdamsFieldIntegrator {
        public:
          PyObject_HEAD
          AdamsFieldIntegrator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_AdamsFieldIntegrator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const AdamsFieldIntegrator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const AdamsFieldIntegrator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
