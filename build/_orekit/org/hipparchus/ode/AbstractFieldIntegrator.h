#ifndef org_hipparchus_ode_AbstractFieldIntegrator_H
#define org_hipparchus_ode_AbstractFieldIntegrator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
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
          mid_addEventDetector_7d036dd73a796a18,
          mid_addStepEndHandler_c7e835482ba4bd87,
          mid_addStepHandler_cd46d1493dfc3830,
          mid_clearEventDetectors_a1fa5dae97ea5ed2,
          mid_clearStepEndHandlers_a1fa5dae97ea5ed2,
          mid_clearStepHandlers_a1fa5dae97ea5ed2,
          mid_computeDerivatives_94164e01c2f25701,
          mid_getCurrentSignedStepsize_81520b552cb3fa26,
          mid_getEvaluations_55546ef6a647f39b,
          mid_getEventDetectors_e62d3bb06d56d7e3,
          mid_getField_04d1f63e17d5c5d4,
          mid_getMaxEvaluations_55546ef6a647f39b,
          mid_getName_1c1fa1e935d6cdcf,
          mid_getStepEndHandlers_e62d3bb06d56d7e3,
          mid_getStepHandlers_e62d3bb06d56d7e3,
          mid_getStepStart_b7aa8b39e4b21836,
          mid_setMaxEvaluations_44ed599e93e8a30c,
          mid_getStepSize_81520b552cb3fa26,
          mid_sanityChecks_c09b0b0bdb27b138,
          mid_initIntegration_75ca69013be095d1,
          mid_setStepStart_5b8144cf9ccecc03,
          mid_setIsLastStep_fcb96c98de6fad04,
          mid_acceptStep_73c18c8e96bca501,
          mid_isLastStep_9ab94ac1dc23b105,
          mid_resetOccurred_9ab94ac1dc23b105,
          mid_setStepSize_f2b4bfa0af1007e8,
          mid_getEvaluationsCounter_3c86b06a86576583,
          mid_getEquations_982634fbb2e5d3cb,
          mid_setStateInitialized_fcb96c98de6fad04,
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
