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
          mid_create_8d19e35e2898a9c2,
          mid_withMaxIterations_e1522e4c4402ab09,
          mid_withStartPoint_a7fb2fedd8b70f3d,
          mid_getProblem_cf073573d4101d89,
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
