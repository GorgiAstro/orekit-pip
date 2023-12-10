#ifndef org_hipparchus_ode_AbstractFieldIntegrator_H
#define org_hipparchus_ode_AbstractFieldIntegrator_H

#include "java/lang/Object.h"

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
namespace org {
  namespace hipparchus {
    class Field;
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
    }
    namespace ode {
      class FieldODEStateAndDerivative;
      class FieldODEIntegrator;
      namespace events {
        class FieldODEEventDetector;
        class FieldODEStepEndHandler;
      }
      namespace sampling {
        class FieldODEStepHandler;
      }
    }
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {

      class AbstractFieldIntegrator : public ::java::lang::Object {
       public:
        enum {
          mid_addEventDetector_51c8f19515e56fc6,
          mid_addStepEndHandler_08e1e17c6db119ef,
          mid_addStepHandler_d88adba4c2bf364d,
          mid_clearEventDetectors_7ae3461a92a43152,
          mid_clearStepEndHandlers_7ae3461a92a43152,
          mid_clearStepHandlers_7ae3461a92a43152,
          mid_computeDerivatives_ea2fed402e730f9f,
          mid_getCurrentSignedStepsize_e6d4d3215c30992a,
          mid_getEvaluations_f2f64475e4580546,
          mid_getEventDetectors_a6156df500549a58,
          mid_getField_70b4bbd3fa378d6b,
          mid_getMaxEvaluations_f2f64475e4580546,
          mid_getName_0090f7797e403f43,
          mid_getStepEndHandlers_a6156df500549a58,
          mid_getStepHandlers_a6156df500549a58,
          mid_getStepStart_f1f1c5e26e98a1d9,
          mid_setMaxEvaluations_0a2a1ac2721c0336,
          mid_sanityChecks_2231c8fee9b0ac70,
          mid_initIntegration_668e072c435ebb6b,
          mid_setStepStart_c314ae4458a4e52a,
          mid_setStepSize_03a16642f77779e7,
          mid_setIsLastStep_50a2e0b139e80a58,
          mid_getStepSize_e6d4d3215c30992a,
          mid_acceptStep_356accace7518dce,
          mid_isLastStep_e470b6d9e0d979db,
          mid_resetOccurred_e470b6d9e0d979db,
          mid_getEquations_6fd381cb4880014f,
          mid_getEvaluationsCounter_745ef02916e2d8db,
          mid_setStateInitialized_50a2e0b139e80a58,
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
