#ifndef org_hipparchus_linear_FieldLUDecomposition_H
#define org_hipparchus_linear_FieldLUDecomposition_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class FieldElement;
    namespace linear {
      class FieldDecompositionSolver;
      class FieldMatrix;
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

      class FieldLUDecomposition : public ::java::lang::Object {
       public:
        enum {
          mid_init$_3e03971cd3efa337,
          mid_getDeterminant_7e89936bdf79375b,
          mid_getL_cc77900a647586cf,
          mid_getP_cc77900a647586cf,
          mid_getPivot_d8ead0d90ce828b0,
          mid_getSolver_60ebb8b71a188d47,
          mid_getU_cc77900a647586cf,
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