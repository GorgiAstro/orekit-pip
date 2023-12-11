#ifndef org_hipparchus_analysis_polynomials_FieldPolynomialSplineFunction_H
#define org_hipparchus_analysis_polynomials_FieldPolynomialSplineFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
    }
    class Field;
    namespace analysis {
      class CalculusFieldUnivariateFunction;
      namespace polynomials {
        class FieldPolynomialFunction;
        class FieldPolynomialSplineFunction;
      }
    }
    class CalculusFieldElement;
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
    namespace analysis {
      namespace polynomials {

        class FieldPolynomialSplineFunction : public ::java::lang::Object {
         public:
          enum {
            mid_init$_7c1ac2d3dfcacee3,
            mid_getField_20f98801541dcec1,
            mid_getKnots_41762fd4377ff26e,
            mid_getN_412668abc8d889e9,
            mid_getPolynomials_614ccfa9cbc0cf80,
            mid_isValidPoint_43d6c47e369ad1be,
            mid_polynomialSplineDerivative_599dfb4ad5e5a652,
            mid_value_94d37e81a3238af8,
            mid_value_6672ad854985cb64,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldPolynomialSplineFunction(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldPolynomialSplineFunction(const FieldPolynomialSplineFunction& obj) : ::java::lang::Object(obj) {}

          FieldPolynomialSplineFunction(const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< ::org::hipparchus::analysis::polynomials::FieldPolynomialFunction > &);

          ::org::hipparchus::Field getField() const;
          JArray< ::org::hipparchus::CalculusFieldElement > getKnots() const;
          jint getN() const;
          JArray< ::org::hipparchus::analysis::polynomials::FieldPolynomialFunction > getPolynomials() const;
          jboolean isValidPoint(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldPolynomialSplineFunction polynomialSplineDerivative() const;
          ::org::hipparchus::CalculusFieldElement value(jdouble) const;
          ::org::hipparchus::CalculusFieldElement value(const ::org::hipparchus::CalculusFieldElement &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {
        extern PyType_Def PY_TYPE_DEF(FieldPolynomialSplineFunction);
        extern PyTypeObject *PY_TYPE(FieldPolynomialSplineFunction);

        class t_FieldPolynomialSplineFunction {
        public:
          PyObject_HEAD
          FieldPolynomialSplineFunction object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldPolynomialSplineFunction *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldPolynomialSplineFunction&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldPolynomialSplineFunction&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
