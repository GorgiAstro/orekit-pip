#ifndef org_hipparchus_linear_SparseFieldVector_H
#define org_hipparchus_linear_SparseFieldVector_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class FieldVectorChangingVisitor;
      class FieldVector;
      class FieldVectorPreservingVisitor;
      class SparseFieldVector;
      class FieldMatrix;
    }
    class Field;
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
      class MathRuntimeException;
    }
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
          mid_init$_205c34b8e33cf33f,
          mid_init$_1cb2de56c89f4b52,
          mid_init$_a69d58691b2f6a42,
          mid_init$_11914f5932256658,
          mid_add_3dcf0b9943835ef4,
          mid_add_585261c47f8bb8c7,
          mid_append_3dcf0b9943835ef4,
          mid_append_8c3ffd19fe76e82d,
          mid_append_585261c47f8bb8c7,
          mid_copy_cb1d9a131d5e5e35,
          mid_dotProduct_05ce3f5e63fb7e2e,
          mid_ebeDivide_585261c47f8bb8c7,
          mid_ebeMultiply_585261c47f8bb8c7,
          mid_equals_229c87223f486349,
          mid_getDimension_f2f64475e4580546,
          mid_getEntry_5e30662bac3edb02,
          mid_getField_70b4bbd3fa378d6b,
          mid_getSubVector_0e35505a51eda123,
          mid_hashCode_f2f64475e4580546,
          mid_mapAdd_8c3ffd19fe76e82d,
          mid_mapAddToSelf_8c3ffd19fe76e82d,
          mid_mapDivide_8c3ffd19fe76e82d,
          mid_mapDivideToSelf_8c3ffd19fe76e82d,
          mid_mapInv_cb1d9a131d5e5e35,
          mid_mapInvToSelf_cb1d9a131d5e5e35,
          mid_mapMultiply_8c3ffd19fe76e82d,
          mid_mapMultiplyToSelf_8c3ffd19fe76e82d,
          mid_mapSubtract_8c3ffd19fe76e82d,
          mid_mapSubtractToSelf_8c3ffd19fe76e82d,
          mid_outerProduct_3a8e2a6c92fd1cf2,
          mid_outerProduct_d2259a595105558d,
          mid_projection_585261c47f8bb8c7,
          mid_set_d517a7265f416cee,
          mid_setEntry_9dd724c9bf212c41,
          mid_setSubVector_dffd6d9d2fbaa6fc,
          mid_subtract_5a56d0bd99be417f,
          mid_subtract_585261c47f8bb8c7,
          mid_toArray_394dfc39c31419fa,
          mid_walkInDefaultOrder_648bcdf08fddb790,
          mid_walkInDefaultOrder_0f7840d9f7bdbccc,
          mid_walkInDefaultOrder_b9f5757f8273f2da,
          mid_walkInDefaultOrder_47b54617593d4460,
          mid_walkInOptimizedOrder_648bcdf08fddb790,
          mid_walkInOptimizedOrder_0f7840d9f7bdbccc,
          mid_walkInOptimizedOrder_b9f5757f8273f2da,
          mid_walkInOptimizedOrder_47b54617593d4460,
          mid_checkVectorDimensions_0a2a1ac2721c0336,
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
