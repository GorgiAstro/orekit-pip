#ifndef org_hipparchus_analysis_polynomials_FieldPolynomialFunction_H
#define org_hipparchus_analysis_polynomials_FieldPolynomialFunction_H

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
      class CalculusFieldUnivariateFunction;
      namespace polynomials {
        class FieldPolynomialFunction;
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
    namespace analysis {
      namespace polynomials {

        class FieldPolynomialFunction : public ::java::lang::Object {
         public:
          enum {
            mid_init$_4c337e4c1ec6f647,
            mid_add_32f3b75a8b9571d6,
            mid_antiDerivative_26bb6c8ddaa2c385,
            mid_degree_f2f64475e4580546,
            mid_getCoefficients_01c7d10e96d5cf94,
            mid_getField_70b4bbd3fa378d6b,
            mid_integrate_df565f90ecf8d53c,
            mid_integrate_75c7ce7d33e7324b,
            mid_multiply_32f3b75a8b9571d6,
            mid_negate_26bb6c8ddaa2c385,
            mid_polynomialDerivative_26bb6c8ddaa2c385,
            mid_subtract_32f3b75a8b9571d6,
            mid_value_cc0a3d6abf820939,
            mid_value_d3398190482814dc,
            mid_evaluate_068ef23bc9763e86,
            mid_differentiate_45349640cfb1ab66,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldPolynomialFunction(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldPolynomialFunction(const FieldPolynomialFunction& obj) : ::java::lang::Object(obj) {}

          FieldPolynomialFunction(const JArray< ::org::hipparchus::CalculusFieldElement > &);

          FieldPolynomialFunction add(const FieldPolynomialFunction &) const;
          FieldPolynomialFunction antiDerivative() const;
          jint degree() const;
          JArray< ::org::hipparchus::CalculusFieldElement > getCoefficients() const;
          ::org::hipparchus::Field getField() const;
          ::org::hipparchus::CalculusFieldElement integrate(jdouble, jdouble) const;
          ::org::hipparchus::CalculusFieldElement integrate(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &) const;
          FieldPolynomialFunction multiply(const FieldPolynomialFunction &) const;
          FieldPolynomialFunction negate() const;
          FieldPolynomialFunction polynomialDerivative() const;
          FieldPolynomialFunction subtract(const FieldPolynomialFunction &) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldPolynomialFunction);
        extern PyTypeObject *PY_TYPE(FieldPolynomialFunction);

        class t_FieldPolynomialFunction {
        public:
          PyObject_HEAD
          FieldPolynomialFunction object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldPolynomialFunction *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldPolynomialFunction&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldPolynomialFunction&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
