#ifndef org_hipparchus_linear_QRDecomposition_H
#define org_hipparchus_linear_QRDecomposition_H

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

      class QRDecomposition : public ::java::lang::Object {
       public:
        enum {
          mid_init$_c67473bd6cfaa69b,
          mid_init$_21a79182f4dd9085,
          mid_getH_688b496048ff947b,
          mid_getQ_688b496048ff947b,
          mid_getQT_688b496048ff947b,
          mid_getR_688b496048ff947b,
          mid_getSolver_6b396ee5bc11943f,
          mid_decompose_a0befc7f3dc19e41,
          mid_performHouseholderReflection_3ca2bf5de9b54389,
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
