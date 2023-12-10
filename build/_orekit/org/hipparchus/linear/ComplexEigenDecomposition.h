#ifndef org_hipparchus_linear_ComplexEigenDecomposition_H
#define org_hipparchus_linear_ComplexEigenDecomposition_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class FieldVector;
      class RealMatrix;
      class FieldMatrix;
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
          mid_init$_30aa151fd03f3096,
          mid_init$_257185813e52aecb,
          mid_getD_cc77900a647586cf,
          mid_getDeterminant_456d9a2f64d6b28d,
          mid_getEigenvalues_a42e219c62839d3d,
          mid_getEigenvector_61bcfe594fe45427,
          mid_getV_cc77900a647586cf,
          mid_getVT_cc77900a647586cf,
          mid_hasComplexEigenvalues_e470b6d9e0d979db,
          mid_matricesToEigenArrays_7ae3461a92a43152,
          mid_checkDefinition_30aa151fd03f3096,
          mid_findEigenValues_30aa151fd03f3096,
          mid_findEigenVectors_3e03971cd3efa337,
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
