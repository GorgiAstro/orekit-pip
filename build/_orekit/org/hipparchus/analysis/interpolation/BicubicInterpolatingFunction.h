#ifndef org_hipparchus_analysis_interpolation_BicubicInterpolatingFunction_H
#define org_hipparchus_analysis_interpolation_BicubicInterpolatingFunction_H

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

        class BicubicInterpolatingFunction : public ::java::lang::Object {
         public:
          enum {
            mid_init$_19c569ee064d5b49,
            mid_isValidPoint_41fce65646328eb2,
            mid_value_2268d18be49a6087,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BicubicInterpolatingFunction(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BicubicInterpolatingFunction(const BicubicInterpolatingFunction& obj) : ::java::lang::Object(obj) {}

          BicubicInterpolatingFunction(const JArray< jdouble > &, const JArray< jdouble > &, const JArray< JArray< jdouble > > &, const JArray< JArray< jdouble > > &, const JArray< JArray< jdouble > > &, const JArray< JArray< jdouble > > &);

          jboolean isValidPoint(jdouble, jdouble) const;
          jdouble value(jdouble, jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(BicubicInterpolatingFunction);
        extern PyTypeObject *PY_TYPE(BicubicInterpolatingFunction);

        class t_BicubicInterpolatingFunction {
        public:
          PyObject_HEAD
          BicubicInterpolatingFunction object;
          static PyObject *wrap_Object(const BicubicInterpolatingFunction&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
