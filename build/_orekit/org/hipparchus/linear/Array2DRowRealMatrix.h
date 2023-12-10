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
    namespace linear {
      class Array2DRowRealMatrix;
      class RealMatrix;
      class RealMatrixChangingVisitor;
      class RealMatrixPreservingVisitor;
    }
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
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
          mid_init$_7ae3461a92a43152,
          mid_init$_ebc26dcaf4761286,
          mid_init$_d660c7a97bf55272,
          mid_init$_7911f39d20980098,
          mid_init$_8dbc1129a3c2557a,
          mid_add_6bf0ab2b7bd27bc5,
          mid_addToEntry_78e41e7b5124a628,
          mid_copy_7116bbecdd8ceb21,
          mid_createMatrix_4225756160ad1bc1,
          mid_getColumnDimension_f2f64475e4580546,
          mid_getData_43de1192439efa92,
          mid_getDataRef_43de1192439efa92,
          mid_getEntry_a84e4ee1da3f1ab8,
          mid_getRow_eb9cceadce1b2217,
          mid_getRowDimension_f2f64475e4580546,
          mid_getSubMatrix_d4cd53a0b7898ff0,
          mid_kroneckerProduct_e00cd33aedcc5bd0,
          mid_multiply_6bf0ab2b7bd27bc5,
          mid_multiplyEntry_78e41e7b5124a628,
          mid_multiplyTransposed_5fa4c10133fc1565,
          mid_multiplyTransposed_e00cd33aedcc5bd0,
          mid_operate_4b742fe429c22ba8,
          mid_preMultiply_4b742fe429c22ba8,
          mid_setEntry_78e41e7b5124a628,
          mid_setRow_7d4f41c65056f174,
          mid_setSubMatrix_a741cdd381e94792,
          mid_stack_7116bbecdd8ceb21,
          mid_subtract_6bf0ab2b7bd27bc5,
          mid_transposeMultiply_5fa4c10133fc1565,
          mid_transposeMultiply_e00cd33aedcc5bd0,
          mid_unstackSquare_7116bbecdd8ceb21,
          mid_walkInColumnOrder_340ddcf983c0c22e,
          mid_walkInColumnOrder_354ebbe7c685c961,
          mid_walkInColumnOrder_56223f2e9b79c5ad,
          mid_walkInColumnOrder_62551289056beecd,
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
