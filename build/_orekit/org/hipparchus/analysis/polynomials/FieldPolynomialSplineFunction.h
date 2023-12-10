#ifndef org_hipparchus_analysis_polynomials_FieldPolynomialSplineFunction_H
#define org_hipparchus_analysis_polynomials_FieldPolynomialSplineFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class Field;
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    class CalculusFieldElement;
    namespace analysis {
      namespace polynomials {
        class FieldPolynomialSplineFunction;
        class FieldPolynomialFunction;
      }
      class CalculusFieldUnivariateFunction;
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
    namespace analysis {
      namespace polynomials {

        class FieldPolynomialSplineFunction : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f0b1241ee614add6,
            mid_getField_70b4bbd3fa378d6b,
            mid_getKnots_01c7d10e96d5cf94,
            mid_getN_f2f64475e4580546,
            mid_getPolynomials_e720537acd3cdf39,
            mid_isValidPoint_1ef7539925017c56,
            mid_polynomialSplineDerivative_2de249337843d9cb,
            mid_value_cc0a3d6abf820939,
            mid_value_d3398190482814dc,
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
