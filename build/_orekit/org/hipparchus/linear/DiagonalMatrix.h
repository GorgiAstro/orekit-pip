#ifndef org_hipparchus_linear_DiagonalMatrix_H
#define org_hipparchus_linear_DiagonalMatrix_H

#include "org/hipparchus/linear/AbstractRealMatrix.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealVector;
      class RealMatrix;
      class DiagonalMatrix;
    }
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
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
          mid_init$_ebc26dcaf4761286,
          mid_init$_0a2a1ac2721c0336,
          mid_init$_d26930f65a8ba6c9,
          mid_add_dd1704a37d899367,
          mid_addToEntry_78e41e7b5124a628,
          mid_copy_7116bbecdd8ceb21,
          mid_createMatrix_4225756160ad1bc1,
          mid_getColumnDimension_f2f64475e4580546,
          mid_getData_43de1192439efa92,
          mid_getDataRef_7cdc325af0834901,
          mid_getEntry_a84e4ee1da3f1ab8,
          mid_getRowDimension_f2f64475e4580546,
          mid_inverse_6938007bdd8d6602,
          mid_inverse_736796c997a3456c,
          mid_isSingular_e18fb1101b70dcca,
          mid_multiply_dd1704a37d899367,
          mid_multiply_e00cd33aedcc5bd0,
          mid_multiplyEntry_78e41e7b5124a628,
          mid_multiplyTransposed_dd1704a37d899367,
          mid_multiplyTransposed_e00cd33aedcc5bd0,
          mid_operate_4b742fe429c22ba8,
          mid_preMultiply_4b742fe429c22ba8,
          mid_preMultiply_a3e626dfa1abd779,
          mid_setEntry_78e41e7b5124a628,
          mid_subtract_dd1704a37d899367,
          mid_transposeMultiply_dd1704a37d899367,
          mid_transposeMultiply_e00cd33aedcc5bd0,
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
