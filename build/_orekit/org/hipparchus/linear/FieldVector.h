#ifndef org_hipparchus_linear_FieldVector_H
#define org_hipparchus_linear_FieldVector_H

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
      class FieldVector;
    }
    class Field;
    class FieldElement;
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
          mid_add_17fc5256c635037d,
          mid_append_9576e351eaaaeeff,
          mid_append_17fc5256c635037d,
          mid_copy_1f378a1e2fafd4da,
          mid_dotProduct_a09dcda702fd70fc,
          mid_ebeDivide_17fc5256c635037d,
          mid_ebeMultiply_17fc5256c635037d,
          mid_getDimension_d6ab429752e7c267,
          mid_getEntry_bae57aba20797b29,
          mid_getField_577649682b9910c1,
          mid_getSubVector_ae1290ffdac268ed,
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
          mid_outerProduct_352168969c692677,
          mid_projection_17fc5256c635037d,
          mid_set_d6f1e197c99df44f,
          mid_setEntry_9f3b43c70febfa9a,
          mid_setSubVector_9f6a0cf723c2763b,
          mid_subtract_17fc5256c635037d,
          mid_toArray_eb5e61f0a5585705,
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
