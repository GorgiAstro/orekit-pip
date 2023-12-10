#ifndef org_hipparchus_linear_BlockRealMatrix_H
#define org_hipparchus_linear_BlockRealMatrix_H

#include "org/hipparchus/linear/AbstractRealMatrix.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealVector;
      class BlockRealMatrix;
      class RealMatrix;
      class RealMatrixChangingVisitor;
      class RealMatrixPreservingVisitor;
    }
    namespace exception {
      class NullArgumentException;
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

      class BlockRealMatrix : public ::org::hipparchus::linear::AbstractRealMatrix {
       public:
        enum {
          mid_init$_d660c7a97bf55272,
          mid_init$_8dbc1129a3c2557a,
          mid_init$_f37406172ab47ee6,
          mid_add_4d88a8ee7d6c18d7,
          mid_add_9f6b7013a1e49943,
          mid_addToEntry_78e41e7b5124a628,
          mid_copy_2a96413687ce30f0,
          mid_createBlocksLayout_f76bfea7a1ff2879,
          mid_createMatrix_5643c126a567b8a1,
          mid_getColumn_eb9cceadce1b2217,
          mid_getColumnDimension_f2f64475e4580546,
          mid_getColumnMatrix_c30a5588ba5709fd,
          mid_getColumnVector_2cafd1b18558ed5f,
          mid_getData_43de1192439efa92,
          mid_getEntry_a84e4ee1da3f1ab8,
          mid_getFrobeniusNorm_456d9a2f64d6b28d,
          mid_getNorm1_456d9a2f64d6b28d,
          mid_getNormInfty_456d9a2f64d6b28d,
          mid_getRow_eb9cceadce1b2217,
          mid_getRowDimension_f2f64475e4580546,
          mid_getRowMatrix_c30a5588ba5709fd,
          mid_getRowVector_2cafd1b18558ed5f,
          mid_getSubMatrix_86da1f7d771af139,
          mid_multiply_4d88a8ee7d6c18d7,
          mid_multiply_9f6b7013a1e49943,
          mid_multiplyEntry_78e41e7b5124a628,
          mid_multiplyTransposed_4d88a8ee7d6c18d7,
          mid_multiplyTransposed_9f6b7013a1e49943,
          mid_operate_4b742fe429c22ba8,
          mid_preMultiply_4b742fe429c22ba8,
          mid_scalarAdd_d3c12eeb1c6d7cbc,
          mid_scalarMultiply_2461b653ab91779b,
          mid_setColumn_7d4f41c65056f174,
          mid_setColumnMatrix_8f1af6d535d298ec,
          mid_setColumnVector_dcd0f7fda5e9451c,
          mid_setEntry_78e41e7b5124a628,
          mid_setRow_7d4f41c65056f174,
          mid_setRowMatrix_3b2ad4b0f36c391d,
          mid_setRowMatrix_8f1af6d535d298ec,
          mid_setRowVector_dcd0f7fda5e9451c,
          mid_setSubMatrix_a741cdd381e94792,
          mid_subtract_4d88a8ee7d6c18d7,
          mid_subtract_9f6b7013a1e49943,
          mid_toBlocksLayout_557d9547e284535f,
          mid_transpose_2a96413687ce30f0,
          mid_transposeMultiply_4d88a8ee7d6c18d7,
          mid_transposeMultiply_9f6b7013a1e49943,
          mid_walkInOptimizedOrder_340ddcf983c0c22e,
          mid_walkInOptimizedOrder_354ebbe7c685c961,
          mid_walkInOptimizedOrder_56223f2e9b79c5ad,
          mid_walkInOptimizedOrder_62551289056beecd,
          mid_walkInRowOrder_340ddcf983c0c22e,
          mid_walkInRowOrder_354ebbe7c685c961,
          mid_walkInRowOrder_56223f2e9b79c5ad,
          mid_walkInRowOrder_62551289056beecd,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit BlockRealMatrix(jobject obj) : ::org::hipparchus::linear::AbstractRealMatrix(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        BlockRealMatrix(const BlockRealMatrix& obj) : ::org::hipparchus::linear::AbstractRealMatrix(obj) {}

        static jint BLOCK_SIZE;

        BlockRealMatrix(const JArray< JArray< jdouble > > &);
        BlockRealMatrix(jint, jint);
        BlockRealMatrix(jint, jint, const JArray< JArray< jdouble > > &, jboolean);

        BlockRealMatrix add(const BlockRealMatrix &) const;
        BlockRealMatrix add(const ::org::hipparchus::linear::RealMatrix &) const;
        void addToEntry(jint, jint, jdouble) const;
        BlockRealMatrix copy() const;
        static JArray< JArray< jdouble > > createBlocksLayout(jint, jint);
        BlockRealMatrix createMatrix(jint, jint) const;
        JArray< jdouble > getColumn(jint) const;
        jint getColumnDimension() const;
        BlockRealMatrix getColumnMatrix(jint) const;
        ::org::hipparchus::linear::RealVector getColumnVector(jint) const;
        JArray< JArray< jdouble > > getData() const;
        jdouble getEntry(jint, jint) const;
        jdouble getFrobeniusNorm() const;
        jdouble getNorm1() const;
        jdouble getNormInfty() const;
        JArray< jdouble > getRow(jint) const;
        jint getRowDimension() const;
        BlockRealMatrix getRowMatrix(jint) const;
        ::org::hipparchus::linear::RealVector getRowVector(jint) const;
        BlockRealMatrix getSubMatrix(jint, jint, jint, jint) const;
        BlockRealMatrix multiply(const BlockRealMatrix &) const;
        BlockRealMatrix multiply(const ::org::hipparchus::linear::RealMatrix &) const;
        void multiplyEntry(jint, jint, jdouble) const;
        BlockRealMatrix multiplyTransposed(const BlockRealMatrix &) const;
        BlockRealMatrix multiplyTransposed(const ::org::hipparchus::linear::RealMatrix &) const;
        JArray< jdouble > operate(const JArray< jdouble > &) const;
        JArray< jdouble > preMultiply(const JArray< jdouble > &) const;
        BlockRealMatrix scalarAdd(jdouble) const;
        ::org::hipparchus::linear::RealMatrix scalarMultiply(jdouble) const;
        void setColumn(jint, const JArray< jdouble > &) const;
        void setColumnMatrix(jint, const ::org::hipparchus::linear::RealMatrix &) const;
        void setColumnVector(jint, const ::org::hipparchus::linear::RealVector &) const;
        void setEntry(jint, jint, jdouble) const;
        void setRow(jint, const JArray< jdouble > &) const;
        void setRowMatrix(jint, const BlockRealMatrix &) const;
        void setRowMatrix(jint, const ::org::hipparchus::linear::RealMatrix &) const;
        void setRowVector(jint, const ::org::hipparchus::linear::RealVector &) const;
        void setSubMatrix(const JArray< JArray< jdouble > > &, jint, jint) const;
        BlockRealMatrix subtract(const BlockRealMatrix &) const;
        BlockRealMatrix subtract(const ::org::hipparchus::linear::RealMatrix &) const;
        static JArray< JArray< jdouble > > toBlocksLayout(const JArray< JArray< jdouble > > &);
        BlockRealMatrix transpose() const;
        BlockRealMatrix transposeMultiply(const BlockRealMatrix &) const;
        BlockRealMatrix transposeMultiply(const ::org::hipparchus::linear::RealMatrix &) const;
        jdouble walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor &) const;
        jdouble walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor &) const;
        jdouble walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor &, jint, jint, jint, jint) const;
        jdouble walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor &, jint, jint, jint, jint) const;
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
      extern PyType_Def PY_TYPE_DEF(BlockRealMatrix);
      extern PyTypeObject *PY_TYPE(BlockRealMatrix);

      class t_BlockRealMatrix {
      public:
        PyObject_HEAD
        BlockRealMatrix object;
        static PyObject *wrap_Object(const BlockRealMatrix&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
