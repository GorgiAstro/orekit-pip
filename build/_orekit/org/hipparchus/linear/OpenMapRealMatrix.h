#ifndef org_hipparchus_linear_OpenMapRealMatrix_H
#define org_hipparchus_linear_OpenMapRealMatrix_H

#include "org/hipparchus/linear/AbstractRealMatrix.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace linear {
      class OpenMapRealMatrix;
      class SparseRealMatrix;
      class RealMatrix;
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class OpenMapRealMatrix : public ::org::hipparchus::linear::AbstractRealMatrix {
       public:
        enum {
          mid_init$_3313c75e3e16c428,
          mid_add_9ab78a1295afd3f2,
          mid_addToEntry_94fe8d9ffeb50676,
          mid_copy_fb3c06abb38b6709,
          mid_createMatrix_b6b8c117f363e6a5,
          mid_getColumnDimension_55546ef6a647f39b,
          mid_getEntry_cad98089d00f8a5b,
          mid_getRowDimension_55546ef6a647f39b,
          mid_multiply_9ab78a1295afd3f2,
          mid_multiply_be124f4006dc9f69,
          mid_multiplyEntry_94fe8d9ffeb50676,
          mid_multiplyTransposed_be124f4006dc9f69,
          mid_setEntry_94fe8d9ffeb50676,
          mid_subtract_9ab78a1295afd3f2,
          mid_subtract_c9ead5188e390bab,
          mid_transposeMultiply_be124f4006dc9f69,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit OpenMapRealMatrix(jobject obj) : ::org::hipparchus::linear::AbstractRealMatrix(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        OpenMapRealMatrix(const OpenMapRealMatrix& obj) : ::org::hipparchus::linear::AbstractRealMatrix(obj) {}

        OpenMapRealMatrix(jint, jint);

        OpenMapRealMatrix add(const OpenMapRealMatrix &) const;
        void addToEntry(jint, jint, jdouble) const;
        OpenMapRealMatrix copy() const;
        OpenMapRealMatrix createMatrix(jint, jint) const;
        jint getColumnDimension() const;
        jdouble getEntry(jint, jint) const;
        jint getRowDimension() const;
        OpenMapRealMatrix multiply(const OpenMapRealMatrix &) const;
        ::org::hipparchus::linear::RealMatrix multiply(const ::org::hipparchus::linear::RealMatrix &) const;
        void multiplyEntry(jint, jint, jdouble) const;
        ::org::hipparchus::linear::RealMatrix multiplyTransposed(const ::org::hipparchus::linear::RealMatrix &) const;
        void setEntry(jint, jint, jdouble) const;
        OpenMapRealMatrix subtract(const OpenMapRealMatrix &) const;
        OpenMapRealMatrix subtract(const ::org::hipparchus::linear::RealMatrix &) const;
        ::org::hipparchus::linear::RealMatrix transposeMultiply(const ::org::hipparchus::linear::RealMatrix &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(OpenMapRealMatrix);
      extern PyTypeObject *PY_TYPE(OpenMapRealMatrix);

      class t_OpenMapRealMatrix {
      public:
        PyObject_HEAD
        OpenMapRealMatrix object;
        static PyObject *wrap_Object(const OpenMapRealMatrix&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
