#ifndef org_hipparchus_fitting_PolynomialCurveFitter_H
#define org_hipparchus_fitting_PolynomialCurveFitter_H

#include "org/hipparchus/fitting/AbstractCurveFitter.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace fitting {
      class PolynomialCurveFitter;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace fitting {

      class PolynomialCurveFitter : public ::org::hipparchus::fitting::AbstractCurveFitter {
       public:
        enum {
          mid_create_762004ab44e0f985,
          mid_withMaxIterations_762004ab44e0f985,
          mid_withStartPoint_13024057e91a5dd4,
          mid_getProblem_c197708a453e8034,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PolynomialCurveFitter(jobject obj) : ::org::hipparchus::fitting::AbstractCurveFitter(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PolynomialCurveFitter(const PolynomialCurveFitter& obj) : ::org::hipparchus::fitting::AbstractCurveFitter(obj) {}

        static PolynomialCurveFitter create(jint);
        PolynomialCurveFitter withMaxIterations(jint) const;
        PolynomialCurveFitter withStartPoint(const JArray< jdouble > &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace fitting {
      extern PyType_Def PY_TYPE_DEF(PolynomialCurveFitter);
      extern PyTypeObject *PY_TYPE(PolynomialCurveFitter);

      class t_PolynomialCurveFitter {
      public:
        PyObject_HEAD
        PolynomialCurveFitter object;
        static PyObject *wrap_Object(const PolynomialCurveFitter&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
