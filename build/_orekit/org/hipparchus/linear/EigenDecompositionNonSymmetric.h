#ifndef org_hipparchus_linear_EigenDecompositionNonSymmetric_H
#define org_hipparchus_linear_EigenDecompositionNonSymmetric_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathRuntimeException;
    }
    namespace complex {
      class Complex;
    }
    namespace linear {
      class FieldVector;
      class RealMatrix;
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

      class EigenDecompositionNonSymmetric : public ::java::lang::Object {
       public:
        enum {
          mid_init$_f5364c9a9d9cbd53,
          mid_init$_dc02fdb8767f32bc,
          mid_getD_b2eebabce70526d8,
          mid_getDeterminant_847706ebd9444ecb,
          mid_getEigenvalue_1e8f748d6dce69c5,
          mid_getEigenvalues_6bea1b718c2aa50b,
          mid_getEigenvector_229c51f1f7aa44e3,
          mid_getEpsilon_9981f74b2d109da6,
          mid_getV_b2eebabce70526d8,
          mid_getVInv_b2eebabce70526d8,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit EigenDecompositionNonSymmetric(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        EigenDecompositionNonSymmetric(const EigenDecompositionNonSymmetric& obj) : ::java::lang::Object(obj) {}

        static jdouble DEFAULT_EPSILON;

        EigenDecompositionNonSymmetric(const ::org::hipparchus::linear::RealMatrix &);
        EigenDecompositionNonSymmetric(const ::org::hipparchus::linear::RealMatrix &, jdouble);

        ::org::hipparchus::linear::RealMatrix getD() const;
        ::org::hipparchus::complex::Complex getDeterminant() const;
        ::org::hipparchus::complex::Complex getEigenvalue(jint) const;
        JArray< ::org::hipparchus::complex::Complex > getEigenvalues() const;
        ::org::hipparchus::linear::FieldVector getEigenvector(jint) const;
        jdouble getEpsilon() const;
        ::org::hipparchus::linear::RealMatrix getV() const;
        ::org::hipparchus::linear::RealMatrix getVInv() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(EigenDecompositionNonSymmetric);
      extern PyTypeObject *PY_TYPE(EigenDecompositionNonSymmetric);

      class t_EigenDecompositionNonSymmetric {
      public:
        PyObject_HEAD
        EigenDecompositionNonSymmetric object;
        static PyObject *wrap_Object(const EigenDecompositionNonSymmetric&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
