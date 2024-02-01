#ifndef org_hipparchus_linear_SparseFieldMatrix_H
#define org_hipparchus_linear_SparseFieldMatrix_H

#include "org/hipparchus/linear/AbstractFieldMatrix.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class FieldMatrix;
    }
    namespace exception {
      class MathIllegalArgumentException;
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

      class SparseFieldMatrix : public ::org::hipparchus::linear::AbstractFieldMatrix {
       public:
        enum {
          mid_init$_a44abdd035f01345,
          mid_init$_87e4c06eff884f7d,
          mid_init$_ddbf374219cf6329,
          mid_addToEntry_8de38856a6ebea36,
          mid_copy_02883dbbe5db44ac,
          mid_createMatrix_71a6a4df501a3e03,
          mid_getColumnDimension_d6ab429752e7c267,
          mid_getEntry_a81b5a6b0760a7e3,
          mid_getRowDimension_d6ab429752e7c267,
          mid_multiplyEntry_8de38856a6ebea36,
          mid_multiplyTransposed_b180f987191970ad,
          mid_setEntry_8de38856a6ebea36,
          mid_transposeMultiply_b180f987191970ad,
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
