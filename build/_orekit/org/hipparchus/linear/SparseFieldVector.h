#ifndef org_hipparchus_linear_SparseFieldVector_H
#define org_hipparchus_linear_SparseFieldVector_H

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
      class SparseFieldVector;
      class FieldVectorChangingVisitor;
      class FieldMatrix;
      class FieldVectorPreservingVisitor;
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

      class SparseFieldVector : public ::java::lang::Object {
       public:
        enum {
          mid_init$_979ae7f57a96b096,
          mid_init$_1b9cf9fe2f8d539c,
          mid_init$_f89bf3117923cd08,
          mid_init$_a9ccb012d4cb48bd,
          mid_add_d67ce590c75ba943,
          mid_add_a7c6926a425759ad,
          mid_append_d67ce590c75ba943,
          mid_append_9c0263b78fe30ac4,
          mid_append_a7c6926a425759ad,
          mid_copy_f39e0d3c1ce991ac,
          mid_dotProduct_3954878560819a96,
          mid_ebeDivide_a7c6926a425759ad,
          mid_ebeMultiply_a7c6926a425759ad,
          mid_equals_221e8e85cb385209,
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
          mid_outerProduct_05ccbe5320838a83,
          mid_outerProduct_2284af949fc5e425,
          mid_projection_a7c6926a425759ad,
          mid_set_b906415fb0b2ba27,
          mid_setEntry_d23b1b48c6bca206,
          mid_setSubVector_502f8ed205bebebd,
          mid_subtract_c8e2f1a6e8745452,
          mid_subtract_a7c6926a425759ad,
          mid_toArray_7a985a773168dff8,
          mid_walkInDefaultOrder_a4b00f8c7fc7e690,
          mid_walkInDefaultOrder_1915435d849c895c,
          mid_walkInDefaultOrder_3d5cadff5023e9d0,
          mid_walkInDefaultOrder_57525d52a5913d3a,
          mid_walkInOptimizedOrder_a4b00f8c7fc7e690,
          mid_walkInOptimizedOrder_1915435d849c895c,
          mid_walkInOptimizedOrder_3d5cadff5023e9d0,
          mid_walkInOptimizedOrder_57525d52a5913d3a,
          mid_checkVectorDimensions_a3da1a935cb37f7b,
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
