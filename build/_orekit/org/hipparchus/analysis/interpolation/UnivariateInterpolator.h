#ifndef org_hipparchus_analysis_interpolation_UnivariateInterpolator_H
#define org_hipparchus_analysis_interpolation_UnivariateInterpolator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      class UnivariateFunction;
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

        class UnivariateInterpolator : public ::java::lang::Object {
         public:
          enum {
            mid_interpolate_f70e3a7ad4658836,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UnivariateInterpolator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UnivariateInterpolator(const UnivariateInterpolator& obj) : ::java::lang::Object(obj) {}

          ::org::hipparchus::analysis::UnivariateFunction interpolate(const JArray< jdouble > &, const JArray< jdouble > &) const;
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
        extern PyType_Def PY_TYPE_DEF(UnivariateInterpolator);
        extern PyTypeObject *PY_TYPE(UnivariateInterpolator);

        class t_UnivariateInterpolator {
        public:
          PyObject_HEAD
          UnivariateInterpolator object;
          static PyObject *wrap_Object(const UnivariateInterpolator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
