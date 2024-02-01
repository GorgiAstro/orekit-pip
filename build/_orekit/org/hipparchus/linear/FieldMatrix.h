#ifndef org_hipparchus_linear_FieldMatrix_H
#define org_hipparchus_linear_FieldMatrix_H

#include "org/hipparchus/linear/AnyMatrix.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class FieldMatrixChangingVisitor;
      class FieldMatrix;
      class FieldMatrixPreservingVisitor;
      class FieldVector;
    }
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    class Field;
    class FieldElement;
    namespace util {
      class FieldBlendable;
    }
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
          mid_add_b180f987191970ad,
          mid_addToEntry_8de38856a6ebea36,
          mid_blendArithmeticallyWith_11335d64cc69752f,
          mid_copy_02883dbbe5db44ac,
          mid_copySubMatrix_fdff770d906e9d35,
          mid_copySubMatrix_8a7c61f1af16bed4,
          mid_createMatrix_71a6a4df501a3e03,
          mid_getColumn_9410bfc023ff0ee6,
          mid_getColumnMatrix_338ea041dc2f9292,
          mid_getColumnVector_229c51f1f7aa44e3,
          mid_getData_5d4bb4c2b3c3b853,
          mid_getEntry_a81b5a6b0760a7e3,
          mid_getField_577649682b9910c1,
          mid_getRow_9410bfc023ff0ee6,
          mid_getRowMatrix_338ea041dc2f9292,
          mid_getRowVector_229c51f1f7aa44e3,
          mid_getSubMatrix_9ff0154dcafe800b,
          mid_getSubMatrix_1acf4e5d8c70f8c1,
          mid_getTrace_f6328613456309a1,
          mid_multiply_b180f987191970ad,
          mid_multiplyEntry_8de38856a6ebea36,
          mid_multiplyTransposed_b180f987191970ad,
          mid_operate_da4e13f241d172b2,
          mid_operate_17fc5256c635037d,
          mid_power_338ea041dc2f9292,
          mid_preMultiply_da4e13f241d172b2,
          mid_preMultiply_b180f987191970ad,
          mid_preMultiply_17fc5256c635037d,
          mid_scalarAdd_8a90f00b11f69825,
          mid_scalarMultiply_8a90f00b11f69825,
          mid_setColumn_1d7c60cf27d9f179,
          mid_setColumnMatrix_87d8f99edb7a39ea,
          mid_setColumnVector_9f6a0cf723c2763b,
          mid_setEntry_8de38856a6ebea36,
          mid_setRow_1d7c60cf27d9f179,
          mid_setRowMatrix_87d8f99edb7a39ea,
          mid_setRowVector_9f6a0cf723c2763b,
          mid_setSubMatrix_24d277c6faa30a04,
          mid_subtract_b180f987191970ad,
          mid_transpose_02883dbbe5db44ac,
          mid_transposeMultiply_b180f987191970ad,
          mid_walkInColumnOrder_9511e2a4670e260a,
          mid_walkInColumnOrder_718adedab84e4562,
          mid_walkInColumnOrder_4e13f6cf4599797e,
          mid_walkInColumnOrder_8e3632311c5af3b6,
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
