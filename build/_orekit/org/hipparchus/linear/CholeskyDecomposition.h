#ifndef org_hipparchus_linear_CholeskyDecomposition_H
#define org_hipparchus_linear_CholeskyDecomposition_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
      class DecompositionSolver;
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
          mid_init$_c67473bd6cfaa69b,
          mid_init$_85cc023ddc8c0edf,
          mid_getDeterminant_dff5885c2c873297,
          mid_getL_688b496048ff947b,
          mid_getLT_688b496048ff947b,
          mid_getSolver_6b396ee5bc11943f,
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
