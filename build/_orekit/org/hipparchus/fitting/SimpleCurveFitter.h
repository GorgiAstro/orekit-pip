#ifndef org_hipparchus_fitting_SimpleCurveFitter_H
#define org_hipparchus_fitting_SimpleCurveFitter_H

#include "org/hipparchus/fitting/AbstractCurveFitter.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      class ParametricUnivariateFunction;
    }
    namespace fitting {
      class SimpleCurveFitter;
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
    namespace fitting {

      class SimpleCurveFitter : public ::org::hipparchus::fitting::AbstractCurveFitter {
       public:
        enum {
          mid_create_13447df349ed5164,
          mid_withMaxIterations_dc1310a4d7b105fa,
          mid_withStartPoint_49c1fdac2f42ec60,
          mid_getProblem_c197708a453e8034,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit SimpleCurveFitter(jobject obj) : ::org::hipparchus::fitting::AbstractCurveFitter(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        SimpleCurveFitter(const SimpleCurveFitter& obj) : ::org::hipparchus::fitting::AbstractCurveFitter(obj) {}

        static SimpleCurveFitter create(const ::org::hipparchus::analysis::ParametricUnivariateFunction &, const JArray< jdouble > &);
        SimpleCurveFitter withMaxIterations(jint) const;
        SimpleCurveFitter withStartPoint(const JArray< jdouble > &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace fitting {
      extern PyType_Def PY_TYPE_DEF(SimpleCurveFitter);
      extern PyTypeObject *PY_TYPE(SimpleCurveFitter);

      class t_SimpleCurveFitter {
      public:
        PyObject_HEAD
        SimpleCurveFitter object;
        static PyObject *wrap_Object(const SimpleCurveFitter&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
