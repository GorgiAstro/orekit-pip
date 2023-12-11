#ifndef org_hipparchus_linear_FieldMatrix_H
#define org_hipparchus_linear_FieldMatrix_H

#include "org/hipparchus/linear/AnyMatrix.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class FieldBlendable;
    }
    class FieldElement;
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
    }
    namespace linear {
      class FieldMatrixChangingVisitor;
      class FieldVector;
      class FieldMatrix;
      class FieldMatrixPreservingVisitor;
    }
    class Field;
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
          mid_add_60dc3401cb1a0936,
          mid_addToEntry_a6d8caed839ba827,
          mid_blendArithmeticallyWith_6205da4460d5ffa5,
          mid_copy_1d6b27621d7bea96,
          mid_copySubMatrix_34a2b695f72320ee,
          mid_copySubMatrix_37e94d303ae8db89,
          mid_createMatrix_f57999d9fe0fa8c7,
          mid_getColumn_5bf832a9d0c2a7e7,
          mid_getColumnMatrix_86145252a1591a99,
          mid_getColumnVector_6f1c886add96d5a0,
          mid_getData_7007d1e2762517a8,
          mid_getEntry_a7f16df0741fd579,
          mid_getField_20f98801541dcec1,
          mid_getRow_5bf832a9d0c2a7e7,
          mid_getRowMatrix_86145252a1591a99,
          mid_getRowVector_6f1c886add96d5a0,
          mid_getSubMatrix_827ce2a37cea418a,
          mid_getSubMatrix_455eec4445ba70d4,
          mid_getTrace_ce0470d468f80a56,
          mid_multiply_60dc3401cb1a0936,
          mid_multiplyEntry_a6d8caed839ba827,
          mid_multiplyTransposed_60dc3401cb1a0936,
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
          mid_transpose_1d6b27621d7bea96,
          mid_transposeMultiply_60dc3401cb1a0936,
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
