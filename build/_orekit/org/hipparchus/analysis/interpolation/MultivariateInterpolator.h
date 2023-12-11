#ifndef org_hipparchus_analysis_interpolation_MultivariateInterpolator_H
#define org_hipparchus_analysis_interpolation_MultivariateInterpolator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    namespace analysis {
      class MultivariateFunction;
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

        class MultivariateInterpolator : public ::java::lang::Object {
         public:
          enum {
            mid_interpolate_7fe6a527b1a5d65c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultivariateInterpolator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultivariateInterpolator(const MultivariateInterpolator& obj) : ::java::lang::Object(obj) {}

          ::org::hipparchus::analysis::MultivariateFunction interpolate(const JArray< JArray< jdouble > > &, const JArray< jdouble > &) const;
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
        extern PyType_Def PY_TYPE_DEF(MultivariateInterpolator);
        extern PyTypeObject *PY_TYPE(MultivariateInterpolator);

        class t_MultivariateInterpolator {
        public:
          PyObject_HEAD
          MultivariateInterpolator object;
          static PyObject *wrap_Object(const MultivariateInterpolator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
