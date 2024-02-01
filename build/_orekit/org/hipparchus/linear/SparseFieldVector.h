#ifndef org_hipparchus_linear_SparseFieldVector_H
#define org_hipparchus_linear_SparseFieldVector_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathRuntimeException;
      class MathIllegalArgumentException;
      class NullArgumentException;
    }
    namespace linear {
      class FieldMatrix;
      class SparseFieldVector;
      class FieldVector;
      class FieldVectorPreservingVisitor;
      class FieldVectorChangingVisitor;
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
          mid_init$_a44abdd035f01345,
          mid_init$_eb6f5cf36a8e5529,
          mid_init$_399daf55ca8a95b8,
          mid_init$_ddbf374219cf6329,
          mid_add_0721ee933ad9f246,
          mid_add_17fc5256c635037d,
          mid_append_0721ee933ad9f246,
          mid_append_9576e351eaaaeeff,
          mid_append_17fc5256c635037d,
          mid_copy_1f378a1e2fafd4da,
          mid_dotProduct_a09dcda702fd70fc,
          mid_ebeDivide_17fc5256c635037d,
          mid_ebeMultiply_17fc5256c635037d,
          mid_equals_72faff9b05f5ed5e,
          mid_getDimension_d6ab429752e7c267,
          mid_getEntry_bae57aba20797b29,
          mid_getField_577649682b9910c1,
          mid_getSubVector_ae1290ffdac268ed,
          mid_hashCode_d6ab429752e7c267,
          mid_mapAdd_9576e351eaaaeeff,
          mid_mapAddToSelf_9576e351eaaaeeff,
          mid_mapDivide_9576e351eaaaeeff,
          mid_mapDivideToSelf_9576e351eaaaeeff,
          mid_mapInv_1f378a1e2fafd4da,
          mid_mapInvToSelf_1f378a1e2fafd4da,
          mid_mapMultiply_9576e351eaaaeeff,
          mid_mapMultiplyToSelf_9576e351eaaaeeff,
          mid_mapSubtract_9576e351eaaaeeff,
          mid_mapSubtractToSelf_9576e351eaaaeeff,
          mid_outerProduct_822527bacdd81087,
          mid_outerProduct_352168969c692677,
          mid_projection_17fc5256c635037d,
          mid_set_d6f1e197c99df44f,
          mid_setEntry_9f3b43c70febfa9a,
          mid_setSubVector_9f6a0cf723c2763b,
          mid_subtract_8ea0296f882fd30a,
          mid_subtract_17fc5256c635037d,
          mid_toArray_eb5e61f0a5585705,
          mid_walkInDefaultOrder_3fb4a592b41cc4b1,
          mid_walkInDefaultOrder_da260c9bcd5c518a,
          mid_walkInDefaultOrder_0dbecc976c2f23a8,
          mid_walkInDefaultOrder_823ce1f3bedac44a,
          mid_walkInOptimizedOrder_3fb4a592b41cc4b1,
          mid_walkInOptimizedOrder_da260c9bcd5c518a,
          mid_walkInOptimizedOrder_0dbecc976c2f23a8,
          mid_walkInOptimizedOrder_823ce1f3bedac44a,
          mid_checkVectorDimensions_8fd427ab23829bf5,
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
