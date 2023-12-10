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
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    namespace linear {
      class FieldMatrixPreservingVisitor;
      class FieldMatrixChangingVisitor;
      class Array2DRowFieldMatrix;
      class FieldMatrix;
    }
    class Field;
    class FieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class Array2DRowFieldMatrix : public ::org::hipparchus::linear::AbstractFieldMatrix {
       public:
        enum {
          mid_init$_ae869f331beac5a3,
          mid_init$_b797e11157f10d97,
          mid_init$_484998d88974267b,
          mid_init$_989e9dce085ad65f,
          mid_init$_13a1ea60b219a5a1,
          mid_init$_364b299f81fea78c,
          mid_init$_2e2152b7758a6adf,
          mid_init$_7dbd657fb2d34563,
          mid_add_e3fbb99b5c5aabb2,
          mid_addToEntry_d302e4fbc652587d,
          mid_copy_c992983685c753c5,
          mid_createMatrix_5d35d650870a3dcb,
          mid_getColumnDimension_570ce0828f81a2c1,
          mid_getData_75f68840bec35355,
          mid_getDataRef_75f68840bec35355,
          mid_getEntry_ef29faa67be274b8,
          mid_getRow_b21ddf58698298c0,
          mid_getRowDimension_570ce0828f81a2c1,
          mid_getSubMatrix_1033b0d2443c0299,
          mid_multiply_e3fbb99b5c5aabb2,
          mid_multiplyEntry_d302e4fbc652587d,
          mid_multiplyTransposed_f7f9a6567fa8b298,
          mid_multiplyTransposed_1409f31dc074a11f,
          mid_operate_91d3c6b4d1752243,
          mid_preMultiply_91d3c6b4d1752243,
          mid_setEntry_d302e4fbc652587d,
          mid_setRow_baf264dbcc1722ae,
          mid_setSubMatrix_e8cdaf624d2bb79a,
          mid_subtract_e3fbb99b5c5aabb2,
          mid_transposeMultiply_f7f9a6567fa8b298,
          mid_transposeMultiply_1409f31dc074a11f,
          mid_walkInColumnOrder_624c889f4088e148,
          mid_walkInColumnOrder_26ed18f15f4bb370,
          mid_walkInColumnOrder_c4e69fc23be9a0d2,
          mid_walkInColumnOrder_7aa3cb5fccfebf0e,
          mid_walkInRowOrder_624c889f4088e148,
          mid_walkInRowOrder_26ed18f15f4bb370,
          mid_walkInRowOrder_c4e69fc23be9a0d2,
          mid_walkInRowOrder_7aa3cb5fccfebf0e,
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
