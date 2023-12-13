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
    namespace ode {
      namespace events {
        class ODEStepEndHandler;
        class ODEEventDetector;
      }
      class OrdinaryDifferentialEquation;
      class ODEStateAndDerivative;
      class ODEState;
      class ExpandableODE;
      namespace sampling {
        class ODEStepHandler;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
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
          mid_addEventDetector_b3037e2992b522fb,
          mid_addStepEndHandler_00cecfec8aa9403e,
          mid_addStepHandler_cd9b3224c18c683b,
          mid_clearEventDetectors_a1fa5dae97ea5ed2,
          mid_clearStepEndHandlers_a1fa5dae97ea5ed2,
          mid_clearStepHandlers_a1fa5dae97ea5ed2,
          mid_getCurrentSignedStepsize_b74f83833fdad017,
          mid_getEvaluations_55546ef6a647f39b,
          mid_getEventDetectors_e62d3bb06d56d7e3,
          mid_getMaxEvaluations_55546ef6a647f39b,
          mid_getName_1c1fa1e935d6cdcf,
          mid_getStepEndHandlers_e62d3bb06d56d7e3,
          mid_getStepHandlers_e62d3bb06d56d7e3,
          mid_getStepStart_73a804ac72232dd7,
          mid_integrate_8cb4bf2a0c64fd92,
          mid_integrate_2710805e3cea778c,
          mid_setMaxEvaluations_44ed599e93e8a30c,
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
