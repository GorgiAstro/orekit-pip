#ifndef org_hipparchus_linear_FieldVector_H
#define org_hipparchus_linear_FieldVector_H

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
      class FieldMatrix;
    }
    class Field;
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
          mid_add_a7c6926a425759ad,
          mid_append_9c0263b78fe30ac4,
          mid_append_a7c6926a425759ad,
          mid_copy_f39e0d3c1ce991ac,
          mid_dotProduct_3954878560819a96,
          mid_ebeDivide_a7c6926a425759ad,
          mid_ebeMultiply_a7c6926a425759ad,
          mid_getDimension_412668abc8d889e9,
          mid_getEntry_d40ba91356b6a058,
          mid_getField_20f98801541dcec1,
          mid_getSubVector_6244d57986a4c96a,
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
          mid_outerProduct_2284af949fc5e425,
          mid_projection_a7c6926a425759ad,
          mid_set_b906415fb0b2ba27,
          mid_setEntry_d23b1b48c6bca206,
          mid_setSubVector_502f8ed205bebebd,
          mid_subtract_a7c6926a425759ad,
          mid_toArray_7a985a773168dff8,
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
