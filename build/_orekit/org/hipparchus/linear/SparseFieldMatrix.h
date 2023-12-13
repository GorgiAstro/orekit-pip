#ifndef org_hipparchus_linear_SparseFieldMatrix_H
#define org_hipparchus_linear_SparseFieldMatrix_H

#include "org/hipparchus/linear/AbstractFieldMatrix.h"

namespace org {
  namespace hipparchus {
    class Field;
    class FieldElement;
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace linear {
      class FieldMatrix;
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

      class SparseFieldMatrix : public ::org::hipparchus::linear::AbstractFieldMatrix {
       public:
        enum {
          mid_init$_02ab84aa7626616d,
          mid_init$_3c04247304967ec8,
          mid_init$_b6c946d1cbf160f0,
          mid_addToEntry_c2695120fce254e7,
          mid_copy_81d49643ce3a3c0b,
          mid_createMatrix_add2e370542edc2f,
          mid_getColumnDimension_55546ef6a647f39b,
          mid_getEntry_d0f2803baa5859d6,
          mid_getRowDimension_55546ef6a647f39b,
          mid_multiplyEntry_c2695120fce254e7,
          mid_multiplyTransposed_e74c5d5fdc2ea025,
          mid_setEntry_c2695120fce254e7,
          mid_transposeMultiply_e74c5d5fdc2ea025,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit SparseFieldMatrix(jobject obj) : ::org::hipparchus::linear::AbstractFieldMatrix(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        SparseFieldMatrix(const SparseFieldMatrix& obj) : ::org::hipparchus::linear::AbstractFieldMatrix(obj) {}

        SparseFieldMatrix(const ::org::hipparchus::Field &);
        SparseFieldMatrix(const ::org::hipparchus::linear::FieldMatrix &);
        SparseFieldMatrix(const ::org::hipparchus::Field &, jint, jint);

        void addToEntry(jint, jint, const ::org::hipparchus::FieldElement &) const;
        ::org::hipparchus::linear::FieldMatrix copy() const;
        ::org::hipparchus::linear::FieldMatrix createMatrix(jint, jint) const;
        jint getColumnDimension() const;
        ::org::hipparchus::FieldElement getEntry(jint, jint) const;
        jint getRowDimension() const;
        void multiplyEntry(jint, jint, const ::org::hipparchus::FieldElement &) const;
        ::org::hipparchus::linear::FieldMatrix multiplyTransposed(const ::org::hipparchus::linear::FieldMatrix &) const;
        void setEntry(jint, jint, const ::org::hipparchus::FieldElement &) const;
        ::org::hipparchus::linear::FieldMatrix transposeMultiply(const ::org::hipparchus::linear::FieldMatrix &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(SparseFieldMatrix);
      extern PyTypeObject *PY_TYPE(SparseFieldMatrix);

      class t_SparseFieldMatrix {
      public:
        PyObject_HEAD
        SparseFieldMatrix object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_SparseFieldMatrix *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const SparseFieldMatrix&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const SparseFieldMatrix&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
