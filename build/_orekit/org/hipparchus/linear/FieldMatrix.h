#ifndef org_hipparchus_linear_FieldMatrix_H
#define org_hipparchus_linear_FieldMatrix_H

#include "org/hipparchus/linear/AnyMatrix.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class FieldVector;
      class FieldMatrixChangingVisitor;
      class FieldMatrixPreservingVisitor;
      class FieldMatrix;
    }
    namespace util {
      class FieldBlendable;
    }
    class Field;
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    class FieldElement;
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class FieldMatrix : public ::org::hipparchus::linear::AnyMatrix {
       public:
        enum {
          mid_add_311c21c57522a65c,
          mid_addToEntry_8c5ca78361f003c1,
          mid_blendArithmeticallyWith_0c7081084a208672,
          mid_copy_cc77900a647586cf,
          mid_copySubMatrix_1e209a76a9d04b27,
          mid_copySubMatrix_4400509b3e197e37,
          mid_createMatrix_8e5837651d169cc8,
          mid_getColumn_d29eb5ffff4844ca,
          mid_getColumnMatrix_cb8ea5461f14f705,
          mid_getColumnVector_61bcfe594fe45427,
          mid_getData_6ccec7d54d4aa14e,
          mid_getEntry_e4e0a9e5376069de,
          mid_getField_70b4bbd3fa378d6b,
          mid_getRow_d29eb5ffff4844ca,
          mid_getRowMatrix_cb8ea5461f14f705,
          mid_getRowVector_61bcfe594fe45427,
          mid_getSubMatrix_302187aa0259985a,
          mid_getSubMatrix_05948e8f73a5c897,
          mid_getTrace_7e89936bdf79375b,
          mid_multiply_311c21c57522a65c,
          mid_multiplyEntry_8c5ca78361f003c1,
          mid_multiplyTransposed_311c21c57522a65c,
          mid_operate_f9019cec9923ca8a,
          mid_operate_585261c47f8bb8c7,
          mid_power_cb8ea5461f14f705,
          mid_preMultiply_f9019cec9923ca8a,
          mid_preMultiply_311c21c57522a65c,
          mid_preMultiply_585261c47f8bb8c7,
          mid_scalarAdd_0f878209c37822a8,
          mid_scalarMultiply_0f878209c37822a8,
          mid_setColumn_72c49d7bd5abccf7,
          mid_setColumnMatrix_ab13d4a167ad2f09,
          mid_setColumnVector_dffd6d9d2fbaa6fc,
          mid_setEntry_8c5ca78361f003c1,
          mid_setRow_72c49d7bd5abccf7,
          mid_setRowMatrix_ab13d4a167ad2f09,
          mid_setRowVector_dffd6d9d2fbaa6fc,
          mid_setSubMatrix_ca8750336b496dca,
          mid_subtract_311c21c57522a65c,
          mid_transpose_cc77900a647586cf,
          mid_transposeMultiply_311c21c57522a65c,
          mid_walkInColumnOrder_09db37bb51f54673,
          mid_walkInColumnOrder_3a0cd0f81f3173f1,
          mid_walkInColumnOrder_1bdd1f13c5d68880,
          mid_walkInColumnOrder_b8a3d440c9844dc5,
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

        explicit FieldMatrix(jobject obj) : ::org::hipparchus::linear::AnyMatrix(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldMatrix(const FieldMatrix& obj) : ::org::hipparchus::linear::AnyMatrix(obj) {}

        FieldMatrix add(const FieldMatrix &) const;
        void addToEntry(jint, jint, const ::org::hipparchus::FieldElement &) const;
        FieldMatrix blendArithmeticallyWith(const FieldMatrix &, const ::org::hipparchus::FieldElement &) const;
        FieldMatrix copy() const;
        void copySubMatrix(const JArray< jint > &, const JArray< jint > &, const JArray< JArray< ::org::hipparchus::FieldElement > > &) const;
        void copySubMatrix(jint, jint, jint, jint, const JArray< JArray< ::org::hipparchus::FieldElement > > &) const;
        FieldMatrix createMatrix(jint, jint) const;
        JArray< ::org::hipparchus::FieldElement > getColumn(jint) const;
        FieldMatrix getColumnMatrix(jint) const;
        ::org::hipparchus::linear::FieldVector getColumnVector(jint) const;
        JArray< JArray< ::org::hipparchus::FieldElement > > getData() const;
        ::org::hipparchus::FieldElement getEntry(jint, jint) const;
        ::org::hipparchus::Field getField() const;
        JArray< ::org::hipparchus::FieldElement > getRow(jint) const;
        FieldMatrix getRowMatrix(jint) const;
        ::org::hipparchus::linear::FieldVector getRowVector(jint) const;
        FieldMatrix getSubMatrix(const JArray< jint > &, const JArray< jint > &) const;
        FieldMatrix getSubMatrix(jint, jint, jint, jint) const;
        ::org::hipparchus::FieldElement getTrace() const;
        FieldMatrix multiply(const FieldMatrix &) const;
        void multiplyEntry(jint, jint, const ::org::hipparchus::FieldElement &) const;
        FieldMatrix multiplyTransposed(const FieldMatrix &) const;
        JArray< ::org::hipparchus::FieldElement > operate(const JArray< ::org::hipparchus::FieldElement > &) const;
        ::org::hipparchus::linear::FieldVector operate(const ::org::hipparchus::linear::FieldVector &) const;
        FieldMatrix power(jint) const;
        JArray< ::org::hipparchus::FieldElement > preMultiply(const JArray< ::org::hipparchus::FieldElement > &) const;
        FieldMatrix preMultiply(const FieldMatrix &) const;
        ::org::hipparchus::linear::FieldVector preMultiply(const ::org::hipparchus::linear::FieldVector &) const;
        FieldMatrix scalarAdd(const ::org::hipparchus::FieldElement &) const;
        FieldMatrix scalarMultiply(const ::org::hipparchus::FieldElement &) const;
        void setColumn(jint, const JArray< ::org::hipparchus::FieldElement > &) const;
        void setColumnMatrix(jint, const FieldMatrix &) const;
        void setColumnVector(jint, const ::org::hipparchus::linear::FieldVector &) const;
        void setEntry(jint, jint, const ::org::hipparchus::FieldElement &) const;
        void setRow(jint, const JArray< ::org::hipparchus::FieldElement > &) const;
        void setRowMatrix(jint, const FieldMatrix &) const;
        void setRowVector(jint, const ::org::hipparchus::linear::FieldVector &) const;
        void setSubMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > &, jint, jint) const;
        FieldMatrix subtract(const FieldMatrix &) const;
        FieldMatrix transpose() const;
        FieldMatrix transposeMultiply(const FieldMatrix &) const;
        ::org::hipparchus::FieldElement walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor &) const;
        ::org::hipparchus::FieldElement walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor &) const;
        ::org::hipparchus::FieldElement walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor &, jint, jint, jint, jint) const;
        ::org::hipparchus::FieldElement walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor &, jint, jint, jint, jint) const;
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
      extern PyType_Def PY_TYPE_DEF(FieldMatrix);
      extern PyTypeObject *PY_TYPE(FieldMatrix);

      class t_FieldMatrix {
      public:
        PyObject_HEAD
        FieldMatrix object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldMatrix *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldMatrix&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldMatrix&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
