#ifndef org_hipparchus_analysis_interpolation_TricubicInterpolatingFunction_H
#define org_hipparchus_analysis_interpolation_TricubicInterpolatingFunction_H

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

        class TricubicInterpolatingFunction : public ::java::lang::Object {
         public:
          enum {
            mid_init$_b857764c8b8b3202,
            mid_isValidPoint_de33958d3e7816c8,
            mid_value_db06d8c3fc3d9670,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TricubicInterpolatingFunction(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TricubicInterpolatingFunction(const TricubicInterpolatingFunction& obj) : ::java::lang::Object(obj) {}

          TricubicInterpolatingFunction(const JArray< jdouble > &, const JArray< jdouble > &, const JArray< jdouble > &, const JArray< JArray< JArray< jdouble > > > &, const JArray< JArray< JArray< jdouble > > > &, const JArray< JArray< JArray< jdouble > > > &, const JArray< JArray< JArray< jdouble > > > &, const JArray< JArray< JArray< jdouble > > > &, const JArray< JArray< JArray< jdouble > > > &, const JArray< JArray< JArray< jdouble > > > &, const JArray< JArray< JArray< jdouble > > > &);

          jboolean isValidPoint(jdouble, jdouble, jdouble) const;
          jdouble value(jdouble, jdouble, jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(TricubicInterpolatingFunction);
        extern PyTypeObject *PY_TYPE(TricubicInterpolatingFunction);

        class t_TricubicInterpolatingFunction {
        public:
          PyObject_HEAD
          TricubicInterpolatingFunction object;
          static PyObject *wrap_Object(const TricubicInterpolatingFunction&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
