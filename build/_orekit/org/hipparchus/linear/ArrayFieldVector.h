#ifndef org_hipparchus_linear_ArrayFieldVector_H
#define org_hipparchus_linear_ArrayFieldVector_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class FieldVectorChangingVisitor;
      class FieldVector;
      class FieldVectorPreservingVisitor;
      class ArrayFieldVector;
      class FieldMatrix;
    }
    class Field;
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
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
          mid_init$_191170fc417b1ede,
          mid_init$_205c34b8e33cf33f,
          mid_init$_de2baf890d40c799,
          mid_init$_cd177bbf1030e8f0,
          mid_init$_1cb2de56c89f4b52,
          mid_init$_730d25935931438e,
          mid_init$_80cbde2b1ba274bb,
          mid_init$_9a9642a8eac68e90,
          mid_init$_977c7685fba60df6,
          mid_init$_a69d58691b2f6a42,
          mid_init$_9dd724c9bf212c41,
          mid_init$_2caece97f0ac0be6,
          mid_init$_335112f3625cf774,
          mid_init$_4e929eb1d19366a2,
          mid_init$_f76d03b2a71066f2,
          mid_init$_0fee8a6e36e39351,
          mid_add_c2cbada2fab61aaf,
          mid_add_585261c47f8bb8c7,
          mid_append_c2cbada2fab61aaf,
          mid_append_8c3ffd19fe76e82d,
          mid_append_585261c47f8bb8c7,
          mid_copy_cb1d9a131d5e5e35,
          mid_dotProduct_f01ee40a16838c43,
          mid_dotProduct_05ce3f5e63fb7e2e,
          mid_ebeDivide_c2cbada2fab61aaf,
          mid_ebeDivide_585261c47f8bb8c7,
          mid_ebeMultiply_c2cbada2fab61aaf,
          mid_ebeMultiply_585261c47f8bb8c7,
          mid_equals_229c87223f486349,
          mid_getDataRef_394dfc39c31419fa,
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
          mid_outerProduct_7847734e8a11af6c,
          mid_outerProduct_d2259a595105558d,
          mid_projection_c2cbada2fab61aaf,
          mid_projection_585261c47f8bb8c7,
          mid_set_d517a7265f416cee,
          mid_set_867b7f18c7fee68a,
          mid_setEntry_9dd724c9bf212c41,
          mid_setSubVector_dffd6d9d2fbaa6fc,
          mid_subtract_c2cbada2fab61aaf,
          mid_subtract_585261c47f8bb8c7,
          mid_toArray_394dfc39c31419fa,
          mid_toString_0090f7797e403f43,
          mid_walkInDefaultOrder_648bcdf08fddb790,
          mid_walkInDefaultOrder_0f7840d9f7bdbccc,
          mid_walkInDefaultOrder_b9f5757f8273f2da,
          mid_walkInDefaultOrder_47b54617593d4460,
          mid_walkInOptimizedOrder_648bcdf08fddb790,
          mid_walkInOptimizedOrder_0f7840d9f7bdbccc,
          mid_walkInOptimizedOrder_b9f5757f8273f2da,
          mid_walkInOptimizedOrder_47b54617593d4460,
          mid_checkVectorDimensions_0a2a1ac2721c0336,
          mid_checkVectorDimensions_de2baf890d40c799,
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
        ArrayFieldVector(const ::org::hipparchus::Field &, const JArray< ::org::hipparchus::FieldElement > &);
        ArrayFieldVector(const ::org::hipparchus::linear::FieldVector &, const JArray< ::org::hipparchus::FieldElement > &);
        ArrayFieldVector(const JArray< ::org::hipparchus::FieldElement > &, jboolean);
        ArrayFieldVector(const ArrayFieldVector &, jboolean);
        ArrayFieldVector(const JArray< ::org::hipparchus::FieldElement > &, const ::org::hipparchus::linear::FieldVector &);
        ArrayFieldVector(const ::org::hipparchus::Field &, jint);
        ArrayFieldVector(jint, const ::org::hipparchus::FieldElement &);
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
