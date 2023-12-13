#ifndef org_hipparchus_linear_Array2DRowFieldMatrix_H
#define org_hipparchus_linear_Array2DRowFieldMatrix_H

#include "org/hipparchus/linear/AbstractFieldMatrix.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    class Field;
    namespace linear {
      class Array2DRowFieldMatrix;
      class FieldMatrixPreservingVisitor;
      class FieldMatrixChangingVisitor;
      class FieldMatrix;
    }
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
          mid_init$_17c98b43bf9b6f78,
          mid_init$_a9efc882474e6213,
          mid_init$_02ab84aa7626616d,
          mid_init$_a1e449a87301face,
          mid_init$_1338c9da395c39c9,
          mid_init$_1a3c85cc4ecf79f4,
          mid_init$_f1e0c41403666ce7,
          mid_init$_b6c946d1cbf160f0,
          mid_add_7ec78cb4b1521bd4,
          mid_addToEntry_c2695120fce254e7,
          mid_copy_81d49643ce3a3c0b,
          mid_createMatrix_add2e370542edc2f,
          mid_getColumnDimension_55546ef6a647f39b,
          mid_getData_79f47d23e197eb68,
          mid_getDataRef_79f47d23e197eb68,
          mid_getEntry_d0f2803baa5859d6,
          mid_getRow_32f3c1a06713be87,
          mid_getRowDimension_55546ef6a647f39b,
          mid_getSubMatrix_fccf627d1096268f,
          mid_multiply_7ec78cb4b1521bd4,
          mid_multiplyEntry_c2695120fce254e7,
          mid_multiplyTransposed_915778010161dc36,
          mid_multiplyTransposed_e74c5d5fdc2ea025,
          mid_operate_0721a6f091b7d386,
          mid_preMultiply_0721a6f091b7d386,
          mid_setEntry_c2695120fce254e7,
          mid_setRow_a38853481346cb12,
          mid_setSubMatrix_3b5f1aa21de3920a,
          mid_subtract_7ec78cb4b1521bd4,
          mid_transposeMultiply_915778010161dc36,
          mid_transposeMultiply_e74c5d5fdc2ea025,
          mid_walkInColumnOrder_695885c54f7e1d00,
          mid_walkInColumnOrder_0cfd3392c17e8c72,
          mid_walkInColumnOrder_81e6970a97ecd473,
          mid_walkInColumnOrder_aa15efee847b0fad,
          mid_walkInRowOrder_695885c54f7e1d00,
          mid_walkInRowOrder_0cfd3392c17e8c72,
          mid_walkInRowOrder_81e6970a97ecd473,
          mid_walkInRowOrder_aa15efee847b0fad,
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
