#ifndef org_hipparchus_linear_ComplexEigenDecomposition_H
#define org_hipparchus_linear_ComplexEigenDecomposition_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      class Complex;
    }
    namespace linear {
      class RealMatrix;
      class FieldMatrix;
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

      class ComplexEigenDecomposition : public ::java::lang::Object {
       public:
        enum {
          mid_init$_c67473bd6cfaa69b,
          mid_init$_acd058c9ad5e3c71,
          mid_getD_c992983685c753c5,
          mid_getDeterminant_dff5885c2c873297,
          mid_getEigenvalues_8a0770025abeda5b,
          mid_getEigenvector_819edc89e6437565,
          mid_getV_c992983685c753c5,
          mid_getVT_c992983685c753c5,
          mid_hasComplexEigenvalues_b108b35ef48e27bd,
          mid_findEigenVectors_3c6edf548344b9f0,
          mid_matricesToEigenArrays_0fa09c18fee449d5,
          mid_findEigenValues_c67473bd6cfaa69b,
          mid_checkDefinition_c67473bd6cfaa69b,
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
