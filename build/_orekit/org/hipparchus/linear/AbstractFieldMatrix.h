#ifndef org_hipparchus_linear_AbstractFieldMatrix_H
#define org_hipparchus_linear_AbstractFieldMatrix_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    namespace linear {
      class FieldMatrixPreservingVisitor;
      class FieldMatrixChangingVisitor;
      class FieldMatrix;
      class FieldVector;
    }
    class Field;
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
          mid_add_1409f31dc074a11f,
          mid_addToEntry_d302e4fbc652587d,
          mid_copy_c992983685c753c5,
          mid_copySubMatrix_7a58809e5177d242,
          mid_copySubMatrix_66401962bb2535a8,
          mid_createMatrix_5d35d650870a3dcb,
          mid_equals_65c7d273e80d497a,
          mid_getColumn_b21ddf58698298c0,
          mid_getColumnDimension_570ce0828f81a2c1,
          mid_getColumnMatrix_d85895e9fba6ff1d,
          mid_getColumnVector_819edc89e6437565,
          mid_getData_75f68840bec35355,
          mid_getEntry_ef29faa67be274b8,
          mid_getField_5b28be2d3632a5dc,
          mid_getRow_b21ddf58698298c0,
          mid_getRowDimension_570ce0828f81a2c1,
          mid_getRowMatrix_d85895e9fba6ff1d,
          mid_getRowVector_819edc89e6437565,
          mid_getSubMatrix_ccd02e1d2a8268ce,
          mid_getSubMatrix_1033b0d2443c0299,
          mid_getTrace_99097cb60cf2d774,
          mid_hashCode_570ce0828f81a2c1,
          mid_isSquare_b108b35ef48e27bd,
          mid_multiply_1409f31dc074a11f,
          mid_multiplyEntry_d302e4fbc652587d,
          mid_operate_91d3c6b4d1752243,
          mid_operate_a657ce460dba8c79,
          mid_power_d85895e9fba6ff1d,
          mid_preMultiply_91d3c6b4d1752243,
          mid_preMultiply_1409f31dc074a11f,
          mid_preMultiply_a657ce460dba8c79,
          mid_scalarAdd_57b87e024c8cac75,
          mid_scalarMultiply_57b87e024c8cac75,
          mid_setColumn_baf264dbcc1722ae,
          mid_setColumnMatrix_1fbbd8b62d351fe3,
          mid_setColumnVector_0c5a38a1f7c3f4d4,
          mid_setEntry_d302e4fbc652587d,
          mid_setRow_baf264dbcc1722ae,
          mid_setRowMatrix_1fbbd8b62d351fe3,
          mid_setRowVector_0c5a38a1f7c3f4d4,
          mid_setSubMatrix_e8cdaf624d2bb79a,
          mid_subtract_1409f31dc074a11f,
          mid_toString_11b109bd155ca898,
          mid_transpose_c992983685c753c5,
          mid_walkInColumnOrder_624c889f4088e148,
          mid_walkInColumnOrder_26ed18f15f4bb370,
          mid_walkInColumnOrder_c4e69fc23be9a0d2,
          mid_walkInColumnOrder_7aa3cb5fccfebf0e,
          mid_walkInOptimizedOrder_624c889f4088e148,
          mid_walkInOptimizedOrder_26ed18f15f4bb370,
          mid_walkInOptimizedOrder_c4e69fc23be9a0d2,
          mid_walkInOptimizedOrder_7aa3cb5fccfebf0e,
          mid_walkInRowOrder_624c889f4088e148,
          mid_walkInRowOrder_26ed18f15f4bb370,
          mid_walkInRowOrder_c4e69fc23be9a0d2,
          mid_walkInRowOrder_7aa3cb5fccfebf0e,
          mid_checkAdditionCompatible_3c6edf548344b9f0,
          mid_checkMultiplicationCompatible_3c6edf548344b9f0,
          mid_checkRowIndex_99803b0791f320ff,
          mid_checkColumnIndex_99803b0791f320ff,
          mid_checkSubtractionCompatible_3c6edf548344b9f0,
          mid_checkSubMatrixIndex_b091d33670ea17ab,
          mid_checkSubMatrixIndex_f7a99d2369864910,
          mid_extractField_863b98f1c9cc720d,
          mid_extractField_4c041f550098e429,
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
