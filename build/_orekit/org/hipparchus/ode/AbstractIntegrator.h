#ifndef org_hipparchus_ode_AbstractIntegrator_H
#define org_hipparchus_ode_AbstractIntegrator_H

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
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
    }
    namespace ode {
      namespace sampling {
        class ODEStepHandler;
      }
      namespace events {
        class ODEStepEndHandler;
        class ODEEventDetector;
      }
      class ODEIntegrator;
      class ODEStateAndDerivative;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {

      class AbstractIntegrator : public ::java::lang::Object {
       public:
        enum {
          mid_addEventDetector_a2423f3286456e55,
          mid_addStepEndHandler_b9694d2460b8c773,
          mid_addStepHandler_2660d523bc4bf5e9,
          mid_clearEventDetectors_0640e6acf969ed28,
          mid_clearStepEndHandlers_0640e6acf969ed28,
          mid_clearStepHandlers_0640e6acf969ed28,
          mid_computeDerivatives_31b9a2982d73e37a,
          mid_getCurrentSignedStepsize_557b8123390d8d0c,
          mid_getEvaluations_412668abc8d889e9,
          mid_getEventDetectors_0d9551367f7ecdef,
          mid_getMaxEvaluations_412668abc8d889e9,
          mid_getName_3cffd47377eca18a,
          mid_getStepEndHandlers_0d9551367f7ecdef,
          mid_getStepHandlers_0d9551367f7ecdef,
          mid_getStepStart_0a798a152cb54887,
          mid_setMaxEvaluations_a3da1a935cb37f7b,
          mid_isLastStep_89b302893bdbe1f1,
          mid_acceptStep_7bb9d62fab63cbcb,
          mid_sanityChecks_4d28f529380c21e7,
          mid_initIntegration_7b1e7ccc98e27149,
          mid_setStepStart_b79fdee299d79fcc,
          mid_setIsLastStep_ed2afdb8506b9742,
          mid_setStepSize_10f281d777284cea,
          mid_getStepSize_557b8123390d8d0c,
          mid_resetOccurred_89b302893bdbe1f1,
          mid_getEquations_38aa8763986f508b,
          mid_getEvaluationsCounter_d3591c1ea177be92,
          mid_setStateInitialized_ed2afdb8506b9742,
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
