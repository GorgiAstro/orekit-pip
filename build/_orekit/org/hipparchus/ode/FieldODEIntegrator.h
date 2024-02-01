#ifndef org_hipparchus_ode_FieldODEIntegrator_H
#define org_hipparchus_ode_FieldODEIntegrator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        class FieldODEEventDetector;
        class FieldODEStepEndHandler;
      }
      namespace sampling {
        class FieldODEStepHandler;
      }
      class FieldODEStateAndDerivative;
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
          mid_addEventDetector_1ffd39265a0e340d,
          mid_addStepEndHandler_0490fb61ed7db186,
          mid_addStepHandler_d8a2a9c1603c5377,
          mid_clearEventDetectors_ff7cb6c242604316,
          mid_clearStepEndHandlers_ff7cb6c242604316,
          mid_clearStepHandlers_ff7cb6c242604316,
          mid_getCurrentSignedStepsize_08d37e3f77b7239d,
          mid_getEvaluations_d6ab429752e7c267,
          mid_getEventDetectors_d751c1a57012b438,
          mid_getMaxEvaluations_d6ab429752e7c267,
          mid_getName_d2c8eb4129821f0e,
          mid_getStepEndHandlers_d751c1a57012b438,
          mid_getStepHandlers_d751c1a57012b438,
          mid_getStepStart_15f5056f2d3c7d41,
          mid_integrate_7e5884a5ebca9afb,
          mid_setMaxEvaluations_8fd427ab23829bf5,
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
