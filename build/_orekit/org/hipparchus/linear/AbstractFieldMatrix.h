#ifndef org_hipparchus_linear_AbstractFieldMatrix_H
#define org_hipparchus_linear_AbstractFieldMatrix_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class FieldElement;
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
    }
    class Field;
    namespace linear {
      class FieldMatrixChangingVisitor;
      class FieldVector;
      class FieldMatrix;
      class FieldMatrixPreservingVisitor;
    }
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
          mid_add_60dc3401cb1a0936,
          mid_addToEntry_a6d8caed839ba827,
          mid_copy_1d6b27621d7bea96,
          mid_copySubMatrix_34a2b695f72320ee,
          mid_copySubMatrix_37e94d303ae8db89,
          mid_createMatrix_f57999d9fe0fa8c7,
          mid_equals_221e8e85cb385209,
          mid_getColumn_5bf832a9d0c2a7e7,
          mid_getColumnDimension_412668abc8d889e9,
          mid_getColumnMatrix_86145252a1591a99,
          mid_getColumnVector_6f1c886add96d5a0,
          mid_getData_7007d1e2762517a8,
          mid_getEntry_a7f16df0741fd579,
          mid_getField_20f98801541dcec1,
          mid_getRow_5bf832a9d0c2a7e7,
          mid_getRowDimension_412668abc8d889e9,
          mid_getRowMatrix_86145252a1591a99,
          mid_getRowVector_6f1c886add96d5a0,
          mid_getSubMatrix_827ce2a37cea418a,
          mid_getSubMatrix_455eec4445ba70d4,
          mid_getTrace_ce0470d468f80a56,
          mid_hashCode_412668abc8d889e9,
          mid_isSquare_89b302893bdbe1f1,
          mid_multiply_60dc3401cb1a0936,
          mid_multiplyEntry_a6d8caed839ba827,
          mid_operate_ee5975d9ac401b83,
          mid_operate_a7c6926a425759ad,
          mid_power_86145252a1591a99,
          mid_preMultiply_ee5975d9ac401b83,
          mid_preMultiply_60dc3401cb1a0936,
          mid_preMultiply_a7c6926a425759ad,
          mid_scalarAdd_59a8d7279b1a66f0,
          mid_scalarMultiply_59a8d7279b1a66f0,
          mid_setColumn_25fe2a3042ba75d1,
          mid_setColumnMatrix_82ae94aaf3c46d50,
          mid_setColumnVector_502f8ed205bebebd,
          mid_setEntry_a6d8caed839ba827,
          mid_setRow_25fe2a3042ba75d1,
          mid_setRowMatrix_82ae94aaf3c46d50,
          mid_setRowVector_502f8ed205bebebd,
          mid_setSubMatrix_7c2e1cd72b6eb4ce,
          mid_subtract_60dc3401cb1a0936,
          mid_toString_3cffd47377eca18a,
          mid_transpose_1d6b27621d7bea96,
          mid_walkInColumnOrder_7d4c76689ca2f3c1,
          mid_walkInColumnOrder_76fd1db3efda6447,
          mid_walkInColumnOrder_516fb751ccd95d3b,
          mid_walkInColumnOrder_e5d38b926487f1a5,
          mid_walkInOptimizedOrder_7d4c76689ca2f3c1,
          mid_walkInOptimizedOrder_76fd1db3efda6447,
          mid_walkInOptimizedOrder_516fb751ccd95d3b,
          mid_walkInOptimizedOrder_e5d38b926487f1a5,
          mid_walkInRowOrder_7d4c76689ca2f3c1,
          mid_walkInRowOrder_76fd1db3efda6447,
          mid_walkInRowOrder_516fb751ccd95d3b,
          mid_walkInRowOrder_e5d38b926487f1a5,
          mid_checkRowIndex_a3da1a935cb37f7b,
          mid_checkColumnIndex_a3da1a935cb37f7b,
          mid_checkSubMatrixIndex_eddd40a64ba0f5b7,
          mid_checkSubMatrixIndex_2f87d6c2a43180ff,
          mid_checkAdditionCompatible_33e6ddbf6bb140a5,
          mid_checkSubtractionCompatible_33e6ddbf6bb140a5,
          mid_checkMultiplicationCompatible_33e6ddbf6bb140a5,
          mid_extractField_07a3e36bf34488ec,
          mid_extractField_cfbbe03a826275fc,
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
