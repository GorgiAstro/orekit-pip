#ifndef org_hipparchus_analysis_polynomials_SmoothStepFactory$SmoothStepFunction_H
#define org_hipparchus_analysis_polynomials_SmoothStepFactory$SmoothStepFunction_H

#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"

namespace org {
  namespace hipparchus {
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
      namespace polynomials {

        class SmoothStepFactory$SmoothStepFunction : public ::org::hipparchus::analysis::polynomials::PolynomialFunction {
         public:
          enum {
            mid_value_bf28ed64d6e8576b,
            mid_value_db06d8c3fc3d9670,
            mid_checkInputEdges_13edac039e8cc967,
            mid_clampInput_db06d8c3fc3d9670,
            mid_normalizeInput_db06d8c3fc3d9670,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SmoothStepFactory$SmoothStepFunction(jobject obj) : ::org::hipparchus::analysis::polynomials::PolynomialFunction(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SmoothStepFactory$SmoothStepFunction(const SmoothStepFactory$SmoothStepFunction& obj) : ::org::hipparchus::analysis::polynomials::PolynomialFunction(obj) {}

          jdouble value(jdouble) const;
          jdouble value(jdouble, jdouble, jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(SmoothStepFactory$SmoothStepFunction);
        extern PyTypeObject *PY_TYPE(SmoothStepFactory$SmoothStepFunction);

        class t_SmoothStepFactory$SmoothStepFunction {
        public:
          PyObject_HEAD
          SmoothStepFactory$SmoothStepFunction object;
          static PyObject *wrap_Object(const SmoothStepFactory$SmoothStepFunction&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
