#ifndef org_hipparchus_analysis_interpolation_BilinearInterpolator_H
#define org_hipparchus_analysis_interpolation_BilinearInterpolator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {
        class BivariateGridInterpolator;
        class BilinearInterpolatingFunction;
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

        class BilinearInterpolator : public ::java::lang::Object {
         public:
          enum {
            mid_init$_a1fa5dae97ea5ed2,
            mid_interpolate_7dc956a6232adc7b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BilinearInterpolator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BilinearInterpolator(const BilinearInterpolator& obj) : ::java::lang::Object(obj) {}

          BilinearInterpolator();

          ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction interpolate(const JArray< jdouble > &, const JArray< jdouble > &, const JArray< JArray< jdouble > > &) const;
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
        extern PyType_Def PY_TYPE_DEF(BilinearInterpolator);
        extern PyTypeObject *PY_TYPE(BilinearInterpolator);

        class t_BilinearInterpolator {
        public:
          PyObject_HEAD
          BilinearInterpolator object;
          static PyObject *wrap_Object(const BilinearInterpolator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
