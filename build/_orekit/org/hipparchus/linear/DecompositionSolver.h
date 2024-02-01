#ifndef org_hipparchus_linear_DecompositionSolver_H
#define org_hipparchus_linear_DecompositionSolver_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace linear {
      class RealMatrix;
      class RealVector;
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
          mid_getColumnDimension_d6ab429752e7c267,
          mid_getInverse_b2eebabce70526d8,
          mid_getRowDimension_d6ab429752e7c267,
          mid_isNonSingular_eee3de00fe971136,
          mid_solve_bf8d75e459632544,
          mid_solve_5a8a8185eb309db7,
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
