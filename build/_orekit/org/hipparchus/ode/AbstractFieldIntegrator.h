#ifndef org_hipparchus_ode_AbstractFieldIntegrator_H
#define org_hipparchus_ode_AbstractFieldIntegrator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        class FieldODEEventDetector;
        class FieldODEStepEndHandler;
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
          mid_addEventDetector_1ffd39265a0e340d,
          mid_addStepEndHandler_0490fb61ed7db186,
          mid_addStepHandler_d8a2a9c1603c5377,
          mid_clearEventDetectors_ff7cb6c242604316,
          mid_clearStepEndHandlers_ff7cb6c242604316,
          mid_clearStepHandlers_ff7cb6c242604316,
          mid_computeDerivatives_31586897e81be81c,
          mid_getCurrentSignedStepsize_08d37e3f77b7239d,
          mid_getEvaluations_d6ab429752e7c267,
          mid_getEventDetectors_d751c1a57012b438,
          mid_getField_577649682b9910c1,
          mid_getMaxEvaluations_d6ab429752e7c267,
          mid_getName_d2c8eb4129821f0e,
          mid_getStepEndHandlers_d751c1a57012b438,
          mid_getStepHandlers_d751c1a57012b438,
          mid_getStepStart_15f5056f2d3c7d41,
          mid_setMaxEvaluations_8fd427ab23829bf5,
          mid_sanityChecks_d7702289c8dcf483,
          mid_initIntegration_7e5884a5ebca9afb,
          mid_setStepStart_380a9edd05c82300,
          mid_setIsLastStep_b35db77cae58639e,
          mid_setStepSize_f63ca9e3185c722e,
          mid_getStepSize_08d37e3f77b7239d,
          mid_acceptStep_f14831ca35d7498e,
          mid_isLastStep_eee3de00fe971136,
          mid_resetOccurred_eee3de00fe971136,
          mid_getEquations_bce68763fe61c9e7,
          mid_getEvaluationsCounter_286bd168b7e14166,
          mid_setStateInitialized_b35db77cae58639e,
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
