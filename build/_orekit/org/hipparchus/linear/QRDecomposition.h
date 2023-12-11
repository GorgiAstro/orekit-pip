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
          mid_init$_f3731847577f13e6,
          mid_init$_08eaf415db10314f,
          mid_getH_70a207fcbc031df2,
          mid_getQ_70a207fcbc031df2,
          mid_getQT_70a207fcbc031df2,
          mid_getR_70a207fcbc031df2,
          mid_getSolver_ccd666b17ae2e6eb,
          mid_decompose_edb361bfdd1ad9ae,
          mid_performHouseholderReflection_03f9d79d0168ba0b,
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
