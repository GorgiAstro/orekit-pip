#ifndef org_hipparchus_linear_BlockFieldMatrix_H
#define org_hipparchus_linear_BlockFieldMatrix_H

#include "org/hipparchus/linear/AbstractFieldMatrix.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    class Field;
    namespace linear {
      class FieldMatrixPreservingVisitor;
      class FieldMatrixChangingVisitor;
      class BlockFieldMatrix;
      class FieldMatrix;
      class FieldVector;
    }
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
          mid_init$_a9efc882474e6213,
          mid_init$_b6c946d1cbf160f0,
          mid_init$_ef636a47cd1b07df,
          mid_add_15347886d0b0381d,
          mid_add_e74c5d5fdc2ea025,
          mid_addToEntry_c2695120fce254e7,
          mid_copy_81d49643ce3a3c0b,
          mid_createBlocksLayout_d3a891e7c6b40b5a,
          mid_createMatrix_add2e370542edc2f,
          mid_getColumn_32f3c1a06713be87,
          mid_getColumnDimension_55546ef6a647f39b,
          mid_getColumnMatrix_2b05a6661cb56e40,
          mid_getColumnVector_06abfeddf4c4a28c,
          mid_getData_79f47d23e197eb68,
          mid_getEntry_d0f2803baa5859d6,
          mid_getRow_32f3c1a06713be87,
          mid_getRowDimension_55546ef6a647f39b,
          mid_getRowMatrix_2b05a6661cb56e40,
          mid_getRowVector_06abfeddf4c4a28c,
          mid_getSubMatrix_fccf627d1096268f,
          mid_multiply_15347886d0b0381d,
          mid_multiply_e74c5d5fdc2ea025,
          mid_multiplyEntry_c2695120fce254e7,
          mid_multiplyTransposed_15347886d0b0381d,
          mid_multiplyTransposed_3eb592d1e0a62348,
          mid_operate_0721a6f091b7d386,
          mid_preMultiply_0721a6f091b7d386,
          mid_scalarAdd_7f54bca136ec1209,
          mid_scalarMultiply_7f54bca136ec1209,
          mid_setColumn_a38853481346cb12,
          mid_setColumnMatrix_8b62bd16a362a59d,
          mid_setColumnVector_cd62bfbc5992c85f,
          mid_setEntry_c2695120fce254e7,
          mid_setRow_a38853481346cb12,
          mid_setRowMatrix_716b17c470569539,
          mid_setRowMatrix_8b62bd16a362a59d,
          mid_setRowVector_cd62bfbc5992c85f,
          mid_setSubMatrix_3b5f1aa21de3920a,
          mid_subtract_15347886d0b0381d,
          mid_subtract_e74c5d5fdc2ea025,
          mid_toBlocksLayout_50b2504e0e8ddff6,
          mid_transpose_81d49643ce3a3c0b,
          mid_transposeMultiply_15347886d0b0381d,
          mid_transposeMultiply_3eb592d1e0a62348,
          mid_walkInOptimizedOrder_695885c54f7e1d00,
          mid_walkInOptimizedOrder_0cfd3392c17e8c72,
          mid_walkInOptimizedOrder_81e6970a97ecd473,
          mid_walkInOptimizedOrder_aa15efee847b0fad,
          mid_walkInRowOrder_695885c54f7e1d00,
          mid_walkInRowOrder_0cfd3392c17e8c72,
          mid_walkInRowOrder_81e6970a97ecd473,
          mid_walkInRowOrder_aa15efee847b0fad,
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
