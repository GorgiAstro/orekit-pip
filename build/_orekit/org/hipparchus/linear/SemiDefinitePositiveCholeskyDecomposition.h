#ifndef org_hipparchus_linear_SemiDefinitePositiveCholeskyDecomposition_H
#define org_hipparchus_linear_SemiDefinitePositiveCholeskyDecomposition_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class SemiDefinitePositiveCholeskyDecomposition : public ::java::lang::Object {
       public:
        enum {
          mid_init$_84bd15e0995d0c79,
          mid_init$_5c88fbe0835e7c85,
          mid_getL_f77d745f2128c391,
          mid_getLT_f77d745f2128c391,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit SemiDefinitePositiveCholeskyDecomposition(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        SemiDefinitePositiveCholeskyDecomposition(const SemiDefinitePositiveCholeskyDecomposition& obj) : ::java::lang::Object(obj) {}

        static jdouble POSITIVITY_THRESHOLD;

        SemiDefinitePositiveCholeskyDecomposition(const ::org::hipparchus::linear::RealMatrix &);
        SemiDefinitePositiveCholeskyDecomposition(const ::org::hipparchus::linear::RealMatrix &, jdouble);

        ::org::hipparchus::linear::RealMatrix getL() const;
        ::org::hipparchus::linear::RealMatrix getLT() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(SemiDefinitePositiveCholeskyDecomposition);
      extern PyTypeObject *PY_TYPE(SemiDefinitePositiveCholeskyDecomposition);

      class t_SemiDefinitePositiveCholeskyDecomposition {
      public:
        PyObject_HEAD
        SemiDefinitePositiveCholeskyDecomposition object;
        static PyObject *wrap_Object(const SemiDefinitePositiveCholeskyDecomposition&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
