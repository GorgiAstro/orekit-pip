#ifndef org_hipparchus_ode_VariationalEquation_H
#define org_hipparchus_ode_VariationalEquation_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class VariationalEquation$MismatchedEquations;
      class ODEState;
      class ParameterConfiguration;
      class ODEJacobiansProvider;
      class ExpandableODE;
      class OrdinaryDifferentialEquation;
      class ParametersController;
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
          mid_init$_00706f73184eaf6c,
          mid_init$_ffe1ad9fe310d59c,
          mid_extractMainSetJacobian_01f1be3cf55ee85b,
          mid_extractParameterJacobian_41a0e16ccaa8c872,
          mid_setInitialMainStateJacobian_a0befc7f3dc19e41,
          mid_setInitialParameterJacobian_3468fcb7793f51a9,
          mid_setUpInitialState_d2199fa9bd17650b,
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
