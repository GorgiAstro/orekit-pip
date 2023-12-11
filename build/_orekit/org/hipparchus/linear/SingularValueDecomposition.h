#ifndef org_hipparchus_linear_SingularValueDecomposition_H
#define org_hipparchus_linear_SingularValueDecomposition_H

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

      class SingularValueDecomposition : public ::java::lang::Object {
       public:
        enum {
          mid_init$_f3731847577f13e6,
          mid_getConditionNumber_557b8123390d8d0c,
          mid_getCovariance_e95e381257af03e9,
          mid_getInverseConditionNumber_557b8123390d8d0c,
          mid_getNorm_557b8123390d8d0c,
          mid_getRank_412668abc8d889e9,
          mid_getS_70a207fcbc031df2,
          mid_getSingularValues_a53a7513ecedada2,
          mid_getSolver_ccd666b17ae2e6eb,
          mid_getU_70a207fcbc031df2,
          mid_getUT_70a207fcbc031df2,
          mid_getV_70a207fcbc031df2,
          mid_getVT_70a207fcbc031df2,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit SingularValueDecomposition(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        SingularValueDecomposition(const SingularValueDecomposition& obj) : ::java::lang::Object(obj) {}

        SingularValueDecomposition(const ::org::hipparchus::linear::RealMatrix &);

        jdouble getConditionNumber() const;
        ::org::hipparchus::linear::RealMatrix getCovariance(jdouble) const;
        jdouble getInverseConditionNumber() const;
        jdouble getNorm() const;
        jint getRank() const;
        ::org::hipparchus::linear::RealMatrix getS() const;
        JArray< jdouble > getSingularValues() const;
        ::org::hipparchus::linear::DecompositionSolver getSolver() const;
        ::org::hipparchus::linear::RealMatrix getU() const;
        ::org::hipparchus::linear::RealMatrix getUT() const;
        ::org::hipparchus::linear::RealMatrix getV() const;
        ::org::hipparchus::linear::RealMatrix getVT() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(SingularValueDecomposition);
      extern PyTypeObject *PY_TYPE(SingularValueDecomposition);

      class t_SingularValueDecomposition {
      public:
        PyObject_HEAD
        SingularValueDecomposition object;
        static PyObject *wrap_Object(const SingularValueDecomposition&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
