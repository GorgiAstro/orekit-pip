#ifndef org_hipparchus_ode_AbstractIntegrator_H
#define org_hipparchus_ode_AbstractIntegrator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {
        class ODEStepHandler;
      }
      class ODEIntegrator;
      namespace events {
        class ODEStepEndHandler;
        class ODEEventDetector;
      }
      class ODEStateAndDerivative;
    }
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
    }
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

      class AbstractIntegrator : public ::java::lang::Object {
       public:
        enum {
          mid_addEventDetector_95ad63d6e12b665a,
          mid_addStepEndHandler_d6f7dd010125fe2a,
          mid_addStepHandler_e242ed1b39c6a814,
          mid_clearEventDetectors_7ae3461a92a43152,
          mid_clearStepEndHandlers_7ae3461a92a43152,
          mid_clearStepHandlers_7ae3461a92a43152,
          mid_computeDerivatives_7b8ea6f669f90156,
          mid_getCurrentSignedStepsize_456d9a2f64d6b28d,
          mid_getEvaluations_f2f64475e4580546,
          mid_getEventDetectors_a6156df500549a58,
          mid_getMaxEvaluations_f2f64475e4580546,
          mid_getName_0090f7797e403f43,
          mid_getStepEndHandlers_a6156df500549a58,
          mid_getStepHandlers_a6156df500549a58,
          mid_getStepStart_ced1effea9e5e5d4,
          mid_setMaxEvaluations_0a2a1ac2721c0336,
          mid_sanityChecks_d60bc5812a8e442c,
          mid_initIntegration_7efcd57267e426c3,
          mid_setStepStart_100c57fd45963f6d,
          mid_setStepSize_77e0f9a1f260e2e5,
          mid_setIsLastStep_50a2e0b139e80a58,
          mid_getStepSize_456d9a2f64d6b28d,
          mid_acceptStep_448755d73abb80dd,
          mid_isLastStep_e470b6d9e0d979db,
          mid_resetOccurred_e470b6d9e0d979db,
          mid_getEquations_412d9555fb4d6ddf,
          mid_getEvaluationsCounter_745ef02916e2d8db,
          mid_setStateInitialized_50a2e0b139e80a58,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AbstractIntegrator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AbstractIntegrator(const AbstractIntegrator& obj) : ::java::lang::Object(obj) {}

        void addEventDetector(const ::org::hipparchus::ode::events::ODEEventDetector &) const;
        void addStepEndHandler(const ::org::hipparchus::ode::events::ODEStepEndHandler &) const;
        void addStepHandler(const ::org::hipparchus::ode::sampling::ODEStepHandler &) const;
        void clearEventDetectors() const;
        void clearStepEndHandlers() const;
        void clearStepHandlers() const;
        JArray< jdouble > computeDerivatives(jdouble, const JArray< jdouble > &) const;
        jdouble getCurrentSignedStepsize() const;
        jint getEvaluations() const;
        ::java::util::List getEventDetectors() const;
        jint getMaxEvaluations() const;
        ::java::lang::String getName() const;
        ::java::util::List getStepEndHandlers() const;
        ::java::util::List getStepHandlers() const;
        ::org::hipparchus::ode::ODEStateAndDerivative getStepStart() const;
        void setMaxEvaluations(jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      extern PyType_Def PY_TYPE_DEF(AbstractIntegrator);
      extern PyTypeObject *PY_TYPE(AbstractIntegrator);

      class t_AbstractIntegrator {
      public:
        PyObject_HEAD
        AbstractIntegrator object;
        static PyObject *wrap_Object(const AbstractIntegrator&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
