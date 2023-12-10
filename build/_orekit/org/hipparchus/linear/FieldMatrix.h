#ifndef org_hipparchus_linear_FieldMatrix_H
#define org_hipparchus_linear_FieldMatrix_H

#include "org/hipparchus/linear/AnyMatrix.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    namespace util {
      class FieldBlendable;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class FieldMatrix : public ::org::hipparchus::linear::AnyMatrix {
       public:
        enum {
          mid_add_1409f31dc074a11f,
          mid_addToEntry_d302e4fbc652587d,
          mid_blendArithmeticallyWith_fd638641ec5d7a5a,
          mid_copy_c992983685c753c5,
          mid_copySubMatrix_7a58809e5177d242,
          mid_copySubMatrix_66401962bb2535a8,
          mid_createMatrix_5d35d650870a3dcb,
          mid_getColumn_b21ddf58698298c0,
          mid_getColumnMatrix_d85895e9fba6ff1d,
          mid_getColumnVector_819edc89e6437565,
          mid_getData_75f68840bec35355,
          mid_getEntry_ef29faa67be274b8,
          mid_getField_5b28be2d3632a5dc,
          mid_getRow_b21ddf58698298c0,
          mid_getRowMatrix_d85895e9fba6ff1d,
          mid_getRowVector_819edc89e6437565,
          mid_getSubMatrix_ccd02e1d2a8268ce,
          mid_getSubMatrix_1033b0d2443c0299,
          mid_getTrace_99097cb60cf2d774,
          mid_multiply_1409f31dc074a11f,
          mid_multiplyEntry_d302e4fbc652587d,
          mid_multiplyTransposed_1409f31dc074a11f,
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
          mid_transpose_c992983685c753c5,
          mid_transposeMultiply_1409f31dc074a11f,
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
