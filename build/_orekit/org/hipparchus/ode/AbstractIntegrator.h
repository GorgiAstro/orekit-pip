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
      class MathIllegalStateException;
      class MathIllegalArgumentException;
    }
    namespace ode {
      class ODEIntegrator;
      class ODEStateAndDerivative;
      namespace events {
        class ODEEventDetector;
        class ODEStepEndHandler;
      }
      namespace sampling {
        class ODEStepHandler;
      }
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
          mid_addEventDetector_1acd9de872b3c9bd,
          mid_addStepEndHandler_ff5dc983cf5314d8,
          mid_addStepHandler_613136788c102fe1,
          mid_clearEventDetectors_0fa09c18fee449d5,
          mid_clearStepEndHandlers_0fa09c18fee449d5,
          mid_clearStepHandlers_0fa09c18fee449d5,
          mid_computeDerivatives_125ce48de7dbfde5,
          mid_getCurrentSignedStepsize_dff5885c2c873297,
          mid_getEvaluations_570ce0828f81a2c1,
          mid_getEventDetectors_2afa36052df4765d,
          mid_getMaxEvaluations_570ce0828f81a2c1,
          mid_getName_11b109bd155ca898,
          mid_getStepEndHandlers_2afa36052df4765d,
          mid_getStepHandlers_2afa36052df4765d,
          mid_getStepStart_72cfc96c3e58d15e,
          mid_setMaxEvaluations_99803b0791f320ff,
          mid_sanityChecks_9a885fd893969c04,
          mid_initIntegration_3c1cc820e563e3e9,
          mid_setStepStart_250c80d95e429c01,
          mid_getStepSize_dff5885c2c873297,
          mid_setIsLastStep_bd04c9335fb9e4cf,
          mid_acceptStep_2edfe476497dee0b,
          mid_isLastStep_b108b35ef48e27bd,
          mid_resetOccurred_b108b35ef48e27bd,
          mid_setStepSize_17db3a65980d3441,
          mid_getEvaluationsCounter_b6dd60d8c3af0cf7,
          mid_getEquations_34621ba0fc499087,
          mid_setStateInitialized_bd04c9335fb9e4cf,
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
