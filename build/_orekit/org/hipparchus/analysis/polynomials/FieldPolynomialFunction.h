#ifndef org_hipparchus_analysis_polynomials_FieldPolynomialFunction_H
#define org_hipparchus_analysis_polynomials_FieldPolynomialFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
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
            mid_init$_8b0f7facc8a6a46e,
            mid_add_3540fbdca36a9a2d,
            mid_antiDerivative_8acb8b6f60143fc2,
            mid_degree_55546ef6a647f39b,
            mid_getCoefficients_883be608cfc68c26,
            mid_getField_04d1f63e17d5c5d4,
            mid_integrate_7cdd86319cd5fd7c,
            mid_integrate_c6408fdce2cc6c1a,
            mid_multiply_3540fbdca36a9a2d,
            mid_negate_8acb8b6f60143fc2,
            mid_polynomialDerivative_8acb8b6f60143fc2,
            mid_subtract_3540fbdca36a9a2d,
            mid_value_1d3e368d09a6f8a6,
            mid_value_6e00dc5eb352fe51,
            mid_evaluate_a753398bd4e84b37,
            mid_differentiate_1cc99f34da9b4a7b,
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
