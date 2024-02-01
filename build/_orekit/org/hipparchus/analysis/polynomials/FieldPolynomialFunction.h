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
      namespace polynomials {
        class FieldPolynomialFunction;
      }
      class CalculusFieldUnivariateFunction;
    }
    class Field;
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

        class FieldPolynomialFunction : public ::java::lang::Object {
         public:
          enum {
            mid_init$_77e61a645c496adc,
            mid_add_0f4fc8a8c5782fe0,
            mid_antiDerivative_ad0e69ebdd54e8db,
            mid_degree_d6ab429752e7c267,
            mid_getCoefficients_94ed2e0620f8833d,
            mid_getField_577649682b9910c1,
            mid_integrate_44b518e8c914a050,
            mid_integrate_b5ecd7df9e053968,
            mid_multiply_0f4fc8a8c5782fe0,
            mid_negate_ad0e69ebdd54e8db,
            mid_polynomialDerivative_ad0e69ebdd54e8db,
            mid_subtract_0f4fc8a8c5782fe0,
            mid_value_e3d0ff3c0584eadf,
            mid_value_a3b854adede8eaaa,
            mid_evaluate_ddfab947e3a8530e,
            mid_differentiate_38b803e86c0bea36,
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
