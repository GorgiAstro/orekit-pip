#ifndef org_hipparchus_linear_QRDecomposition_H
#define org_hipparchus_linear_QRDecomposition_H

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

      class QRDecomposition : public ::java::lang::Object {
       public:
        enum {
          mid_init$_f5364c9a9d9cbd53,
          mid_init$_dc02fdb8767f32bc,
          mid_getH_b2eebabce70526d8,
          mid_getQ_b2eebabce70526d8,
          mid_getQT_b2eebabce70526d8,
          mid_getR_b2eebabce70526d8,
          mid_getSolver_ac3e6aafa2c6c596,
          mid_decompose_11ecdbb5af7ed67d,
          mid_performHouseholderReflection_5f60b0f0790bcf77,
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
