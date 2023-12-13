#ifndef org_hipparchus_analysis_interpolation_AkimaSplineInterpolator_H
#define org_hipparchus_analysis_interpolation_AkimaSplineInterpolator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {
        class PolynomialSplineFunction;
        class FieldPolynomialSplineFunction;
      }
      namespace interpolation {
        class FieldUnivariateInterpolator;
        class UnivariateInterpolator;
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
            mid_init$_a1fa5dae97ea5ed2,
            mid_init$_fcb96c98de6fad04,
            mid_interpolate_4b522051166e7218,
            mid_interpolate_a8efc421c988dfdd,
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
