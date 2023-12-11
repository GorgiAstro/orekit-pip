#ifndef org_hipparchus_analysis_interpolation_BicubicInterpolator_H
#define org_hipparchus_analysis_interpolation_BicubicInterpolator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {
        class BicubicInterpolatingFunction;
        class BivariateGridInterpolator;
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

        class BicubicInterpolator : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_interpolate_78b4fa08d8d71630,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BicubicInterpolator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BicubicInterpolator(const BicubicInterpolator& obj) : ::java::lang::Object(obj) {}

          BicubicInterpolator();

          ::org::hipparchus::analysis::interpolation::BicubicInterpolatingFunction interpolate(const JArray< jdouble > &, const JArray< jdouble > &, const JArray< JArray< jdouble > > &) const;
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
        extern PyType_Def PY_TYPE_DEF(BicubicInterpolator);
        extern PyTypeObject *PY_TYPE(BicubicInterpolator);

        class t_BicubicInterpolator {
        public:
          PyObject_HEAD
          BicubicInterpolator object;
          static PyObject *wrap_Object(const BicubicInterpolator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
