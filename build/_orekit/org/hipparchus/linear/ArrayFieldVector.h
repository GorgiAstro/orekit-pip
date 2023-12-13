#ifndef org_hipparchus_linear_ArrayFieldVector_H
#define org_hipparchus_linear_ArrayFieldVector_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
      class MathRuntimeException;
    }
    namespace linear {
      class ArrayFieldVector;
      class FieldVectorPreservingVisitor;
      class FieldVectorChangingVisitor;
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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class ArrayFieldVector : public ::java::lang::Object {
       public:
        enum {
          mid_init$_17c98b43bf9b6f78,
          mid_init$_02ab84aa7626616d,
          mid_init$_a8d98eabf09c8ea2,
          mid_init$_1486600bdee8133c,
          mid_init$_481de9c265f62927,
          mid_init$_9b3d853322fd9fe9,
          mid_init$_725c6c034d3c6989,
          mid_init$_a1e449a87301face,
          mid_init$_3eaa072375f129cf,
          mid_init$_3e5e9beae9eb3b27,
          mid_init$_9127f23cedcce237,
          mid_init$_60da158123e92bc0,
          mid_init$_a09aa6877659ff5b,
          mid_init$_0076bcc9a075d436,
          mid_init$_33f797f484c0333b,
          mid_init$_e9bbcf3500fc779d,
          mid_add_0875bb37f8462e6f,
          mid_add_0c912ec1e9dd9ed7,
          mid_append_0875bb37f8462e6f,
          mid_append_9105020ef45172b7,
          mid_append_0c912ec1e9dd9ed7,
          mid_copy_b8b88195d3642875,
          mid_dotProduct_ecb2c24e32602813,
          mid_dotProduct_8b189f525aa86de4,
          mid_ebeDivide_0875bb37f8462e6f,
          mid_ebeDivide_0c912ec1e9dd9ed7,
          mid_ebeMultiply_0875bb37f8462e6f,
          mid_ebeMultiply_0c912ec1e9dd9ed7,
          mid_equals_460c5e2d9d51c6cc,
          mid_getDataRef_ae860dc2d782e386,
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
          mid_outerProduct_6b83ce54dd732da9,
          mid_outerProduct_8dfd3dc5a728ee60,
          mid_projection_0875bb37f8462e6f,
          mid_projection_0c912ec1e9dd9ed7,
          mid_set_8d8d85cc6e14d2f7,
          mid_set_5ca7010e88d42feb,
          mid_setEntry_3e5e9beae9eb3b27,
          mid_setSubVector_cd62bfbc5992c85f,
          mid_subtract_0875bb37f8462e6f,
          mid_subtract_0c912ec1e9dd9ed7,
          mid_toArray_ae860dc2d782e386,
          mid_toString_1c1fa1e935d6cdcf,
          mid_walkInDefaultOrder_902d02ebed1c011e,
          mid_walkInDefaultOrder_7d08c02ef3ca9df3,
          mid_walkInDefaultOrder_07dcd460c79c870d,
          mid_walkInDefaultOrder_5b32a72c59f76929,
          mid_walkInOptimizedOrder_902d02ebed1c011e,
          mid_walkInOptimizedOrder_7d08c02ef3ca9df3,
          mid_walkInOptimizedOrder_07dcd460c79c870d,
          mid_walkInOptimizedOrder_5b32a72c59f76929,
          mid_checkVectorDimensions_44ed599e93e8a30c,
          mid_checkVectorDimensions_a8d98eabf09c8ea2,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ArrayFieldVector(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ArrayFieldVector(const ArrayFieldVector& obj) : ::java::lang::Object(obj) {}

        ArrayFieldVector(const JArray< ::org::hipparchus::FieldElement > &);
        ArrayFieldVector(const ::org::hipparchus::Field &);
        ArrayFieldVector(const ::org::hipparchus::linear::FieldVector &);
        ArrayFieldVector(const JArray< ::org::hipparchus::FieldElement > &, const JArray< ::org::hipparchus::FieldElement > &);
        ArrayFieldVector(const ::org::hipparchus::linear::FieldVector &, const JArray< ::org::hipparchus::FieldElement > &);
        ArrayFieldVector(const JArray< ::org::hipparchus::FieldElement > &, jboolean);
        ArrayFieldVector(const JArray< ::org::hipparchus::FieldElement > &, const ::org::hipparchus::linear::FieldVector &);
        ArrayFieldVector(const ::org::hipparchus::Field &, const JArray< ::org::hipparchus::FieldElement > &);
        ArrayFieldVector(const ArrayFieldVector &, jboolean);
        ArrayFieldVector(jint, const ::org::hipparchus::FieldElement &);
        ArrayFieldVector(const ::org::hipparchus::Field &, jint);
        ArrayFieldVector(const ::org::hipparchus::linear::FieldVector &, const ::org::hipparchus::linear::FieldVector &);
        ArrayFieldVector(const ::org::hipparchus::Field &, const JArray< ::org::hipparchus::FieldElement > &, const JArray< ::org::hipparchus::FieldElement > &);
        ArrayFieldVector(const ::org::hipparchus::Field &, const JArray< ::org::hipparchus::FieldElement > &, jboolean);
        ArrayFieldVector(const JArray< ::org::hipparchus::FieldElement > &, jint, jint);
        ArrayFieldVector(const ::org::hipparchus::Field &, const JArray< ::org::hipparchus::FieldElement > &, jint, jint);

        ArrayFieldVector add(const ArrayFieldVector &) const;
        ::org::hipparchus::linear::FieldVector add(const ::org::hipparchus::linear::FieldVector &) const;
        ArrayFieldVector append(const ArrayFieldVector &) const;
        ::org::hipparchus::linear::FieldVector append(const ::org::hipparchus::FieldElement &) const;
        ::org::hipparchus::linear::FieldVector append(const ::org::hipparchus::linear::FieldVector &) const;
        ::org::hipparchus::linear::FieldVector copy() const;
        ::org::hipparchus::FieldElement dotProduct(const ArrayFieldVector &) const;
        ::org::hipparchus::FieldElement dotProduct(const ::org::hipparchus::linear::FieldVector &) const;
        ArrayFieldVector ebeDivide(const ArrayFieldVector &) const;
        ::org::hipparchus::linear::FieldVector ebeDivide(const ::org::hipparchus::linear::FieldVector &) const;
        ArrayFieldVector ebeMultiply(const ArrayFieldVector &) const;
        ::org::hipparchus::linear::FieldVector ebeMultiply(const ::org::hipparchus::linear::FieldVector &) const;
        jboolean equals(const ::java::lang::Object &) const;
        JArray< ::org::hipparchus::FieldElement > getDataRef() const;
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
        ::org::hipparchus::linear::FieldMatrix outerProduct(const ArrayFieldVector &) const;
        ::org::hipparchus::linear::FieldMatrix outerProduct(const ::org::hipparchus::linear::FieldVector &) const;
        ArrayFieldVector projection(const ArrayFieldVector &) const;
        ::org::hipparchus::linear::FieldVector projection(const ::org::hipparchus::linear::FieldVector &) const;
        void set(const ::org::hipparchus::FieldElement &) const;
        void set(jint, const ArrayFieldVector &) const;
        void setEntry(jint, const ::org::hipparchus::FieldElement &) const;
        void setSubVector(jint, const ::org::hipparchus::linear::FieldVector &) const;
        ArrayFieldVector subtract(const ArrayFieldVector &) const;
        ::org::hipparchus::linear::FieldVector subtract(const ::org::hipparchus::linear::FieldVector &) const;
        JArray< ::org::hipparchus::FieldElement > toArray() const;
        ::java::lang::String toString() const;
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
      extern PyType_Def PY_TYPE_DEF(ArrayFieldVector);
      extern PyTypeObject *PY_TYPE(ArrayFieldVector);

      class t_ArrayFieldVector {
      public:
        PyObject_HEAD
        ArrayFieldVector object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_ArrayFieldVector *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const ArrayFieldVector&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const ArrayFieldVector&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
