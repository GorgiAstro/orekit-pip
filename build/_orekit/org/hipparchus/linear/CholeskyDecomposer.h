#ifndef org_hipparchus_linear_CholeskyDecomposer_H
#define org_hipparchus_linear_CholeskyDecomposer_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class MatrixDecomposer;
      class RealMatrix;
      class DecompositionSolver;
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
    namespace linear {

      class CholeskyDecomposer : public ::java::lang::Object {
       public:
        enum {
          mid_init$_369b4c97255d5afa,
          mid_decompose_8def7320d620ddc9,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit CholeskyDecomposer(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        CholeskyDecomposer(const CholeskyDecomposer& obj) : ::java::lang::Object(obj) {}

        CholeskyDecomposer(jdouble, jdouble);

        ::org::hipparchus::linear::DecompositionSolver decompose(const ::org::hipparchus::linear::RealMatrix &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(CholeskyDecomposer);
      extern PyTypeObject *PY_TYPE(CholeskyDecomposer);

      class t_CholeskyDecomposer {
      public:
        PyObject_HEAD
        CholeskyDecomposer object;
        static PyObject *wrap_Object(const CholeskyDecomposer&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
