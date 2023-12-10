#ifndef org_hipparchus_linear_LUDecomposition_H
#define org_hipparchus_linear_LUDecomposition_H

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

      class LUDecomposition : public ::java::lang::Object {
       public:
        enum {
          mid_init$_30aa151fd03f3096,
          mid_init$_27ff5cf8ba76b4fe,
          mid_getDeterminant_456d9a2f64d6b28d,
          mid_getL_7116bbecdd8ceb21,
          mid_getP_7116bbecdd8ceb21,
          mid_getPivot_d8ead0d90ce828b0,
          mid_getSolver_73ddb95911119e87,
          mid_getU_7116bbecdd8ceb21,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit LUDecomposition(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        LUDecomposition(const LUDecomposition& obj) : ::java::lang::Object(obj) {}

        LUDecomposition(const ::org::hipparchus::linear::RealMatrix &);
        LUDecomposition(const ::org::hipparchus::linear::RealMatrix &, jdouble);

        jdouble getDeterminant() const;
        ::org::hipparchus::linear::RealMatrix getL() const;
        ::org::hipparchus::linear::RealMatrix getP() const;
        JArray< jint > getPivot() const;
        ::org::hipparchus::linear::DecompositionSolver getSolver() const;
        ::org::hipparchus::linear::RealMatrix getU() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(LUDecomposition);
      extern PyTypeObject *PY_TYPE(LUDecomposition);

      class t_LUDecomposition {
      public:
        PyObject_HEAD
        LUDecomposition object;
        static PyObject *wrap_Object(const LUDecomposition&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
