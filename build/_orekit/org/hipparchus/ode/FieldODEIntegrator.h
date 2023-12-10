#ifndef org_hipparchus_ode_FieldODEIntegrator_H
#define org_hipparchus_ode_FieldODEIntegrator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
    }
    namespace ode {
      class FieldODEStateAndDerivative;
      namespace sampling {
        class FieldODEStepHandler;
      }
      class FieldODEState;
      namespace events {
        class FieldODEEventDetector;
        class FieldODEStepEndHandler;
      }
      class FieldExpandableODE;
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

      class FieldODEIntegrator : public ::java::lang::Object {
       public:
        enum {
          mid_addEventDetector_cdac85baa1ddabb0,
          mid_addStepEndHandler_9ddb55dbce73d9f2,
          mid_addStepHandler_a947dba38eed8683,
          mid_clearEventDetectors_0fa09c18fee449d5,
          mid_clearStepEndHandlers_0fa09c18fee449d5,
          mid_clearStepHandlers_0fa09c18fee449d5,
          mid_getCurrentSignedStepsize_eba8e72a22c984ac,
          mid_getEvaluations_570ce0828f81a2c1,
          mid_getEventDetectors_2afa36052df4765d,
          mid_getMaxEvaluations_570ce0828f81a2c1,
          mid_getName_11b109bd155ca898,
          mid_getStepEndHandlers_2afa36052df4765d,
          mid_getStepHandlers_2afa36052df4765d,
          mid_getStepStart_7194dd3ba3cbc7e8,
          mid_integrate_d8a6319aba9a7b17,
          mid_setMaxEvaluations_99803b0791f320ff,
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
