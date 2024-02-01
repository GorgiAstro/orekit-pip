#ifndef org_hipparchus_analysis_interpolation_PiecewiseBicubicSplineInterpolator_H
#define org_hipparchus_analysis_interpolation_PiecewiseBicubicSplineInterpolator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {
        class BivariateGridInterpolator;
        class PiecewiseBicubicSplineInterpolatingFunction;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
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
      namespace interpolation {

        class PiecewiseBicubicSplineInterpolator : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_interpolate_777e7c93313c9e9a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PiecewiseBicubicSplineInterpolator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PiecewiseBicubicSplineInterpolator(const PiecewiseBicubicSplineInterpolator& obj) : ::java::lang::Object(obj) {}

          PiecewiseBicubicSplineInterpolator();

          ::org::hipparchus::analysis::interpolation::PiecewiseBicubicSplineInterpolatingFunction interpolate(const JArray< jdouble > &, const JArray< jdouble > &, const JArray< JArray< jdouble > > &) const;
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
        extern PyType_Def PY_TYPE_DEF(PiecewiseBicubicSplineInterpolator);
        extern PyTypeObject *PY_TYPE(PiecewiseBicubicSplineInterpolator);

        class t_PiecewiseBicubicSplineInterpolator {
        public:
          PyObject_HEAD
          PiecewiseBicubicSplineInterpolator object;
          static PyObject *wrap_Object(const PiecewiseBicubicSplineInterpolator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
