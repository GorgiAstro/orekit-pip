#ifndef org_hipparchus_ode_AbstractFieldIntegrator_H
#define org_hipparchus_ode_AbstractFieldIntegrator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        class FieldODEStepEndHandler;
        class FieldODEEventDetector;
      }
      namespace sampling {
        class FieldODEStepHandler;
      }
      class FieldODEStateAndDerivative;
      class FieldODEIntegrator;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
    }
    class Field;
    class CalculusFieldElement;
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class NullPointerException;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {

      class AbstractFieldIntegrator : public ::java::lang::Object {
       public:
        enum {
          mid_addEventDetector_7951513ad7dd1f46,
          mid_addStepEndHandler_f4eae0b3d6c5e2af,
          mid_addStepHandler_01ea5dfa7056a45c,
          mid_clearEventDetectors_0640e6acf969ed28,
          mid_clearStepEndHandlers_0640e6acf969ed28,
          mid_clearStepHandlers_0640e6acf969ed28,
          mid_computeDerivatives_67a274b4fbd2dca4,
          mid_getCurrentSignedStepsize_613c8f46c659f636,
          mid_getEvaluations_412668abc8d889e9,
          mid_getEventDetectors_0d9551367f7ecdef,
          mid_getField_20f98801541dcec1,
          mid_getMaxEvaluations_412668abc8d889e9,
          mid_getName_3cffd47377eca18a,
          mid_getStepEndHandlers_0d9551367f7ecdef,
          mid_getStepHandlers_0d9551367f7ecdef,
          mid_getStepStart_45f3e0f3929fa6d9,
          mid_setMaxEvaluations_a3da1a935cb37f7b,
          mid_isLastStep_89b302893bdbe1f1,
          mid_acceptStep_af2dbfdaa0a94b4d,
          mid_sanityChecks_ee2fc63f2a26c007,
          mid_initIntegration_dd582e1c9ef253c9,
          mid_setStepStart_747fee420c9ba889,
          mid_setIsLastStep_ed2afdb8506b9742,
          mid_setStepSize_1ee4bed350fde589,
          mid_getStepSize_613c8f46c659f636,
          mid_resetOccurred_89b302893bdbe1f1,
          mid_getEquations_6b990ae2bfbec1f3,
          mid_getEvaluationsCounter_d3591c1ea177be92,
          mid_setStateInitialized_ed2afdb8506b9742,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AbstractFieldIntegrator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AbstractFieldIntegrator(const AbstractFieldIntegrator& obj) : ::java::lang::Object(obj) {}

        void addEventDetector(const ::org::hipparchus::ode::events::FieldODEEventDetector &) const;
        void addStepEndHandler(const ::org::hipparchus::ode::events::FieldODEStepEndHandler &) const;
        void addStepHandler(const ::org::hipparchus::ode::sampling::FieldODEStepHandler &) const;
        void clearEventDetectors() const;
        void clearStepEndHandlers() const;
        void clearStepHandlers() const;
        JArray< ::org::hipparchus::CalculusFieldElement > computeDerivatives(const ::org::hipparchus::CalculusFieldElement &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
        ::org::hipparchus::CalculusFieldElement getCurrentSignedStepsize() const;
        jint getEvaluations() const;
        ::java::util::List getEventDetectors() const;
        ::org::hipparchus::Field getField() const;
        jint getMaxEvaluations() const;
        ::java::lang::String getName() const;
        ::java::util::List getStepEndHandlers() const;
        ::java::util::List getStepHandlers() const;
        ::org::hipparchus::ode::FieldODEStateAndDerivative getStepStart() const;
        void setMaxEvaluations(jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      extern PyType_Def PY_TYPE_DEF(AbstractFieldIntegrator);
      extern PyTypeObject *PY_TYPE(AbstractFieldIntegrator);

      class t_AbstractFieldIntegrator {
      public:
        PyObject_HEAD
        AbstractFieldIntegrator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_AbstractFieldIntegrator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const AbstractFieldIntegrator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const AbstractFieldIntegrator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
