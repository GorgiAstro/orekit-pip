#ifndef org_hipparchus_linear_OpenMapRealMatrix_H
#define org_hipparchus_linear_OpenMapRealMatrix_H

#include "org/hipparchus/linear/AbstractRealMatrix.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace linear {
      class SparseRealMatrix;
      class RealMatrix;
      class OpenMapRealMatrix;
    }
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class OpenMapRealMatrix : public ::org::hipparchus::linear::AbstractRealMatrix {
       public:
        enum {
          mid_init$_a84c9a223722150c,
          mid_add_8476a57dc45d9597,
          mid_addToEntry_754312f3734d6e2f,
          mid_copy_e95fec3f7133efdf,
          mid_createMatrix_61139315e9486837,
          mid_getColumnDimension_412668abc8d889e9,
          mid_getEntry_21b81d54c06b64b0,
          mid_getRowDimension_412668abc8d889e9,
          mid_multiply_8476a57dc45d9597,
          mid_multiply_340b47d21842d02c,
          mid_multiplyEntry_754312f3734d6e2f,
          mid_multiplyTransposed_340b47d21842d02c,
          mid_setEntry_754312f3734d6e2f,
          mid_subtract_8476a57dc45d9597,
          mid_subtract_940a268a713300c5,
          mid_transposeMultiply_340b47d21842d02c,
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
