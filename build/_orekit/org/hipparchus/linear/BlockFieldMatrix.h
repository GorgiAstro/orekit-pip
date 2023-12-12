#ifndef org_hipparchus_linear_BlockFieldMatrix_H
#define org_hipparchus_linear_BlockFieldMatrix_H

#include "org/hipparchus/linear/AbstractFieldMatrix.h"

namespace org {
  namespace hipparchus {
    class FieldElement;
    namespace linear {
      class BlockFieldMatrix;
      class FieldMatrixChangingVisitor;
      class FieldVector;
      class FieldMatrix;
      class FieldMatrixPreservingVisitor;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
    }
    class Field;
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

      class BlockFieldMatrix : public ::org::hipparchus::linear::AbstractFieldMatrix {
       public:
        enum {
          mid_init$_f8690281fd65dda7,
          mid_init$_a9ccb012d4cb48bd,
          mid_init$_635d5b233a9a373e,
          mid_add_058834d466178374,
          mid_add_60dc3401cb1a0936,
          mid_addToEntry_a6d8caed839ba827,
          mid_copy_1d6b27621d7bea96,
          mid_createBlocksLayout_918e914ae6927f78,
          mid_createMatrix_f57999d9fe0fa8c7,
          mid_getColumn_5bf832a9d0c2a7e7,
          mid_getColumnDimension_412668abc8d889e9,
          mid_getColumnMatrix_86145252a1591a99,
          mid_getColumnVector_6f1c886add96d5a0,
          mid_getData_7007d1e2762517a8,
          mid_getEntry_a7f16df0741fd579,
          mid_getRow_5bf832a9d0c2a7e7,
          mid_getRowDimension_412668abc8d889e9,
          mid_getRowMatrix_86145252a1591a99,
          mid_getRowVector_6f1c886add96d5a0,
          mid_getSubMatrix_455eec4445ba70d4,
          mid_multiply_058834d466178374,
          mid_multiply_60dc3401cb1a0936,
          mid_multiplyEntry_a6d8caed839ba827,
          mid_multiplyTransposed_058834d466178374,
          mid_multiplyTransposed_46bb3c73957bfb07,
          mid_operate_ee5975d9ac401b83,
          mid_preMultiply_ee5975d9ac401b83,
          mid_scalarAdd_59a8d7279b1a66f0,
          mid_scalarMultiply_59a8d7279b1a66f0,
          mid_setColumn_25fe2a3042ba75d1,
          mid_setColumnMatrix_82ae94aaf3c46d50,
          mid_setColumnVector_502f8ed205bebebd,
          mid_setEntry_a6d8caed839ba827,
          mid_setRow_25fe2a3042ba75d1,
          mid_setRowMatrix_63b21f9a765f6de3,
          mid_setRowMatrix_82ae94aaf3c46d50,
          mid_setRowVector_502f8ed205bebebd,
          mid_setSubMatrix_7c2e1cd72b6eb4ce,
          mid_subtract_058834d466178374,
          mid_subtract_60dc3401cb1a0936,
          mid_toBlocksLayout_7c2983baa1174efc,
          mid_transpose_1d6b27621d7bea96,
          mid_transposeMultiply_058834d466178374,
          mid_transposeMultiply_46bb3c73957bfb07,
          mid_walkInOptimizedOrder_7d4c76689ca2f3c1,
          mid_walkInOptimizedOrder_76fd1db3efda6447,
          mid_walkInOptimizedOrder_516fb751ccd95d3b,
          mid_walkInOptimizedOrder_e5d38b926487f1a5,
          mid_walkInRowOrder_7d4c76689ca2f3c1,
          mid_walkInRowOrder_76fd1db3efda6447,
          mid_walkInRowOrder_516fb751ccd95d3b,
          mid_walkInRowOrder_e5d38b926487f1a5,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit BlockFieldMatrix(jobject obj) : ::org::hipparchus::linear::AbstractFieldMatrix(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        BlockFieldMatrix(const BlockFieldMatrix& obj) : ::org::hipparchus::linear::AbstractFieldMatrix(obj) {}

        static jint BLOCK_SIZE;

        BlockFieldMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > &);
        BlockFieldMatrix(const ::org::hipparchus::Field &, jint, jint);
        BlockFieldMatrix(jint, jint, const JArray< JArray< ::org::hipparchus::FieldElement > > &, jboolean);

