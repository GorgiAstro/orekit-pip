#ifndef org_hipparchus_analysis_interpolation_BivariateGridInterpolator_H
#define org_hipparchus_analysis_interpolation_BivariateGridInterpolator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      class BivariateFunction;
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

        class BivariateGridInterpolator : public ::java::lang::Object {
         public:
          enum {
            mid_interpolate_6c5ae26764f0e206,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BivariateGridInterpolator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BivariateGridInterpolator(const BivariateGridInterpolator& obj) : ::java::lang::Object(obj) {}

          ::org::hipparchus::analysis::BivariateFunction interpolate(const JArray< jdouble > &, const JArray< jdouble > &, const JArray< JArray< jdouble > > &) const;
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
        extern PyType_Def PY_TYPE_DEF(BivariateGridInterpolator);
        extern PyTypeObject *PY_TYPE(BivariateGridInterpolator);

        class t_BivariateGridInterpolator {
        public:
          PyObject_HEAD
          BivariateGridInterpolator object;
          static PyObject *wrap_Object(const BivariateGridInterpolator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
