#ifndef org_hipparchus_fitting_PolynomialCurveFitter_H
#define org_hipparchus_fitting_PolynomialCurveFitter_H

#include "org/hipparchus/fitting/AbstractCurveFitter.h"

namespace org {
  namespace hipparchus {
    namespace fitting {
      class PolynomialCurveFitter;
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

      class PolynomialCurveFitter : public ::org::hipparchus::fitting::AbstractCurveFitter {
       public:
        enum {
          mid_create_8ac5985a7b4e822a,
          mid_withMaxIterations_8ac5985a7b4e822a,
          mid_withStartPoint_64921603ee6b99cc,
          mid_getProblem_23a9c25631fa37c2,
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
