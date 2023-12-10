#ifndef org_hipparchus_linear_EigenDecompositionSymmetric_H
#define org_hipparchus_linear_EigenDecompositionSymmetric_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealVector;
      class DecompositionSolver;
      class RealMatrix;
      class DiagonalMatrix;
    }
    namespace exception {
      class MathRuntimeException;
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

      class EigenDecompositionSymmetric : public ::java::lang::Object {
       public:
        enum {
          mid_init$_30aa151fd03f3096,
          mid_init$_0d03c8a1d7f56f02,
          mid_init$_497eef03cab7a0ca,
          mid_init$_cd56c20c08d19761,
          mid_getD_6938007bdd8d6602,
          mid_getDeterminant_456d9a2f64d6b28d,
          mid_getEigenvalue_b772323fc98b7293,
          mid_getEigenvalues_7cdc325af0834901,
          mid_getEigenvector_2cafd1b18558ed5f,
          mid_getEpsilon_456d9a2f64d6b28d,
          mid_getSolver_73ddb95911119e87,
          mid_getSquareRoot_7116bbecdd8ceb21,
          mid_getV_7116bbecdd8ceb21,
          mid_getVT_7116bbecdd8ceb21,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit EigenDecompositionSymmetric(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        EigenDecompositionSymmetric(const EigenDecompositionSymmetric& obj) : ::java::lang::Object(obj) {}

        static jdouble DEFAULT_EPSILON;

        EigenDecompositionSymmetric(const ::org::hipparchus::linear::RealMatrix &);
        EigenDecompositionSymmetric(const JArray< jdouble > &, const JArray< jdouble > &);
        EigenDecompositionSymmetric(const ::org::hipparchus::linear::RealMatrix &, jdouble, jboolean);
        EigenDecompositionSymmetric(const JArray< jdouble > &, const JArray< jdouble > &, jdouble, jboolean);

        ::org::hipparchus::linear::DiagonalMatrix getD() const;
        jdouble getDeterminant() const;
        jdouble getEigenvalue(jint) const;
        JArray< jdouble > getEigenvalues() const;
        ::org::hipparchus::linear::RealVector getEigenvector(jint) const;
        jdouble getEpsilon() const;
        ::org::hipparchus::linear::DecompositionSolver getSolver() const;
        ::org::hipparchus::linear::RealMatrix getSquareRoot() const;
        ::org::hipparchus::linear::RealMatrix getV() const;
        ::org::hipparchus::linear::RealMatrix getVT() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(EigenDecompositionSymmetric);
      extern PyTypeObject *PY_TYPE(EigenDecompositionSymmetric);

      class t_EigenDecompositionSymmetric {
      public:
        PyObject_HEAD
        EigenDecompositionSymmetric object;
        static PyObject *wrap_Object(const EigenDecompositionSymmetric&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
