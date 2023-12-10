#ifndef org_hipparchus_linear_DiagonalMatrix_H
#define org_hipparchus_linear_DiagonalMatrix_H

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
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    namespace linear {
      class DiagonalMatrix;
      class RealMatrix;
      class RealVector;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class DiagonalMatrix : public ::org::hipparchus::linear::AbstractRealMatrix {
       public:
        enum {
          mid_init$_fa9d415d19f69361,
          mid_init$_99803b0791f320ff,
          mid_init$_a47a33f7938e1575,
          mid_add_7a737158a7bf2d27,
          mid_addToEntry_1506189166690b5e,
          mid_copy_688b496048ff947b,
          mid_createMatrix_4410ec92987b66e9,
          mid_getColumnDimension_570ce0828f81a2c1,
          mid_getData_0358d8ea02f2cdb1,
          mid_getDataRef_60c7040667a7dc5c,
          mid_getEntry_dbbe5f05149dbf73,
          mid_getRowDimension_570ce0828f81a2c1,
          mid_inverse_c1458e35d8bd3b65,
          mid_inverse_7e8ba41b8af4d349,
          mid_isSingular_2e401133981893e4,
          mid_multiply_7a737158a7bf2d27,
          mid_multiply_e9b72403ad502221,
          mid_multiplyEntry_1506189166690b5e,
          mid_multiplyTransposed_7a737158a7bf2d27,
          mid_multiplyTransposed_e9b72403ad502221,
          mid_operate_ac3d742ccc742f22,
          mid_preMultiply_ac3d742ccc742f22,
          mid_preMultiply_613347e28dd909cd,
          mid_setEntry_1506189166690b5e,
          mid_subtract_7a737158a7bf2d27,
          mid_transposeMultiply_7a737158a7bf2d27,
          mid_transposeMultiply_e9b72403ad502221,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit DiagonalMatrix(jobject obj) : ::org::hipparchus::linear::AbstractRealMatrix(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        DiagonalMatrix(const DiagonalMatrix& obj) : ::org::hipparchus::linear::AbstractRealMatrix(obj) {}

        DiagonalMatrix(const JArray< jdouble > &);
        DiagonalMatrix(jint);
        DiagonalMatrix(const JArray< jdouble > &, jboolean);

        DiagonalMatrix add(const DiagonalMatrix &) const;
        void addToEntry(jint, jint, jdouble) const;
        ::org::hipparchus::linear::RealMatrix copy() const;
        ::org::hipparchus::linear::RealMatrix createMatrix(jint, jint) const;
        jint getColumnDimension() const;
        JArray< JArray< jdouble > > getData() const;
        JArray< jdouble > getDataRef() const;
        jdouble getEntry(jint, jint) const;
        jint getRowDimension() const;
        DiagonalMatrix inverse() const;
        DiagonalMatrix inverse(jdouble) const;
        jboolean isSingular(jdouble) const;
        DiagonalMatrix multiply(const DiagonalMatrix &) const;
        ::org::hipparchus::linear::RealMatrix multiply(const ::org::hipparchus::linear::RealMatrix &) const;
        void multiplyEntry(jint, jint, jdouble) const;
        DiagonalMatrix multiplyTransposed(const DiagonalMatrix &) const;
        ::org::hipparchus::linear::RealMatrix multiplyTransposed(const ::org::hipparchus::linear::RealMatrix &) const;
        JArray< jdouble > operate(const JArray< jdouble > &) const;
        JArray< jdouble > preMultiply(const JArray< jdouble > &) const;
        ::org::hipparchus::linear::RealVector preMultiply(const ::org::hipparchus::linear::RealVector &) const;
        void setEntry(jint, jint, jdouble) const;
        DiagonalMatrix subtract(const DiagonalMatrix &) const;
        DiagonalMatrix transposeMultiply(const DiagonalMatrix &) const;
        ::org::hipparchus::linear::RealMatrix transposeMultiply(const ::org::hipparchus::linear::RealMatrix &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(DiagonalMatrix);
      extern PyTypeObject *PY_TYPE(DiagonalMatrix);

      class t_DiagonalMatrix {
      public:
        PyObject_HEAD
        DiagonalMatrix object;
        static PyObject *wrap_Object(const DiagonalMatrix&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
