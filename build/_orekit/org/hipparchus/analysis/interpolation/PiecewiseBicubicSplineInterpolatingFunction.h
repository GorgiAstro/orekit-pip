#ifndef org_hipparchus_analysis_interpolation_PiecewiseBicubicSplineInterpolatingFunction_H
#define org_hipparchus_analysis_interpolation_PiecewiseBicubicSplineInterpolatingFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      class BivariateFunction;
      class FieldBivariateFunction;
    }
    namespace exception {
      class NullArgumentException;
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

        class PiecewiseBicubicSplineInterpolatingFunction : public ::java::lang::Object {
         public:
          enum {
            mid_init$_748b42918a92f2d4,
            mid_isValidPoint_a836bdf37f582c99,
            mid_value_824133ce4aec3505,
            mid_value_75c7ce7d33e7324b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PiecewiseBicubicSplineInterpolatingFunction(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PiecewiseBicubicSplineInterpolatingFunction(const PiecewiseBicubicSplineInterpolatingFunction& obj) : ::java::lang::Object(obj) {}

          PiecewiseBicubicSplineInterpolatingFunction(const JArray< jdouble > &, const JArray< jdouble > &, const JArray< JArray< jdouble > > &);

          jboolean isValidPoint(jdouble, jdouble) const;
          jdouble value(jdouble, jdouble) const;
          ::org::hipparchus::CalculusFieldElement value(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &) const;
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
        extern PyType_Def PY_TYPE_DEF(PiecewiseBicubicSplineInterpolatingFunction);
        extern PyTypeObject *PY_TYPE(PiecewiseBicubicSplineInterpolatingFunction);

        class t_PiecewiseBicubicSplineInterpolatingFunction {
        public:
          PyObject_HEAD
          PiecewiseBicubicSplineInterpolatingFunction object;
          static PyObject *wrap_Object(const PiecewiseBicubicSplineInterpolatingFunction&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
