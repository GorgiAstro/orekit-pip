#ifndef org_hipparchus_complex_FieldComplexUnivariateIntegrator_H
#define org_hipparchus_complex_FieldComplexUnivariateIntegrator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      class FieldComplex;
    }
    namespace analysis {
      class CalculusFieldUnivariateFunction;
      namespace integration {
        class FieldUnivariateIntegrator;
      }
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

      class FieldComplexUnivariateIntegrator : public ::java::lang::Object {
       public:
        enum {
          mid_init$_bfa8c3de537fe155,
          mid_integrate_e8b296115a497457,
          mid_integrate_8daa69e2f042f9b7,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldComplexUnivariateIntegrator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldComplexUnivariateIntegrator(const FieldComplexUnivariateIntegrator& obj) : ::java::lang::Object(obj) {}

        FieldComplexUnivariateIntegrator(const ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator &);

        ::org::hipparchus::complex::FieldComplex integrate(jint, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction &, const ::org::hipparchus::complex::FieldComplex &, const JArray< ::org::hipparchus::complex::FieldComplex > &) const;
        ::org::hipparchus::complex::FieldComplex integrate(jint, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction &, const ::org::hipparchus::complex::FieldComplex &, const ::org::hipparchus::complex::FieldComplex &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace complex {
      extern PyType_Def PY_TYPE_DEF(FieldComplexUnivariateIntegrator);
      extern PyTypeObject *PY_TYPE(FieldComplexUnivariateIntegrator);

      class t_FieldComplexUnivariateIntegrator {
      public:
        PyObject_HEAD
        FieldComplexUnivariateIntegrator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldComplexUnivariateIntegrator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldComplexUnivariateIntegrator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldComplexUnivariateIntegrator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
