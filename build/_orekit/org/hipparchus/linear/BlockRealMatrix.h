#ifndef org_hipparchus_linear_BlockRealMatrix_H
#define org_hipparchus_linear_BlockRealMatrix_H

#include "org/hipparchus/linear/AbstractRealMatrix.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrixChangingVisitor;
      class RealMatrixPreservingVisitor;
      class BlockRealMatrix;
      class RealMatrix;
      class RealVector;
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

      class BlockRealMatrix : public ::org::hipparchus::linear::AbstractRealMatrix {
       public:
        enum {
          mid_init$_edb361bfdd1ad9ae,
          mid_init$_a84c9a223722150c,
          mid_init$_9d47f54cd89306c8,
          mid_add_62d403a2d2ad5686,
          mid_add_25f9c54536e0540d,
          mid_addToEntry_754312f3734d6e2f,
          mid_copy_9333b940bd071573,
          mid_createBlocksLayout_c5a249365f81f631,
          mid_createMatrix_351e55853827f946,
          mid_getColumn_1da5c9e77f24f269,
          mid_getColumnDimension_412668abc8d889e9,
          mid_getColumnMatrix_ecbebd8431a3d52f,
          mid_getColumnVector_2a32cae841870443,
          mid_getData_8cf5267aa13a77f3,
          mid_getEntry_21b81d54c06b64b0,
          mid_getFrobeniusNorm_557b8123390d8d0c,
          mid_getNorm1_557b8123390d8d0c,
          mid_getNormInfty_557b8123390d8d0c,
          mid_getRow_1da5c9e77f24f269,
          mid_getRowDimension_412668abc8d889e9,
          mid_getRowMatrix_ecbebd8431a3d52f,
          mid_getRowVector_2a32cae841870443,
          mid_getSubMatrix_93a08624532f2e10,
          mid_multiply_62d403a2d2ad5686,
          mid_multiply_25f9c54536e0540d,
          mid_multiplyEntry_754312f3734d6e2f,
          mid_multiplyTransposed_62d403a2d2ad5686,
          mid_multiplyTransposed_25f9c54536e0540d,
          mid_operate_1db7c087750eaffe,
          mid_preMultiply_1db7c087750eaffe,
          mid_scalarAdd_97e5e241a12b4daa,
          mid_scalarMultiply_e95e381257af03e9,
          mid_setColumn_3246bd31f432242d,
          mid_setColumnMatrix_4fd5e02248c1a963,
          mid_setColumnVector_a967cf1fffd0038f,
          mid_setEntry_754312f3734d6e2f,
          mid_setRow_3246bd31f432242d,
          mid_setRowMatrix_c46b71cc81d6d481,
          mid_setRowMatrix_4fd5e02248c1a963,
          mid_setRowVector_a967cf1fffd0038f,
          mid_setSubMatrix_672f554eb45cea1a,
          mid_subtract_62d403a2d2ad5686,
          mid_subtract_25f9c54536e0540d,
          mid_toBlocksLayout_2b7f9de2d1ea1ddb,
          mid_transpose_9333b940bd071573,
          mid_transposeMultiply_62d403a2d2ad5686,
          mid_transposeMultiply_25f9c54536e0540d,
          mid_walkInOptimizedOrder_f151009359824fc3,
          mid_walkInOptimizedOrder_3f821bf796d1a7b4,
          mid_walkInOptimizedOrder_ab19ce00fffb9224,
          mid_walkInOptimizedOrder_b64b35af60f84c7f,
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
