#ifndef org_hipparchus_linear_AbstractRealMatrix_H
#define org_hipparchus_linear_AbstractRealMatrix_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealLinearOperator;
      class RealMatrixChangingVisitor;
      class RealMatrixPreservingVisitor;
      class RealMatrix;
      class RealVector;
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
          mid_add_5a8a8185eb309db7,
          mid_addToEntry_e98d7b3e971b6087,
          mid_copy_b2eebabce70526d8,
          mid_copySubMatrix_eeaa7ca2223e42ad,
          mid_copySubMatrix_d53a95949cb9e95d,
          mid_createMatrix_afc0d8087db42fe7,
          mid_equals_72faff9b05f5ed5e,
          mid_getColumn_81add9fc9d78d5b9,
          mid_getColumnDimension_d6ab429752e7c267,
          mid_getColumnMatrix_ef7bea65e8e6eaaa,
          mid_getColumnVector_2ea477ed14744e74,
          mid_getData_eda3f19b8225f78f,
          mid_getEntry_6d920aab27f0a3d2,
          mid_getFrobeniusNorm_9981f74b2d109da6,
          mid_getRow_81add9fc9d78d5b9,
          mid_getRowDimension_d6ab429752e7c267,
          mid_getRowMatrix_ef7bea65e8e6eaaa,
          mid_getRowVector_2ea477ed14744e74,
          mid_getSubMatrix_94a006d49812ec14,
          mid_getSubMatrix_a064070b1670e8d8,
          mid_getTrace_9981f74b2d109da6,
          mid_hashCode_d6ab429752e7c267,
          mid_isSquare_eee3de00fe971136,
          mid_multiply_5a8a8185eb309db7,
          mid_multiplyEntry_e98d7b3e971b6087,
          mid_operate_51f624c89851da7e,
          mid_operate_bf8d75e459632544,
          mid_power_ef7bea65e8e6eaaa,
          mid_preMultiply_51f624c89851da7e,
          mid_preMultiply_bf8d75e459632544,
          mid_preMultiply_5a8a8185eb309db7,
          mid_scalarAdd_d5a7c13c36e5009c,
          mid_scalarMultiply_d5a7c13c36e5009c,
          mid_setColumn_9d367e34fba0a5ea,
          mid_setColumnMatrix_f7b5db2ddda2ff4c,
          mid_setColumnVector_543485b1a87e5329,
          mid_setEntry_e98d7b3e971b6087,
          mid_setRow_9d367e34fba0a5ea,
          mid_setRowMatrix_f7b5db2ddda2ff4c,
          mid_setRowVector_543485b1a87e5329,
          mid_setSubMatrix_5cc0a3799fec1dc7,
          mid_subtract_5a8a8185eb309db7,
          mid_toString_d2c8eb4129821f0e,
          mid_transpose_b2eebabce70526d8,
          mid_walkInColumnOrder_a7758d3537e559f7,
          mid_walkInColumnOrder_5a884deb680e092c,
          mid_walkInColumnOrder_0c89eacb5543486a,
          mid_walkInColumnOrder_be1420f911d13599,
          mid_walkInOptimizedOrder_a7758d3537e559f7,
          mid_walkInOptimizedOrder_5a884deb680e092c,
          mid_walkInOptimizedOrder_0c89eacb5543486a,
          mid_walkInOptimizedOrder_be1420f911d13599,
          mid_walkInRowOrder_a7758d3537e559f7,
          mid_walkInRowOrder_5a884deb680e092c,
          mid_walkInRowOrder_0c89eacb5543486a,
          mid_walkInRowOrder_be1420f911d13599,
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
