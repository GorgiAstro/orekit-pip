#ifndef org_hipparchus_ode_ODEIntegrator_H
#define org_hipparchus_ode_ODEIntegrator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
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
      class ODEState;
      class OrdinaryDifferentialEquation;
      class ExpandableODE;
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

      class ODEIntegrator : public ::java::lang::Object {
       public:
        enum {
          mid_addEventDetector_1acd9de872b3c9bd,
          mid_addStepEndHandler_ff5dc983cf5314d8,
          mid_addStepHandler_613136788c102fe1,
          mid_clearEventDetectors_0fa09c18fee449d5,
          mid_clearStepEndHandlers_0fa09c18fee449d5,
          mid_clearStepHandlers_0fa09c18fee449d5,
          mid_getCurrentSignedStepsize_dff5885c2c873297,
          mid_getEvaluations_570ce0828f81a2c1,
          mid_getEventDetectors_2afa36052df4765d,
          mid_getMaxEvaluations_570ce0828f81a2c1,
          mid_getName_11b109bd155ca898,
          mid_getStepEndHandlers_2afa36052df4765d,
          mid_getStepHandlers_2afa36052df4765d,
          mid_getStepStart_72cfc96c3e58d15e,
          mid_integrate_3c1cc820e563e3e9,
          mid_integrate_f227297909eb6b1e,
          mid_setMaxEvaluations_99803b0791f320ff,
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
