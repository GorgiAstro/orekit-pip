#ifndef org_hipparchus_linear_FieldQRDecomposer_H
#define org_hipparchus_linear_FieldQRDecomposer_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class FieldMatrixDecomposer;
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

      class FieldQRDecomposer : public ::java::lang::Object {
       public:
        enum {
          mid_init$_1ee4bed350fde589,
          mid_decompose_b2f65345b24ac236,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldQRDecomposer(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldQRDecomposer(const FieldQRDecomposer& obj) : ::java::lang::Object(obj) {}

        FieldQRDecomposer(const ::org::hipparchus::CalculusFieldElement &);

        ::org::hipparchus::linear::FieldDecompositionSolver decompose(const ::org::hipparchus::linear::FieldMatrix &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(FieldQRDecomposer);
      extern PyTypeObject *PY_TYPE(FieldQRDecomposer);

      class t_FieldQRDecomposer {
      public:
        PyObject_HEAD
        FieldQRDecomposer object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldQRDecomposer *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldQRDecomposer&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldQRDecomposer&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
