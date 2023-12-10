#ifndef org_hipparchus_linear_Array2DRowRealMatrix_H
#define org_hipparchus_linear_Array2DRowRealMatrix_H

#include "org/hipparchus/linear/AbstractRealMatrix.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    namespace linear {
      class RealMatrixChangingVisitor;
      class Array2DRowRealMatrix;
      class RealMatrix;
      class RealMatrixPreservingVisitor;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class Array2DRowRealMatrix : public ::org::hipparchus::linear::AbstractRealMatrix {
       public:
        enum {
          mid_init$_0fa09c18fee449d5,
          mid_init$_fa9d415d19f69361,
          mid_init$_a0befc7f3dc19e41,
          mid_init$_eade0e830cb99555,
          mid_init$_6f37635c3285dbdf,
          mid_add_98f76adeb9727d30,
          mid_addToEntry_1506189166690b5e,
          mid_copy_688b496048ff947b,
          mid_createMatrix_4410ec92987b66e9,
          mid_getColumnDimension_570ce0828f81a2c1,
          mid_getData_0358d8ea02f2cdb1,
          mid_getDataRef_0358d8ea02f2cdb1,
          mid_getEntry_dbbe5f05149dbf73,
          mid_getRow_abe82da4f5c7c981,
          mid_getRowDimension_570ce0828f81a2c1,
          mid_getSubMatrix_d08295af63465f00,
          mid_kroneckerProduct_e9b72403ad502221,
          mid_multiply_98f76adeb9727d30,
          mid_multiplyEntry_1506189166690b5e,
          mid_multiplyTransposed_1c7eb3046609aeac,
          mid_multiplyTransposed_e9b72403ad502221,
          mid_operate_ac3d742ccc742f22,
          mid_preMultiply_ac3d742ccc742f22,
          mid_setEntry_1506189166690b5e,
          mid_setRow_7169a8c8a60b8b2c,
          mid_setSubMatrix_f92f0755fea39af9,
          mid_stack_688b496048ff947b,
          mid_subtract_98f76adeb9727d30,
          mid_transposeMultiply_1c7eb3046609aeac,
          mid_transposeMultiply_e9b72403ad502221,
          mid_unstackSquare_688b496048ff947b,
          mid_walkInColumnOrder_3e071bd337c0da4c,
          mid_walkInColumnOrder_b19c1ac2d3fe7eca,
          mid_walkInColumnOrder_62bd065f6938d976,
          mid_walkInColumnOrder_ab29bef5e0849364,
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

        explicit Array2DRowRealMatrix(jobject obj) : ::org::hipparchus::linear::AbstractRealMatrix(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Array2DRowRealMatrix(const Array2DRowRealMatrix& obj) : ::org::hipparchus::linear::AbstractRealMatrix(obj) {}

        Array2DRowRealMatrix();
        Array2DRowRealMatrix(const JArray< jdouble > &);
        Array2DRowRealMatrix(const JArray< JArray< jdouble > > &);
        Array2DRowRealMatrix(const JArray< JArray< jdouble > > &, jboolean);
        Array2DRowRealMatrix(jint, jint);

        Array2DRowRealMatrix add(const Array2DRowRealMatrix &) const;
        void addToEntry(jint, jint, jdouble) const;
        ::org::hipparchus::linear::RealMatrix copy() const;
        ::org::hipparchus::linear::RealMatrix createMatrix(jint, jint) const;
        jint getColumnDimension() const;
        JArray< JArray< jdouble > > getData() const;
        JArray< JArray< jdouble > > getDataRef() const;
        jdouble getEntry(jint, jint) const;
        JArray< jdouble > getRow(jint) const;
        jint getRowDimension() const;
        ::org::hipparchus::linear::RealMatrix getSubMatrix(jint, jint, jint, jint) const;
        ::org::hipparchus::linear::RealMatrix kroneckerProduct(const ::org::hipparchus::linear::RealMatrix &) const;
        Array2DRowRealMatrix multiply(const Array2DRowRealMatrix &) const;
        void multiplyEntry(jint, jint, jdouble) const;
        ::org::hipparchus::linear::RealMatrix multiplyTransposed(const Array2DRowRealMatrix &) const;
        ::org::hipparchus::linear::RealMatrix multiplyTransposed(const ::org::hipparchus::linear::RealMatrix &) const;
        JArray< jdouble > operate(const JArray< jdouble > &) const;
        JArray< jdouble > preMultiply(const JArray< jdouble > &) const;
        void setEntry(jint, jint, jdouble) const;
        void setRow(jint, const JArray< jdouble > &) const;
        void setSubMatrix(const JArray< JArray< jdouble > > &, jint, jint) const;
        ::org::hipparchus::linear::RealMatrix stack() const;
        Array2DRowRealMatrix subtract(const Array2DRowRealMatrix &) const;
        ::org::hipparchus::linear::RealMatrix transposeMultiply(const Array2DRowRealMatrix &) const;
        ::org::hipparchus::linear::RealMatrix transposeMultiply(const ::org::hipparchus::linear::RealMatrix &) const;
        ::org::hipparchus::linear::RealMatrix unstackSquare() const;
        jdouble walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor &) const;
        jdouble walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor &) const;
        jdouble walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor &, jint, jint, jint, jint) const;
        jdouble walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor &, jint, jint, jint, jint) const;
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
      extern PyType_Def PY_TYPE_DEF(Array2DRowRealMatrix);
      extern PyTypeObject *PY_TYPE(Array2DRowRealMatrix);

      class t_Array2DRowRealMatrix {
      public:
        PyObject_HEAD
        Array2DRowRealMatrix object;
        static PyObject *wrap_Object(const Array2DRowRealMatrix&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
