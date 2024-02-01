#ifndef org_hipparchus_analysis_polynomials_PolynomialFunctionLagrangeForm_H
#define org_hipparchus_analysis_polynomials_PolynomialFunctionLagrangeForm_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace analysis {
      class UnivariateFunction;
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

        class PolynomialFunctionLagrangeForm : public ::java::lang::Object {
         public:
          enum {
            mid_init$_64100e41ba74de8f,
            mid_degree_d6ab429752e7c267,
            mid_evaluate_65d620e9532c2371,
            mid_getCoefficients_be783177b060994b,
            mid_getInterpolatingPoints_be783177b060994b,
            mid_getInterpolatingValues_be783177b060994b,
            mid_value_bf28ed64d6e8576b,
            mid_verifyInterpolationArray_a57658a844146040,
            mid_computeCoefficients_ff7cb6c242604316,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PolynomialFunctionLagrangeForm(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PolynomialFunctionLagrangeForm(const PolynomialFunctionLagrangeForm& obj) : ::java::lang::Object(obj) {}

          PolynomialFunctionLagrangeForm(const JArray< jdouble > &, const JArray< jdouble > &);

          jint degree() const;
          static jdouble evaluate(const JArray< jdouble > &, const JArray< jdouble > &, jdouble);
          JArray< jdouble > getCoefficients() const;
          JArray< jdouble > getInterpolatingPoints() const;
          JArray< jdouble > getInterpolatingValues() const;
          jdouble value(jdouble) const;
          static jboolean verifyInterpolationArray(const JArray< jdouble > &, const JArray< jdouble > &, jboolean);
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
        extern PyType_Def PY_TYPE_DEF(PolynomialFunctionLagrangeForm);
        extern PyTypeObject *PY_TYPE(PolynomialFunctionLagrangeForm);

        class t_PolynomialFunctionLagrangeForm {
        public:
          PyObject_HEAD
          PolynomialFunctionLagrangeForm object;
          static PyObject *wrap_Object(const PolynomialFunctionLagrangeForm&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
