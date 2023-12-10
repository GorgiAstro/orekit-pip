#ifndef org_hipparchus_linear_FieldVector_H
#define org_hipparchus_linear_FieldVector_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathRuntimeException;
      class MathIllegalArgumentException;
    }
    class Field;
    class FieldElement;
    namespace linear {
      class FieldMatrix;
      class FieldVector;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class FieldVector : public ::java::lang::Object {
       public:
        enum {
          mid_add_a657ce460dba8c79,
          mid_append_ca6f118471875f79,
          mid_append_a657ce460dba8c79,
          mid_copy_34cb9002c167d93d,
          mid_dotProduct_5546fa4eea5fe461,
          mid_ebeDivide_a657ce460dba8c79,
          mid_ebeMultiply_a657ce460dba8c79,
          mid_getDimension_570ce0828f81a2c1,
          mid_getEntry_ffcdb6600dc6671a,
          mid_getField_5b28be2d3632a5dc,
          mid_getSubVector_cf350b5e44ab330d,
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
          mid_outerProduct_02f30c6e86c806f6,
          mid_projection_a657ce460dba8c79,
          mid_set_f96eb0f00086e90d,
          mid_setEntry_2c97e4718ab5a1ad,
          mid_setSubVector_0c5a38a1f7c3f4d4,
          mid_subtract_a657ce460dba8c79,
          mid_toArray_cbac806c384cdbe1,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldVector(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldVector(const FieldVector& obj) : ::java::lang::Object(obj) {}

        FieldVector add(const FieldVector &) const;
        FieldVector append(const ::org::hipparchus::FieldElement &) const;
        FieldVector append(const FieldVector &) const;
        FieldVector copy() const;
        ::org::hipparchus::FieldElement dotProduct(const FieldVector &) const;
        FieldVector ebeDivide(const FieldVector &) const;
        FieldVector ebeMultiply(const FieldVector &) const;
        jint getDimension() const;
        ::org::hipparchus::FieldElement getEntry(jint) const;
        ::org::hipparchus::Field getField() const;
        FieldVector getSubVector(jint, jint) const;
        FieldVector mapAdd(const ::org::hipparchus::FieldElement &) const;
        FieldVector mapAddToSelf(const ::org::hipparchus::FieldElement &) const;
        FieldVector mapDivide(const ::org::hipparchus::FieldElement &) const;
        FieldVector mapDivideToSelf(const ::org::hipparchus::FieldElement &) const;
        FieldVector mapInv() const;
        FieldVector mapInvToSelf() const;
        FieldVector mapMultiply(const ::org::hipparchus::FieldElement &) const;
        FieldVector mapMultiplyToSelf(const ::org::hipparchus::FieldElement &) const;
        FieldVector mapSubtract(const ::org::hipparchus::FieldElement &) const;
        FieldVector mapSubtractToSelf(const ::org::hipparchus::FieldElement &) const;
        ::org::hipparchus::linear::FieldMatrix outerProduct(const FieldVector &) const;
        FieldVector projection(const FieldVector &) const;
        void set(const ::org::hipparchus::FieldElement &) const;
        void setEntry(jint, const ::org::hipparchus::FieldElement &) const;
        void setSubVector(jint, const FieldVector &) const;
        FieldVector subtract(const FieldVector &) const;
        JArray< ::org::hipparchus::FieldElement > toArray() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(FieldVector);
      extern PyTypeObject *PY_TYPE(FieldVector);

      class t_FieldVector {
      public:
        PyObject_HEAD
        FieldVector object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldVector *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldVector&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldVector&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
