#ifndef org_hipparchus_linear_EigenDecompositionNonSymmetric_H
#define org_hipparchus_linear_EigenDecompositionNonSymmetric_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class FieldVector;
      class RealMatrix;
    }
    namespace exception {
      class MathRuntimeException;
    }
    namespace complex {
      class Complex;
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
          mid_init$_30aa151fd03f3096,
          mid_init$_27ff5cf8ba76b4fe,
          mid_getD_7116bbecdd8ceb21,
          mid_getDeterminant_8278e96d3787b980,
          mid_getEigenvalue_6274be11ed0ee172,
          mid_getEigenvalues_a42e219c62839d3d,
          mid_getEigenvector_61bcfe594fe45427,
          mid_getEpsilon_456d9a2f64d6b28d,
          mid_getV_7116bbecdd8ceb21,
          mid_getVInv_7116bbecdd8ceb21,
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
