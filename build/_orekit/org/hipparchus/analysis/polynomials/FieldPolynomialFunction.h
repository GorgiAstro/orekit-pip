#ifndef org_hipparchus_analysis_polynomials_FieldPolynomialFunction_H
#define org_hipparchus_analysis_polynomials_FieldPolynomialFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
    }
    namespace analysis {
      class CalculusFieldUnivariateFunction;
      namespace polynomials {
        class FieldPolynomialFunction;
      }
    }
    class CalculusFieldElement;
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

        class FieldPolynomialFunction : public ::java::lang::Object {
         public:
          enum {
            mid_init$_5d9c9afaca2e497c,
            mid_add_56800b7225457744,
            mid_antiDerivative_30587ce6268a4343,
            mid_degree_412668abc8d889e9,
            mid_getCoefficients_41762fd4377ff26e,
            mid_getField_20f98801541dcec1,
            mid_integrate_b42a276fbe83c342,
            mid_integrate_d5f58731bcb8a011,
            mid_multiply_56800b7225457744,
            mid_negate_30587ce6268a4343,
            mid_polynomialDerivative_30587ce6268a4343,
            mid_subtract_56800b7225457744,
            mid_value_94d37e81a3238af8,
            mid_value_6672ad854985cb64,
            mid_evaluate_89721435ed03bed1,
            mid_differentiate_a126e91ca3e53df2,
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
