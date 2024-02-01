#ifndef org_hipparchus_fitting_HarmonicCurveFitter_H
#define org_hipparchus_fitting_HarmonicCurveFitter_H

#include "org/hipparchus/fitting/AbstractCurveFitter.h"

namespace org {
  namespace hipparchus {
    namespace fitting {
      class HarmonicCurveFitter;
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

      class HarmonicCurveFitter : public ::org::hipparchus::fitting::AbstractCurveFitter {
       public:
        enum {
          mid_create_91e0a1a50a3dcf85,
          mid_withMaxIterations_0aeae166097a719a,
          mid_withStartPoint_900fce2d2a39b849,
          mid_getProblem_51e01b60016ab388,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit HarmonicCurveFitter(jobject obj) : ::org::hipparchus::fitting::AbstractCurveFitter(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        HarmonicCurveFitter(const HarmonicCurveFitter& obj) : ::org::hipparchus::fitting::AbstractCurveFitter(obj) {}

        static HarmonicCurveFitter create();
        HarmonicCurveFitter withMaxIterations(jint) const;
        HarmonicCurveFitter withStartPoint(const JArray< jdouble > &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace fitting {
      extern PyType_Def PY_TYPE_DEF(HarmonicCurveFitter);
      extern PyTypeObject *PY_TYPE(HarmonicCurveFitter);

      class t_HarmonicCurveFitter {
      public:
        PyObject_HEAD
        HarmonicCurveFitter object;
        static PyObject *wrap_Object(const HarmonicCurveFitter&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
