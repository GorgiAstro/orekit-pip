#ifndef org_hipparchus_linear_FieldVector_H
#define org_hipparchus_linear_FieldVector_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class FieldVector;
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
          mid_add_585261c47f8bb8c7,
          mid_append_8c3ffd19fe76e82d,
          mid_append_585261c47f8bb8c7,
          mid_copy_cb1d9a131d5e5e35,
          mid_dotProduct_05ce3f5e63fb7e2e,
          mid_ebeDivide_585261c47f8bb8c7,
          mid_ebeMultiply_585261c47f8bb8c7,
          mid_getDimension_f2f64475e4580546,
          mid_getEntry_5e30662bac3edb02,
          mid_getField_70b4bbd3fa378d6b,
          mid_getSubVector_0e35505a51eda123,
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
          mid_outerProduct_d2259a595105558d,
          mid_projection_585261c47f8bb8c7,
          mid_set_d517a7265f416cee,
          mid_setEntry_9dd724c9bf212c41,
          mid_setSubVector_dffd6d9d2fbaa6fc,
          mid_subtract_585261c47f8bb8c7,
          mid_toArray_394dfc39c31419fa,
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
