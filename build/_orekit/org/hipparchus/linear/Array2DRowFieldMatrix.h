#ifndef org_hipparchus_linear_Array2DRowFieldMatrix_H
#define org_hipparchus_linear_Array2DRowFieldMatrix_H

#include "org/hipparchus/linear/AbstractFieldMatrix.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class Array2DRowFieldMatrix;
      class FieldMatrixChangingVisitor;
      class FieldMatrix;
      class FieldMatrixPreservingVisitor;
    }
    class FieldElement;
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
    }
    class Field;
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

      class Array2DRowFieldMatrix : public ::org::hipparchus::linear::AbstractFieldMatrix {
       public:
        enum {
          mid_init$_b21b5587abda5ee9,
          mid_init$_f8690281fd65dda7,
          mid_init$_979ae7f57a96b096,
          mid_init$_1b9cf9fe2f8d539c,
          mid_init$_a9fee9688246cfde,
          mid_init$_39f6aac6b2351abf,
          mid_init$_5c7a85ea6ad48b17,
          mid_init$_a9ccb012d4cb48bd,
          mid_add_9b7147116b9a105f,
          mid_addToEntry_a6d8caed839ba827,
          mid_copy_1d6b27621d7bea96,
          mid_createMatrix_f57999d9fe0fa8c7,
          mid_getColumnDimension_412668abc8d889e9,
          mid_getData_7007d1e2762517a8,
          mid_getDataRef_7007d1e2762517a8,
          mid_getEntry_a7f16df0741fd579,
          mid_getRow_5bf832a9d0c2a7e7,
          mid_getRowDimension_412668abc8d889e9,
          mid_getSubMatrix_455eec4445ba70d4,
          mid_multiply_9b7147116b9a105f,
          mid_multiplyEntry_a6d8caed839ba827,
          mid_multiplyTransposed_edf152e6444ee5f7,
          mid_multiplyTransposed_60dc3401cb1a0936,
          mid_operate_ee5975d9ac401b83,
          mid_preMultiply_ee5975d9ac401b83,
          mid_setEntry_a6d8caed839ba827,
          mid_setRow_25fe2a3042ba75d1,
          mid_setSubMatrix_7c2e1cd72b6eb4ce,
          mid_subtract_9b7147116b9a105f,
          mid_transposeMultiply_edf152e6444ee5f7,
          mid_transposeMultiply_60dc3401cb1a0936,
          mid_walkInColumnOrder_7d4c76689ca2f3c1,
          mid_walkInColumnOrder_76fd1db3efda6447,
          mid_walkInColumnOrder_516fb751ccd95d3b,
          mid_walkInColumnOrder_e5d38b926487f1a5,
          mid_walkInRowOrder_7d4c76689ca2f3c1,
          mid_walkInRowOrder_76fd1db3efda6447,
          mid_walkInRowOrder_516fb751ccd95d3b,
          mid_walkInRowOrder_e5d38b926487f1a5,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Array2DRowFieldMatrix(jobject obj) : ::org::hipparchus::linear::AbstractFieldMatrix(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Array2DRowFieldMatrix(const Array2DRowFieldMatrix& obj) : ::org::hipparchus::linear::AbstractFieldMatrix(obj) {}

        Array2DRowFieldMatrix(const JArray< ::org::hipparchus::FieldElement > &);
        Array2DRowFieldMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > &);
        Array2DRowFieldMatrix(const ::org::hipparchus::Field &);
        Array2DRowFieldMatrix(const ::org::hipparchus::Field &, const JArray< ::org::hipparchus::FieldElement > &);
        Array2DRowFieldMatrix(const ::org::hipparchus::Field &, const JArray< JArray< ::org::hipparchus::FieldElement > > &);
        Array2DRowFieldMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > &, jboolean);
        Array2DRowFieldMatrix(const ::org::hipparchus::Field &, const JArray< JArray< ::org::hipparchus::FieldElement > > &, jboolean);
        Array2DRowFieldMatrix(const ::org::hipparchus::Field &, jint, jint);

        Array2DRowFieldMatrix add(const Array2DRowFieldMatrix &) const;
        void addToEntry(jint, jint, const ::org::hipparchus::FieldElement &) const;
        ::org::hipparchus::linear::FieldMatrix copy() const;
        ::org::hipparchus::linear::FieldMatrix createMatrix(jint, jint) const;
        jint getColumnDimension() const;
        JArray< JArray< ::org::hipparchus::FieldElement > > getData() const;
        JArray< JArray< ::org::hipparchus::FieldElement > > getDataRef() const;
        ::org::hipparchus::FieldElement getEntry(jint, jint) const;
        JArray< ::org::hipparchus::FieldElement > getRow(jint) const;
        jint getRowDimension() const;
        ::org::hipparchus::linear::FieldMatrix getSubMatrix(jint, jint, jint, jint) const;
        Array2DRowFieldMatrix multiply(const Array2DRowFieldMatrix &) const;
        void multiplyEntry(jint, jint, const ::org::hipparchus::FieldElement &) const;
        ::org::hipparchus::linear::FieldMatrix multiplyTransposed(const Array2DRowFieldMatrix &) const;
        ::org::hipparchus::linear::FieldMatrix multiplyTransposed(const ::org::hipparchus::linear::FieldMatrix &) const;
        JArray< ::org::hipparchus::FieldElement > operate(const JArray< ::org::hipparchus::FieldElement > &) const;
        JArray< ::org::hipparchus::FieldElement > preMultiply(const JArray< ::org::hipparchus::FieldElement > &) const;
        void setEntry(jint, jint, const ::org::hipparchus::FieldElement &) const;
        void setRow(jint, const JArray< ::org::hipparchus::FieldElement > &) const;
        void setSubMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > &, jint, jint) const;
        Array2DRowFieldMatrix subtract(const Array2DRowFieldMatrix &) const;
        ::org::hipparchus::linear::FieldMatrix transposeMultiply(const Array2DRowFieldMatrix &) const;
        ::org::hipparchus::linear::FieldMatrix transposeMultiply(const ::org::hipparchus::linear::FieldMatrix &) const;
        ::org::hipparchus::FieldElement walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor &) const;
        ::org::hipparchus::FieldElement walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor &) const;
        ::org::hipparchus::FieldElement walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor &, jint, jint, jint, jint) const;
        ::org::hipparchus::FieldElement walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor &, jint, jint, jint, jint) const;
        ::org::hipparchus::FieldElement walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor &) const;
        ::org::hipparchus::FieldElement walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor &) const;
        ::org::hipparchus::FieldElement walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor &, jint, jint, jint, jint) const;
        ::org::hipparchus::FieldElement walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor &, jint, jint, jint, jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(Array2DRowFieldMatrix);
      extern PyTypeObject *PY_TYPE(Array2DRowFieldMatrix);

      class t_Array2DRowFieldMatrix {
      public:
        PyObject_HEAD
        Array2DRowFieldMatrix object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_Array2DRowFieldMatrix *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const Array2DRowFieldMatrix&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const Array2DRowFieldMatrix&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
