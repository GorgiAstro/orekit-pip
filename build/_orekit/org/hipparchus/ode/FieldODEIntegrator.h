#ifndef org_hipparchus_ode_FieldODEIntegrator_H
#define org_hipparchus_ode_FieldODEIntegrator_H

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
      class FieldODEStateAndDerivative;
      class FieldExpandableODE;
      class FieldODEState;
      namespace events {
        class FieldODEEventDetector;
        class FieldODEStepEndHandler;
      }
      namespace sampling {
        class FieldODEStepHandler;
      }
    }
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {

      class FieldODEIntegrator : public ::java::lang::Object {
       public:
        enum {
          mid_addEventDetector_51c8f19515e56fc6,
          mid_addStepEndHandler_08e1e17c6db119ef,
          mid_addStepHandler_d88adba4c2bf364d,
          mid_clearEventDetectors_7ae3461a92a43152,
          mid_clearStepEndHandlers_7ae3461a92a43152,
          mid_clearStepHandlers_7ae3461a92a43152,
          mid_getCurrentSignedStepsize_e6d4d3215c30992a,
          mid_getEvaluations_f2f64475e4580546,
          mid_getEventDetectors_a6156df500549a58,
          mid_getMaxEvaluations_f2f64475e4580546,
          mid_getName_0090f7797e403f43,
          mid_getStepEndHandlers_a6156df500549a58,
          mid_getStepHandlers_a6156df500549a58,
          mid_getStepStart_f1f1c5e26e98a1d9,
          mid_integrate_668e072c435ebb6b,
          mid_setMaxEvaluations_0a2a1ac2721c0336,
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
