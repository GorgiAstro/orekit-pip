#ifndef org_hipparchus_linear_OpenMapRealMatrix_H
#define org_hipparchus_linear_OpenMapRealMatrix_H

#include "org/hipparchus/linear/AbstractRealMatrix.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace linear {
      class RealMatrix;
      class SparseRealMatrix;
      class OpenMapRealMatrix;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class OpenMapRealMatrix : public ::org::hipparchus::linear::AbstractRealMatrix {
       public:
        enum {
          mid_init$_8dbc1129a3c2557a,
          mid_add_a888b793e7da7480,
          mid_addToEntry_78e41e7b5124a628,
          mid_copy_65fb3321439bb1aa,
          mid_createMatrix_29bfd603ae1326fc,
          mid_getColumnDimension_f2f64475e4580546,
          mid_getEntry_a84e4ee1da3f1ab8,
          mid_getRowDimension_f2f64475e4580546,
          mid_multiply_a888b793e7da7480,
          mid_multiply_e00cd33aedcc5bd0,
          mid_multiplyEntry_78e41e7b5124a628,
          mid_multiplyTransposed_e00cd33aedcc5bd0,
          mid_setEntry_78e41e7b5124a628,
          mid_subtract_a888b793e7da7480,
          mid_subtract_19342885a4dbcd99,
          mid_transposeMultiply_e00cd33aedcc5bd0,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit OpenMapRealMatrix(jobject obj) : ::org::hipparchus::linear::AbstractRealMatrix(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        OpenMapRealMatrix(const OpenMapRealMatrix& obj) : ::org::hipparchus::linear::AbstractRealMatrix(obj) {}

        OpenMapRealMatrix(jint, jint);

        OpenMapRealMatrix add(const OpenMapRealMatrix &) const;
        void addToEntry(jint, jint, jdouble) const;
        OpenMapRealMatrix copy() const;
        OpenMapRealMatrix createMatrix(jint, jint) const;
        jint getColumnDimension() const;
        jdouble getEntry(jint, jint) const;
        jint getRowDimension() const;
        OpenMapRealMatrix multiply(const OpenMapRealMatrix &) const;
        ::org::hipparchus::linear::RealMatrix multiply(const ::org::hipparchus::linear::RealMatrix &) const;
        void multiplyEntry(jint, jint, jdouble) const;
        ::org::hipparchus::linear::RealMatrix multiplyTransposed(const ::org::hipparchus::linear::RealMatrix &) const;
        void setEntry(jint, jint, jdouble) const;
        OpenMapRealMatrix subtract(const OpenMapRealMatrix &) const;
        OpenMapRealMatrix subtract(const ::org::hipparchus::linear::RealMatrix &) const;
        ::org::hipparchus::linear::RealMatrix transposeMultiply(const ::org::hipparchus::linear::RealMatrix &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(OpenMapRealMatrix);
      extern PyTypeObject *PY_TYPE(OpenMapRealMatrix);

      class t_OpenMapRealMatrix {
      public:
        PyObject_HEAD
        OpenMapRealMatrix object;
        static PyObject *wrap_Object(const OpenMapRealMatrix&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
