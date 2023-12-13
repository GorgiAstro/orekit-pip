#ifndef org_hipparchus_linear_Array2DRowRealMatrix_H
#define org_hipparchus_linear_Array2DRowRealMatrix_H

#include "org/hipparchus/linear/AbstractRealMatrix.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    namespace linear {
      class Array2DRowRealMatrix;
      class RealMatrixChangingVisitor;
      class RealMatrixPreservingVisitor;
      class RealMatrix;
    }
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class Array2DRowRealMatrix : public ::org::hipparchus::linear::AbstractRealMatrix {
       public:
        enum {
          mid_init$_a1fa5dae97ea5ed2,
          mid_init$_ab69da052b88f50c,
          mid_init$_07adb42ffaa97d31,
          mid_init$_30d41d58c8b5e4dc,
          mid_init$_3313c75e3e16c428,
          mid_add_f7e2a664bf09ba0b,
          mid_addToEntry_94fe8d9ffeb50676,
          mid_copy_f77d745f2128c391,
          mid_createMatrix_28a444e31666746c,
          mid_getColumnDimension_55546ef6a647f39b,
          mid_getData_3b7b373db8e7887f,
          mid_getDataRef_3b7b373db8e7887f,
          mid_getEntry_cad98089d00f8a5b,
          mid_getRow_bb2a44a76ad252f7,
          mid_getRowDimension_55546ef6a647f39b,
          mid_getSubMatrix_f6333def4d085867,
          mid_kroneckerProduct_be124f4006dc9f69,
          mid_multiply_f7e2a664bf09ba0b,
          mid_multiplyEntry_94fe8d9ffeb50676,
          mid_multiplyTransposed_aebe28c801f89be8,
          mid_multiplyTransposed_be124f4006dc9f69,
          mid_operate_14dee4cb8cc3e959,
          mid_preMultiply_14dee4cb8cc3e959,
          mid_setEntry_94fe8d9ffeb50676,
          mid_setRow_75061e5f5bbace93,
          mid_setSubMatrix_f12104c26dcf5b23,
          mid_stack_f77d745f2128c391,
          mid_subtract_f7e2a664bf09ba0b,
          mid_transposeMultiply_aebe28c801f89be8,
          mid_transposeMultiply_be124f4006dc9f69,
          mid_unstackSquare_f77d745f2128c391,
          mid_walkInColumnOrder_e9eacc024b91638e,
          mid_walkInColumnOrder_8c777cbbebb3f320,
          mid_walkInColumnOrder_7a8f404d3cc13545,
          mid_walkInColumnOrder_0efcec2037689a79,
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
