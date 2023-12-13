#ifndef org_hipparchus_ode_nonstiff_AdamsFieldIntegrator_H
#define org_hipparchus_ode_nonstiff_AdamsFieldIntegrator_H

#include "org/hipparchus/ode/MultistepFieldIntegrator.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class FieldExpandableODE;
      class FieldODEState;
      class FieldODEStateAndDerivative;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
    }
    class Field;
    class CalculusFieldElement;
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
            mid_init$_61c3648faaff623b,
            mid_init$_fa4c97765f187051,
            mid_integrate_75ca69013be095d1,
            mid_updateHighOrderDerivativesPhase1_7ec78cb4b1521bd4,
            mid_updateHighOrderDerivativesPhase2_66608a0c0bb66791,
            mid_errorEstimation_f9ae7f7ac73655c8,
            mid_finalizeStep_b4c879a61b350879,
            mid_initializeHighOrderDerivatives_3c657d6a3baa084a,
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
