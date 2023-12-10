#ifndef org_hipparchus_analysis_interpolation_DividedDifferenceInterpolator_H
#define org_hipparchus_analysis_interpolation_DividedDifferenceInterpolator_H

#include "java/lang/Object.h"

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
namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
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
            mid_init$_7ae3461a92a43152,
            mid_interpolate_32a936e876fb7ecf,
            mid_computeDividedDifference_0f29b7d9f77b462e,
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
