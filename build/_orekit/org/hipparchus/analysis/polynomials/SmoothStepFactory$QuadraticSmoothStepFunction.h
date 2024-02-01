#ifndef org_hipparchus_analysis_polynomials_SmoothStepFactory$QuadraticSmoothStepFunction_H
#define org_hipparchus_analysis_polynomials_SmoothStepFactory$QuadraticSmoothStepFunction_H

#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction.h"

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

        class SmoothStepFactory$QuadraticSmoothStepFunction : public ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction {
         public:
          enum {
            mid_value_bf28ed64d6e8576b,
            mid_value_db06d8c3fc3d9670,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SmoothStepFactory$QuadraticSmoothStepFunction(jobject obj) : ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SmoothStepFactory$QuadraticSmoothStepFunction(const SmoothStepFactory$QuadraticSmoothStepFunction& obj) : ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction(obj) {}

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
        extern PyType_Def PY_TYPE_DEF(SmoothStepFactory$QuadraticSmoothStepFunction);
        extern PyTypeObject *PY_TYPE(SmoothStepFactory$QuadraticSmoothStepFunction);

        class t_SmoothStepFactory$QuadraticSmoothStepFunction {
        public:
          PyObject_HEAD
          SmoothStepFactory$QuadraticSmoothStepFunction object;
          static PyObject *wrap_Object(const SmoothStepFactory$QuadraticSmoothStepFunction&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
