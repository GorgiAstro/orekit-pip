#ifndef org_hipparchus_complex_ComplexUnivariateIntegrator_H
#define org_hipparchus_complex_ComplexUnivariateIntegrator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        class UnivariateIntegrator;
      }
      class CalculusFieldUnivariateFunction;
    }
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
    namespace complex {

      class ComplexUnivariateIntegrator : public ::java::lang::Object {
       public:
        enum {
          mid_init$_7551b1c71ee2d8de,
          mid_integrate_1aa1c9ca64a6ecbb,
          mid_integrate_2cf5c37ab5133d85,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ComplexUnivariateIntegrator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ComplexUnivariateIntegrator(const ComplexUnivariateIntegrator& obj) : ::java::lang::Object(obj) {}

        ComplexUnivariateIntegrator(const ::org::hipparchus::analysis::integration::UnivariateIntegrator &);

        ::org::hipparchus::complex::Complex integrate(jint, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction &, const ::org::hipparchus::complex::Complex &, const JArray< ::org::hipparchus::complex::Complex > &) const;
        ::org::hipparchus::complex::Complex integrate(jint, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction &, const ::org::hipparchus::complex::Complex &, const ::org::hipparchus::complex::Complex &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace complex {
      extern PyType_Def PY_TYPE_DEF(ComplexUnivariateIntegrator);
      extern PyTypeObject *PY_TYPE(ComplexUnivariateIntegrator);

      class t_ComplexUnivariateIntegrator {
      public:
        PyObject_HEAD
        ComplexUnivariateIntegrator object;
        static PyObject *wrap_Object(const ComplexUnivariateIntegrator&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif