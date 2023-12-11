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
          mid_init$_f3731847577f13e6,
          mid_init$_ab4840ba016ef1da,
          mid_init$_417b55dd6524da33,
          mid_init$_78a5b4f63390ed29,
          mid_getD_b1a245683de9728d,
          mid_getDeterminant_557b8123390d8d0c,
          mid_getEigenvalue_69cfb132c661aca4,
          mid_getEigenvalues_a53a7513ecedada2,
          mid_getEigenvector_2a32cae841870443,
          mid_getEpsilon_557b8123390d8d0c,
          mid_getSolver_ccd666b17ae2e6eb,
          mid_getSquareRoot_70a207fcbc031df2,
          mid_getV_70a207fcbc031df2,
          mid_getVT_70a207fcbc031df2,
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
