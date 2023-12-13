#ifndef org_hipparchus_ode_AbstractIntegrator_H
#define org_hipparchus_ode_AbstractIntegrator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class NullPointerException;
    class Class;
    class String;
  }
}
namespace org {
  namespace hipparchus {
    namespace ode {
      class ODEIntegrator;
      namespace events {
        class ODEStepEndHandler;
        class ODEEventDetector;
      }
      class ODEStateAndDerivative;
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

      class AbstractIntegrator : public ::java::lang::Object {
       public:
        enum {
          mid_addEventDetector_b3037e2992b522fb,
          mid_addStepEndHandler_00cecfec8aa9403e,
          mid_addStepHandler_cd9b3224c18c683b,
          mid_clearEventDetectors_a1fa5dae97ea5ed2,
          mid_clearStepEndHandlers_a1fa5dae97ea5ed2,
          mid_clearStepHandlers_a1fa5dae97ea5ed2,
          mid_computeDerivatives_91fbb4072ae7ce9a,
          mid_getCurrentSignedStepsize_b74f83833fdad017,
          mid_getEvaluations_55546ef6a647f39b,
          mid_getEventDetectors_e62d3bb06d56d7e3,
          mid_getMaxEvaluations_55546ef6a647f39b,
          mid_getName_1c1fa1e935d6cdcf,
          mid_getStepEndHandlers_e62d3bb06d56d7e3,
          mid_getStepHandlers_e62d3bb06d56d7e3,
          mid_getStepStart_73a804ac72232dd7,
          mid_setMaxEvaluations_44ed599e93e8a30c,
          mid_getStepSize_b74f83833fdad017,
          mid_sanityChecks_9ab16ee510aba086,
          mid_initIntegration_8cb4bf2a0c64fd92,
          mid_setStepStart_d2d966b8a9c77b61,
          mid_setIsLastStep_fcb96c98de6fad04,
          mid_acceptStep_6f4f6de6bb232b27,
          mid_isLastStep_9ab94ac1dc23b105,
          mid_resetOccurred_9ab94ac1dc23b105,
          mid_setStepSize_8ba9fe7a847cecad,
          mid_getEvaluationsCounter_3c86b06a86576583,
          mid_getEquations_f19d9c4799a8baa5,
          mid_setStateInitialized_fcb96c98de6fad04,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AbstractIntegrator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AbstractIntegrator(const AbstractIntegrator& obj) : ::java::lang::Object(obj) {}

        void addEventDetector(const ::org::hipparchus::ode::events::ODEEventDetector &) const;
        void addStepEndHandler(const ::org::hipparchus::ode::events::ODEStepEndHandler &) const;
        void addStepHandler(const ::org::hipparchus::ode::sampling::ODEStepHandler &) const;
        void clearEventDetectors() const;
        void clearStepEndHandlers() const;
        void clearStepHandlers() const;
        JArray< jdouble > computeDerivatives(jdouble, const JArray< jdouble > &) const;
        jdouble getCurrentSignedStepsize() const;
        jint getEvaluations() const;
        ::java::util::List getEventDetectors() const;
        jint getMaxEvaluations() const;
        ::java::lang::String getName() const;
        ::java::util::List getStepEndHandlers() const;
        ::java::util::List getStepHandlers() const;
        ::org::hipparchus::ode::ODEStateAndDerivative getStepStart() const;
        void setMaxEvaluations(jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      extern PyType_Def PY_TYPE_DEF(AbstractIntegrator);
      extern PyTypeObject *PY_TYPE(AbstractIntegrator);

      class t_AbstractIntegrator {
      public:
        PyObject_HEAD
        AbstractIntegrator object;
        static PyObject *wrap_Object(const AbstractIntegrator&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
