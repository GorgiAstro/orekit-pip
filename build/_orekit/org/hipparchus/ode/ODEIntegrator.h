#ifndef org_hipparchus_ode_ODEIntegrator_H
#define org_hipparchus_ode_ODEIntegrator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {
        class ODEStepHandler;
      }
      namespace events {
        class ODEStepEndHandler;
        class ODEEventDetector;
      }
      class ExpandableODE;
      class OrdinaryDifferentialEquation;
      class ODEState;
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
          mid_addEventDetector_95ad63d6e12b665a,
          mid_addStepEndHandler_d6f7dd010125fe2a,
          mid_addStepHandler_e242ed1b39c6a814,
          mid_clearEventDetectors_7ae3461a92a43152,
          mid_clearStepEndHandlers_7ae3461a92a43152,
          mid_clearStepHandlers_7ae3461a92a43152,
          mid_getCurrentSignedStepsize_456d9a2f64d6b28d,
          mid_getEvaluations_f2f64475e4580546,
          mid_getEventDetectors_a6156df500549a58,
          mid_getMaxEvaluations_f2f64475e4580546,
          mid_getName_0090f7797e403f43,
          mid_getStepEndHandlers_a6156df500549a58,
          mid_getStepHandlers_a6156df500549a58,
          mid_getStepStart_ced1effea9e5e5d4,
          mid_integrate_7efcd57267e426c3,
          mid_integrate_edafc9d5ce32b580,
          mid_setMaxEvaluations_0a2a1ac2721c0336,
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
