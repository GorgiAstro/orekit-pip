#ifndef org_hipparchus_analysis_interpolation_TricubicInterpolator_H
#define org_hipparchus_analysis_interpolation_TricubicInterpolator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace analysis {
      namespace interpolation {
        class TrivariateGridInterpolator;
        class TricubicInterpolatingFunction;
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

        class TricubicInterpolator : public ::java::lang::Object {
         public:
          enum {
            mid_init$_7ae3461a92a43152,
            mid_interpolate_64d1837d51e036b5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TricubicInterpolator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TricubicInterpolator(const TricubicInterpolator& obj) : ::java::lang::Object(obj) {}

          TricubicInterpolator();

          ::org::hipparchus::analysis::interpolation::TricubicInterpolatingFunction interpolate(const JArray< jdouble > &, const JArray< jdouble > &, const JArray< jdouble > &, const JArray< JArray< JArray< jdouble > > > &) const;
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
        extern PyType_Def PY_TYPE_DEF(TricubicInterpolator);
        extern PyTypeObject *PY_TYPE(TricubicInterpolator);

        class t_TricubicInterpolator {
        public:
          PyObject_HEAD
          TricubicInterpolator object;
          static PyObject *wrap_Object(const TricubicInterpolator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
