#ifndef org_hipparchus_linear_FieldQRDecomposition_H
#define org_hipparchus_linear_FieldQRDecomposition_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class FieldDecompositionSolver;
      class FieldMatrix;
    }
    class CalculusFieldElement;
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

      class FieldQRDecomposition : public ::java::lang::Object {
       public:
        enum {
          mid_init$_87e4c06eff884f7d,
          mid_init$_eea1f146acfd9c5e,
          mid_getH_02883dbbe5db44ac,
          mid_getQ_02883dbbe5db44ac,
          mid_getQT_02883dbbe5db44ac,
          mid_getR_02883dbbe5db44ac,
          mid_getSolver_86a1dd9765cf39e6,
          mid_decompose_b60b8c1db840c496,
          mid_performHouseholderReflection_5deabae32e64f622,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldQRDecomposition(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldQRDecomposition(const FieldQRDecomposition& obj) : ::java::lang::Object(obj) {}

        FieldQRDecomposition(const ::org::hipparchus::linear::FieldMatrix &);
        FieldQRDecomposition(const ::org::hipparchus::linear::FieldMatrix &, const ::org::hipparchus::CalculusFieldElement &);

        ::org::hipparchus::linear::FieldMatrix getH() const;
        ::org::hipparchus::linear::FieldMatrix getQ() const;
        ::org::hipparchus::linear::FieldMatrix getQT() const;
        ::org::hipparchus::linear::FieldMatrix getR() const;
        ::org::hipparchus::linear::FieldDecompositionSolver getSolver() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(FieldQRDecomposition);
      extern PyTypeObject *PY_TYPE(FieldQRDecomposition);

      class t_FieldQRDecomposition {
      public:
        PyObject_HEAD
        FieldQRDecomposition object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldQRDecomposition *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldQRDecomposition&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldQRDecomposition&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
