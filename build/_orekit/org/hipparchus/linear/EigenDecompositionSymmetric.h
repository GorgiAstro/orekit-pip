#ifndef org_hipparchus_linear_EigenDecompositionSymmetric_H
#define org_hipparchus_linear_EigenDecompositionSymmetric_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathRuntimeException;
    }
    namespace linear {
      class RealMatrix;
      class DiagonalMatrix;
      class DecompositionSolver;
      class RealVector;
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
          mid_init$_f5364c9a9d9cbd53,
          mid_init$_64100e41ba74de8f,
          mid_init$_455de456d5a20abb,
          mid_init$_fe8c5fa26b068f3f,
          mid_getD_4fb5d9750db49b3f,
          mid_getDeterminant_9981f74b2d109da6,
          mid_getEigenvalue_ce4c02d583456bc9,
          mid_getEigenvalues_be783177b060994b,
          mid_getEigenvector_2ea477ed14744e74,
          mid_getEpsilon_9981f74b2d109da6,
          mid_getSolver_ac3e6aafa2c6c596,
          mid_getSquareRoot_b2eebabce70526d8,
          mid_getV_b2eebabce70526d8,
          mid_getVT_b2eebabce70526d8,
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
