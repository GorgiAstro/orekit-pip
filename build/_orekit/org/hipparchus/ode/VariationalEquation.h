#ifndef org_hipparchus_ode_VariationalEquation_H
#define org_hipparchus_ode_VariationalEquation_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class ParametersController;
      class ODEJacobiansProvider;
      class OrdinaryDifferentialEquation;
      class ODEState;
      class VariationalEquation$MismatchedEquations;
      class ExpandableODE;
      class ParameterConfiguration;
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {

      class VariationalEquation : public ::java::lang::Object {
       public:
        enum {
          mid_init$_6f62dea1a828b58a,
          mid_init$_981f0e6f6e39fedc,
          mid_extractMainSetJacobian_112904d5e08f190a,
          mid_extractParameterJacobian_004d321682014f49,
          mid_setInitialMainStateJacobian_07adb42ffaa97d31,
          mid_setInitialParameterJacobian_6fb36758267c5870,
          mid_setUpInitialState_d0492adde795fe6c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit VariationalEquation(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        VariationalEquation(const VariationalEquation& obj) : ::java::lang::Object(obj) {}

        VariationalEquation(const ::org::hipparchus::ode::ExpandableODE &, const ::org::hipparchus::ode::ODEJacobiansProvider &);
        VariationalEquation(const ::org::hipparchus::ode::ExpandableODE &, const ::org::hipparchus::ode::OrdinaryDifferentialEquation &, const JArray< jdouble > &, const ::org::hipparchus::ode::ParametersController &, const JArray< ::org::hipparchus::ode::ParameterConfiguration > &);

        JArray< JArray< jdouble > > extractMainSetJacobian(const ::org::hipparchus::ode::ODEState &) const;
        JArray< jdouble > extractParameterJacobian(const ::org::hipparchus::ode::ODEState &, const ::java::lang::String &) const;
        void setInitialMainStateJacobian(const JArray< JArray< jdouble > > &) const;
        void setInitialParameterJacobian(const ::java::lang::String &, const JArray< jdouble > &) const;
        ::org::hipparchus::ode::ODEState setUpInitialState(const ::org::hipparchus::ode::ODEState &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      extern PyType_Def PY_TYPE_DEF(VariationalEquation);
      extern PyTypeObject *PY_TYPE(VariationalEquation);

      class t_VariationalEquation {
      public:
        PyObject_HEAD
        VariationalEquation object;
        static PyObject *wrap_Object(const VariationalEquation&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
