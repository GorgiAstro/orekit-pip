#ifndef org_hipparchus_linear_DiagonalMatrix_H
#define org_hipparchus_linear_DiagonalMatrix_H

#include "org/hipparchus/linear/AbstractRealMatrix.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
    }
    namespace linear {
      class DiagonalMatrix;
      class RealMatrix;
      class RealVector;
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
          mid_init$_cc18240f4a737f14,
          mid_init$_a3da1a935cb37f7b,
          mid_init$_bdd4888f749f6b83,
          mid_add_22eb29f902e0135d,
          mid_addToEntry_754312f3734d6e2f,
          mid_copy_70a207fcbc031df2,
          mid_createMatrix_e8546415f980523f,
          mid_getColumnDimension_412668abc8d889e9,
          mid_getData_8cf5267aa13a77f3,
          mid_getDataRef_a53a7513ecedada2,
          mid_getEntry_21b81d54c06b64b0,
          mid_getRowDimension_412668abc8d889e9,
          mid_inverse_b1a245683de9728d,
          mid_inverse_b27f94a2ca88181f,
          mid_isSingular_dd69c3ab2404bb71,
          mid_multiply_22eb29f902e0135d,
          mid_multiply_340b47d21842d02c,
          mid_multiplyEntry_754312f3734d6e2f,
          mid_multiplyTransposed_22eb29f902e0135d,
          mid_multiplyTransposed_340b47d21842d02c,
          mid_operate_1db7c087750eaffe,
          mid_preMultiply_1db7c087750eaffe,
          mid_preMultiply_342d5b01463e0dc5,
          mid_setEntry_754312f3734d6e2f,
          mid_subtract_22eb29f902e0135d,
          mid_transposeMultiply_22eb29f902e0135d,
          mid_transposeMultiply_340b47d21842d02c,
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
