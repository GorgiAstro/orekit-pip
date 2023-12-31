#ifndef org_hipparchus_linear_RRQRDecomposition_H
#define org_hipparchus_linear_RRQRDecomposition_H

#include "org/hipparchus/linear/QRDecomposition.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
      class DecompositionSolver;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class RRQRDecomposition : public ::org::hipparchus::linear::QRDecomposition {
       public:
        enum {
          mid_init$_84bd15e0995d0c79,
          mid_init$_5c88fbe0835e7c85,
          mid_getP_f77d745f2128c391,
          mid_getRank_2af4736545087009,
          mid_getSolver_5823fb909376de2c,
          mid_decompose_07adb42ffaa97d31,
          mid_performHouseholderReflection_fd10cb359d67ca83,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit RRQRDecomposition(jobject obj) : ::org::hipparchus::linear::QRDecomposition(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        RRQRDecomposition(const RRQRDecomposition& obj) : ::org::hipparchus::linear::QRDecomposition(obj) {}

        RRQRDecomposition(const ::org::hipparchus::linear::RealMatrix &);
        RRQRDecomposition(const ::org::hipparchus::linear::RealMatrix &, jdouble);

        ::org::hipparchus::linear::RealMatrix getP() const;
        jint getRank(jdouble) const;
        ::org::hipparchus::linear::DecompositionSolver getSolver() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(RRQRDecomposition);
      extern PyTypeObject *PY_TYPE(RRQRDecomposition);

      class t_RRQRDecomposition {
      public:
        PyObject_HEAD
        RRQRDecomposition object;
        static PyObject *wrap_Object(const RRQRDecomposition&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
