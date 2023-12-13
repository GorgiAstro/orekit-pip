#ifndef org_hipparchus_ode_ComplexODEConverter_H
#define org_hipparchus_ode_ComplexODEConverter_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class ComplexSecondaryODE;
      class ComplexODEState;
      class OrdinaryDifferentialEquation;
      class ComplexODEStateAndDerivative;
      class ComplexOrdinaryDifferentialEquation;
      class ODEStateAndDerivative;
      class ODEState;
      class SecondaryODE;
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
          mid_init$_a1fa5dae97ea5ed2,
          mid_convertEquations_a4753ad476484b58,
          mid_convertSecondaryEquations_d676223cff6357ec,
          mid_convertState_7633856019a399bc,
          mid_convertState_1f1fb5e568ed20f4,
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
