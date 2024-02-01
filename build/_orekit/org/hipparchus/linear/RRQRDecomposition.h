#ifndef org_hipparchus_linear_RRQRDecomposition_H
#define org_hipparchus_linear_RRQRDecomposition_H

#include "org/hipparchus/linear/QRDecomposition.h"

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

      class RRQRDecomposition : public ::org::hipparchus::linear::QRDecomposition {
       public:
        enum {
          mid_init$_f5364c9a9d9cbd53,
          mid_init$_dc02fdb8767f32bc,
          mid_getP_b2eebabce70526d8,
          mid_getRank_9e72cb20adb363fb,
          mid_getSolver_ac3e6aafa2c6c596,
          mid_decompose_11ecdbb5af7ed67d,
          mid_performHouseholderReflection_5f60b0f0790bcf77,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit RRQRDecomposition(jobject obj) : ::org::hipparchus::linear::QRDecomposition(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        RRQRDecomposition(const RRQRDecomposition& obj) : ::org::hipparchus::linear::QRDecomposition(obj) {}

        RRQRDecomposition(const ::org::hipparchus::linear::RealMatrix &);
        RRQRDecomposition(const ::org::hipparchus::linear::RealMatrix &, jdouble);

        ::org::hipparchus::linear::RealMatrix getP() const;
        jint getRank(jdouble) const;
        ::org::hipparchus::linear::DecompositionSolver getSolver() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(RRQRDecomposition);
      extern PyTypeObject *PY_TYPE(RRQRDecomposition);

      class t_RRQRDecomposition {
      public:
        PyObject_HEAD
        RRQRDecomposition object;
        static PyObject *wrap_Object(const RRQRDecomposition&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
