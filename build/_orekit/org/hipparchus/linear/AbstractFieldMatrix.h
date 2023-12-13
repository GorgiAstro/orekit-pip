#ifndef org_hipparchus_linear_AbstractFieldMatrix_H
#define org_hipparchus_linear_AbstractFieldMatrix_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class AbstractFieldMatrix : public ::java::lang::Object {
       public:
        enum {
          mid_add_e74c5d5fdc2ea025,
          mid_addToEntry_c2695120fce254e7,
          mid_copy_81d49643ce3a3c0b,
          mid_copySubMatrix_c37e1208ec719e9a,
          mid_copySubMatrix_66c7ed41fa5e9c95,
          mid_createMatrix_add2e370542edc2f,
          mid_equals_460c5e2d9d51c6cc,
          mid_getColumn_32f3c1a06713be87,
          mid_getColumnDimension_55546ef6a647f39b,
          mid_getColumnMatrix_2b05a6661cb56e40,
          mid_getColumnVector_06abfeddf4c4a28c,
          mid_getData_79f47d23e197eb68,
          mid_getEntry_d0f2803baa5859d6,
          mid_getField_04d1f63e17d5c5d4,
          mid_getRow_32f3c1a06713be87,
          mid_getRowDimension_55546ef6a647f39b,
          mid_getRowMatrix_2b05a6661cb56e40,
          mid_getRowVector_06abfeddf4c4a28c,
          mid_getSubMatrix_6f66e4ac0405ef8b,
          mid_getSubMatrix_fccf627d1096268f,
          mid_getTrace_2ff8de927fda4153,
          mid_hashCode_55546ef6a647f39b,
          mid_isSquare_9ab94ac1dc23b105,
          mid_multiply_e74c5d5fdc2ea025,
          mid_multiplyEntry_c2695120fce254e7,
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
          mid_toString_1c1fa1e935d6cdcf,
          mid_transpose_81d49643ce3a3c0b,
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
          mid_checkRowIndex_44ed599e93e8a30c,
          mid_checkColumnIndex_44ed599e93e8a30c,
          mid_checkSubMatrixIndex_e8629e72f2d3b3fa,
          mid_checkSubMatrixIndex_5a4af21a43a35df3,
          mid_checkAdditionCompatible_3c04247304967ec8,
          mid_checkSubtractionCompatible_3c04247304967ec8,
          mid_checkMultiplicationCompatible_3c04247304967ec8,
          mid_extractField_4f608ec19ff2288c,
          mid_extractField_bc59735ca6cf5818,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AbstractFieldMatrix(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AbstractFieldMatrix(const AbstractFieldMatrix& obj) : ::java::lang::Object(obj) {}

        ::org::hipparchus::linear::FieldMatrix add(const ::org::hipparchus::linear::FieldMatrix &) const;
        void addToEntry(jint, jint, const ::org::hipparchus::FieldElement &) const;
        ::org::hipparchus::linear::FieldMatrix copy() const;
        void copySubMatrix(const JArray< jint > &, const JArray< jint > &, const JArray< JArray< ::org::hipparchus::FieldElement > > &) const;
        void copySubMatrix(jint, jint, jint, jint, const JArray< JArray< ::org::hipparchus::FieldElement > > &) const;
        ::org::hipparchus::linear::FieldMatrix createMatrix(jint, jint) const;
        jboolean equals(const ::java::lang::Object &) const;
        JArray< ::org::hipparchus::FieldElement > getColumn(jint) const;
        jint getColumnDimension() const;
        ::org::hipparchus::linear::FieldMatrix getColumnMatrix(jint) const;
        ::org::hipparchus::linear::FieldVector getColumnVector(jint) const;
        JArray< JArray< ::org::hipparchus::FieldElement > > getData() const;
        ::org::hipparchus::FieldElement getEntry(jint, jint) const;
        ::org::hipparchus::Field getField() const;
        JArray< ::org::hipparchus::FieldElement > getRow(jint) const;
        jint getRowDimension() const;
        ::org::hipparchus::linear::FieldMatrix getRowMatrix(jint) const;
        ::org::hipparchus::linear::FieldVector getRowVector(jint) const;
        ::org::hipparchus::linear::FieldMatrix getSubMatrix(const JArray< jint > &, const JArray< jint > &) const;
        ::org::hipparchus::linear::FieldMatrix getSubMatrix(jint, jint, jint, jint) const;
        ::org::hipparchus::FieldElement getTrace() const;
        jint hashCode() const;
        jboolean isSquare() const;
        ::org::hipparchus::linear::FieldMatrix multiply(const ::org::hipparchus::linear::FieldMatrix &) const;
        void multiplyEntry(jint, jint, const ::org::hipparchus::FieldElement &) const;
        JArray< ::org::hipparchus::FieldElement > operate(const JArray< ::org::hipparchus::FieldElement > &) const;
        ::org::hipparchus::linear::FieldVector operate(const ::org::hipparchus::linear::FieldVector &) const;
        ::org::hipparchus::linear::FieldMatrix power(jint) const;
        JArray< ::org::hipparchus::FieldElement > preMultiply(const JArray< ::org::hipparchus::FieldElement > &) const;
        ::org::hipparchus::linear::FieldMatrix preMultiply(const ::org::hipparchus::linear::FieldMatrix &) const;
        ::org::hipparchus::linear::FieldVector preMultiply(const ::org::hipparchus::linear::FieldVector &) const;
        ::org::hipparchus::linear::FieldMatrix scalarAdd(const ::org::hipparchus::FieldElement &) const;
        ::org::hipparchus::linear::FieldMatrix scalarMultiply(const ::org::hipparchus::FieldElement &) const;
        void setColumn(jint, const JArray< ::org::hipparchus::FieldElement > &) const;
        void setColumnMatrix(jint, const ::org::hipparchus::linear::FieldMatrix &) const;
        void setColumnVector(jint, const ::org::hipparchus::linear::FieldVector &) const;
        void setEntry(jint, jint, const ::org::hipparchus::FieldElement &) const;
        void setRow(jint, const JArray< ::org::hipparchus::FieldElement > &) const;
        void setRowMatrix(jint, const ::org::hipparchus::linear::FieldMatrix &) const;
        void setRowVector(jint, const ::org::hipparchus::linear::FieldVector &) const;
        void setSubMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > &, jint, jint) const;
        ::org::hipparchus::linear::FieldMatrix subtract(const ::org::hipparchus::linear::FieldMatrix &) const;
        ::java::lang::String toString() const;
        ::org::hipparchus::linear::FieldMatrix transpose() const;
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
      extern PyType_Def PY_TYPE_DEF(AbstractFieldMatrix);
      extern PyTypeObject *PY_TYPE(AbstractFieldMatrix);

      class t_AbstractFieldMatrix {
      public:
        PyObject_HEAD
        AbstractFieldMatrix object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_AbstractFieldMatrix *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const AbstractFieldMatrix&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const AbstractFieldMatrix&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
