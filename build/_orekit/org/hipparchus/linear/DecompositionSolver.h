#ifndef org_hipparchus_linear_DecompositionSolver_H
#define org_hipparchus_linear_DecompositionSolver_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
      class RealVector;
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
          mid_getColumnDimension_412668abc8d889e9,
          mid_getInverse_70a207fcbc031df2,
          mid_getRowDimension_412668abc8d889e9,
          mid_isNonSingular_89b302893bdbe1f1,
          mid_solve_342d5b01463e0dc5,
          mid_solve_340b47d21842d02c,
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
