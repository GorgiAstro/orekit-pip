#ifndef org_hipparchus_linear_RealMatrix_H
#define org_hipparchus_linear_RealMatrix_H

#include "org/hipparchus/linear/AnyMatrix.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrixChangingVisitor;
      class RealMatrixPreservingVisitor;
      class RealMatrix;
      class RealVector;
    }
    namespace util {
      class Blendable;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
    }
    namespace analysis {
      class UnivariateFunction;
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

      class RealMatrix : public ::org::hipparchus::linear::AnyMatrix {
       public:
        enum {
          mid_add_5a8a8185eb309db7,
          mid_addToEntry_e98d7b3e971b6087,
          mid_blendArithmeticallyWith_c42beb313d38e65e,
          mid_copy_b2eebabce70526d8,
          mid_copySubMatrix_eeaa7ca2223e42ad,
          mid_copySubMatrix_d53a95949cb9e95d,
          mid_createMatrix_afc0d8087db42fe7,
          mid_getColumn_81add9fc9d78d5b9,
          mid_getColumnMatrix_ef7bea65e8e6eaaa,
          mid_getColumnVector_2ea477ed14744e74,
          mid_getData_eda3f19b8225f78f,
          mid_getEntry_6d920aab27f0a3d2,
          mid_getFrobeniusNorm_9981f74b2d109da6,
          mid_getNorm1_9981f74b2d109da6,
          mid_getNormInfty_9981f74b2d109da6,
          mid_getRow_81add9fc9d78d5b9,
          mid_getRowMatrix_ef7bea65e8e6eaaa,
          mid_getRowVector_2ea477ed14744e74,
          mid_getSubMatrix_94a006d49812ec14,
          mid_getSubMatrix_a064070b1670e8d8,
          mid_getTrace_9981f74b2d109da6,
          mid_map_55998ea72d2e3bcf,
          mid_mapToSelf_55998ea72d2e3bcf,
          mid_multiply_5a8a8185eb309db7,
          mid_multiplyEntry_e98d7b3e971b6087,
          mid_multiplyTransposed_5a8a8185eb309db7,
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
          mid_transpose_b2eebabce70526d8,
          mid_transposeMultiply_5a8a8185eb309db7,
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

        explicit RealMatrix(jobject obj) : ::org::hipparchus::linear::AnyMatrix(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        RealMatrix(const RealMatrix& obj) : ::org::hipparchus::linear::AnyMatrix(obj) {}

        RealMatrix add(const RealMatrix &) const;
        void addToEntry(jint, jint, jdouble) const;
        RealMatrix blendArithmeticallyWith(const RealMatrix &, jdouble) const;
        RealMatrix copy() const;
        void copySubMatrix(const JArray< jint > &, const JArray< jint > &, const JArray< JArray< jdouble > > &) const;
        void copySubMatrix(jint, jint, jint, jint, const JArray< JArray< jdouble > > &) const;
        RealMatrix createMatrix(jint, jint) const;
        JArray< jdouble > getColumn(jint) const;
        RealMatrix getColumnMatrix(jint) const;
        ::org::hipparchus::linear::RealVector getColumnVector(jint) const;
        JArray< JArray< jdouble > > getData() const;
        jdouble getEntry(jint, jint) const;
        jdouble getFrobeniusNorm() const;
        jdouble getNorm1() const;
        jdouble getNormInfty() const;
        JArray< jdouble > getRow(jint) const;
        RealMatrix getRowMatrix(jint) const;
        ::org::hipparchus::linear::RealVector getRowVector(jint) const;
        RealMatrix getSubMatrix(const JArray< jint > &, const JArray< jint > &) const;
        RealMatrix getSubMatrix(jint, jint, jint, jint) const;
        jdouble getTrace() const;
        RealMatrix map(const ::org::hipparchus::analysis::UnivariateFunction &) const;
        RealMatrix mapToSelf(const ::org::hipparchus::analysis::UnivariateFunction &) const;
        RealMatrix multiply(const RealMatrix &) const;
        void multiplyEntry(jint, jint, jdouble) const;
        RealMatrix multiplyTransposed(const RealMatrix &) const;
        JArray< jdouble > operate(const JArray< jdouble > &) const;
        ::org::hipparchus::linear::RealVector operate(const ::org::hipparchus::linear::RealVector &) const;
        RealMatrix power(jint) const;
        JArray< jdouble > preMultiply(const JArray< jdouble > &) const;
        ::org::hipparchus::linear::RealVector preMultiply(const ::org::hipparchus::linear::RealVector &) const;
        RealMatrix preMultiply(const RealMatrix &) const;
        RealMatrix scalarAdd(jdouble) const;
        RealMatrix scalarMultiply(jdouble) const;
        void setColumn(jint, const JArray< jdouble > &) const;
        void setColumnMatrix(jint, const RealMatrix &) const;
        void setColumnVector(jint, const ::org::hipparchus::linear::RealVector &) const;
        void setEntry(jint, jint, jdouble) const;
        void setRow(jint, const JArray< jdouble > &) const;
        void setRowMatrix(jint, const RealMatrix &) const;
        void setRowVector(jint, const ::org::hipparchus::linear::RealVector &) const;
        void setSubMatrix(const JArray< JArray< jdouble > > &, jint, jint) const;
        RealMatrix subtract(const RealMatrix &) const;
        RealMatrix transpose() const;
        RealMatrix transposeMultiply(const RealMatrix &) const;
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
      extern PyType_Def PY_TYPE_DEF(RealMatrix);
      extern PyTypeObject *PY_TYPE(RealMatrix);

      class t_RealMatrix {
      public:
        PyObject_HEAD
        RealMatrix object;
        static PyObject *wrap_Object(const RealMatrix&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
