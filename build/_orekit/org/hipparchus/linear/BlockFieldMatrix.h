#ifndef org_hipparchus_linear_BlockFieldMatrix_H
#define org_hipparchus_linear_BlockFieldMatrix_H

#include "org/hipparchus/linear/AbstractFieldMatrix.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class BlockFieldMatrix;
      class FieldMatrixPreservingVisitor;
      class FieldMatrixChangingVisitor;
      class FieldMatrix;
      class FieldVector;
    }
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    class Field;
    class FieldElement;
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
          mid_init$_b797e11157f10d97,
          mid_init$_7dbd657fb2d34563,
          mid_init$_2f8d6f7ef9f03a72,
          mid_add_b6be95562ce45139,
          mid_add_1409f31dc074a11f,
          mid_addToEntry_d302e4fbc652587d,
          mid_copy_c992983685c753c5,
          mid_createBlocksLayout_9d0b4d67c7d5ec91,
          mid_createMatrix_5d35d650870a3dcb,
          mid_getColumn_b21ddf58698298c0,
          mid_getColumnDimension_570ce0828f81a2c1,
          mid_getColumnMatrix_d85895e9fba6ff1d,
          mid_getColumnVector_819edc89e6437565,
          mid_getData_75f68840bec35355,
          mid_getEntry_ef29faa67be274b8,
          mid_getRow_b21ddf58698298c0,
          mid_getRowDimension_570ce0828f81a2c1,
          mid_getRowMatrix_d85895e9fba6ff1d,
          mid_getRowVector_819edc89e6437565,
          mid_getSubMatrix_1033b0d2443c0299,
          mid_multiply_b6be95562ce45139,
          mid_multiply_1409f31dc074a11f,
          mid_multiplyEntry_d302e4fbc652587d,
          mid_multiplyTransposed_b6be95562ce45139,
          mid_multiplyTransposed_c288279d5a20d935,
          mid_operate_91d3c6b4d1752243,
          mid_preMultiply_91d3c6b4d1752243,
          mid_scalarAdd_57b87e024c8cac75,
          mid_scalarMultiply_57b87e024c8cac75,
          mid_setColumn_baf264dbcc1722ae,
          mid_setColumnMatrix_1fbbd8b62d351fe3,
          mid_setColumnVector_0c5a38a1f7c3f4d4,
          mid_setEntry_d302e4fbc652587d,
          mid_setRow_baf264dbcc1722ae,
          mid_setRowMatrix_40df8476c629becb,
          mid_setRowMatrix_1fbbd8b62d351fe3,
          mid_setRowVector_0c5a38a1f7c3f4d4,
          mid_setSubMatrix_e8cdaf624d2bb79a,
          mid_subtract_b6be95562ce45139,
          mid_subtract_1409f31dc074a11f,
          mid_toBlocksLayout_b3898de28104811f,
          mid_transpose_c992983685c753c5,
          mid_transposeMultiply_b6be95562ce45139,
          mid_transposeMultiply_c288279d5a20d935,
          mid_walkInOptimizedOrder_624c889f4088e148,
          mid_walkInOptimizedOrder_26ed18f15f4bb370,
          mid_walkInOptimizedOrder_c4e69fc23be9a0d2,
          mid_walkInOptimizedOrder_7aa3cb5fccfebf0e,
          mid_walkInRowOrder_624c889f4088e148,
          mid_walkInRowOrder_26ed18f15f4bb370,
          mid_walkInRowOrder_c4e69fc23be9a0d2,
          mid_walkInRowOrder_7aa3cb5fccfebf0e,
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
