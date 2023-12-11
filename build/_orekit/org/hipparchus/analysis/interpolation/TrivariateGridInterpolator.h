#ifndef org_hipparchus_analysis_interpolation_TrivariateGridInterpolator_H
#define org_hipparchus_analysis_interpolation_TrivariateGridInterpolator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace analysis {
      class TrivariateFunction;
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

        class TrivariateGridInterpolator : public ::java::lang::Object {
         public:
          enum {
            mid_interpolate_7d6b4f8b98e7e8f3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TrivariateGridInterpolator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TrivariateGridInterpolator(const TrivariateGridInterpolator& obj) : ::java::lang::Object(obj) {}

          ::org::hipparchus::analysis::TrivariateFunction interpolate(const JArray< jdouble > &, const JArray< jdouble > &, const JArray< jdouble > &, const JArray< JArray< JArray< jdouble > > > &) const;
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
        extern PyType_Def PY_TYPE_DEF(TrivariateGridInterpolator);
        extern PyTypeObject *PY_TYPE(TrivariateGridInterpolator);

        class t_TrivariateGridInterpolator {
        public:
          PyObject_HEAD
          TrivariateGridInterpolator object;
          static PyObject *wrap_Object(const TrivariateGridInterpolator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
