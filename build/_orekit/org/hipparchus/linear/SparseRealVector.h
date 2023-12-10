#ifndef org_hipparchus_linear_SparseRealVector_H
#define org_hipparchus_linear_SparseRealVector_H

#include "org/hipparchus/linear/RealVector.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class SparseRealVector : public ::org::hipparchus::linear::RealVector {
       public:
        enum {
          mid_init$_7ae3461a92a43152,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit SparseRealVector(jobject obj) : ::org::hipparchus::linear::RealVector(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        SparseRealVector(const SparseRealVector& obj) : ::org::hipparchus::linear::RealVector(obj) {}

        SparseRealVector();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(SparseRealVector);
      extern PyTypeObject *PY_TYPE(SparseRealVector);

      class t_SparseRealVector {
      public:
        PyObject_HEAD
        SparseRealVector object;
        static PyObject *wrap_Object(const SparseRealVector&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
