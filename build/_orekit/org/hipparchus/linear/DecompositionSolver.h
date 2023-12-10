#ifndef org_hipparchus_linear_DecompositionSolver_H
#define org_hipparchus_linear_DecompositionSolver_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealVector;
      class RealMatrix;
    }
    namespace exception {
      class MathIllegalArgumentException;
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

      class DecompositionSolver : public ::java::lang::Object {
       public:
        enum {
          mid_getColumnDimension_f2f64475e4580546,
          mid_getInverse_7116bbecdd8ceb21,
          mid_getRowDimension_f2f64475e4580546,
          mid_isNonSingular_e470b6d9e0d979db,
          mid_solve_a3e626dfa1abd779,
          mid_solve_e00cd33aedcc5bd0,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit DecompositionSolver(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        DecompositionSolver(const DecompositionSolver& obj) : ::java::lang::Object(obj) {}

        jint getColumnDimension() const;
        ::org::hipparchus::linear::RealMatrix getInverse() const;
        jint getRowDimension() const;
        jboolean isNonSingular() const;
        ::org::hipparchus::linear::RealVector solve(const ::org::hipparchus::linear::RealVector &) const;
        ::org::hipparchus::linear::RealMatrix solve(const ::org::hipparchus::linear::RealMatrix &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(DecompositionSolver);
      extern PyTypeObject *PY_TYPE(DecompositionSolver);

      class t_DecompositionSolver {
      public:
        PyObject_HEAD
        DecompositionSolver object;
        static PyObject *wrap_Object(const DecompositionSolver&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
