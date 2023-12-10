#ifndef org_hipparchus_linear_SparseFieldVector_H
#define org_hipparchus_linear_SparseFieldVector_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class FieldVectorPreservingVisitor;
      class SparseFieldVector;
      class FieldVectorChangingVisitor;
      class FieldMatrix;
      class FieldVector;
    }
    namespace exception {
      class NullArgumentException;
      class MathRuntimeException;
      class MathIllegalArgumentException;
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
          mid_init$_484998d88974267b,
          mid_init$_989e9dce085ad65f,
          mid_init$_c5199de6167cff95,
          mid_init$_7dbd657fb2d34563,
          mid_add_c47354bb26c2147b,
          mid_add_a657ce460dba8c79,
          mid_append_c47354bb26c2147b,
          mid_append_ca6f118471875f79,
          mid_append_a657ce460dba8c79,
          mid_copy_34cb9002c167d93d,
          mid_dotProduct_5546fa4eea5fe461,
          mid_ebeDivide_a657ce460dba8c79,
          mid_ebeMultiply_a657ce460dba8c79,
          mid_equals_65c7d273e80d497a,
          mid_getDimension_570ce0828f81a2c1,
          mid_getEntry_ffcdb6600dc6671a,
          mid_getField_5b28be2d3632a5dc,
          mid_getSubVector_cf350b5e44ab330d,
          mid_hashCode_570ce0828f81a2c1,
          mid_mapAdd_ca6f118471875f79,
          mid_mapAddToSelf_ca6f118471875f79,
          mid_mapDivide_ca6f118471875f79,
          mid_mapDivideToSelf_ca6f118471875f79,
          mid_mapInv_34cb9002c167d93d,
          mid_mapInvToSelf_34cb9002c167d93d,
          mid_mapMultiply_ca6f118471875f79,
          mid_mapMultiplyToSelf_ca6f118471875f79,
          mid_mapSubtract_ca6f118471875f79,
          mid_mapSubtractToSelf_ca6f118471875f79,
          mid_outerProduct_28708d1eb805c815,
          mid_outerProduct_02f30c6e86c806f6,
          mid_projection_a657ce460dba8c79,
          mid_set_f96eb0f00086e90d,
          mid_setEntry_2c97e4718ab5a1ad,
          mid_setSubVector_0c5a38a1f7c3f4d4,
          mid_subtract_3ea4a04bce899c30,
          mid_subtract_a657ce460dba8c79,
          mid_toArray_cbac806c384cdbe1,
          mid_walkInDefaultOrder_fb947c4465b9a4d6,
          mid_walkInDefaultOrder_ec6a5e8719a36b21,
          mid_walkInDefaultOrder_c01d5834289e5b85,
          mid_walkInDefaultOrder_411a1a5e2be54cff,
          mid_walkInOptimizedOrder_fb947c4465b9a4d6,
          mid_walkInOptimizedOrder_ec6a5e8719a36b21,
          mid_walkInOptimizedOrder_c01d5834289e5b85,
          mid_walkInOptimizedOrder_411a1a5e2be54cff,
          mid_checkVectorDimensions_99803b0791f320ff,
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
