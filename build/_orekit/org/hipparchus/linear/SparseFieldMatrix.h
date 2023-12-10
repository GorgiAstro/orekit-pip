#ifndef org_hipparchus_linear_SparseFieldMatrix_H
#define org_hipparchus_linear_SparseFieldMatrix_H

#include "org/hipparchus/linear/AbstractFieldMatrix.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    class Field;
    class FieldElement;
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
          mid_init$_484998d88974267b,
          mid_init$_3c6edf548344b9f0,
          mid_init$_7dbd657fb2d34563,
          mid_addToEntry_d302e4fbc652587d,
          mid_copy_c992983685c753c5,
          mid_createMatrix_5d35d650870a3dcb,
          mid_getColumnDimension_570ce0828f81a2c1,
          mid_getEntry_ef29faa67be274b8,
          mid_getRowDimension_570ce0828f81a2c1,
          mid_multiplyEntry_d302e4fbc652587d,
          mid_multiplyTransposed_1409f31dc074a11f,
          mid_setEntry_d302e4fbc652587d,
          mid_transposeMultiply_1409f31dc074a11f,
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
