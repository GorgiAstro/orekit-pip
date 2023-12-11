#ifndef org_hipparchus_fitting_GaussianCurveFitter_H
#define org_hipparchus_fitting_GaussianCurveFitter_H

#include "org/hipparchus/fitting/AbstractCurveFitter.h"

namespace org {
  namespace hipparchus {
    namespace fitting {
      class GaussianCurveFitter;
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

      class GaussianCurveFitter : public ::org::hipparchus::fitting::AbstractCurveFitter {
       public:
        enum {
          mid_create_6a254a05c2e004ab,
          mid_withMaxIterations_3fbe23c1f0cf1e2f,
          mid_withStartPoint_8fbf17fa300ec65b,
          mid_getProblem_cf073573d4101d89,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit GaussianCurveFitter(jobject obj) : ::org::hipparchus::fitting::AbstractCurveFitter(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        GaussianCurveFitter(const GaussianCurveFitter& obj) : ::org::hipparchus::fitting::AbstractCurveFitter(obj) {}

        static GaussianCurveFitter create();
        GaussianCurveFitter withMaxIterations(jint) const;
        GaussianCurveFitter withStartPoint(const JArray< jdouble > &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace fitting {
      extern PyType_Def PY_TYPE_DEF(GaussianCurveFitter);
      extern PyTypeObject *PY_TYPE(GaussianCurveFitter);

      class t_GaussianCurveFitter {
      public:
        PyObject_HEAD
        GaussianCurveFitter object;
        static PyObject *wrap_Object(const GaussianCurveFitter&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
