#ifndef org_hipparchus_linear_OpenMapRealMatrix_H
#define org_hipparchus_linear_OpenMapRealMatrix_H

#include "org/hipparchus/linear/AbstractRealMatrix.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class OpenMapRealMatrix;
      class RealMatrix;
      class SparseRealMatrix;
    }
    namespace exception {
      class MathIllegalArgumentException;
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
          mid_init$_6f37635c3285dbdf,
          mid_add_e7eba3049ff21162,
          mid_addToEntry_1506189166690b5e,
          mid_copy_4f9e1a9121aa289f,
          mid_createMatrix_7dc015665115207a,
          mid_getColumnDimension_570ce0828f81a2c1,
          mid_getEntry_dbbe5f05149dbf73,
          mid_getRowDimension_570ce0828f81a2c1,
          mid_multiply_e7eba3049ff21162,
          mid_multiply_e9b72403ad502221,
          mid_multiplyEntry_1506189166690b5e,
          mid_multiplyTransposed_e9b72403ad502221,
          mid_setEntry_1506189166690b5e,
          mid_subtract_e7eba3049ff21162,
          mid_subtract_231cd0c4aff11413,
          mid_transposeMultiply_e9b72403ad502221,
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
