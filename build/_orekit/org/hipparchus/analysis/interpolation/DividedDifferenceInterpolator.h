#ifndef org_hipparchus_analysis_interpolation_DividedDifferenceInterpolator_H
#define org_hipparchus_analysis_interpolation_DividedDifferenceInterpolator_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {
        class PolynomialFunctionNewtonForm;
      }
      namespace interpolation {
        class UnivariateInterpolator;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        class DividedDifferenceInterpolator : public ::java::lang::Object {
         public:
          enum {
            mid_init$_a1fa5dae97ea5ed2,
            mid_interpolate_fcf97439b0a93692,
            mid_computeDividedDifference_1badeb24cd1b9588,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DividedDifferenceInterpolator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DividedDifferenceInterpolator(const DividedDifferenceInterpolator& obj) : ::java::lang::Object(obj) {}

          DividedDifferenceInterpolator();

          ::org::hipparchus::analysis::polynomials::PolynomialFunctionNewtonForm interpolate(const JArray< jdouble > &, const JArray< jdouble > &) const;
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
        extern PyType_Def PY_TYPE_DEF(DividedDifferenceInterpolator);
        extern PyTypeObject *PY_TYPE(DividedDifferenceInterpolator);

        class t_DividedDifferenceInterpolator {
        public:
          PyObject_HEAD
          DividedDifferenceInterpolator object;
          static PyObject *wrap_Object(const DividedDifferenceInterpolator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