        BlockFieldMatrix add(const BlockFieldMatrix &) const;
        ::org::hipparchus::linear::FieldMatrix add(const ::org::hipparchus::linear::FieldMatrix &) const;
        void addToEntry(jint, jint, const ::org::hipparchus::FieldElement &) const;
        ::org::hipparchus::linear::FieldMatrix copy() const;
        static JArray< JArray< ::org::hipparchus::FieldElement > > createBlocksLayout(const ::org::hipparchus::Field &, jint, jint);
        ::org::hipparchus::linear::FieldMatrix createMatrix(jint, jint) const;
        JArray< ::org::hipparchus::FieldElement > getColumn(jint) const;
        jint getColumnDimension() const;
        ::org::hipparchus::linear::FieldMatrix getColumnMatrix(jint) const;
        ::org::hipparchus::linear::FieldVector getColumnVector(jint) const;
        JArray< JArray< ::org::hipparchus::FieldElement > > getData() const;
        ::org::hipparchus::FieldElement getEntry(jint, jint) const;
        JArray< ::org::hipparchus::FieldElement > getRow(jint) const;
        jint getRowDimension() const;
        ::org::hipparchus::linear::FieldMatrix getRowMatrix(jint) const;
        ::org::hipparchus::linear::FieldVector getRowVector(jint) const;
        ::org::hipparchus::linear::FieldMatrix getSubMatrix(jint, jint, jint, jint) const;
        BlockFieldMatrix multiply(const BlockFieldMatrix &) const;
        ::org::hipparchus::linear::FieldMatrix multiply(const ::org::hipparchus::linear::FieldMatrix &) const;
        void multiplyEntry(jint, jint, const ::org::hipparchus::FieldElement &) const;
        BlockFieldMatrix multiplyTransposed(const BlockFieldMatrix &) const;
        BlockFieldMatrix multiplyTransposed(const ::org::hipparchus::linear::FieldMatrix &) const;
        JArray< ::org::hipparchus::FieldElement > operate(const JArray< ::org::hipparchus::FieldElement > &) const;
        JArray< ::org::hipparchus::FieldElement > preMultiply(const JArray< ::org::hipparchus::FieldElement > &) const;
        ::org::hipparchus::linear::FieldMatrix scalarAdd(const ::org::hipparchus::FieldElement &) const;
        ::org::hipparchus::linear::FieldMatrix scalarMultiply(const ::org::hipparchus::FieldElement &) const;
        void setColumn(jint, const JArray< ::org::hipparchus::FieldElement > &) const;
        void setColumnMatrix(jint, const ::org::hipparchus::linear::FieldMatrix &) const;
        void setColumnVector(jint, const ::org::hipparchus::linear::FieldVector &) const;
        void setEntry(jint, jint, const ::org::hipparchus::FieldElement &) const;
        void setRow(jint, const JArray< ::org::hipparchus::FieldElement > &) const;
        void setRowMatrix(jint, const BlockFieldMatrix &) const;
        void setRowMatrix(jint, const ::org::hipparchus::linear::FieldMatrix &) const;
        void setRowVector(jint, const ::org::hipparchus::linear::FieldVector &) const;
        void setSubMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > &, jint, jint) const;
        BlockFieldMatrix subtract(const BlockFieldMatrix &) const;
        ::org::hipparchus::linear::FieldMatrix subtract(const ::org::hipparchus::linear::FieldMatrix &) const;
        static JArray< JArray< ::org::hipparchus::FieldElement > > toBlocksLayout(const JArray< JArray< ::org::hipparchus::FieldElement > > &);
        ::org::hipparchus::linear::FieldMatrix transpose() const;
        BlockFieldMatrix transposeMultiply(const BlockFieldMatrix &) const;
        BlockFieldMatrix transposeMultiply(const ::org::hipparchus::linear::FieldMatrix &) const;
        ::org::hipparchus::FieldElement walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor &) const;
        ::org::hipparchus::FieldElement walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor &) const;
        ::org::hipparchus::FieldElement walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor &, jint, jint, jint, jint) const;
        ::org::hipparchus::FieldElement walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor &, jint, jint, jint, jint) const;
        ::org::hipparchus::FieldElement walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor &) const;
        ::org::hipparchus::FieldElement walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor &) const;
        ::org::hipparchus::FieldElement walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor &, jint, jint, jint, jint) const;
        ::org::hipparchus::FieldElement walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor &, jint, jint, jint, jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(BlockFieldMatrix);
      extern PyTypeObject *PY_TYPE(BlockFieldMatrix);

      class t_BlockFieldMatrix {
      public:
        PyObject_HEAD
        BlockFieldMatrix object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_BlockFieldMatrix *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const BlockFieldMatrix&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const BlockFieldMatrix&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
