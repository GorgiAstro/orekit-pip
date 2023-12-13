#ifndef org_hipparchus_linear_AbstractRealMatrix_H
#define org_hipparchus_linear_AbstractRealMatrix_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    namespace linear {
      class RealMatrixChangingVisitor;
      class RealMatrixPreservingVisitor;
      class RealLinearOperator;
      class RealVector;
      class RealMatrix;
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
          mid_add_be124f4006dc9f69,
          mid_addToEntry_94fe8d9ffeb50676,
          mid_copy_f77d745f2128c391,
          mid_copySubMatrix_c11e3fd762bd0fee,
          mid_copySubMatrix_ac682e6a44042af2,
          mid_createMatrix_28a444e31666746c,
          mid_equals_460c5e2d9d51c6cc,
          mid_getColumn_bb2a44a76ad252f7,
          mid_getColumnDimension_55546ef6a647f39b,
          mid_getColumnMatrix_2a3e0c79a1b41fe4,
          mid_getColumnVector_b50dc3915c68ddbc,
          mid_getData_3b7b373db8e7887f,
          mid_getEntry_cad98089d00f8a5b,
          mid_getFrobeniusNorm_b74f83833fdad017,
          mid_getRow_bb2a44a76ad252f7,
          mid_getRowDimension_55546ef6a647f39b,
          mid_getRowMatrix_2a3e0c79a1b41fe4,
          mid_getRowVector_b50dc3915c68ddbc,
          mid_getSubMatrix_c330dd232db3f25c,
          mid_getSubMatrix_f6333def4d085867,
          mid_getTrace_b74f83833fdad017,
          mid_hashCode_55546ef6a647f39b,
          mid_isSquare_9ab94ac1dc23b105,
          mid_multiply_be124f4006dc9f69,
          mid_multiplyEntry_94fe8d9ffeb50676,
          mid_operate_14dee4cb8cc3e959,
          mid_operate_d5f1d017fd25113b,
          mid_power_2a3e0c79a1b41fe4,
          mid_preMultiply_14dee4cb8cc3e959,
          mid_preMultiply_d5f1d017fd25113b,
          mid_preMultiply_be124f4006dc9f69,
          mid_scalarAdd_f5dd9d6021dc9dae,
          mid_scalarMultiply_f5dd9d6021dc9dae,
          mid_setColumn_75061e5f5bbace93,
          mid_setColumnMatrix_74dda270996520c8,
          mid_setColumnVector_9fe1e9c5bee9d07c,
          mid_setEntry_94fe8d9ffeb50676,
          mid_setRow_75061e5f5bbace93,
          mid_setRowMatrix_74dda270996520c8,
          mid_setRowVector_9fe1e9c5bee9d07c,
          mid_setSubMatrix_f12104c26dcf5b23,
          mid_subtract_be124f4006dc9f69,
          mid_toString_1c1fa1e935d6cdcf,
          mid_transpose_f77d745f2128c391,
          mid_walkInColumnOrder_e9eacc024b91638e,
          mid_walkInColumnOrder_8c777cbbebb3f320,
          mid_walkInColumnOrder_7a8f404d3cc13545,
          mid_walkInColumnOrder_0efcec2037689a79,
          mid_walkInOptimizedOrder_e9eacc024b91638e,
          mid_walkInOptimizedOrder_8c777cbbebb3f320,
          mid_walkInOptimizedOrder_7a8f404d3cc13545,
          mid_walkInOptimizedOrder_0efcec2037689a79,
          mid_walkInRowOrder_e9eacc024b91638e,
          mid_walkInRowOrder_8c777cbbebb3f320,
          mid_walkInRowOrder_7a8f404d3cc13545,
          mid_walkInRowOrder_0efcec2037689a79,
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
