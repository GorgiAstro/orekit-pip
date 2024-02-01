#ifndef org_hipparchus_linear_ArrayFieldVector_H
#define org_hipparchus_linear_ArrayFieldVector_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathRuntimeException;
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    namespace linear {
      class FieldMatrix;
      class ArrayFieldVector;
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
          mid_init$_79693579cf1d6b54,
          mid_init$_a44abdd035f01345,
          mid_init$_fde30977c9ff1b4e,
          mid_init$_fd889dd47d71a554,
          mid_init$_bc7e8e596a7db6b1,
          mid_init$_eb6f5cf36a8e5529,
          mid_init$_4fe17ebc0e6c05cc,
          mid_init$_739201e4a53e1d39,
          mid_init$_8b3003ff2f930390,
          mid_init$_9f3b43c70febfa9a,
          mid_init$_399daf55ca8a95b8,
          mid_init$_9230bfe415edd134,
          mid_init$_39523216e5e5321b,
          mid_init$_943a3f3b5b2861b9,
          mid_init$_91a5b42771d1d19d,
          mid_init$_7bf885858263907b,
          mid_add_f34d04d7e9738aec,
          mid_add_17fc5256c635037d,
          mid_append_f34d04d7e9738aec,
          mid_append_9576e351eaaaeeff,
          mid_append_17fc5256c635037d,
          mid_copy_1f378a1e2fafd4da,
          mid_dotProduct_ff90c3d463ea7188,
          mid_dotProduct_a09dcda702fd70fc,
          mid_ebeDivide_f34d04d7e9738aec,
          mid_ebeDivide_17fc5256c635037d,
          mid_ebeMultiply_f34d04d7e9738aec,
          mid_ebeMultiply_17fc5256c635037d,
          mid_equals_72faff9b05f5ed5e,
          mid_getDataRef_eb5e61f0a5585705,
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
          mid_outerProduct_700a885a9e53a5ec,
          mid_outerProduct_352168969c692677,
          mid_projection_f34d04d7e9738aec,
          mid_projection_17fc5256c635037d,
          mid_set_d6f1e197c99df44f,
          mid_set_01f4d4941b9f371e,
          mid_setEntry_9f3b43c70febfa9a,
          mid_setSubVector_9f6a0cf723c2763b,
          mid_subtract_f34d04d7e9738aec,
          mid_subtract_17fc5256c635037d,
          mid_toArray_eb5e61f0a5585705,
          mid_toString_d2c8eb4129821f0e,
          mid_walkInDefaultOrder_3fb4a592b41cc4b1,
          mid_walkInDefaultOrder_da260c9bcd5c518a,
          mid_walkInDefaultOrder_0dbecc976c2f23a8,
          mid_walkInDefaultOrder_823ce1f3bedac44a,
          mid_walkInOptimizedOrder_3fb4a592b41cc4b1,
          mid_walkInOptimizedOrder_da260c9bcd5c518a,
          mid_walkInOptimizedOrder_0dbecc976c2f23a8,
          mid_walkInOptimizedOrder_823ce1f3bedac44a,
          mid_checkVectorDimensions_8fd427ab23829bf5,
          mid_checkVectorDimensions_fde30977c9ff1b4e,
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
        ArrayFieldVector(const JArray< ::org::hipparchus::FieldElement > &, const ::org::hipparchus::linear::FieldVector &);
        ArrayFieldVector(const ::org::hipparchus::Field &, const JArray< ::org::hipparchus::FieldElement > &);
        ArrayFieldVector(const ::org::hipparchus::linear::FieldVector &, const JArray< ::org::hipparchus::FieldElement > &);
        ArrayFieldVector(const JArray< ::org::hipparchus::FieldElement > &, jboolean);
        ArrayFieldVector(const ArrayFieldVector &, jboolean);
        ArrayFieldVector(jint, const ::org::hipparchus::FieldElement &);
        ArrayFieldVector(const ::org::hipparchus::Field &, jint);
        ArrayFieldVector(const ::org::hipparchus::linear::FieldVector &, const ::org::hipparchus::linear::FieldVector &);
        ArrayFieldVector(const ::org::hipparchus::Field &, const JArray< ::org::hipparchus::FieldElement > &, const JArray< ::org::hipparchus::FieldElement > &);
        ArrayFieldVector(const JArray< ::org::hipparchus::FieldElement > &, jint, jint);
        ArrayFieldVector(const ::org::hipparchus::Field &, const JArray< ::org::hipparchus::FieldElement > &, jboolean);
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
