#ifndef org_hipparchus_ode_nonstiff_AdamsFieldIntegrator_H
#define org_hipparchus_ode_nonstiff_AdamsFieldIntegrator_H

#include "org/hipparchus/ode/MultistepFieldIntegrator.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class Array2DRowFieldMatrix;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
    }
    namespace ode {
      class FieldODEStateAndDerivative;
      class FieldExpandableODE;
      class FieldODEState;
    }
    class Field;
    class CalculusFieldElement;
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
            mid_init$_486a60974fa369d1,
            mid_init$_d10c4dfa0f90cd91,
            mid_integrate_7e5884a5ebca9afb,
            mid_updateHighOrderDerivativesPhase1_51bcd4a8a90d8d6b,
            mid_updateHighOrderDerivativesPhase2_5846b27571ec7191,
            mid_initializeHighOrderDerivatives_59a89abbfffc5f1c,
            mid_errorEstimation_6aa3626a66e9d9b5,
            mid_finalizeStep_0548923e7e2ccdf5,
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
