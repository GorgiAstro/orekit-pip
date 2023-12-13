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
          mid_create_5b84779bdc0ef4c0,
          mid_withMaxIterations_afdc767827473115,
          mid_withStartPoint_fd8edeb198b632ad,
          mid_getProblem_067ae4e9e4e5b47a,
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
