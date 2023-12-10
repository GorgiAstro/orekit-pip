#ifndef org_hipparchus_analysis_polynomials_FieldPolynomialFunction_H
#define org_hipparchus_analysis_polynomials_FieldPolynomialFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {
        class FieldPolynomialFunction;
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

        class FieldPolynomialFunction : public ::java::lang::Object {
         public:
          enum {
            mid_init$_72479ee08453ef97,
            mid_add_4aedbc69798b856a,
            mid_antiDerivative_720ebd8423470629,
            mid_degree_570ce0828f81a2c1,
            mid_getCoefficients_226a0b2040b1d2e1,
            mid_getField_5b28be2d3632a5dc,
            mid_integrate_50936f84b69df8dc,
            mid_integrate_6746cc1cd9210d54,
            mid_multiply_4aedbc69798b856a,
            mid_negate_720ebd8423470629,
            mid_polynomialDerivative_720ebd8423470629,
            mid_subtract_4aedbc69798b856a,
            mid_value_616c74807d7607b4,
            mid_value_a4b1871f4d29e58b,
            mid_evaluate_beb0e1dee0021bcf,
            mid_differentiate_401cf8a1b53fb909,
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
