#ifndef org_hipparchus_linear_FieldMatrixDecomposer_H
#define org_hipparchus_linear_FieldMatrixDecomposer_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace linear {
      class FieldMatrix;
      class FieldDecompositionSolver;
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

      class FieldMatrixDecomposer : public ::java::lang::Object {
       public:
        enum {
          mid_decompose_f65caede4265247f,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldMatrixDecomposer(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldMatrixDecomposer(const FieldMatrixDecomposer& obj) : ::java::lang::Object(obj) {}

        ::org::hipparchus::linear::FieldDecompositionSolver decompose(const ::org::hipparchus::linear::FieldMatrix &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(FieldMatrixDecomposer);
      extern PyTypeObject *PY_TYPE(FieldMatrixDecomposer);

      class t_FieldMatrixDecomposer {
      public:
        PyObject_HEAD
        FieldMatrixDecomposer object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldMatrixDecomposer *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldMatrixDecomposer&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldMatrixDecomposer&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
