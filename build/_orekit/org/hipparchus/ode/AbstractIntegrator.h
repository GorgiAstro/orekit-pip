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
      namespace events {
        class ODEStepEndHandler;
        class ODEEventDetector;
      }
      namespace sampling {
        class ODEStepHandler;
      }
      class ODEIntegrator;
      class ODEStateAndDerivative;
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
          mid_addEventDetector_4cad2771a2849140,
          mid_addStepEndHandler_3dff193c3948a094,
          mid_addStepHandler_e6ea3ae127d5bfec,
          mid_clearEventDetectors_ff7cb6c242604316,
          mid_clearStepEndHandlers_ff7cb6c242604316,
          mid_clearStepHandlers_ff7cb6c242604316,
          mid_computeDerivatives_bfc955188bf36f2c,
          mid_getCurrentSignedStepsize_9981f74b2d109da6,
          mid_getEvaluations_d6ab429752e7c267,
          mid_getEventDetectors_d751c1a57012b438,
          mid_getMaxEvaluations_d6ab429752e7c267,
          mid_getName_d2c8eb4129821f0e,
          mid_getStepEndHandlers_d751c1a57012b438,
          mid_getStepHandlers_d751c1a57012b438,
          mid_getStepStart_abe7a2bda3ab9237,
          mid_setMaxEvaluations_8fd427ab23829bf5,
          mid_sanityChecks_e6ba2f1f75657f6f,
          mid_initIntegration_3b00c059d3ccb86d,
          mid_setStepStart_6bfc236263cc281c,
          mid_setIsLastStep_b35db77cae58639e,
          mid_setStepSize_1ad26e8c8c0cd65b,
          mid_getStepSize_9981f74b2d109da6,
          mid_acceptStep_bcb8bb0d467166bb,
          mid_isLastStep_eee3de00fe971136,
          mid_resetOccurred_eee3de00fe971136,
          mid_getEquations_cfdcf52f10836739,
          mid_getEvaluationsCounter_286bd168b7e14166,
          mid_setStateInitialized_b35db77cae58639e,
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
