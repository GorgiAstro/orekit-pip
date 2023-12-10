#ifndef org_hipparchus_linear_AbstractRealMatrix_H
#define org_hipparchus_linear_AbstractRealMatrix_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealLinearOperator;
      class RealMatrixChangingVisitor;
      class RealMatrix;
      class RealVector;
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
          mid_add_e9b72403ad502221,
          mid_addToEntry_1506189166690b5e,
          mid_copy_688b496048ff947b,
          mid_copySubMatrix_345c5b715074805a,
          mid_copySubMatrix_afcb8e0873730b97,
          mid_createMatrix_4410ec92987b66e9,
          mid_equals_65c7d273e80d497a,
          mid_getColumn_abe82da4f5c7c981,
          mid_getColumnDimension_570ce0828f81a2c1,
          mid_getColumnMatrix_7b5d3ee1211255a1,
          mid_getColumnVector_b686e6fcbf82678b,
          mid_getData_0358d8ea02f2cdb1,
          mid_getEntry_dbbe5f05149dbf73,
          mid_getFrobeniusNorm_dff5885c2c873297,
          mid_getRow_abe82da4f5c7c981,
          mid_getRowDimension_570ce0828f81a2c1,
          mid_getRowMatrix_7b5d3ee1211255a1,
          mid_getRowVector_b686e6fcbf82678b,
          mid_getSubMatrix_d608c12827b9e76d,
          mid_getSubMatrix_d08295af63465f00,
          mid_getTrace_dff5885c2c873297,
          mid_hashCode_570ce0828f81a2c1,
          mid_isSquare_b108b35ef48e27bd,
          mid_multiply_e9b72403ad502221,
          mid_multiplyEntry_1506189166690b5e,
          mid_operate_ac3d742ccc742f22,
          mid_operate_613347e28dd909cd,
          mid_power_7b5d3ee1211255a1,
          mid_preMultiply_ac3d742ccc742f22,
          mid_preMultiply_613347e28dd909cd,
          mid_preMultiply_e9b72403ad502221,
          mid_scalarAdd_f21dcd9464c6e3c5,
          mid_scalarMultiply_f21dcd9464c6e3c5,
          mid_setColumn_7169a8c8a60b8b2c,
          mid_setColumnMatrix_7f7e7105aa2a1ac1,
          mid_setColumnVector_18388821294f273e,
          mid_setEntry_1506189166690b5e,
          mid_setRow_7169a8c8a60b8b2c,
          mid_setRowMatrix_7f7e7105aa2a1ac1,
          mid_setRowVector_18388821294f273e,
          mid_setSubMatrix_f92f0755fea39af9,
          mid_subtract_e9b72403ad502221,
          mid_toString_11b109bd155ca898,
          mid_transpose_688b496048ff947b,
          mid_walkInColumnOrder_3e071bd337c0da4c,
          mid_walkInColumnOrder_b19c1ac2d3fe7eca,
          mid_walkInColumnOrder_62bd065f6938d976,
          mid_walkInColumnOrder_ab29bef5e0849364,
          mid_walkInOptimizedOrder_3e071bd337c0da4c,
          mid_walkInOptimizedOrder_b19c1ac2d3fe7eca,
          mid_walkInOptimizedOrder_62bd065f6938d976,
          mid_walkInOptimizedOrder_ab29bef5e0849364,
          mid_walkInRowOrder_3e071bd337c0da4c,
          mid_walkInRowOrder_b19c1ac2d3fe7eca,
          mid_walkInRowOrder_62bd065f6938d976,
          mid_walkInRowOrder_ab29bef5e0849364,
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
