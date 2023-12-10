#ifndef org_hipparchus_ode_ComplexODEStateAndDerivative_H
#define org_hipparchus_ode_ComplexODEStateAndDerivative_H

#include "org/hipparchus/ode/ComplexODEState.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace complex {
      class Complex;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {

      class ComplexODEStateAndDerivative : public ::org::hipparchus::ode::ComplexODEState {
       public:
        enum {
          mid_init$_a183ca66a2fdae88,
          mid_init$_b96837c39aa5ebf8,
          mid_getCompleteDerivative_a42e219c62839d3d,
          mid_getPrimaryDerivative_a42e219c62839d3d,
          mid_getSecondaryDerivative_2169290c4dd2441c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ComplexODEStateAndDerivative(jobject obj) : ::org::hipparchus::ode::ComplexODEState(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ComplexODEStateAndDerivative(const ComplexODEStateAndDerivative& obj) : ::org::hipparchus::ode::ComplexODEState(obj) {}

        ComplexODEStateAndDerivative(jdouble, const JArray< ::org::hipparchus::complex::Complex > &, const JArray< ::org::hipparchus::complex::Complex > &);
        ComplexODEStateAndDerivative(jdouble, const JArray< ::org::hipparchus::complex::Complex > &, const JArray< ::org::hipparchus::complex::Complex > &, const JArray< JArray< ::org::hipparchus::complex::Complex > > &, const JArray< JArray< ::org::hipparchus::complex::Complex > > &);

        JArray< ::org::hipparchus::complex::Complex > getCompleteDerivative() const;
        JArray< ::org::hipparchus::complex::Complex > getPrimaryDerivative() const;
        JArray< ::org::hipparchus::complex::Complex > getSecondaryDerivative(jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      extern PyType_Def PY_TYPE_DEF(ComplexODEStateAndDerivative);
      extern PyTypeObject *PY_TYPE(ComplexODEStateAndDerivative);

      class t_ComplexODEStateAndDerivative {
      public:
        PyObject_HEAD
        ComplexODEStateAndDerivative object;
        static PyObject *wrap_Object(const ComplexODEStateAndDerivative&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif