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
          mid_init$_f5364c9a9d9cbd53,
          mid_getConditionNumber_9981f74b2d109da6,
          mid_getCovariance_d5a7c13c36e5009c,
          mid_getInverseConditionNumber_9981f74b2d109da6,
          mid_getNorm_9981f74b2d109da6,
          mid_getRank_d6ab429752e7c267,
          mid_getS_b2eebabce70526d8,
          mid_getSingularValues_be783177b060994b,
          mid_getSolver_ac3e6aafa2c6c596,
          mid_getU_b2eebabce70526d8,
          mid_getUT_b2eebabce70526d8,
          mid_getV_b2eebabce70526d8,
          mid_getVT_b2eebabce70526d8,
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
