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
          mid_init$_f5364c9a9d9cbd53,
          mid_init$_dc02fdb8767f32bc,
          mid_getDeterminant_9981f74b2d109da6,
          mid_getL_b2eebabce70526d8,
          mid_getP_b2eebabce70526d8,
          mid_getPivot_d6f20bd740dd34cd,
          mid_getSolver_ac3e6aafa2c6c596,
          mid_getU_b2eebabce70526d8,
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
