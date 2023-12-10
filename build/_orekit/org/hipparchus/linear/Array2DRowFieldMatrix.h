#ifndef org_hipparchus_linear_Array2DRowFieldMatrix_H
#define org_hipparchus_linear_Array2DRowFieldMatrix_H

#include "org/hipparchus/linear/AbstractFieldMatrix.h"

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
    class Field;
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    class FieldElement;
    namespace linear {
      class FieldMatrixChangingVisitor;
      class Array2DRowFieldMatrix;
      class FieldMatrixPreservingVisitor;
      class FieldMatrix;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class Array2DRowFieldMatrix : public ::org::hipparchus::linear::AbstractFieldMatrix {
       public:
        enum {
          mid_init$_191170fc417b1ede,
          mid_init$_249f450b19288783,
          mid_init$_205c34b8e33cf33f,
          mid_init$_1cb2de56c89f4b52,
          mid_init$_9928bbabce7e9723,
          mid_init$_900621679ddc5f94,
          mid_init$_34d5c8b5eecb38fe,
          mid_init$_11914f5932256658,
          mid_add_ca86c76185a43b52,
          mid_addToEntry_8c5ca78361f003c1,
          mid_copy_cc77900a647586cf,
          mid_createMatrix_8e5837651d169cc8,
          mid_getColumnDimension_f2f64475e4580546,
          mid_getData_6ccec7d54d4aa14e,
          mid_getDataRef_6ccec7d54d4aa14e,
          mid_getEntry_e4e0a9e5376069de,
          mid_getRow_d29eb5ffff4844ca,
          mid_getRowDimension_f2f64475e4580546,
          mid_getSubMatrix_05948e8f73a5c897,
          mid_multiply_ca86c76185a43b52,
          mid_multiplyEntry_8c5ca78361f003c1,
          mid_multiplyTransposed_b98fa06e86e04f59,
          mid_multiplyTransposed_311c21c57522a65c,
          mid_operate_f9019cec9923ca8a,
          mid_preMultiply_f9019cec9923ca8a,
          mid_setEntry_8c5ca78361f003c1,
          mid_setRow_72c49d7bd5abccf7,
          mid_setSubMatrix_ca8750336b496dca,
          mid_subtract_ca86c76185a43b52,
          mid_transposeMultiply_b98fa06e86e04f59,
          mid_transposeMultiply_311c21c57522a65c,
          mid_walkInColumnOrder_09db37bb51f54673,
          mid_walkInColumnOrder_3a0cd0f81f3173f1,
          mid_walkInColumnOrder_1bdd1f13c5d68880,
          mid_walkInColumnOrder_b8a3d440c9844dc5,
          mid_walkInRowOrder_09db37bb51f54673,
          mid_walkInRowOrder_3a0cd0f81f3173f1,
          mid_walkInRowOrder_1bdd1f13c5d68880,
          mid_walkInRowOrder_b8a3d440c9844dc5,
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
