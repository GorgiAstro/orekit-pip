#ifndef org_hipparchus_linear_ComplexEigenDecomposition_H
#define org_hipparchus_linear_ComplexEigenDecomposition_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      class Complex;
    }
    namespace linear {
      class FieldVector;
      class FieldMatrix;
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

      class ComplexEigenDecomposition : public ::java::lang::Object {
       public:
        enum {
          mid_init$_f3731847577f13e6,
          mid_init$_a1e398644838b5f0,
          mid_getD_1d6b27621d7bea96,
          mid_getDeterminant_557b8123390d8d0c,
          mid_getEigenvalues_cdf70bdb2a575f18,
          mid_getEigenvector_6f1c886add96d5a0,
          mid_getV_1d6b27621d7bea96,
          mid_getVT_1d6b27621d7bea96,
          mid_hasComplexEigenvalues_89b302893bdbe1f1,
          mid_findEigenValues_f3731847577f13e6,
          mid_findEigenVectors_33e6ddbf6bb140a5,
          mid_matricesToEigenArrays_0640e6acf969ed28,
          mid_checkDefinition_f3731847577f13e6,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ComplexEigenDecomposition(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ComplexEigenDecomposition(const ComplexEigenDecomposition& obj) : ::java::lang::Object(obj) {}

        static jdouble DEFAULT_EIGENVECTORS_EQUALITY;
        static jdouble DEFAULT_EPSILON;
        static jdouble DEFAULT_EPSILON_AV_VD_CHECK;

        ComplexEigenDecomposition(const ::org::hipparchus::linear::RealMatrix &);
        ComplexEigenDecomposition(const ::org::hipparchus::linear::RealMatrix &, jdouble, jdouble, jdouble);

        ::org::hipparchus::linear::FieldMatrix getD() const;
        jdouble getDeterminant() const;
        JArray< ::org::hipparchus::complex::Complex > getEigenvalues() const;
        ::org::hipparchus::linear::FieldVector getEigenvector(jint) const;
        ::org::hipparchus::linear::FieldMatrix getV() const;
        ::org::hipparchus::linear::FieldMatrix getVT() const;
        jboolean hasComplexEigenvalues() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(ComplexEigenDecomposition);
      extern PyTypeObject *PY_TYPE(ComplexEigenDecomposition);

      class t_ComplexEigenDecomposition {
      public:
        PyObject_HEAD
        ComplexEigenDecomposition object;
        static PyObject *wrap_Object(const ComplexEigenDecomposition&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
