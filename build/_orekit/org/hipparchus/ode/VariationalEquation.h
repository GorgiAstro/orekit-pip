#ifndef org_hipparchus_ode_VariationalEquation_H
#define org_hipparchus_ode_VariationalEquation_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class ODEJacobiansProvider;
      class ODEState;
      class VariationalEquation$MismatchedEquations;
      class OrdinaryDifferentialEquation;
      class ExpandableODE;
      class ParameterConfiguration;
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
          mid_init$_615efab84e355fff,
          mid_init$_e1734deb8e540c22,
          mid_extractMainSetJacobian_cb9443542c288f33,
          mid_extractParameterJacobian_ad3e88544b6640ff,
          mid_setInitialMainStateJacobian_edb361bfdd1ad9ae,
          mid_setInitialParameterJacobian_7d8c14f144e3f080,
          mid_setUpInitialState_14e0148c007bcf61,
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
