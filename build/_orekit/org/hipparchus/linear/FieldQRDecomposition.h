#ifndef org_hipparchus_linear_FieldQRDecomposition_H
#define org_hipparchus_linear_FieldQRDecomposition_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class FieldMatrix;
      class FieldDecompositionSolver;
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
          mid_init$_33e6ddbf6bb140a5,
          mid_init$_d4fad8a5c8b974bd,
          mid_getH_1d6b27621d7bea96,
          mid_getQ_1d6b27621d7bea96,
          mid_getQT_1d6b27621d7bea96,
          mid_getR_1d6b27621d7bea96,
          mid_getSolver_a465c42b6ee7c97a,
          mid_decompose_d1783084d145e9ca,
          mid_performHouseholderReflection_568124237407ef5b,
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
