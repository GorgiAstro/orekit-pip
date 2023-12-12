#ifndef org_hipparchus_linear_CholeskyDecomposition_H
#define org_hipparchus_linear_CholeskyDecomposition_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class DecompositionSolver;
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

      class CholeskyDecomposition : public ::java::lang::Object {
       public:
        enum {
          mid_init$_f3731847577f13e6,
          mid_init$_a691527537def442,
          mid_getDeterminant_557b8123390d8d0c,
          mid_getL_70a207fcbc031df2,
          mid_getLT_70a207fcbc031df2,
          mid_getSolver_ccd666b17ae2e6eb,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit CholeskyDecomposition(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        CholeskyDecomposition(const CholeskyDecomposition& obj) : ::java::lang::Object(obj) {}

        static jdouble DEFAULT_ABSOLUTE_POSITIVITY_THRESHOLD;
        static jdouble DEFAULT_RELATIVE_SYMMETRY_THRESHOLD;

        CholeskyDecomposition(const ::org::hipparchus::linear::RealMatrix &);
        CholeskyDecomposition(const ::org::hipparchus::linear::RealMatrix &, jdouble, jdouble);

        jdouble getDeterminant() const;
        ::org::hipparchus::linear::RealMatrix getL() const;
        ::org::hipparchus::linear::RealMatrix getLT() const;
        ::org::hipparchus::linear::DecompositionSolver getSolver() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(CholeskyDecomposition);
      extern PyTypeObject *PY_TYPE(CholeskyDecomposition);

      class t_CholeskyDecomposition {
      public:
        PyObject_HEAD
        CholeskyDecomposition object;
        static PyObject *wrap_Object(const CholeskyDecomposition&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
