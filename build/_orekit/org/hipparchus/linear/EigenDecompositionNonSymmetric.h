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
          mid_init$_c67473bd6cfaa69b,
          mid_init$_21a79182f4dd9085,
          mid_getD_688b496048ff947b,
          mid_getDeterminant_a6784e0b89dedf02,
          mid_getEigenvalue_7ff716ce003a9897,
          mid_getEigenvalues_8a0770025abeda5b,
          mid_getEigenvector_819edc89e6437565,
          mid_getEpsilon_dff5885c2c873297,
          mid_getV_688b496048ff947b,
          mid_getVInv_688b496048ff947b,
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
