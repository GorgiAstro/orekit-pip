#ifndef org_hipparchus_linear_DiagonalMatrix_H
#define org_hipparchus_linear_DiagonalMatrix_H

#include "org/hipparchus/linear/AbstractRealMatrix.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    namespace linear {
      class DiagonalMatrix;
      class RealVector;
      class RealMatrix;
    }
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class DiagonalMatrix : public ::org::hipparchus::linear::AbstractRealMatrix {
       public:
        enum {
          mid_init$_ab69da052b88f50c,
          mid_init$_44ed599e93e8a30c,
          mid_init$_2808bdf785b578a3,
          mid_add_3adfc6ce6721ddc7,
          mid_addToEntry_94fe8d9ffeb50676,
          mid_copy_f77d745f2128c391,
          mid_createMatrix_28a444e31666746c,
          mid_getColumnDimension_55546ef6a647f39b,
          mid_getData_3b7b373db8e7887f,
          mid_getDataRef_25e1757a36c4dde2,
          mid_getEntry_cad98089d00f8a5b,
          mid_getRowDimension_55546ef6a647f39b,
          mid_inverse_2d4bea390f44a6ac,
          mid_inverse_23675d63ec185d00,
          mid_isSingular_716249baa52d209e,
          mid_multiply_3adfc6ce6721ddc7,
          mid_multiply_be124f4006dc9f69,
          mid_multiplyEntry_94fe8d9ffeb50676,
          mid_multiplyTransposed_3adfc6ce6721ddc7,
          mid_multiplyTransposed_be124f4006dc9f69,
          mid_operate_14dee4cb8cc3e959,
          mid_preMultiply_14dee4cb8cc3e959,
          mid_preMultiply_d5f1d017fd25113b,
          mid_setEntry_94fe8d9ffeb50676,
          mid_subtract_3adfc6ce6721ddc7,
          mid_transposeMultiply_3adfc6ce6721ddc7,
          mid_transposeMultiply_be124f4006dc9f69,
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
