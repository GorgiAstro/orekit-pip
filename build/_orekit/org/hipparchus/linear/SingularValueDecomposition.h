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
          mid_init$_30aa151fd03f3096,
          mid_getConditionNumber_456d9a2f64d6b28d,
          mid_getCovariance_2461b653ab91779b,
          mid_getInverseConditionNumber_456d9a2f64d6b28d,
          mid_getNorm_456d9a2f64d6b28d,
          mid_getRank_f2f64475e4580546,
          mid_getS_7116bbecdd8ceb21,
          mid_getSingularValues_7cdc325af0834901,
          mid_getSolver_73ddb95911119e87,
          mid_getU_7116bbecdd8ceb21,
          mid_getUT_7116bbecdd8ceb21,
          mid_getV_7116bbecdd8ceb21,
          mid_getVT_7116bbecdd8ceb21,
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
