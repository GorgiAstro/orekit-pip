#ifndef org_hipparchus_analysis_interpolation_BilinearInterpolator_H
#define org_hipparchus_analysis_interpolation_BilinearInterpolator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace analysis {
      namespace interpolation {
        class BilinearInterpolatingFunction;
        class BivariateGridInterpolator;
      }
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
            mid_init$_0fa09c18fee449d5,
            mid_interpolate_f2cb7c2ca87c1e4e,
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
