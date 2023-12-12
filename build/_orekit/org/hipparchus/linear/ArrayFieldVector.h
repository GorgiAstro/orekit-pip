#ifndef org_hipparchus_linear_ArrayFieldVector_H
#define org_hipparchus_linear_ArrayFieldVector_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class FieldElement;
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
      class MathRuntimeException;
    }
    namespace linear {
      class FieldVector;
      class FieldVectorChangingVisitor;
      class FieldMatrix;
      class FieldVectorPreservingVisitor;
      class ArrayFieldVector;
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
          mid_init$_b21b5587abda5ee9,
          mid_init$_979ae7f57a96b096,
          mid_init$_4ae1c7672d20bfa1,
          mid_init$_7bc542994fc2f915,
          mid_init$_0fd9ea2bb1f66bfb,
          mid_init$_b19b4cfb9aa4498b,
          mid_init$_72be9826404dd64a,
          mid_init$_1b9cf9fe2f8d539c,
          mid_init$_35646f9483fed933,
          mid_init$_d23b1b48c6bca206,
          mid_init$_f89bf3117923cd08,
          mid_init$_75116bc6ab3568ce,
          mid_init$_d4a6fa10f81643b2,
          mid_init$_cabe16a784b00aed,
          mid_init$_7f004047d24178f7,
          mid_init$_50e98ebb6b2854f4,
          mid_add_887c3a8a43dc43d5,
          mid_add_a7c6926a425759ad,
          mid_append_887c3a8a43dc43d5,
          mid_append_9c0263b78fe30ac4,
          mid_append_a7c6926a425759ad,
          mid_copy_f39e0d3c1ce991ac,
          mid_dotProduct_1073206769d7032b,
          mid_dotProduct_3954878560819a96,
          mid_ebeDivide_887c3a8a43dc43d5,
          mid_ebeDivide_a7c6926a425759ad,
          mid_ebeMultiply_887c3a8a43dc43d5,
          mid_ebeMultiply_a7c6926a425759ad,
          mid_equals_221e8e85cb385209,
          mid_getDataRef_7a985a773168dff8,
          mid_getDimension_412668abc8d889e9,
          mid_getEntry_d40ba91356b6a058,
          mid_getField_20f98801541dcec1,
          mid_getSubVector_6244d57986a4c96a,
          mid_hashCode_412668abc8d889e9,
          mid_mapAdd_9c0263b78fe30ac4,
          mid_mapAddToSelf_9c0263b78fe30ac4,
          mid_mapDivide_9c0263b78fe30ac4,
          mid_mapDivideToSelf_9c0263b78fe30ac4,
          mid_mapInv_f39e0d3c1ce991ac,
          mid_mapInvToSelf_f39e0d3c1ce991ac,
          mid_mapMultiply_9c0263b78fe30ac4,
          mid_mapMultiplyToSelf_9c0263b78fe30ac4,
          mid_mapSubtract_9c0263b78fe30ac4,
          mid_mapSubtractToSelf_9c0263b78fe30ac4,
          mid_outerProduct_fddb7f739bb2af31,
          mid_outerProduct_2284af949fc5e425,
          mid_projection_887c3a8a43dc43d5,
          mid_projection_a7c6926a425759ad,
          mid_set_b906415fb0b2ba27,
          mid_set_db042c11dacf50d1,
          mid_setEntry_d23b1b48c6bca206,
          mid_setSubVector_502f8ed205bebebd,
          mid_subtract_887c3a8a43dc43d5,
          mid_subtract_a7c6926a425759ad,
          mid_toArray_7a985a773168dff8,
          mid_toString_3cffd47377eca18a,
          mid_walkInDefaultOrder_a4b00f8c7fc7e690,
          mid_walkInDefaultOrder_1915435d849c895c,
          mid_walkInDefaultOrder_3d5cadff5023e9d0,
          mid_walkInDefaultOrder_57525d52a5913d3a,
          mid_walkInOptimizedOrder_a4b00f8c7fc7e690,
          mid_walkInOptimizedOrder_1915435d849c895c,
          mid_walkInOptimizedOrder_3d5cadff5023e9d0,
          mid_walkInOptimizedOrder_57525d52a5913d3a,
          mid_checkVectorDimensions_4ae1c7672d20bfa1,
          mid_checkVectorDimensions_a3da1a935cb37f7b,
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
