#ifndef org_hipparchus_linear_AbstractFieldMatrix_H
#define org_hipparchus_linear_AbstractFieldMatrix_H

#include "java/lang/Object.h"

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
          mid_add_b180f987191970ad,
          mid_addToEntry_8de38856a6ebea36,
          mid_copy_02883dbbe5db44ac,
          mid_copySubMatrix_fdff770d906e9d35,
          mid_copySubMatrix_8a7c61f1af16bed4,
          mid_createMatrix_71a6a4df501a3e03,
          mid_equals_72faff9b05f5ed5e,
          mid_getColumn_9410bfc023ff0ee6,
          mid_getColumnDimension_d6ab429752e7c267,
          mid_getColumnMatrix_338ea041dc2f9292,
          mid_getColumnVector_229c51f1f7aa44e3,
          mid_getData_5d4bb4c2b3c3b853,
          mid_getEntry_a81b5a6b0760a7e3,
          mid_getField_577649682b9910c1,
          mid_getRow_9410bfc023ff0ee6,
          mid_getRowDimension_d6ab429752e7c267,
          mid_getRowMatrix_338ea041dc2f9292,
          mid_getRowVector_229c51f1f7aa44e3,
          mid_getSubMatrix_9ff0154dcafe800b,
          mid_getSubMatrix_1acf4e5d8c70f8c1,
          mid_getTrace_f6328613456309a1,
          mid_hashCode_d6ab429752e7c267,
          mid_isSquare_eee3de00fe971136,
          mid_multiply_b180f987191970ad,
          mid_multiplyEntry_8de38856a6ebea36,
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
          mid_toString_d2c8eb4129821f0e,
          mid_transpose_02883dbbe5db44ac,
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
          mid_checkMultiplicationCompatible_87e4c06eff884f7d,
          mid_checkRowIndex_8fd427ab23829bf5,
          mid_checkColumnIndex_8fd427ab23829bf5,
          mid_checkSubMatrixIndex_6e41e5beb7528b4b,
          mid_checkSubMatrixIndex_bad5463a48cbddf0,
          mid_checkAdditionCompatible_87e4c06eff884f7d,
          mid_checkSubtractionCompatible_87e4c06eff884f7d,
          mid_extractField_794f62224fd08271,
          mid_extractField_abe4b1c7aee06125,
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
