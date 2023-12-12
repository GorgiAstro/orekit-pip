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
          mid_init$_f3731847577f13e6,
          mid_init$_08eaf415db10314f,
          mid_getP_70a207fcbc031df2,
          mid_getRank_abbeb9db7144ca23,
          mid_getSolver_ccd666b17ae2e6eb,
          mid_decompose_edb361bfdd1ad9ae,
          mid_performHouseholderReflection_03f9d79d0168ba0b,
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
