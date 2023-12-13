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
      class RealMatrix;
      class FieldVector;
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
          mid_init$_84bd15e0995d0c79,
          mid_init$_5c88fbe0835e7c85,
          mid_getD_f77d745f2128c391,
          mid_getDeterminant_2f0868cbf8c045d4,
          mid_getEigenvalue_98a65fafe34db74b,
          mid_getEigenvalues_24cc06122e1087cf,
          mid_getEigenvector_06abfeddf4c4a28c,
          mid_getEpsilon_b74f83833fdad017,
          mid_getV_f77d745f2128c391,
          mid_getVInv_f77d745f2128c391,
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
