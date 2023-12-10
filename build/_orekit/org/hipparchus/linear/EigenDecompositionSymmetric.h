#ifndef org_hipparchus_linear_EigenDecompositionSymmetric_H
#define org_hipparchus_linear_EigenDecompositionSymmetric_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class DecompositionSolver;
      class DiagonalMatrix;
      class RealMatrix;
      class RealVector;
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
          mid_init$_c67473bd6cfaa69b,
          mid_init$_e1f4b15468f5564a,
          mid_init$_aab9739668d2ec97,
          mid_init$_0592e6e26d56b828,
          mid_getD_c1458e35d8bd3b65,
          mid_getDeterminant_dff5885c2c873297,
          mid_getEigenvalue_46f85b53d9aedd96,
          mid_getEigenvalues_60c7040667a7dc5c,
          mid_getEigenvector_b686e6fcbf82678b,
          mid_getEpsilon_dff5885c2c873297,
          mid_getSolver_6b396ee5bc11943f,
          mid_getSquareRoot_688b496048ff947b,
          mid_getV_688b496048ff947b,
          mid_getVT_688b496048ff947b,
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
