#ifndef org_hipparchus_linear_Array2DRowFieldMatrix_H
#define org_hipparchus_linear_Array2DRowFieldMatrix_H

#include "org/hipparchus/linear/AbstractFieldMatrix.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class FieldMatrixChangingVisitor;
      class FieldMatrix;
      class FieldMatrixPreservingVisitor;
      class Array2DRowFieldMatrix;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
    }
    class Field;
    class FieldElement;
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
          mid_init$_79693579cf1d6b54,
          mid_init$_ab57da19aa96755a,
          mid_init$_a44abdd035f01345,
          mid_init$_eb6f5cf36a8e5529,
          mid_init$_8421b8da04368402,
          mid_init$_7aeac298fa801850,
          mid_init$_f05cf4c9bfd67964,
          mid_init$_ddbf374219cf6329,
          mid_add_51bcd4a8a90d8d6b,
          mid_addToEntry_8de38856a6ebea36,
          mid_copy_02883dbbe5db44ac,
          mid_createMatrix_71a6a4df501a3e03,
          mid_getColumnDimension_d6ab429752e7c267,
          mid_getData_5d4bb4c2b3c3b853,
          mid_getDataRef_5d4bb4c2b3c3b853,
          mid_getEntry_a81b5a6b0760a7e3,
          mid_getRow_9410bfc023ff0ee6,
          mid_getRowDimension_d6ab429752e7c267,
          mid_getSubMatrix_1acf4e5d8c70f8c1,
          mid_multiply_51bcd4a8a90d8d6b,
          mid_multiplyEntry_8de38856a6ebea36,
          mid_multiplyTransposed_9d44fdd5d20d82b4,
          mid_multiplyTransposed_b180f987191970ad,
          mid_operate_da4e13f241d172b2,
          mid_preMultiply_da4e13f241d172b2,
          mid_setEntry_8de38856a6ebea36,
          mid_setRow_1d7c60cf27d9f179,
          mid_setSubMatrix_24d277c6faa30a04,
          mid_subtract_51bcd4a8a90d8d6b,
          mid_transposeMultiply_9d44fdd5d20d82b4,
          mid_transposeMultiply_b180f987191970ad,
          mid_walkInColumnOrder_9511e2a4670e260a,
          mid_walkInColumnOrder_718adedab84e4562,
          mid_walkInColumnOrder_4e13f6cf4599797e,
          mid_walkInColumnOrder_8e3632311c5af3b6,
          mid_walkInRowOrder_9511e2a4670e260a,
          mid_walkInRowOrder_718adedab84e4562,
          mid_walkInRowOrder_4e13f6cf4599797e,
          mid_walkInRowOrder_8e3632311c5af3b6,
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
