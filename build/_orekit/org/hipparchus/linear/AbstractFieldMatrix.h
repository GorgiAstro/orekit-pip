#ifndef org_hipparchus_linear_AbstractFieldMatrix_H
#define org_hipparchus_linear_AbstractFieldMatrix_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
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
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class AbstractFieldMatrix : public ::java::lang::Object {
       public:
        enum {
          mid_add_311c21c57522a65c,
          mid_addToEntry_8c5ca78361f003c1,
          mid_copy_cc77900a647586cf,
          mid_copySubMatrix_1e209a76a9d04b27,
          mid_copySubMatrix_4400509b3e197e37,
          mid_createMatrix_8e5837651d169cc8,
          mid_equals_229c87223f486349,
          mid_getColumn_d29eb5ffff4844ca,
          mid_getColumnDimension_f2f64475e4580546,
          mid_getColumnMatrix_cb8ea5461f14f705,
          mid_getColumnVector_61bcfe594fe45427,
          mid_getData_6ccec7d54d4aa14e,
          mid_getEntry_e4e0a9e5376069de,
          mid_getField_70b4bbd3fa378d6b,
          mid_getRow_d29eb5ffff4844ca,
          mid_getRowDimension_f2f64475e4580546,
          mid_getRowMatrix_cb8ea5461f14f705,
          mid_getRowVector_61bcfe594fe45427,
          mid_getSubMatrix_302187aa0259985a,
          mid_getSubMatrix_05948e8f73a5c897,
          mid_getTrace_7e89936bdf79375b,
          mid_hashCode_f2f64475e4580546,
          mid_isSquare_e470b6d9e0d979db,
          mid_multiply_311c21c57522a65c,
          mid_multiplyEntry_8c5ca78361f003c1,
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
          mid_toString_0090f7797e403f43,
          mid_transpose_cc77900a647586cf,
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
          mid_checkAdditionCompatible_3e03971cd3efa337,
          mid_checkSubtractionCompatible_3e03971cd3efa337,
          mid_checkMultiplicationCompatible_3e03971cd3efa337,
          mid_checkSubMatrixIndex_554afe894346d53f,
          mid_checkSubMatrixIndex_fb1ccf2a5678b26e,
          mid_checkRowIndex_0a2a1ac2721c0336,
          mid_checkColumnIndex_0a2a1ac2721c0336,
          mid_extractField_a1d86eabf92290a4,
          mid_extractField_ed77e104ffd431b6,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AbstractFieldMatrix(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AbstractFieldMatrix(const AbstractFieldMatrix& obj) : ::java::lang::Object(obj) {}

        ::org::hipparchus::linear::FieldMatrix add(const ::org::hipparchus::linear::FieldMatrix &) const;
        void addToEntry(jint, jint, const ::org::hipparchus::FieldElement &) const;
        ::org::hipparchus::linear::FieldMatrix copy() const;
        void copySubMatrix(const JArray< jint > &, const JArray< jint > &, const JArray< JArray< ::org::hipparchus::FieldElement > > &) const;
        void copySubMatrix(jint, jint, jint, jint, const JArray< JArray< ::org::hipparchus::FieldElement > > &) const;
        ::org::hipparchus::linear::FieldMatrix createMatrix(jint, jint) const;
        jboolean equals(const ::java::lang::Object &) const;
        JArray< ::org::hipparchus::FieldElement > getColumn(jint) const;
        jint getColumnDimension() const;
        ::org::hipparchus::linear::FieldMatrix getColumnMatrix(jint) const;
        ::org::hipparchus::linear::FieldVector getColumnVector(jint) const;
        JArray< JArray< ::org::hipparchus::FieldElement > > getData() const;
        ::org::hipparchus::FieldElement getEntry(jint, jint) const;
        ::org::hipparchus::Field getField() const;
        JArray< ::org::hipparchus::FieldElement > getRow(jint) const;
        jint getRowDimension() const;
        ::org::hipparchus::linear::FieldMatrix getRowMatrix(jint) const;
        ::org::hipparchus::linear::FieldVector getRowVector(jint) const;
        ::org::hipparchus::linear::FieldMatrix getSubMatrix(const JArray< jint > &, const JArray< jint > &) const;
        ::org::hipparchus::linear::FieldMatrix getSubMatrix(jint, jint, jint, jint) const;
        ::org::hipparchus::FieldElement getTrace() const;
        jint hashCode() const;
        jboolean isSquare() const;
        ::org::hipparchus::linear::FieldMatrix multiply(const ::org::hipparchus::linear::FieldMatrix &) const;
        void multiplyEntry(jint, jint, const ::org::hipparchus::FieldElement &) const;
        JArray< ::org::hipparchus::FieldElement > operate(const JArray< ::org::hipparchus::FieldElement > &) const;
        ::org::hipparchus::linear::FieldVector operate(const ::org::hipparchus::linear::FieldVector &) const;
        ::org::hipparchus::linear::FieldMatrix power(jint) const;
        JArray< ::org::hipparchus::FieldElement > preMultiply(const JArray< ::org::hipparchus::FieldElement > &) const;
        ::org::hipparchus::linear::FieldMatrix preMultiply(const ::org::hipparchus::linear::FieldMatrix &) const;
        ::org::hipparchus::linear::FieldVector preMultiply(const ::org::hipparchus::linear::FieldVector &) const;
        ::org::hipparchus::linear::FieldMatrix scalarAdd(const ::org::hipparchus::FieldElement &) const;
        ::org::hipparchus::linear::FieldMatrix scalarMultiply(const ::org::hipparchus::FieldElement &) const;
        void setColumn(jint, const JArray< ::org::hipparchus::FieldElement > &) const;
        void setColumnMatrix(jint, const ::org::hipparchus::linear::FieldMatrix &) const;
        void setColumnVector(jint, const ::org::hipparchus::linear::FieldVector &) const;
        void setEntry(jint, jint, const ::org::hipparchus::FieldElement &) const;
        void setRow(jint, const JArray< ::org::hipparchus::FieldElement > &) const;
        void setRowMatrix(jint, const ::org::hipparchus::linear::FieldMatrix &) const;
        void setRowVector(jint, const ::org::hipparchus::linear::FieldVector &) const;
        void setSubMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > &, jint, jint) const;
        ::org::hipparchus::linear::FieldMatrix subtract(const ::org::hipparchus::linear::FieldMatrix &) const;
        ::java::lang::String toString() const;
        ::org::hipparchus::linear::FieldMatrix transpose() const;
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
      extern PyType_Def PY_TYPE_DEF(AbstractFieldMatrix);
      extern PyTypeObject *PY_TYPE(AbstractFieldMatrix);

      class t_AbstractFieldMatrix {
      public:
        PyObject_HEAD
        AbstractFieldMatrix object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_AbstractFieldMatrix *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const AbstractFieldMatrix&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const AbstractFieldMatrix&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
