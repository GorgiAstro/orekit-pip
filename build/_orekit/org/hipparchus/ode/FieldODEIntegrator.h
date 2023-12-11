#ifndef org_hipparchus_ode_FieldODEIntegrator_H
#define org_hipparchus_ode_FieldODEIntegrator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        class FieldODEStepEndHandler;
        class FieldODEEventDetector;
      }
      class FieldODEStateAndDerivative;
      namespace sampling {
        class FieldODEStepHandler;
      }
      class FieldExpandableODE;
      class FieldODEState;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
    }
    class CalculusFieldElement;
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

      class FieldODEIntegrator : public ::java::lang::Object {
       public:
        enum {
          mid_addEventDetector_7951513ad7dd1f46,
          mid_addStepEndHandler_f4eae0b3d6c5e2af,
          mid_addStepHandler_01ea5dfa7056a45c,
          mid_clearEventDetectors_0640e6acf969ed28,
          mid_clearStepEndHandlers_0640e6acf969ed28,
          mid_clearStepHandlers_0640e6acf969ed28,
          mid_getCurrentSignedStepsize_613c8f46c659f636,
          mid_getEvaluations_412668abc8d889e9,
          mid_getEventDetectors_0d9551367f7ecdef,
          mid_getMaxEvaluations_412668abc8d889e9,
          mid_getName_3cffd47377eca18a,
          mid_getStepEndHandlers_0d9551367f7ecdef,
          mid_getStepHandlers_0d9551367f7ecdef,
          mid_getStepStart_45f3e0f3929fa6d9,
          mid_integrate_dd582e1c9ef253c9,
          mid_setMaxEvaluations_a3da1a935cb37f7b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldODEIntegrator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldODEIntegrator(const FieldODEIntegrator& obj) : ::java::lang::Object(obj) {}

        void addEventDetector(const ::org::hipparchus::ode::events::FieldODEEventDetector &) const;
        void addStepEndHandler(const ::org::hipparchus::ode::events::FieldODEStepEndHandler &) const;
        void addStepHandler(const ::org::hipparchus::ode::sampling::FieldODEStepHandler &) const;
        void clearEventDetectors() const;
        void clearStepEndHandlers() const;
        void clearStepHandlers() const;
        ::org::hipparchus::CalculusFieldElement getCurrentSignedStepsize() const;
        jint getEvaluations() const;
        ::java::util::List getEventDetectors() const;
        jint getMaxEvaluations() const;
        ::java::lang::String getName() const;
        ::java::util::List getStepEndHandlers() const;
        ::java::util::List getStepHandlers() const;
        ::org::hipparchus::ode::FieldODEStateAndDerivative getStepStart() const;
        ::org::hipparchus::ode::FieldODEStateAndDerivative integrate(const ::org::hipparchus::ode::FieldExpandableODE &, const ::org::hipparchus::ode::FieldODEState &, const ::org::hipparchus::CalculusFieldElement &) const;
        void setMaxEvaluations(jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      extern PyType_Def PY_TYPE_DEF(FieldODEIntegrator);
      extern PyTypeObject *PY_TYPE(FieldODEIntegrator);

      class t_FieldODEIntegrator {
      public:
        PyObject_HEAD
        FieldODEIntegrator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldODEIntegrator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldODEIntegrator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldODEIntegrator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
