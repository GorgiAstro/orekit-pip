#ifndef org_hipparchus_linear_BlockRealMatrix_H
#define org_hipparchus_linear_BlockRealMatrix_H

#include "org/hipparchus/linear/AbstractRealMatrix.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    namespace linear {
      class RealMatrixChangingVisitor;
      class BlockRealMatrix;
      class RealMatrixPreservingVisitor;
      class RealVector;
      class RealMatrix;
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
          mid_init$_07adb42ffaa97d31,
          mid_init$_3313c75e3e16c428,
          mid_init$_84967766e6e8303c,
          mid_add_823baf7c4b8432f2,
          mid_add_57478e87aa8391db,
          mid_addToEntry_94fe8d9ffeb50676,
          mid_copy_87b0d3e5ef669cc1,
          mid_createBlocksLayout_4bd4edddfa48c3b3,
          mid_createMatrix_26d25f5dccee563e,
          mid_getColumn_bb2a44a76ad252f7,
          mid_getColumnDimension_55546ef6a647f39b,
          mid_getColumnMatrix_6f4c7d1a6929df67,
          mid_getColumnVector_b50dc3915c68ddbc,
          mid_getData_3b7b373db8e7887f,
          mid_getEntry_cad98089d00f8a5b,
          mid_getFrobeniusNorm_b74f83833fdad017,
          mid_getNorm1_b74f83833fdad017,
          mid_getNormInfty_b74f83833fdad017,
          mid_getRow_bb2a44a76ad252f7,
          mid_getRowDimension_55546ef6a647f39b,
          mid_getRowMatrix_6f4c7d1a6929df67,
          mid_getRowVector_b50dc3915c68ddbc,
          mid_getSubMatrix_7784b674b3254595,
          mid_multiply_823baf7c4b8432f2,
          mid_multiply_57478e87aa8391db,
          mid_multiplyEntry_94fe8d9ffeb50676,
          mid_multiplyTransposed_823baf7c4b8432f2,
          mid_multiplyTransposed_57478e87aa8391db,
          mid_operate_14dee4cb8cc3e959,
          mid_preMultiply_14dee4cb8cc3e959,
          mid_scalarAdd_bf9d7a428ea4c205,
          mid_scalarMultiply_f5dd9d6021dc9dae,
          mid_setColumn_75061e5f5bbace93,
          mid_setColumnMatrix_74dda270996520c8,
          mid_setColumnVector_9fe1e9c5bee9d07c,
          mid_setEntry_94fe8d9ffeb50676,
          mid_setRow_75061e5f5bbace93,
          mid_setRowMatrix_6c624781ed5c298a,
          mid_setRowMatrix_74dda270996520c8,
          mid_setRowVector_9fe1e9c5bee9d07c,
          mid_setSubMatrix_f12104c26dcf5b23,
          mid_subtract_823baf7c4b8432f2,
          mid_subtract_57478e87aa8391db,
          mid_toBlocksLayout_fa7294d53f56a3e3,
          mid_transpose_87b0d3e5ef669cc1,
          mid_transposeMultiply_823baf7c4b8432f2,
          mid_transposeMultiply_57478e87aa8391db,
          mid_walkInOptimizedOrder_e9eacc024b91638e,
          mid_walkInOptimizedOrder_8c777cbbebb3f320,
          mid_walkInOptimizedOrder_7a8f404d3cc13545,
          mid_walkInOptimizedOrder_0efcec2037689a79,
          mid_walkInRowOrder_e9eacc024b91638e,
          mid_walkInRowOrder_8c777cbbebb3f320,
          mid_walkInRowOrder_7a8f404d3cc13545,
          mid_walkInRowOrder_0efcec2037689a79,
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
