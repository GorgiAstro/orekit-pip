#ifndef org_hipparchus_linear_BlockFieldMatrix_H
#define org_hipparchus_linear_BlockFieldMatrix_H

#include "org/hipparchus/linear/AbstractFieldMatrix.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace linear {
      class BlockFieldMatrix;
      class FieldVector;
      class FieldMatrixChangingVisitor;
      class FieldMatrixPreservingVisitor;
      class FieldMatrix;
    }
    class Field;
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    class FieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class BlockFieldMatrix : public ::org::hipparchus::linear::AbstractFieldMatrix {
       public:
        enum {
          mid_init$_249f450b19288783,
          mid_init$_11914f5932256658,
          mid_init$_5210554fadd4300a,
          mid_add_9a476d74482e4c6b,
          mid_add_311c21c57522a65c,
          mid_addToEntry_8c5ca78361f003c1,
          mid_copy_cc77900a647586cf,
          mid_createBlocksLayout_ebc1d7b2d944a9b8,
          mid_createMatrix_8e5837651d169cc8,
          mid_getColumn_d29eb5ffff4844ca,
          mid_getColumnDimension_f2f64475e4580546,
          mid_getColumnMatrix_cb8ea5461f14f705,
          mid_getColumnVector_61bcfe594fe45427,
          mid_getData_6ccec7d54d4aa14e,
          mid_getEntry_e4e0a9e5376069de,
          mid_getRow_d29eb5ffff4844ca,
          mid_getRowDimension_f2f64475e4580546,
          mid_getRowMatrix_cb8ea5461f14f705,
          mid_getRowVector_61bcfe594fe45427,
          mid_getSubMatrix_05948e8f73a5c897,
          mid_multiply_9a476d74482e4c6b,
          mid_multiply_311c21c57522a65c,
          mid_multiplyEntry_8c5ca78361f003c1,
          mid_multiplyTransposed_9a476d74482e4c6b,
          mid_multiplyTransposed_eff5bb7a14f49822,
          mid_operate_f9019cec9923ca8a,
          mid_preMultiply_f9019cec9923ca8a,
          mid_scalarAdd_0f878209c37822a8,
          mid_scalarMultiply_0f878209c37822a8,
          mid_setColumn_72c49d7bd5abccf7,
          mid_setColumnMatrix_ab13d4a167ad2f09,
          mid_setColumnVector_dffd6d9d2fbaa6fc,
          mid_setEntry_8c5ca78361f003c1,
          mid_setRow_72c49d7bd5abccf7,
          mid_setRowMatrix_4ee5877ee1acba81,
          mid_setRowMatrix_ab13d4a167ad2f09,
          mid_setRowVector_dffd6d9d2fbaa6fc,
          mid_setSubMatrix_ca8750336b496dca,
          mid_subtract_9a476d74482e4c6b,
          mid_subtract_311c21c57522a65c,
          mid_toBlocksLayout_14397283fdb5cd13,
          mid_transpose_cc77900a647586cf,
          mid_transposeMultiply_9a476d74482e4c6b,
          mid_transposeMultiply_eff5bb7a14f49822,
          mid_walkInOptimizedOrder_09db37bb51f54673,
          mid_walkInOptimizedOrder_3a0cd0f81f3173f1,
          mid_walkInOptimizedOrder_1bdd1f13c5d68880,
          mid_walkInOptimizedOrder_b8a3d440c9844dc5,
          mid_walkInRowOrder_09db37bb51f54673,
          mid_walkInRowOrder_3a0cd0f81f3173f1,
          mid_walkInRowOrder_1bdd1f13c5d68880,
          mid_walkInRowOrder_b8a3d440c9844dc5,
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
