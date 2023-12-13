#ifndef org_hipparchus_linear_EigenDecompositionSymmetric_H
#define org_hipparchus_linear_EigenDecompositionSymmetric_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class DiagonalMatrix;
      class DecompositionSolver;
      class RealVector;
      class RealMatrix;
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
          mid_init$_84bd15e0995d0c79,
          mid_init$_b15baa0161a4e9c7,
          mid_init$_0e952c4cd7ebe1d5,
          mid_init$_ae4be200efff3af7,
          mid_getD_2d4bea390f44a6ac,
          mid_getDeterminant_b74f83833fdad017,
          mid_getEigenvalue_2afcbc21f4e57ab2,
          mid_getEigenvalues_25e1757a36c4dde2,
          mid_getEigenvector_b50dc3915c68ddbc,
          mid_getEpsilon_b74f83833fdad017,
          mid_getSolver_5823fb909376de2c,
          mid_getSquareRoot_f77d745f2128c391,
          mid_getV_f77d745f2128c391,
          mid_getVT_f77d745f2128c391,
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
