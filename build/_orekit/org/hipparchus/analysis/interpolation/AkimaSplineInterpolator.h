#ifndef org_hipparchus_analysis_interpolation_AkimaSplineInterpolator_H
#define org_hipparchus_analysis_interpolation_AkimaSplineInterpolator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {
        class UnivariateInterpolator;
        class FieldUnivariateInterpolator;
      }
      namespace polynomials {
        class FieldPolynomialSplineFunction;
        class PolynomialSplineFunction;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
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
      namespace interpolation {

        class AkimaSplineInterpolator : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_init$_b35db77cae58639e,
            mid_interpolate_d112b93e44ec98b7,
            mid_interpolate_675f76d3ea97467b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AkimaSplineInterpolator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AkimaSplineInterpolator(const AkimaSplineInterpolator& obj) : ::java::lang::Object(obj) {}

          AkimaSplineInterpolator();
          AkimaSplineInterpolator(jboolean);

          ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction interpolate(const JArray< jdouble > &, const JArray< jdouble > &) const;
          ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction interpolate(const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {
        extern PyType_Def PY_TYPE_DEF(AkimaSplineInterpolator);
        extern PyTypeObject *PY_TYPE(AkimaSplineInterpolator);

        class t_AkimaSplineInterpolator {
        public:
          PyObject_HEAD
          AkimaSplineInterpolator object;
          static PyObject *wrap_Object(const AkimaSplineInterpolator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
