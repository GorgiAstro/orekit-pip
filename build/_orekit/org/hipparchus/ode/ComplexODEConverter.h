#ifndef org_hipparchus_ode_ComplexODEConverter_H
#define org_hipparchus_ode_ComplexODEConverter_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class ODEState;
      class ComplexODEStateAndDerivative;
      class ComplexOrdinaryDifferentialEquation;
      class ComplexSecondaryODE;
      class OrdinaryDifferentialEquation;
      class SecondaryODE;
      class ComplexODEState;
      class ODEStateAndDerivative;
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
          mid_init$_0640e6acf969ed28,
          mid_convertEquations_47807f37370886ab,
          mid_convertSecondaryEquations_3538a086806347eb,
          mid_convertState_7fe8d4e3b4ccd4c4,
          mid_convertState_edf45f92b3b90b4f,
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
