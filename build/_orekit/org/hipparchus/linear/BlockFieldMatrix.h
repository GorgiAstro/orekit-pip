#ifndef org_hipparchus_linear_BlockFieldMatrix_H
#define org_hipparchus_linear_BlockFieldMatrix_H

#include "org/hipparchus/linear/AbstractFieldMatrix.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class FieldMatrixChangingVisitor;
      class FieldMatrix;
      class FieldVector;
      class FieldMatrixPreservingVisitor;
      class BlockFieldMatrix;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
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
          mid_init$_ab57da19aa96755a,
          mid_init$_ddbf374219cf6329,
          mid_init$_94d81582232d54cc,
          mid_add_546406c950533464,
          mid_add_b180f987191970ad,
          mid_addToEntry_8de38856a6ebea36,
          mid_copy_02883dbbe5db44ac,
          mid_createBlocksLayout_537724343e50c1ea,
          mid_createMatrix_71a6a4df501a3e03,
          mid_getColumn_9410bfc023ff0ee6,
          mid_getColumnDimension_d6ab429752e7c267,
          mid_getColumnMatrix_338ea041dc2f9292,
          mid_getColumnVector_229c51f1f7aa44e3,
          mid_getData_5d4bb4c2b3c3b853,
          mid_getEntry_a81b5a6b0760a7e3,
          mid_getRow_9410bfc023ff0ee6,
          mid_getRowDimension_d6ab429752e7c267,
          mid_getRowMatrix_338ea041dc2f9292,
          mid_getRowVector_229c51f1f7aa44e3,
          mid_getSubMatrix_1acf4e5d8c70f8c1,
          mid_multiply_546406c950533464,
          mid_multiply_b180f987191970ad,
          mid_multiplyEntry_8de38856a6ebea36,
          mid_multiplyTransposed_546406c950533464,
          mid_multiplyTransposed_d1e0f34a5eb2f6c7,
          mid_operate_da4e13f241d172b2,
          mid_preMultiply_da4e13f241d172b2,
          mid_scalarAdd_8a90f00b11f69825,
          mid_scalarMultiply_8a90f00b11f69825,
          mid_setColumn_1d7c60cf27d9f179,
          mid_setColumnMatrix_87d8f99edb7a39ea,
          mid_setColumnVector_9f6a0cf723c2763b,
          mid_setEntry_8de38856a6ebea36,
          mid_setRow_1d7c60cf27d9f179,
          mid_setRowMatrix_32abae4e359e1ffc,
          mid_setRowMatrix_87d8f99edb7a39ea,
          mid_setRowVector_9f6a0cf723c2763b,
          mid_setSubMatrix_24d277c6faa30a04,
          mid_subtract_546406c950533464,
          mid_subtract_b180f987191970ad,
          mid_toBlocksLayout_11bffb4a09ae7b58,
          mid_transpose_02883dbbe5db44ac,
          mid_transposeMultiply_546406c950533464,
          mid_transposeMultiply_d1e0f34a5eb2f6c7,
          mid_walkInOptimizedOrder_9511e2a4670e260a,
          mid_walkInOptimizedOrder_718adedab84e4562,
          mid_walkInOptimizedOrder_4e13f6cf4599797e,
          mid_walkInOptimizedOrder_8e3632311c5af3b6,
          mid_walkInRowOrder_9511e2a4670e260a,
          mid_walkInRowOrder_718adedab84e4562,
          mid_walkInRowOrder_4e13f6cf4599797e,
          mid_walkInRowOrder_8e3632311c5af3b6,
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
