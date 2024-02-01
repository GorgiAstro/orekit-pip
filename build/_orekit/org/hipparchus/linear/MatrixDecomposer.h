#ifndef org_hipparchus_linear_MatrixDecomposer_H
#define org_hipparchus_linear_MatrixDecomposer_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace linear {
      class DecompositionSolver;
      class RealMatrix;
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

      class MatrixDecomposer : public ::java::lang::Object {
       public:
        enum {
          mid_decompose_b099faee6eb73725,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit MatrixDecomposer(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        MatrixDecomposer(const MatrixDecomposer& obj) : ::java::lang::Object(obj) {}

        ::org::hipparchus::linear::DecompositionSolver decompose(const ::org::hipparchus::linear::RealMatrix &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(MatrixDecomposer);
      extern PyTypeObject *PY_TYPE(MatrixDecomposer);

      class t_MatrixDecomposer {
      public:
        PyObject_HEAD
        MatrixDecomposer object;
        static PyObject *wrap_Object(const MatrixDecomposer&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
