#ifndef org_hipparchus_ode_FieldODEIntegrator_H
#define org_hipparchus_ode_FieldODEIntegrator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class FieldODEState;
      class FieldExpandableODE;
      class FieldODEStateAndDerivative;
      namespace sampling {
        class FieldODEStepHandler;
      }
      namespace events {
        class FieldODEEventDetector;
        class FieldODEStepEndHandler;
      }
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
          mid_addEventDetector_7d036dd73a796a18,
          mid_addStepEndHandler_c7e835482ba4bd87,
          mid_addStepHandler_cd46d1493dfc3830,
          mid_clearEventDetectors_a1fa5dae97ea5ed2,
          mid_clearStepEndHandlers_a1fa5dae97ea5ed2,
          mid_clearStepHandlers_a1fa5dae97ea5ed2,
          mid_getCurrentSignedStepsize_81520b552cb3fa26,
          mid_getEvaluations_55546ef6a647f39b,
          mid_getEventDetectors_e62d3bb06d56d7e3,
          mid_getMaxEvaluations_55546ef6a647f39b,
          mid_getName_1c1fa1e935d6cdcf,
          mid_getStepEndHandlers_e62d3bb06d56d7e3,
          mid_getStepHandlers_e62d3bb06d56d7e3,
          mid_getStepStart_b7aa8b39e4b21836,
          mid_integrate_75ca69013be095d1,
          mid_setMaxEvaluations_44ed599e93e8a30c,
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
