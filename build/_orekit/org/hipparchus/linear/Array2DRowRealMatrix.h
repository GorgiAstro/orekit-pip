#ifndef org_hipparchus_linear_Array2DRowRealMatrix_H
#define org_hipparchus_linear_Array2DRowRealMatrix_H

#include "org/hipparchus/linear/AbstractRealMatrix.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrixChangingVisitor;
      class Array2DRowRealMatrix;
      class RealMatrixPreservingVisitor;
      class RealMatrix;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
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
          mid_init$_ff7cb6c242604316,
          mid_init$_a71c45509eaf92d1,
          mid_init$_11ecdbb5af7ed67d,
          mid_init$_1abb553ff9db34ff,
          mid_init$_b5d23e6c0858e8ed,
          mid_add_afbfc3ddbfe58d51,
          mid_addToEntry_e98d7b3e971b6087,
          mid_copy_b2eebabce70526d8,
          mid_createMatrix_afc0d8087db42fe7,
          mid_getColumnDimension_d6ab429752e7c267,
          mid_getData_eda3f19b8225f78f,
          mid_getDataRef_eda3f19b8225f78f,
          mid_getEntry_6d920aab27f0a3d2,
          mid_getRow_81add9fc9d78d5b9,
          mid_getRowDimension_d6ab429752e7c267,
          mid_getSubMatrix_a064070b1670e8d8,
          mid_kroneckerProduct_5a8a8185eb309db7,
          mid_multiply_afbfc3ddbfe58d51,
          mid_multiplyEntry_e98d7b3e971b6087,
          mid_multiplyTransposed_5b6d1d9d23ef6c5e,
          mid_multiplyTransposed_5a8a8185eb309db7,
          mid_operate_51f624c89851da7e,
          mid_preMultiply_51f624c89851da7e,
          mid_setEntry_e98d7b3e971b6087,
          mid_setRow_9d367e34fba0a5ea,
          mid_setSubMatrix_5cc0a3799fec1dc7,
          mid_stack_b2eebabce70526d8,
          mid_subtract_afbfc3ddbfe58d51,
          mid_transposeMultiply_5b6d1d9d23ef6c5e,
          mid_transposeMultiply_5a8a8185eb309db7,
          mid_unstackSquare_b2eebabce70526d8,
          mid_walkInColumnOrder_a7758d3537e559f7,
          mid_walkInColumnOrder_5a884deb680e092c,
          mid_walkInColumnOrder_0c89eacb5543486a,
          mid_walkInColumnOrder_be1420f911d13599,
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
