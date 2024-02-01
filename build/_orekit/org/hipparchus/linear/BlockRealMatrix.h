#ifndef org_hipparchus_linear_BlockRealMatrix_H
#define org_hipparchus_linear_BlockRealMatrix_H

#include "org/hipparchus/linear/AbstractRealMatrix.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrixChangingVisitor;
      class BlockRealMatrix;
      class RealMatrixPreservingVisitor;
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
          mid_init$_11ecdbb5af7ed67d,
          mid_init$_b5d23e6c0858e8ed,
          mid_init$_3d641a8704e0676c,
          mid_add_7935fff4ff8c7980,
          mid_add_c301739178ffd482,
          mid_addToEntry_e98d7b3e971b6087,
          mid_copy_8319c147ca237495,
          mid_createBlocksLayout_257ef40acf1ad25f,
          mid_createMatrix_73d598fe24f0c288,
          mid_getColumn_81add9fc9d78d5b9,
          mid_getColumnDimension_d6ab429752e7c267,
          mid_getColumnMatrix_9763bd9f03a4ccd6,
          mid_getColumnVector_2ea477ed14744e74,
          mid_getData_eda3f19b8225f78f,
          mid_getEntry_6d920aab27f0a3d2,
          mid_getFrobeniusNorm_9981f74b2d109da6,
          mid_getNorm1_9981f74b2d109da6,
          mid_getNormInfty_9981f74b2d109da6,
          mid_getRow_81add9fc9d78d5b9,
          mid_getRowDimension_d6ab429752e7c267,
          mid_getRowMatrix_9763bd9f03a4ccd6,
          mid_getRowVector_2ea477ed14744e74,
          mid_getSubMatrix_48d6fd9521359716,
          mid_multiply_7935fff4ff8c7980,
          mid_multiply_c301739178ffd482,
          mid_multiplyEntry_e98d7b3e971b6087,
          mid_multiplyTransposed_7935fff4ff8c7980,
          mid_multiplyTransposed_c301739178ffd482,
          mid_operate_51f624c89851da7e,
          mid_preMultiply_51f624c89851da7e,
          mid_scalarAdd_071bd3def5374a3c,
          mid_scalarMultiply_d5a7c13c36e5009c,
          mid_setColumn_9d367e34fba0a5ea,
          mid_setColumnMatrix_f7b5db2ddda2ff4c,
          mid_setColumnVector_543485b1a87e5329,
          mid_setEntry_e98d7b3e971b6087,
          mid_setRow_9d367e34fba0a5ea,
          mid_setRowMatrix_229e5970d58e386e,
          mid_setRowMatrix_f7b5db2ddda2ff4c,
          mid_setRowVector_543485b1a87e5329,
          mid_setSubMatrix_5cc0a3799fec1dc7,
          mid_subtract_7935fff4ff8c7980,
          mid_subtract_c301739178ffd482,
          mid_toBlocksLayout_d9fb07d4cbf99fb5,
          mid_transpose_8319c147ca237495,
          mid_transposeMultiply_7935fff4ff8c7980,
          mid_transposeMultiply_c301739178ffd482,
          mid_walkInOptimizedOrder_a7758d3537e559f7,
          mid_walkInOptimizedOrder_5a884deb680e092c,
          mid_walkInOptimizedOrder_0c89eacb5543486a,
          mid_walkInOptimizedOrder_be1420f911d13599,
          mid_walkInRowOrder_a7758d3537e559f7,
          mid_walkInRowOrder_5a884deb680e092c,
          mid_walkInRowOrder_0c89eacb5543486a,
          mid_walkInRowOrder_be1420f911d13599,
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
