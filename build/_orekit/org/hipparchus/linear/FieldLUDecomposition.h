#ifndef org_hipparchus_linear_FieldLUDecomposition_H
#define org_hipparchus_linear_FieldLUDecomposition_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class FieldMatrix;
      class FieldDecompositionSolver;
    }
    class FieldElement;
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

      class FieldLUDecomposition : public ::java::lang::Object {
       public:
        enum {
          mid_init$_33e6ddbf6bb140a5,
          mid_getDeterminant_ce0470d468f80a56,
          mid_getL_1d6b27621d7bea96,
          mid_getP_1d6b27621d7bea96,
          mid_getPivot_1b41cf9ebf653611,
          mid_getSolver_a465c42b6ee7c97a,
          mid_getU_1d6b27621d7bea96,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldLUDecomposition(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldLUDecomposition(const FieldLUDecomposition& obj) : ::java::lang::Object(obj) {}

        FieldLUDecomposition(const ::org::hipparchus::linear::FieldMatrix &);

        ::org::hipparchus::FieldElement getDeterminant() const;
        ::org::hipparchus::linear::FieldMatrix getL() const;
        ::org::hipparchus::linear::FieldMatrix getP() const;
        JArray< jint > getPivot() const;
        ::org::hipparchus::linear::FieldDecompositionSolver getSolver() const;
        ::org::hipparchus::linear::FieldMatrix getU() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(FieldLUDecomposition);
      extern PyTypeObject *PY_TYPE(FieldLUDecomposition);

      class t_FieldLUDecomposition {
      public:
        PyObject_HEAD
        FieldLUDecomposition object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldLUDecomposition *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldLUDecomposition&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldLUDecomposition&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
