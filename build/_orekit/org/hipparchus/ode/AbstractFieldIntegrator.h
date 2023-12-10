#ifndef org_hipparchus_ode_AbstractFieldIntegrator_H
#define org_hipparchus_ode_AbstractFieldIntegrator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace ode {
      class FieldODEIntegrator;
      class FieldODEStateAndDerivative;
      namespace sampling {
        class FieldODEStepHandler;
      }
      namespace events {
        class FieldODEEventDetector;
        class FieldODEStepEndHandler;
      }
    }
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
    }
    class Field;
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
          mid_addEventDetector_cdac85baa1ddabb0,
          mid_addStepEndHandler_9ddb55dbce73d9f2,
          mid_addStepHandler_a947dba38eed8683,
          mid_clearEventDetectors_0fa09c18fee449d5,
          mid_clearStepEndHandlers_0fa09c18fee449d5,
          mid_clearStepHandlers_0fa09c18fee449d5,
          mid_computeDerivatives_895918d31d24de7c,
          mid_getCurrentSignedStepsize_eba8e72a22c984ac,
          mid_getEvaluations_570ce0828f81a2c1,
          mid_getEventDetectors_2afa36052df4765d,
          mid_getField_5b28be2d3632a5dc,
          mid_getMaxEvaluations_570ce0828f81a2c1,
          mid_getName_11b109bd155ca898,
          mid_getStepEndHandlers_2afa36052df4765d,
          mid_getStepHandlers_2afa36052df4765d,
          mid_getStepStart_7194dd3ba3cbc7e8,
          mid_setMaxEvaluations_99803b0791f320ff,
          mid_sanityChecks_e269d011240a2d04,
          mid_initIntegration_d8a6319aba9a7b17,
          mid_setStepStart_22d6c75b64070b54,
          mid_getStepSize_eba8e72a22c984ac,
          mid_setIsLastStep_bd04c9335fb9e4cf,
          mid_acceptStep_0795f39b52fb1f5e,
          mid_isLastStep_b108b35ef48e27bd,
          mid_resetOccurred_b108b35ef48e27bd,
          mid_setStepSize_072c8635f2164db9,
          mid_getEvaluationsCounter_b6dd60d8c3af0cf7,
          mid_getEquations_53ef2152c5bf56a9,
          mid_setStateInitialized_bd04c9335fb9e4cf,
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
