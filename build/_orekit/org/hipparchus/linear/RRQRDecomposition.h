#ifndef org_hipparchus_linear_RRQRDecomposition_H
#define org_hipparchus_linear_RRQRDecomposition_H

#include "org/hipparchus/linear/QRDecomposition.h"

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

      class RRQRDecomposition : public ::org::hipparchus::linear::QRDecomposition {
       public:
        enum {
          mid_init$_c67473bd6cfaa69b,
          mid_init$_21a79182f4dd9085,
          mid_getP_688b496048ff947b,
          mid_getRank_4508852644846c83,
          mid_getSolver_6b396ee5bc11943f,
          mid_decompose_a0befc7f3dc19e41,
          mid_performHouseholderReflection_3ca2bf5de9b54389,
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
