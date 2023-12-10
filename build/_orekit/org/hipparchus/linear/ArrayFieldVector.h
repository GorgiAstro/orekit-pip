#ifndef org_hipparchus_linear_ArrayFieldVector_H
#define org_hipparchus_linear_ArrayFieldVector_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class FieldVectorPreservingVisitor;
      class ArrayFieldVector;
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
          mid_init$_ae869f331beac5a3,
          mid_init$_484998d88974267b,
          mid_init$_97a9526ecbe150e3,
          mid_init$_9774c1c57361b391,
          mid_init$_32e90f5b0060f32e,
          mid_init$_239d03794876d0bc,
          mid_init$_989e9dce085ad65f,
          mid_init$_78779ada9af66262,
          mid_init$_aa8209689ea11eed,
          mid_init$_c5199de6167cff95,
          mid_init$_2c97e4718ab5a1ad,
          mid_init$_13d04b0385259582,
          mid_init$_563be101a3c29b4a,
          mid_init$_963fe94ecffbee5e,
          mid_init$_2fccbcd906862e6b,
          mid_init$_5087400c092c3a0a,
          mid_add_836a82cbb58dc08f,
          mid_add_a657ce460dba8c79,
          mid_append_836a82cbb58dc08f,
          mid_append_ca6f118471875f79,
          mid_append_a657ce460dba8c79,
          mid_copy_34cb9002c167d93d,
          mid_dotProduct_e0492c19b06bbaf0,
          mid_dotProduct_5546fa4eea5fe461,
          mid_ebeDivide_836a82cbb58dc08f,
          mid_ebeDivide_a657ce460dba8c79,
          mid_ebeMultiply_836a82cbb58dc08f,
          mid_ebeMultiply_a657ce460dba8c79,
          mid_equals_65c7d273e80d497a,
          mid_getDataRef_cbac806c384cdbe1,
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
          mid_outerProduct_5a53d8eb0de13030,
          mid_outerProduct_02f30c6e86c806f6,
          mid_projection_836a82cbb58dc08f,
          mid_projection_a657ce460dba8c79,
          mid_set_f96eb0f00086e90d,
          mid_set_030a2d78726a29ac,
          mid_setEntry_2c97e4718ab5a1ad,
          mid_setSubVector_0c5a38a1f7c3f4d4,
          mid_subtract_836a82cbb58dc08f,
          mid_subtract_a657ce460dba8c79,
          mid_toArray_cbac806c384cdbe1,
          mid_toString_11b109bd155ca898,
          mid_walkInDefaultOrder_fb947c4465b9a4d6,
          mid_walkInDefaultOrder_ec6a5e8719a36b21,
          mid_walkInDefaultOrder_c01d5834289e5b85,
          mid_walkInDefaultOrder_411a1a5e2be54cff,
          mid_walkInOptimizedOrder_fb947c4465b9a4d6,
          mid_walkInOptimizedOrder_ec6a5e8719a36b21,
          mid_walkInOptimizedOrder_c01d5834289e5b85,
          mid_walkInOptimizedOrder_411a1a5e2be54cff,
          mid_checkVectorDimensions_99803b0791f320ff,
          mid_checkVectorDimensions_97a9526ecbe150e3,
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
        ArrayFieldVector(const JArray< ::org::hipparchus::FieldElement > &, jboolean);
        ArrayFieldVector(const JArray< ::org::hipparchus::FieldElement > &, const ::org::hipparchus::linear::FieldVector &);
        ArrayFieldVector(const ::org::hipparchus::Field &, const JArray< ::org::hipparchus::FieldElement > &);
        ArrayFieldVector(const ArrayFieldVector &, jboolean);
        ArrayFieldVector(const ::org::hipparchus::linear::FieldVector &, const JArray< ::org::hipparchus::FieldElement > &);
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
