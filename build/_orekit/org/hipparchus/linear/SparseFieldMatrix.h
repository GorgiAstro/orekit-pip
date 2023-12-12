#ifndef org_hipparchus_linear_SparseFieldMatrix_H
#define org_hipparchus_linear_SparseFieldMatrix_H

#include "org/hipparchus/linear/AbstractFieldMatrix.h"

namespace org {
  namespace hipparchus {
    class FieldElement;
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace linear {
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

      class SparseFieldMatrix : public ::org::hipparchus::linear::AbstractFieldMatrix {
       public:
        enum {
          mid_init$_979ae7f57a96b096,
          mid_init$_33e6ddbf6bb140a5,
          mid_init$_a9ccb012d4cb48bd,
          mid_addToEntry_a6d8caed839ba827,
          mid_copy_1d6b27621d7bea96,
          mid_createMatrix_f57999d9fe0fa8c7,
          mid_getColumnDimension_412668abc8d889e9,
          mid_getEntry_a7f16df0741fd579,
          mid_getRowDimension_412668abc8d889e9,
          mid_multiplyEntry_a6d8caed839ba827,
          mid_multiplyTransposed_60dc3401cb1a0936,
          mid_setEntry_a6d8caed839ba827,
          mid_transposeMultiply_60dc3401cb1a0936,
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
