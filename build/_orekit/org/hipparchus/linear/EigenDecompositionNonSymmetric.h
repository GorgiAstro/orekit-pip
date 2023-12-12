#ifndef org_hipparchus_linear_EigenDecompositionNonSymmetric_H
#define org_hipparchus_linear_EigenDecompositionNonSymmetric_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      class Complex;
    }
    namespace exception {
      class MathRuntimeException;
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
          mid_init$_f3731847577f13e6,
          mid_init$_08eaf415db10314f,
          mid_getD_70a207fcbc031df2,
          mid_getDeterminant_921a2f30ecc499e5,
          mid_getEigenvalue_49c3af23f72848c1,
          mid_getEigenvalues_cdf70bdb2a575f18,
          mid_getEigenvector_6f1c886add96d5a0,
          mid_getEpsilon_557b8123390d8d0c,
          mid_getV_70a207fcbc031df2,
          mid_getVInv_70a207fcbc031df2,
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
