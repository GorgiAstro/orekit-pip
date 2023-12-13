#ifndef org_hipparchus_linear_QRDecomposition_H
#define org_hipparchus_linear_QRDecomposition_H

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

      class QRDecomposition : public ::java::lang::Object {
       public:
        enum {
          mid_init$_84bd15e0995d0c79,
          mid_init$_5c88fbe0835e7c85,
          mid_getH_f77d745f2128c391,
          mid_getQ_f77d745f2128c391,
          mid_getQT_f77d745f2128c391,
          mid_getR_f77d745f2128c391,
          mid_getSolver_5823fb909376de2c,
          mid_decompose_07adb42ffaa97d31,
          mid_performHouseholderReflection_fd10cb359d67ca83,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit QRDecomposition(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        QRDecomposition(const QRDecomposition& obj) : ::java::lang::Object(obj) {}

        QRDecomposition(const ::org::hipparchus::linear::RealMatrix &);
        QRDecomposition(const ::org::hipparchus::linear::RealMatrix &, jdouble);

        ::org::hipparchus::linear::RealMatrix getH() const;
        ::org::hipparchus::linear::RealMatrix getQ() const;
        ::org::hipparchus::linear::RealMatrix getQT() const;
        ::org::hipparchus::linear::RealMatrix getR() const;
        ::org::hipparchus::linear::DecompositionSolver getSolver() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(QRDecomposition);
      extern PyTypeObject *PY_TYPE(QRDecomposition);

      class t_QRDecomposition {
      public:
        PyObject_HEAD
        QRDecomposition object;
        static PyObject *wrap_Object(const QRDecomposition&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
