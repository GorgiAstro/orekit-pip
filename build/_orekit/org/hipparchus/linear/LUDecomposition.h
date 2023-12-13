#ifndef org_hipparchus_linear_LUDecomposition_H
#define org_hipparchus_linear_LUDecomposition_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
      class DecompositionSolver;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class LUDecomposition : public ::java::lang::Object {
       public:
        enum {
          mid_init$_84bd15e0995d0c79,
          mid_init$_5c88fbe0835e7c85,
          mid_getDeterminant_b74f83833fdad017,
          mid_getL_f77d745f2128c391,
          mid_getP_f77d745f2128c391,
          mid_getPivot_4d095d7a08163110,
          mid_getSolver_5823fb909376de2c,
          mid_getU_f77d745f2128c391,
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
