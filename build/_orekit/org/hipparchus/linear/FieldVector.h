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
          mid_add_0c912ec1e9dd9ed7,
          mid_append_9105020ef45172b7,
          mid_append_0c912ec1e9dd9ed7,
          mid_copy_b8b88195d3642875,
          mid_dotProduct_8b189f525aa86de4,
          mid_ebeDivide_0c912ec1e9dd9ed7,
          mid_ebeMultiply_0c912ec1e9dd9ed7,
          mid_getDimension_55546ef6a647f39b,
          mid_getEntry_6c5caf579ccf9ce5,
          mid_getField_04d1f63e17d5c5d4,
          mid_getSubVector_b42960a5471f10ed,
          mid_mapAdd_9105020ef45172b7,
          mid_mapAddToSelf_9105020ef45172b7,
          mid_mapDivide_9105020ef45172b7,
          mid_mapDivideToSelf_9105020ef45172b7,
          mid_mapInv_b8b88195d3642875,
          mid_mapInvToSelf_b8b88195d3642875,
          mid_mapMultiply_9105020ef45172b7,
          mid_mapMultiplyToSelf_9105020ef45172b7,
          mid_mapSubtract_9105020ef45172b7,
          mid_mapSubtractToSelf_9105020ef45172b7,
          mid_outerProduct_8dfd3dc5a728ee60,
          mid_projection_0c912ec1e9dd9ed7,
          mid_set_8d8d85cc6e14d2f7,
          mid_setEntry_3e5e9beae9eb3b27,
          mid_setSubVector_cd62bfbc5992c85f,
          mid_subtract_0c912ec1e9dd9ed7,
          mid_toArray_ae860dc2d782e386,
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
