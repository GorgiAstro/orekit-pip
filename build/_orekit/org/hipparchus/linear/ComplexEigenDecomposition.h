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
          mid_init$_84bd15e0995d0c79,
          mid_init$_103e61a34f552989,
          mid_getD_81d49643ce3a3c0b,
          mid_getDeterminant_b74f83833fdad017,
          mid_getEigenvalues_24cc06122e1087cf,
          mid_getEigenvector_06abfeddf4c4a28c,
          mid_getV_81d49643ce3a3c0b,
          mid_getVT_81d49643ce3a3c0b,
          mid_hasComplexEigenvalues_9ab94ac1dc23b105,
          mid_matricesToEigenArrays_a1fa5dae97ea5ed2,
          mid_findEigenValues_84bd15e0995d0c79,
          mid_findEigenVectors_3c04247304967ec8,
          mid_checkDefinition_84bd15e0995d0c79,
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
