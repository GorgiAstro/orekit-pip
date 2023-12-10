#ifndef org_hipparchus_linear_SingularValueDecomposition_H
#define org_hipparchus_linear_SingularValueDecomposition_H

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

      class SingularValueDecomposition : public ::java::lang::Object {
       public:
        enum {
          mid_init$_c67473bd6cfaa69b,
          mid_getConditionNumber_dff5885c2c873297,
          mid_getCovariance_f21dcd9464c6e3c5,
          mid_getInverseConditionNumber_dff5885c2c873297,
          mid_getNorm_dff5885c2c873297,
          mid_getRank_570ce0828f81a2c1,
          mid_getS_688b496048ff947b,
          mid_getSingularValues_60c7040667a7dc5c,
          mid_getSolver_6b396ee5bc11943f,
          mid_getU_688b496048ff947b,
          mid_getUT_688b496048ff947b,
          mid_getV_688b496048ff947b,
          mid_getVT_688b496048ff947b,
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
