#ifndef org_hipparchus_linear_ComplexEigenDecomposition_H
#define org_hipparchus_linear_ComplexEigenDecomposition_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class FieldMatrix;
      class FieldVector;
      class RealMatrix;
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

      class ComplexEigenDecomposition : public ::java::lang::Object {
       public:
        enum {
          mid_init$_f5364c9a9d9cbd53,
          mid_init$_e834f27fc5021cbd,
          mid_getD_02883dbbe5db44ac,
          mid_getDeterminant_9981f74b2d109da6,
          mid_getEigenvalues_6bea1b718c2aa50b,
          mid_getEigenvector_229c51f1f7aa44e3,
          mid_getV_02883dbbe5db44ac,
          mid_getVT_02883dbbe5db44ac,
          mid_hasComplexEigenvalues_eee3de00fe971136,
          mid_findEigenVectors_87e4c06eff884f7d,
          mid_matricesToEigenArrays_ff7cb6c242604316,
          mid_checkDefinition_f5364c9a9d9cbd53,
          mid_findEigenValues_f5364c9a9d9cbd53,
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
