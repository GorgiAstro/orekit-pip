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
    namespace linear {
      class OpenMapRealMatrix;
      class SparseRealMatrix;
      class RealMatrix;
    }
    namespace exception {
      class MathIllegalArgumentException;
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
          mid_init$_b5d23e6c0858e8ed,
          mid_add_6d4f58a47876c3d5,
          mid_addToEntry_e98d7b3e971b6087,
          mid_copy_c31160760f4aa535,
          mid_createMatrix_7347dc2e57416f13,
          mid_getColumnDimension_d6ab429752e7c267,
          mid_getEntry_6d920aab27f0a3d2,
          mid_getRowDimension_d6ab429752e7c267,
          mid_multiply_6d4f58a47876c3d5,
          mid_multiply_5a8a8185eb309db7,
          mid_multiplyEntry_e98d7b3e971b6087,
          mid_multiplyTransposed_5a8a8185eb309db7,
          mid_setEntry_e98d7b3e971b6087,
          mid_subtract_6d4f58a47876c3d5,
          mid_subtract_ef7a830267ee3f64,
          mid_transposeMultiply_5a8a8185eb309db7,
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
