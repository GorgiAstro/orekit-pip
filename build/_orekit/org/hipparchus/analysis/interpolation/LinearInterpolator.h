#ifndef org_hipparchus_analysis_interpolation_LinearInterpolator_H
#define org_hipparchus_analysis_interpolation_LinearInterpolator_H

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

        class LinearInterpolator : public ::java::lang::Object {
         public:
          enum {
            mid_init$_a1fa5dae97ea5ed2,
            mid_interpolate_4b522051166e7218,
            mid_interpolate_a8efc421c988dfdd,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LinearInterpolator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LinearInterpolator(const LinearInterpolator& obj) : ::java::lang::Object(obj) {}

          LinearInterpolator();

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
        extern PyType_Def PY_TYPE_DEF(LinearInterpolator);
        extern PyTypeObject *PY_TYPE(LinearInterpolator);

        class t_LinearInterpolator {
        public:
          PyObject_HEAD
          LinearInterpolator object;
          static PyObject *wrap_Object(const LinearInterpolator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
