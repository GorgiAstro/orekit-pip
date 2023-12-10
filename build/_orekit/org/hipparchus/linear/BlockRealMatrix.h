#ifndef org_hipparchus_linear_BlockRealMatrix_H
#define org_hipparchus_linear_BlockRealMatrix_H

#include "org/hipparchus/linear/AbstractRealMatrix.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class BlockRealMatrix;
      class RealMatrixChangingVisitor;
      class RealMatrix;
      class RealVector;
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
          mid_init$_a0befc7f3dc19e41,
          mid_init$_6f37635c3285dbdf,
          mid_init$_1226074b8c13dc7e,
          mid_add_067240a7ab5be4c4,
          mid_add_6304385ca3a5bd72,
          mid_addToEntry_1506189166690b5e,
          mid_copy_62094d94b8a0389a,
          mid_createBlocksLayout_5f8b4bdc912abcfa,
          mid_createMatrix_4edbd6fc57b63f17,
          mid_getColumn_abe82da4f5c7c981,
          mid_getColumnDimension_570ce0828f81a2c1,
          mid_getColumnMatrix_b7acdd358bb5efdd,
          mid_getColumnVector_b686e6fcbf82678b,
          mid_getData_0358d8ea02f2cdb1,
          mid_getEntry_dbbe5f05149dbf73,
          mid_getFrobeniusNorm_dff5885c2c873297,
          mid_getNorm1_dff5885c2c873297,
          mid_getNormInfty_dff5885c2c873297,
          mid_getRow_abe82da4f5c7c981,
          mid_getRowDimension_570ce0828f81a2c1,
          mid_getRowMatrix_b7acdd358bb5efdd,
          mid_getRowVector_b686e6fcbf82678b,
          mid_getSubMatrix_49c898b876b8801a,
          mid_multiply_067240a7ab5be4c4,
          mid_multiply_6304385ca3a5bd72,
          mid_multiplyEntry_1506189166690b5e,
          mid_multiplyTransposed_067240a7ab5be4c4,
          mid_multiplyTransposed_6304385ca3a5bd72,
          mid_operate_ac3d742ccc742f22,
          mid_preMultiply_ac3d742ccc742f22,
          mid_scalarAdd_0f82f472c57953f4,
          mid_scalarMultiply_f21dcd9464c6e3c5,
          mid_setColumn_7169a8c8a60b8b2c,
          mid_setColumnMatrix_7f7e7105aa2a1ac1,
          mid_setColumnVector_18388821294f273e,
          mid_setEntry_1506189166690b5e,
          mid_setRow_7169a8c8a60b8b2c,
          mid_setRowMatrix_388c57ad239baffd,
          mid_setRowMatrix_7f7e7105aa2a1ac1,
          mid_setRowVector_18388821294f273e,
          mid_setSubMatrix_f92f0755fea39af9,
          mid_subtract_067240a7ab5be4c4,
          mid_subtract_6304385ca3a5bd72,
          mid_toBlocksLayout_9c0348b17db96525,
          mid_transpose_62094d94b8a0389a,
          mid_transposeMultiply_067240a7ab5be4c4,
          mid_transposeMultiply_6304385ca3a5bd72,
          mid_walkInOptimizedOrder_3e071bd337c0da4c,
          mid_walkInOptimizedOrder_b19c1ac2d3fe7eca,
          mid_walkInOptimizedOrder_62bd065f6938d976,
          mid_walkInOptimizedOrder_ab29bef5e0849364,
          mid_walkInRowOrder_3e071bd337c0da4c,
          mid_walkInRowOrder_b19c1ac2d3fe7eca,
          mid_walkInRowOrder_62bd065f6938d976,
          mid_walkInRowOrder_ab29bef5e0849364,
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
