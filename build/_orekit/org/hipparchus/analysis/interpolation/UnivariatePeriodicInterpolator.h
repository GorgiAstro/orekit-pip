#ifndef org_hipparchus_analysis_interpolation_UnivariatePeriodicInterpolator_H
#define org_hipparchus_analysis_interpolation_UnivariatePeriodicInterpolator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      class UnivariateFunction;
      namespace interpolation {
        class UnivariateInterpolator;
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

        class UnivariatePeriodicInterpolator : public ::java::lang::Object {
         public:
          enum {
            mid_init$_5062af5d86f74f7b,
            mid_init$_db044254c8bdb23b,
            mid_interpolate_f70e3a7ad4658836,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UnivariatePeriodicInterpolator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UnivariatePeriodicInterpolator(const UnivariatePeriodicInterpolator& obj) : ::java::lang::Object(obj) {}

          static jint DEFAULT_EXTEND;

          UnivariatePeriodicInterpolator(const ::org::hipparchus::analysis::interpolation::UnivariateInterpolator &, jdouble);
          UnivariatePeriodicInterpolator(const ::org::hipparchus::analysis::interpolation::UnivariateInterpolator &, jdouble, jint);

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
        extern PyType_Def PY_TYPE_DEF(UnivariatePeriodicInterpolator);
        extern PyTypeObject *PY_TYPE(UnivariatePeriodicInterpolator);

        class t_UnivariatePeriodicInterpolator {
        public:
          PyObject_HEAD
          UnivariatePeriodicInterpolator object;
          static PyObject *wrap_Object(const UnivariatePeriodicInterpolator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
