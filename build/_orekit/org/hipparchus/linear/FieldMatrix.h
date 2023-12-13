#ifndef org_hipparchus_linear_FieldMatrix_H
#define org_hipparchus_linear_FieldMatrix_H

#include "org/hipparchus/linear/AnyMatrix.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    namespace util {
      class FieldBlendable;
    }
    class Field;
    namespace linear {
      class FieldMatrixPreservingVisitor;
      class FieldMatrixChangingVisitor;
      class FieldMatrix;
      class FieldVector;
    }
    class FieldElement;
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class FieldMatrix : public ::org::hipparchus::linear::AnyMatrix {
       public:
        enum {
          mid_add_e74c5d5fdc2ea025,
          mid_addToEntry_c2695120fce254e7,
          mid_blendArithmeticallyWith_532566022520f971,
          mid_copy_81d49643ce3a3c0b,
          mid_copySubMatrix_c37e1208ec719e9a,
          mid_copySubMatrix_66c7ed41fa5e9c95,
          mid_createMatrix_add2e370542edc2f,
          mid_getColumn_32f3c1a06713be87,
          mid_getColumnMatrix_2b05a6661cb56e40,
          mid_getColumnVector_06abfeddf4c4a28c,
          mid_getData_79f47d23e197eb68,
          mid_getEntry_d0f2803baa5859d6,
          mid_getField_04d1f63e17d5c5d4,
          mid_getRow_32f3c1a06713be87,
          mid_getRowMatrix_2b05a6661cb56e40,
          mid_getRowVector_06abfeddf4c4a28c,
          mid_getSubMatrix_6f66e4ac0405ef8b,
          mid_getSubMatrix_fccf627d1096268f,
          mid_getTrace_2ff8de927fda4153,
          mid_multiply_e74c5d5fdc2ea025,
          mid_multiplyEntry_c2695120fce254e7,
          mid_multiplyTransposed_e74c5d5fdc2ea025,
          mid_operate_0721a6f091b7d386,
          mid_operate_0c912ec1e9dd9ed7,
          mid_power_2b05a6661cb56e40,
          mid_preMultiply_0721a6f091b7d386,
          mid_preMultiply_e74c5d5fdc2ea025,
          mid_preMultiply_0c912ec1e9dd9ed7,
          mid_scalarAdd_7f54bca136ec1209,
          mid_scalarMultiply_7f54bca136ec1209,
          mid_setColumn_a38853481346cb12,
          mid_setColumnMatrix_8b62bd16a362a59d,
          mid_setColumnVector_cd62bfbc5992c85f,
          mid_setEntry_c2695120fce254e7,
          mid_setRow_a38853481346cb12,
          mid_setRowMatrix_8b62bd16a362a59d,
          mid_setRowVector_cd62bfbc5992c85f,
          mid_setSubMatrix_3b5f1aa21de3920a,
          mid_subtract_e74c5d5fdc2ea025,
          mid_transpose_81d49643ce3a3c0b,
          mid_transposeMultiply_e74c5d5fdc2ea025,
          mid_walkInColumnOrder_695885c54f7e1d00,
          mid_walkInColumnOrder_0cfd3392c17e8c72,
          mid_walkInColumnOrder_81e6970a97ecd473,
          mid_walkInColumnOrder_aa15efee847b0fad,
          mid_walkInOptimizedOrder_695885c54f7e1d00,
          mid_walkInOptimizedOrder_0cfd3392c17e8c72,
          mid_walkInOptimizedOrder_81e6970a97ecd473,
          mid_walkInOptimizedOrder_aa15efee847b0fad,
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

        explicit FieldMatrix(jobject obj) : ::org::hipparchus::linear::AnyMatrix(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldMatrix(const FieldMatrix& obj) : ::org::hipparchus::linear::AnyMatrix(obj) {}

        FieldMatrix add(const FieldMatrix &) const;
        void addToEntry(jint, jint, const ::org::hipparchus::FieldElement &) const;
        FieldMatrix blendArithmeticallyWith(const FieldMatrix &, const ::org::hipparchus::FieldElement &) const;
        FieldMatrix copy() const;
        void copySubMatrix(const JArray< jint > &, const JArray< jint > &, const JArray< JArray< ::org::hipparchus::FieldElement > > &) const;
        void copySubMatrix(jint, jint, jint, jint, const JArray< JArray< ::org::hipparchus::FieldElement > > &) const;
        FieldMatrix createMatrix(jint, jint) const;
        JArray< ::org::hipparchus::FieldElement > getColumn(jint) const;
        FieldMatrix getColumnMatrix(jint) const;
        ::org::hipparchus::linear::FieldVector getColumnVector(jint) const;
        JArray< JArray< ::org::hipparchus::FieldElement > > getData() const;
        ::org::hipparchus::FieldElement getEntry(jint, jint) const;
        ::org::hipparchus::Field getField() const;
        JArray< ::org::hipparchus::FieldElement > getRow(jint) const;
        FieldMatrix getRowMatrix(jint) const;
        ::org::hipparchus::linear::FieldVector getRowVector(jint) const;
        FieldMatrix getSubMatrix(const JArray< jint > &, const JArray< jint > &) const;
        FieldMatrix getSubMatrix(jint, jint, jint, jint) const;
        ::org::hipparchus::FieldElement getTrace() const;
        FieldMatrix multiply(const FieldMatrix &) const;
        void multiplyEntry(jint, jint, const ::org::hipparchus::FieldElement &) const;
        FieldMatrix multiplyTransposed(const FieldMatrix &) const;
        JArray< ::org::hipparchus::FieldElement > operate(const JArray< ::org::hipparchus::FieldElement > &) const;
        ::org::hipparchus::linear::FieldVector operate(const ::org::hipparchus::linear::FieldVector &) const;
        FieldMatrix power(jint) const;
        JArray< ::org::hipparchus::FieldElement > preMultiply(const JArray< ::org::hipparchus::FieldElement > &) const;
        FieldMatrix preMultiply(const FieldMatrix &) const;
        ::org::hipparchus::linear::FieldVector preMultiply(const ::org::hipparchus::linear::FieldVector &) const;
        FieldMatrix scalarAdd(const ::org::hipparchus::FieldElement &) const;
        FieldMatrix scalarMultiply(const ::org::hipparchus::FieldElement &) const;
        void setColumn(jint, const JArray< ::org::hipparchus::FieldElement > &) const;
        void setColumnMatrix(jint, const FieldMatrix &) const;
        void setColumnVector(jint, const ::org::hipparchus::linear::FieldVector &) const;
        void setEntry(jint, jint, const ::org::hipparchus::FieldElement &) const;
        void setRow(jint, const JArray< ::org::hipparchus::FieldElement > &) const;
        void setRowMatrix(jint, const FieldMatrix &) const;
        void setRowVector(jint, const ::org::hipparchus::linear::FieldVector &) const;
        void setSubMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > &, jint, jint) const;
        FieldMatrix subtract(const FieldMatrix &) const;
        FieldMatrix transpose() const;
        FieldMatrix transposeMultiply(const FieldMatrix &) const;
        ::org::hipparchus::FieldElement walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor &) const;
        ::org::hipparchus::FieldElement walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor &) const;
        ::org::hipparchus::FieldElement walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor &, jint, jint, jint, jint) const;
        ::org::hipparchus::FieldElement walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor &, jint, jint, jint, jint) const;
        ::org::hipparchus::FieldElement walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor &) const;
        ::org::hipparchus::FieldElement walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor &) const;
        ::org::hipparchus::FieldElement walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor &, jint, jint, jint, jint) const;
        ::org::hipparchus::FieldElement walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor &, jint, jint, jint, jint) const;
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
      extern PyType_Def PY_TYPE_DEF(FieldMatrix);
      extern PyTypeObject *PY_TYPE(FieldMatrix);

      class t_FieldMatrix {
      public:
        PyObject_HEAD
        FieldMatrix object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldMatrix *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldMatrix&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldMatrix&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
