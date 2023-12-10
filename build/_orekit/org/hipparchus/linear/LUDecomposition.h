#ifndef org_hipparchus_linear_LUDecomposition_H
#define org_hipparchus_linear_LUDecomposition_H

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

      class LUDecomposition : public ::java::lang::Object {
       public:
        enum {
          mid_init$_c67473bd6cfaa69b,
          mid_init$_21a79182f4dd9085,
          mid_getDeterminant_dff5885c2c873297,
          mid_getL_688b496048ff947b,
          mid_getP_688b496048ff947b,
          mid_getPivot_d0635cea09dc178c,
          mid_getSolver_6b396ee5bc11943f,
          mid_getU_688b496048ff947b,
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
