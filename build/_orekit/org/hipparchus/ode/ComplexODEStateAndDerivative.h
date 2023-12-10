#ifndef org_hipparchus_ode_ComplexODEStateAndDerivative_H
#define org_hipparchus_ode_ComplexODEStateAndDerivative_H

#include "org/hipparchus/ode/ComplexODEState.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      class Complex;
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

      class ComplexODEStateAndDerivative : public ::org::hipparchus::ode::ComplexODEState {
       public:
        enum {
          mid_init$_dc1c7ac732247d3f,
          mid_init$_bea644bb2895ac0d,
          mid_getCompleteDerivative_8a0770025abeda5b,
          mid_getPrimaryDerivative_8a0770025abeda5b,
          mid_getSecondaryDerivative_8b297114c93ecf96,
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
