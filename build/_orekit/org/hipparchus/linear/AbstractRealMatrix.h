#ifndef org_hipparchus_linear_AbstractRealMatrix_H
#define org_hipparchus_linear_AbstractRealMatrix_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealVector;
      class RealMatrix;
      class RealMatrixChangingVisitor;
      class RealLinearOperator;
      class RealMatrixPreservingVisitor;
    }
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
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

      class AbstractRealMatrix : public ::java::lang::Object {
       public:
        enum {
          mid_add_e00cd33aedcc5bd0,
          mid_addToEntry_78e41e7b5124a628,
          mid_copy_7116bbecdd8ceb21,
          mid_copySubMatrix_9a9a0c9e43221c5a,
          mid_copySubMatrix_8f6f9022196ddb1c,
          mid_createMatrix_4225756160ad1bc1,
          mid_equals_229c87223f486349,
          mid_getColumn_eb9cceadce1b2217,
          mid_getColumnDimension_f2f64475e4580546,
          mid_getColumnMatrix_3a4716f77215ee99,
          mid_getColumnVector_2cafd1b18558ed5f,
          mid_getData_43de1192439efa92,
          mid_getEntry_a84e4ee1da3f1ab8,
          mid_getFrobeniusNorm_456d9a2f64d6b28d,
          mid_getRow_eb9cceadce1b2217,
          mid_getRowDimension_f2f64475e4580546,
          mid_getRowMatrix_3a4716f77215ee99,
          mid_getRowVector_2cafd1b18558ed5f,
          mid_getSubMatrix_6bdc980f8daf4737,
          mid_getSubMatrix_d4cd53a0b7898ff0,
          mid_getTrace_456d9a2f64d6b28d,
          mid_hashCode_f2f64475e4580546,
          mid_isSquare_e470b6d9e0d979db,
          mid_multiply_e00cd33aedcc5bd0,
          mid_multiplyEntry_78e41e7b5124a628,
          mid_operate_4b742fe429c22ba8,
          mid_operate_a3e626dfa1abd779,
          mid_power_3a4716f77215ee99,
          mid_preMultiply_4b742fe429c22ba8,
          mid_preMultiply_a3e626dfa1abd779,
          mid_preMultiply_e00cd33aedcc5bd0,
          mid_scalarAdd_2461b653ab91779b,
          mid_scalarMultiply_2461b653ab91779b,
          mid_setColumn_7d4f41c65056f174,
          mid_setColumnMatrix_8f1af6d535d298ec,
          mid_setColumnVector_dcd0f7fda5e9451c,
          mid_setEntry_78e41e7b5124a628,
          mid_setRow_7d4f41c65056f174,
          mid_setRowMatrix_8f1af6d535d298ec,
          mid_setRowVector_dcd0f7fda5e9451c,
          mid_setSubMatrix_a741cdd381e94792,
          mid_subtract_e00cd33aedcc5bd0,
          mid_toString_0090f7797e403f43,
          mid_transpose_7116bbecdd8ceb21,
          mid_walkInColumnOrder_340ddcf983c0c22e,
          mid_walkInColumnOrder_354ebbe7c685c961,
          mid_walkInColumnOrder_56223f2e9b79c5ad,
          mid_walkInColumnOrder_62551289056beecd,
          mid_walkInOptimizedOrder_340ddcf983c0c22e,
          mid_walkInOptimizedOrder_354ebbe7c685c961,
          mid_walkInOptimizedOrder_56223f2e9b79c5ad,
          mid_walkInOptimizedOrder_62551289056beecd,
          mid_walkInRowOrder_340ddcf983c0c22e,
          mid_walkInRowOrder_354ebbe7c685c961,
          mid_walkInRowOrder_56223f2e9b79c5ad,
          mid_walkInRowOrder_62551289056beecd,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AbstractRealMatrix(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AbstractRealMatrix(const AbstractRealMatrix& obj) : ::java::lang::Object(obj) {}

        ::org::hipparchus::linear::RealMatrix add(const ::org::hipparchus::linear::RealMatrix &) const;
        void addToEntry(jint, jint, jdouble) const;
        ::org::hipparchus::linear::RealMatrix copy() const;
        void copySubMatrix(const JArray< jint > &, const JArray< jint > &, const JArray< JArray< jdouble > > &) const;
        void copySubMatrix(jint, jint, jint, jint, const JArray< JArray< jdouble > > &) const;
        ::org::hipparchus::linear::RealMatrix createMatrix(jint, jint) const;
        jboolean equals(const ::java::lang::Object &) const;
        JArray< jdouble > getColumn(jint) const;
        jint getColumnDimension() const;
        ::org::hipparchus::linear::RealMatrix getColumnMatrix(jint) const;
        ::org::hipparchus::linear::RealVector getColumnVector(jint) const;
        JArray< JArray< jdouble > > getData() const;
        jdouble getEntry(jint, jint) const;
        jdouble getFrobeniusNorm() const;
        JArray< jdouble > getRow(jint) const;
        jint getRowDimension() const;
        ::org::hipparchus::linear::RealMatrix getRowMatrix(jint) const;
        ::org::hipparchus::linear::RealVector getRowVector(jint) const;
        ::org::hipparchus::linear::RealMatrix getSubMatrix(const JArray< jint > &, const JArray< jint > &) const;
        ::org::hipparchus::linear::RealMatrix getSubMatrix(jint, jint, jint, jint) const;
        jdouble getTrace() const;
        jint hashCode() const;
        jboolean isSquare() const;
        ::org::hipparchus::linear::RealMatrix multiply(const ::org::hipparchus::linear::RealMatrix &) const;
        void multiplyEntry(jint, jint, jdouble) const;
        JArray< jdouble > operate(const JArray< jdouble > &) const;
        ::org::hipparchus::linear::RealVector operate(const ::org::hipparchus::linear::RealVector &) const;
        ::org::hipparchus::linear::RealMatrix power(jint) const;
        JArray< jdouble > preMultiply(const JArray< jdouble > &) const;
        ::org::hipparchus::linear::RealVector preMultiply(const ::org::hipparchus::linear::RealVector &) const;
        ::org::hipparchus::linear::RealMatrix preMultiply(const ::org::hipparchus::linear::RealMatrix &) const;
        ::org::hipparchus::linear::RealMatrix scalarAdd(jdouble) const;
        ::org::hipparchus::linear::RealMatrix scalarMultiply(jdouble) const;
        void setColumn(jint, const JArray< jdouble > &) const;
        void setColumnMatrix(jint, const ::org::hipparchus::linear::RealMatrix &) const;
        void setColumnVector(jint, const ::org::hipparchus::linear::RealVector &) const;
        void setEntry(jint, jint, jdouble) const;
        void setRow(jint, const JArray< jdouble > &) const;
        void setRowMatrix(jint, const ::org::hipparchus::linear::RealMatrix &) const;
        void setRowVector(jint, const ::org::hipparchus::linear::RealVector &) const;
        void setSubMatrix(const JArray< JArray< jdouble > > &, jint, jint) const;
        ::org::hipparchus::linear::RealMatrix subtract(const ::org::hipparchus::linear::RealMatrix &) const;
        ::java::lang::String toString() const;
        ::org::hipparchus::linear::RealMatrix transpose() const;
        jdouble walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor &) const;
        jdouble walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor &) const;
        jdouble walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor &, jint, jint, jint, jint) const;
        jdouble walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor &, jint, jint, jint, jint) const;
        jdouble walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor &) const;
        jdouble walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor &) const;
        jdouble walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor &, jint, jint, jint, jint) const;
        jdouble walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor &, jint, jint, jint, jint) const;
        jdouble walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor &) const;
        jdouble walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor &) const;
        jdouble walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor &, jint, jint, jint, jint) const;
        jdouble walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor &, jint, jint, jint, jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(AbstractRealMatrix);
      extern PyTypeObject *PY_TYPE(AbstractRealMatrix);

      class t_AbstractRealMatrix {
      public:
        PyObject_HEAD
        AbstractRealMatrix object;
        static PyObject *wrap_Object(const AbstractRealMatrix&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
