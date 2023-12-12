#ifndef org_hipparchus_ode_ODEIntegrator_H
#define org_hipparchus_ode_ODEIntegrator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class ODEState;
      namespace sampling {
        class ODEStepHandler;
      }
      namespace events {
        class ODEStepEndHandler;
        class ODEEventDetector;
      }
      class OrdinaryDifferentialEquation;
      class ExpandableODE;
      class ODEStateAndDerivative;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {

      class ODEIntegrator : public ::java::lang::Object {
       public:
        enum {
          mid_addEventDetector_a2423f3286456e55,
          mid_addStepEndHandler_b9694d2460b8c773,
          mid_addStepHandler_2660d523bc4bf5e9,
          mid_clearEventDetectors_0640e6acf969ed28,
          mid_clearStepEndHandlers_0640e6acf969ed28,
          mid_clearStepHandlers_0640e6acf969ed28,
          mid_getCurrentSignedStepsize_557b8123390d8d0c,
          mid_getEvaluations_412668abc8d889e9,
          mid_getEventDetectors_0d9551367f7ecdef,
          mid_getMaxEvaluations_412668abc8d889e9,
          mid_getName_3cffd47377eca18a,
          mid_getStepEndHandlers_0d9551367f7ecdef,
          mid_getStepHandlers_0d9551367f7ecdef,
          mid_getStepStart_0a798a152cb54887,
          mid_integrate_7b1e7ccc98e27149,
          mid_integrate_f94c5e4ec5dc77e7,
          mid_setMaxEvaluations_a3da1a935cb37f7b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ODEIntegrator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ODEIntegrator(const ODEIntegrator& obj) : ::java::lang::Object(obj) {}

        void addEventDetector(const ::org::hipparchus::ode::events::ODEEventDetector &) const;
        void addStepEndHandler(const ::org::hipparchus::ode::events::ODEStepEndHandler &) const;
        void addStepHandler(const ::org::hipparchus::ode::sampling::ODEStepHandler &) const;
        void clearEventDetectors() const;
        void clearStepEndHandlers() const;
        void clearStepHandlers() const;
        jdouble getCurrentSignedStepsize() const;
        jint getEvaluations() const;
        ::java::util::List getEventDetectors() const;
        jint getMaxEvaluations() const;
        ::java::lang::String getName() const;
        ::java::util::List getStepEndHandlers() const;
        ::java::util::List getStepHandlers() const;
        ::org::hipparchus::ode::ODEStateAndDerivative getStepStart() const;
        ::org::hipparchus::ode::ODEStateAndDerivative integrate(const ::org::hipparchus::ode::ExpandableODE &, const ::org::hipparchus::ode::ODEState &, jdouble) const;
        ::org::hipparchus::ode::ODEStateAndDerivative integrate(const ::org::hipparchus::ode::OrdinaryDifferentialEquation &, const ::org::hipparchus::ode::ODEState &, jdouble) const;
        void setMaxEvaluations(jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      extern PyType_Def PY_TYPE_DEF(ODEIntegrator);
      extern PyTypeObject *PY_TYPE(ODEIntegrator);

      class t_ODEIntegrator {
      public:
        PyObject_HEAD
        ODEIntegrator object;
        static PyObject *wrap_Object(const ODEIntegrator&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
