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
          mid_getColumnDimension_570ce0828f81a2c1,
          mid_getInverse_688b496048ff947b,
          mid_getRowDimension_570ce0828f81a2c1,
          mid_isNonSingular_b108b35ef48e27bd,
          mid_solve_613347e28dd909cd,
          mid_solve_e9b72403ad502221,
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
