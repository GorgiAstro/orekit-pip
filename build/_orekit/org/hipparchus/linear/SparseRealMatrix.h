#ifndef org_hipparchus_linear_SparseRealMatrix_H
#define org_hipparchus_linear_SparseRealMatrix_H

#include "org/hipparchus/linear/RealMatrix.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class SparseRealMatrix : public ::org::hipparchus::linear::RealMatrix {
       public:

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit SparseRealMatrix(jobject obj) : ::org::hipparchus::linear::RealMatrix(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        SparseRealMatrix(const SparseRealMatrix& obj) : ::org::hipparchus::linear::RealMatrix(obj) {}
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(SparseRealMatrix);
      extern PyTypeObject *PY_TYPE(SparseRealMatrix);

      class t_SparseRealMatrix {
      public:
        PyObject_HEAD
        SparseRealMatrix object;
        static PyObject *wrap_Object(const SparseRealMatrix&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
