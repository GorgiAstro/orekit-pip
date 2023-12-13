#ifndef org_hipparchus_linear_LUDecomposer_H
#define org_hipparchus_linear_LUDecomposer_H

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

      class LUDecomposer : public ::java::lang::Object {
       public:
        enum {
          mid_init$_8ba9fe7a847cecad,
          mid_decompose_8def7320d620ddc9,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit LUDecomposer(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        LUDecomposer(const LUDecomposer& obj) : ::java::lang::Object(obj) {}

        LUDecomposer(jdouble);

        ::org::hipparchus::linear::DecompositionSolver decompose(const ::org::hipparchus::linear::RealMatrix &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(LUDecomposer);
      extern PyTypeObject *PY_TYPE(LUDecomposer);

      class t_LUDecomposer {
      public:
        PyObject_HEAD
        LUDecomposer object;
        static PyObject *wrap_Object(const LUDecomposer&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
