#ifndef org_hipparchus_ode_ComplexOrdinaryDifferentialEquation_H
#define org_hipparchus_ode_ComplexOrdinaryDifferentialEquation_H

#include "java/lang/Object.h"

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

      class ComplexOrdinaryDifferentialEquation : public ::java::lang::Object {
       public:
        enum {
          mid_computeDerivatives_205a0588bf1b379d,
          mid_getDimension_570ce0828f81a2c1,
          mid_init_7cbf20925feb48fd,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ComplexOrdinaryDifferentialEquation(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ComplexOrdinaryDifferentialEquation(const ComplexOrdinaryDifferentialEquation& obj) : ::java::lang::Object(obj) {}

        JArray< ::org::hipparchus::complex::Complex > computeDerivatives(jdouble, const JArray< ::org::hipparchus::complex::Complex > &) const;
        jint getDimension() const;
        void init(jdouble, const JArray< ::org::hipparchus::complex::Complex > &, jdouble) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      extern PyType_Def PY_TYPE_DEF(ComplexOrdinaryDifferentialEquation);
      extern PyTypeObject *PY_TYPE(ComplexOrdinaryDifferentialEquation);

      class t_ComplexOrdinaryDifferentialEquation {
      public:
        PyObject_HEAD
        ComplexOrdinaryDifferentialEquation object;
        static PyObject *wrap_Object(const ComplexOrdinaryDifferentialEquation&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
