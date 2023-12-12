#ifndef org_hipparchus_linear_AbstractRealMatrix_H
#define org_hipparchus_linear_AbstractRealMatrix_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrixChangingVisitor;
      class RealMatrixPreservingVisitor;
      class RealMatrix;
      class RealVector;
      class RealLinearOperator;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
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
          mid_add_340b47d21842d02c,
          mid_addToEntry_754312f3734d6e2f,
          mid_copy_70a207fcbc031df2,
          mid_copySubMatrix_d61768f3ffd9b2b0,
          mid_copySubMatrix_275b967e785238bf,
          mid_createMatrix_e8546415f980523f,
          mid_equals_221e8e85cb385209,
          mid_getColumn_1da5c9e77f24f269,
          mid_getColumnDimension_412668abc8d889e9,
          mid_getColumnMatrix_aec3de0a701ae468,
          mid_getColumnVector_2a32cae841870443,
          mid_getData_8cf5267aa13a77f3,
          mid_getEntry_21b81d54c06b64b0,
          mid_getFrobeniusNorm_557b8123390d8d0c,
          mid_getRow_1da5c9e77f24f269,
          mid_getRowDimension_412668abc8d889e9,
          mid_getRowMatrix_aec3de0a701ae468,
          mid_getRowVector_2a32cae841870443,
          mid_getSubMatrix_5948417ecf6c62f4,
          mid_getSubMatrix_dd66ee2a79d86a98,
          mid_getTrace_557b8123390d8d0c,
          mid_hashCode_412668abc8d889e9,
          mid_isSquare_89b302893bdbe1f1,
          mid_multiply_340b47d21842d02c,
          mid_multiplyEntry_754312f3734d6e2f,
          mid_operate_1db7c087750eaffe,
          mid_operate_342d5b01463e0dc5,
          mid_power_aec3de0a701ae468,
          mid_preMultiply_1db7c087750eaffe,
          mid_preMultiply_342d5b01463e0dc5,
          mid_preMultiply_340b47d21842d02c,
          mid_scalarAdd_e95e381257af03e9,
          mid_scalarMultiply_e95e381257af03e9,
          mid_setColumn_3246bd31f432242d,
          mid_setColumnMatrix_4fd5e02248c1a963,
          mid_setColumnVector_a967cf1fffd0038f,
          mid_setEntry_754312f3734d6e2f,
          mid_setRow_3246bd31f432242d,
          mid_setRowMatrix_4fd5e02248c1a963,
          mid_setRowVector_a967cf1fffd0038f,
          mid_setSubMatrix_672f554eb45cea1a,
          mid_subtract_340b47d21842d02c,
          mid_toString_3cffd47377eca18a,
          mid_transpose_70a207fcbc031df2,
          mid_walkInColumnOrder_f151009359824fc3,
          mid_walkInColumnOrder_3f821bf796d1a7b4,
          mid_walkInColumnOrder_ab19ce00fffb9224,
          mid_walkInColumnOrder_b64b35af60f84c7f,
          mid_walkInOptimizedOrder_f151009359824fc3,
          mid_walkInOptimizedOrder_3f821bf796d1a7b4,
          mid_walkInOptimizedOrder_ab19ce00fffb9224,
          mid_walkInOptimizedOrder_b64b35af60f84c7f,
          mid_walkInRowOrder_f151009359824fc3,
          mid_walkInRowOrder_3f821bf796d1a7b4,
          mid_walkInRowOrder_ab19ce00fffb9224,
          mid_walkInRowOrder_b64b35af60f84c7f,
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
