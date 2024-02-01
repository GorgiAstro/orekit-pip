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
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class DiagonalMatrix : public ::org::hipparchus::linear::AbstractRealMatrix {
       public:
        enum {
          mid_init$_a71c45509eaf92d1,
          mid_init$_8fd427ab23829bf5,
          mid_init$_d202a20516e33d93,
          mid_add_e7181db5238eec46,
          mid_addToEntry_e98d7b3e971b6087,
          mid_copy_b2eebabce70526d8,
          mid_createMatrix_afc0d8087db42fe7,
          mid_getColumnDimension_d6ab429752e7c267,
          mid_getData_eda3f19b8225f78f,
          mid_getDataRef_be783177b060994b,
          mid_getEntry_6d920aab27f0a3d2,
          mid_getRowDimension_d6ab429752e7c267,
          mid_inverse_4fb5d9750db49b3f,
          mid_inverse_81259d2fcdf6a429,
          mid_isSingular_7bc657d327f0f830,
          mid_multiply_e7181db5238eec46,
          mid_multiply_5a8a8185eb309db7,
          mid_multiplyEntry_e98d7b3e971b6087,
          mid_multiplyTransposed_e7181db5238eec46,
          mid_multiplyTransposed_5a8a8185eb309db7,
          mid_operate_51f624c89851da7e,
          mid_preMultiply_51f624c89851da7e,
          mid_preMultiply_bf8d75e459632544,
          mid_setEntry_e98d7b3e971b6087,
          mid_subtract_e7181db5238eec46,
          mid_transposeMultiply_e7181db5238eec46,
          mid_transposeMultiply_5a8a8185eb309db7,
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
