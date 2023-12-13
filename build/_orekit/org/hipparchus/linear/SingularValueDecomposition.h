#ifndef org_hipparchus_linear_SingularValueDecomposition_H
#define org_hipparchus_linear_SingularValueDecomposition_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
      class DecompositionSolver;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class SingularValueDecomposition : public ::java::lang::Object {
       public:
        enum {
          mid_init$_84bd15e0995d0c79,
          mid_getConditionNumber_b74f83833fdad017,
          mid_getCovariance_f5dd9d6021dc9dae,
          mid_getInverseConditionNumber_b74f83833fdad017,
          mid_getNorm_b74f83833fdad017,
          mid_getRank_55546ef6a647f39b,
          mid_getS_f77d745f2128c391,
          mid_getSingularValues_25e1757a36c4dde2,
          mid_getSolver_5823fb909376de2c,
          mid_getU_f77d745f2128c391,
          mid_getUT_f77d745f2128c391,
          mid_getV_f77d745f2128c391,
          mid_getVT_f77d745f2128c391,
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
