#ifndef org_hipparchus_analysis_interpolation_SplineInterpolator_H
#define org_hipparchus_analysis_interpolation_SplineInterpolator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace analysis {
      namespace interpolation {
        class FieldUnivariateInterpolator;
        class UnivariateInterpolator;
      }
      namespace polynomials {
        class FieldPolynomialSplineFunction;
        class PolynomialSplineFunction;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
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

        class SplineInterpolator : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0fa09c18fee449d5,
            mid_interpolate_3eacf1659c4c06b1,
            mid_interpolate_84261a97b5ff9d54,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SplineInterpolator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SplineInterpolator(const SplineInterpolator& obj) : ::java::lang::Object(obj) {}

          SplineInterpolator();

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
        extern PyType_Def PY_TYPE_DEF(SplineInterpolator);
        extern PyTypeObject *PY_TYPE(SplineInterpolator);

        class t_SplineInterpolator {
        public:
          PyObject_HEAD
          SplineInterpolator object;
          static PyObject *wrap_Object(const SplineInterpolator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
