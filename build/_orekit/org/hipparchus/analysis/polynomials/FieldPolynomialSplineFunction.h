#ifndef org_hipparchus_analysis_polynomials_FieldPolynomialSplineFunction_H
#define org_hipparchus_analysis_polynomials_FieldPolynomialSplineFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {
        class FieldPolynomialFunction;
        class FieldPolynomialSplineFunction;
      }
      class CalculusFieldUnivariateFunction;
    }
    class CalculusFieldElement;
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    class Field;
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
            mid_init$_6b3c91cce4813aba,
            mid_getField_5b28be2d3632a5dc,
            mid_getKnots_226a0b2040b1d2e1,
            mid_getN_570ce0828f81a2c1,
            mid_getPolynomials_b83535a7ed9ac540,
            mid_isValidPoint_a13b338b73b102ba,
            mid_polynomialSplineDerivative_8f167d00dfb6a1fa,
            mid_value_616c74807d7607b4,
            mid_value_a4b1871f4d29e58b,
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
