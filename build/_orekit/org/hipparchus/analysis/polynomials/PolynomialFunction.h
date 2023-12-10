#ifndef org_hipparchus_analysis_polynomials_PolynomialFunction_H
#define org_hipparchus_analysis_polynomials_PolynomialFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace analysis {
      class FieldUnivariateFunction;
      namespace differentiation {
        class Derivative;
        class UnivariateDifferentiableFunction;
      }
      namespace polynomials {
        class PolynomialFunction;
      }
    }
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        class PolynomialFunction : public ::java::lang::Object {
         public:
          enum {
            mid_init$_fa9d415d19f69361,
            mid_add_942e79ad6d1932aa,
            mid_antiDerivative_bab59708eca91047,
            mid_degree_570ce0828f81a2c1,
            mid_equals_65c7d273e80d497a,
            mid_getCoefficients_60c7040667a7dc5c,
            mid_hashCode_570ce0828f81a2c1,
            mid_integrate_86ffecc08a63eff0,
            mid_multiply_942e79ad6d1932aa,
            mid_negate_bab59708eca91047,
            mid_polynomialDerivative_bab59708eca91047,
            mid_subtract_942e79ad6d1932aa,
            mid_toString_11b109bd155ca898,
            mid_value_dcbc7ce2902fa136,
            mid_value_a4b1871f4d29e58b,
            mid_value_73d6acaa8ebd2b7d,
            mid_evaluate_1c41301ff6e224e7,
            mid_differentiate_ac3d742ccc742f22,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PolynomialFunction(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PolynomialFunction(const PolynomialFunction& obj) : ::java::lang::Object(obj) {}

          PolynomialFunction(const JArray< jdouble > &);

          PolynomialFunction add(const PolynomialFunction &) const;
          PolynomialFunction antiDerivative() const;
          jint degree() const;
          jboolean equals(const ::java::lang::Object &) const;
          JArray< jdouble > getCoefficients() const;
          jint hashCode() const;
          jdouble integrate(jdouble, jdouble) const;
          PolynomialFunction multiply(const PolynomialFunction &) const;
          PolynomialFunction negate() const;
          PolynomialFunction polynomialDerivative() const;
          PolynomialFunction subtract(const PolynomialFunction &) const;
          ::java::lang::String toString() const;
          jdouble value(jdouble) const;
          ::org::hipparchus::CalculusFieldElement value(const ::org::hipparchus::CalculusFieldElement &) const;
          ::org::hipparchus::analysis::differentiation::Derivative value(const ::org::hipparchus::analysis::differentiation::Derivative &) const;
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
        extern PyType_Def PY_TYPE_DEF(PolynomialFunction);
        extern PyTypeObject *PY_TYPE(PolynomialFunction);

        class t_PolynomialFunction {
        public:
          PyObject_HEAD
          PolynomialFunction object;
          static PyObject *wrap_Object(const PolynomialFunction&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
