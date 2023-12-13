#ifndef org_hipparchus_linear_SingularValueDecomposer_H
#define org_hipparchus_linear_SingularValueDecomposer_H

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

      class SingularValueDecomposer : public ::java::lang::Object {
       public:
        enum {
          mid_init$_a1fa5dae97ea5ed2,
          mid_decompose_8def7320d620ddc9,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit SingularValueDecomposer(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        SingularValueDecomposer(const SingularValueDecomposer& obj) : ::java::lang::Object(obj) {}

        SingularValueDecomposer();

        ::org::hipparchus::linear::DecompositionSolver decompose(const ::org::hipparchus::linear::RealMatrix &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(SingularValueDecomposer);
      extern PyTypeObject *PY_TYPE(SingularValueDecomposer);

      class t_SingularValueDecomposer {
      public:
        PyObject_HEAD
        SingularValueDecomposer object;
        static PyObject *wrap_Object(const SingularValueDecomposer&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
