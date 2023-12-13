#ifndef org_hipparchus_linear_FieldDecompositionSolver_H
#define org_hipparchus_linear_FieldDecompositionSolver_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace linear {
      class FieldMatrix;
      class FieldVector;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class FieldDecompositionSolver : public ::java::lang::Object {
       public:
        enum {
          mid_getColumnDimension_55546ef6a647f39b,
          mid_getInverse_81d49643ce3a3c0b,
          mid_getRowDimension_55546ef6a647f39b,
          mid_isNonSingular_9ab94ac1dc23b105,
          mid_solve_e74c5d5fdc2ea025,
          mid_solve_0c912ec1e9dd9ed7,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldDecompositionSolver(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldDecompositionSolver(const FieldDecompositionSolver& obj) : ::java::lang::Object(obj) {}

        jint getColumnDimension() const;
        ::org::hipparchus::linear::FieldMatrix getInverse() const;
        jint getRowDimension() const;
        jboolean isNonSingular() const;
        ::org::hipparchus::linear::FieldMatrix solve(const ::org::hipparchus::linear::FieldMatrix &) const;
        ::org::hipparchus::linear::FieldVector solve(const ::org::hipparchus::linear::FieldVector &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(FieldDecompositionSolver);
      extern PyTypeObject *PY_TYPE(FieldDecompositionSolver);

      class t_FieldDecompositionSolver {
      public:
        PyObject_HEAD
        FieldDecompositionSolver object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldDecompositionSolver *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldDecompositionSolver&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldDecompositionSolver&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
