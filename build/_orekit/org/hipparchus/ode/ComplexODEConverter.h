#ifndef org_hipparchus_ode_ComplexODEConverter_H
#define org_hipparchus_ode_ComplexODEConverter_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class ComplexOrdinaryDifferentialEquation;
      class SecondaryODE;
      class ODEState;
      class ComplexODEStateAndDerivative;
      class OrdinaryDifferentialEquation;
      class ComplexSecondaryODE;
      class ODEStateAndDerivative;
      class ComplexODEState;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {

      class ComplexODEConverter : public ::java::lang::Object {
       public:
        enum {
          mid_init$_ff7cb6c242604316,
          mid_convertEquations_f991af10bff06b96,
          mid_convertSecondaryEquations_2418bdf1aee3e01a,
          mid_convertState_9c54d5abc8f7f3b9,
          mid_convertState_c146c780eecfbbbb,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ComplexODEConverter(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ComplexODEConverter(const ComplexODEConverter& obj) : ::java::lang::Object(obj) {}

        ComplexODEConverter();

        ::org::hipparchus::ode::OrdinaryDifferentialEquation convertEquations(const ::org::hipparchus::ode::ComplexOrdinaryDifferentialEquation &) const;
        ::org::hipparchus::ode::SecondaryODE convertSecondaryEquations(const ::org::hipparchus::ode::ComplexSecondaryODE &) const;
        ::org::hipparchus::ode::ComplexODEStateAndDerivative convertState(const ::org::hipparchus::ode::ODEStateAndDerivative &) const;
        ::org::hipparchus::ode::ODEState convertState(const ::org::hipparchus::ode::ComplexODEState &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      extern PyType_Def PY_TYPE_DEF(ComplexODEConverter);
      extern PyTypeObject *PY_TYPE(ComplexODEConverter);

      class t_ComplexODEConverter {
      public:
        PyObject_HEAD
        ComplexODEConverter object;
        static PyObject *wrap_Object(const ComplexODEConverter&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
