#ifndef org_hipparchus_ode_ComplexODEConverter_H
#define org_hipparchus_ode_ComplexODEConverter_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class ComplexODEStateAndDerivative;
      class ComplexSecondaryODE;
      class ODEState;
      class OrdinaryDifferentialEquation;
      class SecondaryODE;
      class ODEStateAndDerivative;
      class ComplexOrdinaryDifferentialEquation;
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
          mid_init$_0fa09c18fee449d5,
          mid_convertEquations_66c8df12f3818ebb,
          mid_convertSecondaryEquations_c01d75fd6cb02094,
          mid_convertState_583e7e18b418ae63,
          mid_convertState_2e1eef287dcdcc65,
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
