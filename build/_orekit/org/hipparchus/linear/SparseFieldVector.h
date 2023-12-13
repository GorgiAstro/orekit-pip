#ifndef org_hipparchus_linear_SparseFieldVector_H
#define org_hipparchus_linear_SparseFieldVector_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathRuntimeException;
      class MathIllegalArgumentException;
    }
    namespace linear {
      class FieldVectorPreservingVisitor;
      class FieldVectorChangingVisitor;
      class SparseFieldVector;
      class FieldMatrix;
      class FieldVector;
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

      class SparseFieldVector : public ::java::lang::Object {
       public:
        enum {
          mid_init$_02ab84aa7626616d,
          mid_init$_a1e449a87301face,
          mid_init$_9127f23cedcce237,
          mid_init$_b6c946d1cbf160f0,
          mid_add_850938212cbcebbc,
          mid_add_0c912ec1e9dd9ed7,
          mid_append_850938212cbcebbc,
          mid_append_9105020ef45172b7,
          mid_append_0c912ec1e9dd9ed7,
          mid_copy_b8b88195d3642875,
          mid_dotProduct_8b189f525aa86de4,
          mid_ebeDivide_0c912ec1e9dd9ed7,
          mid_ebeMultiply_0c912ec1e9dd9ed7,
          mid_equals_460c5e2d9d51c6cc,
          mid_getDimension_55546ef6a647f39b,
          mid_getEntry_6c5caf579ccf9ce5,
          mid_getField_04d1f63e17d5c5d4,
          mid_getSubVector_b42960a5471f10ed,
          mid_hashCode_55546ef6a647f39b,
          mid_mapAdd_9105020ef45172b7,
          mid_mapAddToSelf_9105020ef45172b7,
          mid_mapDivide_9105020ef45172b7,
          mid_mapDivideToSelf_9105020ef45172b7,
          mid_mapInv_b8b88195d3642875,
          mid_mapInvToSelf_b8b88195d3642875,
          mid_mapMultiply_9105020ef45172b7,
          mid_mapMultiplyToSelf_9105020ef45172b7,
          mid_mapSubtract_9105020ef45172b7,
          mid_mapSubtractToSelf_9105020ef45172b7,
          mid_outerProduct_00df9023db23fdc5,
          mid_outerProduct_8dfd3dc5a728ee60,
          mid_projection_0c912ec1e9dd9ed7,
          mid_set_8d8d85cc6e14d2f7,
          mid_setEntry_3e5e9beae9eb3b27,
          mid_setSubVector_cd62bfbc5992c85f,
          mid_subtract_546a6c273c5fbab3,
          mid_subtract_0c912ec1e9dd9ed7,
          mid_toArray_ae860dc2d782e386,
          mid_walkInDefaultOrder_902d02ebed1c011e,
          mid_walkInDefaultOrder_7d08c02ef3ca9df3,
          mid_walkInDefaultOrder_07dcd460c79c870d,
          mid_walkInDefaultOrder_5b32a72c59f76929,
          mid_walkInOptimizedOrder_902d02ebed1c011e,
          mid_walkInOptimizedOrder_7d08c02ef3ca9df3,
          mid_walkInOptimizedOrder_07dcd460c79c870d,
          mid_walkInOptimizedOrder_5b32a72c59f76929,
          mid_checkVectorDimensions_44ed599e93e8a30c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit SparseFieldVector(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        SparseFieldVector(const SparseFieldVector& obj) : ::java::lang::Object(obj) {}

        SparseFieldVector(const ::org::hipparchus::Field &);
        SparseFieldVector(const ::org::hipparchus::Field &, const JArray< ::org::hipparchus::FieldElement > &);
        SparseFieldVector(const ::org::hipparchus::Field &, jint);
        SparseFieldVector(const ::org::hipparchus::Field &, jint, jint);

        ::org::hipparchus::linear::FieldVector add(const SparseFieldVector &) const;
        ::org::hipparchus::linear::FieldVector add(const ::org::hipparchus::linear::FieldVector &) const;
        ::org::hipparchus::linear::FieldVector append(const SparseFieldVector &) const;
        ::org::hipparchus::linear::FieldVector append(const ::org::hipparchus::FieldElement &) const;
        ::org::hipparchus::linear::FieldVector append(const ::org::hipparchus::linear::FieldVector &) const;
        ::org::hipparchus::linear::FieldVector copy() const;
        ::org::hipparchus::FieldElement dotProduct(const ::org::hipparchus::linear::FieldVector &) const;
        ::org::hipparchus::linear::FieldVector ebeDivide(const ::org::hipparchus::linear::FieldVector &) const;
        ::org::hipparchus::linear::FieldVector ebeMultiply(const ::org::hipparchus::linear::FieldVector &) const;
        jboolean equals(const ::java::lang::Object &) const;
        jint getDimension() const;
        ::org::hipparchus::FieldElement getEntry(jint) const;
        ::org::hipparchus::Field getField() const;
        ::org::hipparchus::linear::FieldVector getSubVector(jint, jint) const;
        jint hashCode() const;
        ::org::hipparchus::linear::FieldVector mapAdd(const ::org::hipparchus::FieldElement &) const;
        ::org::hipparchus::linear::FieldVector mapAddToSelf(const ::org::hipparchus::FieldElement &) const;
        ::org::hipparchus::linear::FieldVector mapDivide(const ::org::hipparchus::FieldElement &) const;
        ::org::hipparchus::linear::FieldVector mapDivideToSelf(const ::org::hipparchus::FieldElement &) const;
        ::org::hipparchus::linear::FieldVector mapInv() const;
        ::org::hipparchus::linear::FieldVector mapInvToSelf() const;
        ::org::hipparchus::linear::FieldVector mapMultiply(const ::org::hipparchus::FieldElement &) const;
        ::org::hipparchus::linear::FieldVector mapMultiplyToSelf(const ::org::hipparchus::FieldElement &) const;
        ::org::hipparchus::linear::FieldVector mapSubtract(const ::org::hipparchus::FieldElement &) const;
        ::org::hipparchus::linear::FieldVector mapSubtractToSelf(const ::org::hipparchus::FieldElement &) const;
        ::org::hipparchus::linear::FieldMatrix outerProduct(const SparseFieldVector &) const;
        ::org::hipparchus::linear::FieldMatrix outerProduct(const ::org::hipparchus::linear::FieldVector &) const;
        ::org::hipparchus::linear::FieldVector projection(const ::org::hipparchus::linear::FieldVector &) const;
        void set(const ::org::hipparchus::FieldElement &) const;
        void setEntry(jint, const ::org::hipparchus::FieldElement &) const;
        void setSubVector(jint, const ::org::hipparchus::linear::FieldVector &) const;
        SparseFieldVector subtract(const SparseFieldVector &) const;
        ::org::hipparchus::linear::FieldVector subtract(const ::org::hipparchus::linear::FieldVector &) const;
        JArray< ::org::hipparchus::FieldElement > toArray() const;
        ::org::hipparchus::FieldElement walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor &) const;
        ::org::hipparchus::FieldElement walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor &) const;
        ::org::hipparchus::FieldElement walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor &, jint, jint) const;
        ::org::hipparchus::FieldElement walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor &, jint, jint) const;
        ::org::hipparchus::FieldElement walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor &) const;
        ::org::hipparchus::FieldElement walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor &) const;
        ::org::hipparchus::FieldElement walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor &, jint, jint) const;
        ::org::hipparchus::FieldElement walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor &, jint, jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(SparseFieldVector);
      extern PyTypeObject *PY_TYPE(SparseFieldVector);

      class t_SparseFieldVector {
      public:
        PyObject_HEAD
        SparseFieldVector object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_SparseFieldVector *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const SparseFieldVector&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const SparseFieldVector&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
