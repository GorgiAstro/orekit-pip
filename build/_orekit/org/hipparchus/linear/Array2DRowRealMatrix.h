#ifndef org_hipparchus_linear_Array2DRowRealMatrix_H
#define org_hipparchus_linear_Array2DRowRealMatrix_H

#include "org/hipparchus/linear/AbstractRealMatrix.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrixChangingVisitor;
      class Array2DRowRealMatrix;
      class RealMatrixPreservingVisitor;
      class RealMatrix;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
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

      class Array2DRowRealMatrix : public ::org::hipparchus::linear::AbstractRealMatrix {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_init$_cc18240f4a737f14,
          mid_init$_edb361bfdd1ad9ae,
          mid_init$_3490b011a7c22af0,
          mid_init$_a84c9a223722150c,
          mid_add_f317c35d7d377fcb,
          mid_addToEntry_754312f3734d6e2f,
          mid_copy_70a207fcbc031df2,
          mid_createMatrix_e8546415f980523f,
          mid_getColumnDimension_412668abc8d889e9,
          mid_getData_8cf5267aa13a77f3,
          mid_getDataRef_8cf5267aa13a77f3,
          mid_getEntry_21b81d54c06b64b0,
          mid_getRow_1da5c9e77f24f269,
          mid_getRowDimension_412668abc8d889e9,
          mid_getSubMatrix_dd66ee2a79d86a98,
          mid_kroneckerProduct_340b47d21842d02c,
          mid_multiply_f317c35d7d377fcb,
          mid_multiplyEntry_754312f3734d6e2f,
          mid_multiplyTransposed_b7edd6157848a7f0,
          mid_multiplyTransposed_340b47d21842d02c,
          mid_operate_1db7c087750eaffe,
          mid_preMultiply_1db7c087750eaffe,
          mid_setEntry_754312f3734d6e2f,
          mid_setRow_3246bd31f432242d,
          mid_setSubMatrix_672f554eb45cea1a,
          mid_stack_70a207fcbc031df2,
          mid_subtract_f317c35d7d377fcb,
          mid_transposeMultiply_b7edd6157848a7f0,
          mid_transposeMultiply_340b47d21842d02c,
          mid_unstackSquare_70a207fcbc031df2,
          mid_walkInColumnOrder_f151009359824fc3,
          mid_walkInColumnOrder_3f821bf796d1a7b4,
          mid_walkInColumnOrder_ab19ce00fffb9224,
          mid_walkInColumnOrder_b64b35af60f84c7f,
          mid_walkInRowOrder_f151009359824fc3,
          mid_walkInRowOrder_3f821bf796d1a7b4,
          mid_walkInRowOrder_ab19ce00fffb9224,
          mid_walkInRowOrder_b64b35af60f84c7f,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Array2DRowRealMatrix(jobject obj) : ::org::hipparchus::linear::AbstractRealMatrix(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Array2DRowRealMatrix(const Array2DRowRealMatrix& obj) : ::org::hipparchus::linear::AbstractRealMatrix(obj) {}

        Array2DRowRealMatrix();
        Array2DRowRealMatrix(const JArray< jdouble > &);
        Array2DRowRealMatrix(const JArray< JArray< jdouble > > &);
        Array2DRowRealMatrix(const JArray< JArray< jdouble > > &, jboolean);
        Array2DRowRealMatrix(jint, jint);

        Array2DRowRealMatrix add(const Array2DRowRealMatrix &) const;
        void addToEntry(jint, jint, jdouble) const;
        ::org::hipparchus::linear::RealMatrix copy() const;
        ::org::hipparchus::linear::RealMatrix createMatrix(jint, jint) const;
        jint getColumnDimension() const;
        JArray< JArray< jdouble > > getData() const;
        JArray< JArray< jdouble > > getDataRef() const;
        jdouble getEntry(jint, jint) const;
        JArray< jdouble > getRow(jint) const;
        jint getRowDimension() const;
        ::org::hipparchus::linear::RealMatrix getSubMatrix(jint, jint, jint, jint) const;
        ::org::hipparchus::linear::RealMatrix kroneckerProduct(const ::org::hipparchus::linear::RealMatrix &) const;
        Array2DRowRealMatrix multiply(const Array2DRowRealMatrix &) const;
        void multiplyEntry(jint, jint, jdouble) const;
        ::org::hipparchus::linear::RealMatrix multiplyTransposed(const Array2DRowRealMatrix &) const;
        ::org::hipparchus::linear::RealMatrix multiplyTransposed(const ::org::hipparchus::linear::RealMatrix &) const;
        JArray< jdouble > operate(const JArray< jdouble > &) const;
        JArray< jdouble > preMultiply(const JArray< jdouble > &) const;
        void setEntry(jint, jint, jdouble) const;
        void setRow(jint, const JArray< jdouble > &) const;
        void setSubMatrix(const JArray< JArray< jdouble > > &, jint, jint) const;
        ::org::hipparchus::linear::RealMatrix stack() const;
        Array2DRowRealMatrix subtract(const Array2DRowRealMatrix &) const;
        ::org::hipparchus::linear::RealMatrix transposeMultiply(const Array2DRowRealMatrix &) const;
        ::org::hipparchus::linear::RealMatrix transposeMultiply(const ::org::hipparchus::linear::RealMatrix &) const;
        ::org::hipparchus::linear::RealMatrix unstackSquare() const;
        jdouble walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor &) const;
        jdouble walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor &) const;
        jdouble walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor &, jint, jint, jint, jint) const;
        jdouble walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor &, jint, jint, jint, jint) const;
        jdouble walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor &) const;
        jdouble walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor &) const;
        jdouble walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor &, jint, jint, jint, jint) const;
        jdouble walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor &, jint, jint, jint, jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(Array2DRowRealMatrix);
      extern PyTypeObject *PY_TYPE(Array2DRowRealMatrix);

      class t_Array2DRowRealMatrix {
      public:
        PyObject_HEAD
        Array2DRowRealMatrix object;
        static PyObject *wrap_Object(const Array2DRowRealMatrix&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
