#ifndef org_hipparchus_linear_FieldLUDecomposer_H
#define org_hipparchus_linear_FieldLUDecomposer_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class FieldMatrixDecomposer;
      class FieldDecompositionSolver;
      class FieldMatrix;
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

      class FieldLUDecomposer : public ::java::lang::Object {
       public:
        enum {
          mid_decompose_b2f65345b24ac236,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldLUDecomposer(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldLUDecomposer(const FieldLUDecomposer& obj) : ::java::lang::Object(obj) {}

        ::org::hipparchus::linear::FieldDecompositionSolver decompose(const ::org::hipparchus::linear::FieldMatrix &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(FieldLUDecomposer);
      extern PyTypeObject *PY_TYPE(FieldLUDecomposer);

      class t_FieldLUDecomposer {
      public:
        PyObject_HEAD
        FieldLUDecomposer object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldLUDecomposer *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldLUDecomposer&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldLUDecomposer&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
