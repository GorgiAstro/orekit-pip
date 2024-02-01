#ifndef org_hipparchus_ode_ODEIntegrator_H
#define org_hipparchus_ode_ODEIntegrator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class ODEState;
      namespace events {
        class ODEStepEndHandler;
        class ODEEventDetector;
      }
      class OrdinaryDifferentialEquation;
      namespace sampling {
        class ODEStepHandler;
      }
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
          mid_addEventDetector_4cad2771a2849140,
          mid_addStepEndHandler_3dff193c3948a094,
          mid_addStepHandler_e6ea3ae127d5bfec,
          mid_clearEventDetectors_ff7cb6c242604316,
          mid_clearStepEndHandlers_ff7cb6c242604316,
          mid_clearStepHandlers_ff7cb6c242604316,
          mid_getCurrentSignedStepsize_9981f74b2d109da6,
          mid_getEvaluations_d6ab429752e7c267,
          mid_getEventDetectors_d751c1a57012b438,
          mid_getMaxEvaluations_d6ab429752e7c267,
          mid_getName_d2c8eb4129821f0e,
          mid_getStepEndHandlers_d751c1a57012b438,
          mid_getStepHandlers_d751c1a57012b438,
          mid_getStepStart_abe7a2bda3ab9237,
          mid_integrate_3b00c059d3ccb86d,
          mid_integrate_5a3cbbeaece41dc9,
          mid_setMaxEvaluations_8fd427ab23829bf5,
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
