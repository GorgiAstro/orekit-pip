#ifndef org_hipparchus_linear_SparseFieldMatrix_H
#define org_hipparchus_linear_SparseFieldMatrix_H

#include "org/hipparchus/linear/AbstractFieldMatrix.h"

namespace org {
  namespace hipparchus {
    class Field;
    namespace exception {
      class MathIllegalArgumentException;
    }
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
          mid_init$_205c34b8e33cf33f,
          mid_init$_3e03971cd3efa337,
          mid_init$_11914f5932256658,
          mid_addToEntry_8c5ca78361f003c1,
          mid_copy_cc77900a647586cf,
          mid_createMatrix_8e5837651d169cc8,
          mid_getColumnDimension_f2f64475e4580546,
          mid_getEntry_e4e0a9e5376069de,
          mid_getRowDimension_f2f64475e4580546,
          mid_multiplyEntry_8c5ca78361f003c1,
          mid_multiplyTransposed_311c21c57522a65c,
          mid_setEntry_8c5ca78361f003c1,
          mid_transposeMultiply_311c21c57522a65c,
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
