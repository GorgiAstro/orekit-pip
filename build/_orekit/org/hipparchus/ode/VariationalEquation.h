#ifndef org_hipparchus_ode_VariationalEquation_H
#define org_hipparchus_ode_VariationalEquation_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class ODEState;
      class ParametersController;
      class ParameterConfiguration;
      class OrdinaryDifferentialEquation;
      class ExpandableODE;
      class VariationalEquation$MismatchedEquations;
      class ODEJacobiansProvider;
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
          mid_init$_8f42fd19d7a4452b,
          mid_init$_3b433591ff96fd2c,
          mid_extractMainSetJacobian_12aee0712e743790,
          mid_extractParameterJacobian_3f551ec8f4237deb,
          mid_setInitialMainStateJacobian_11ecdbb5af7ed67d,
          mid_setInitialParameterJacobian_550be97e760e0f22,
          mid_setUpInitialState_83627e0d0a0fb550,
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
