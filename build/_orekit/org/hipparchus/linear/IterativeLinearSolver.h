#ifndef org_hipparchus_linear_IterativeLinearSolver_H
#define org_hipparchus_linear_IterativeLinearSolver_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealLinearOperator;
      class RealVector;
    }
    namespace exception {
      class MathIllegalStateException;
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    namespace util {
      class IterationManager;
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

      class IterativeLinearSolver : public ::java::lang::Object {
       public:
        enum {
          mid_init$_298a9e348b1bb52b,
          mid_init$_99803b0791f320ff,
          mid_getIterationManager_1efaf682bf1a617d,
          mid_solve_0c01ae2730abb842,
          mid_solve_f5ad289a93e4d7cc,
          mid_solveInPlace_f5ad289a93e4d7cc,
          mid_checkParameters_b0f73128b1b05928,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit IterativeLinearSolver(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        IterativeLinearSolver(const IterativeLinearSolver& obj) : ::java::lang::Object(obj) {}

        IterativeLinearSolver(const ::org::hipparchus::util::IterationManager &);
        IterativeLinearSolver(jint);

        ::org::hipparchus::util::IterationManager getIterationManager() const;
        ::org::hipparchus::linear::RealVector solve(const ::org::hipparchus::linear::RealLinearOperator &, const ::org::hipparchus::linear::RealVector &) const;
        ::org::hipparchus::linear::RealVector solve(const ::org::hipparchus::linear::RealLinearOperator &, const ::org::hipparchus::linear::RealVector &, const ::org::hipparchus::linear::RealVector &) const;
        ::org::hipparchus::linear::RealVector solveInPlace(const ::org::hipparchus::linear::RealLinearOperator &, const ::org::hipparchus::linear::RealVector &, const ::org::hipparchus::linear::RealVector &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(IterativeLinearSolver);
      extern PyTypeObject *PY_TYPE(IterativeLinearSolver);

      class t_IterativeLinearSolver {
      public:
        PyObject_HEAD
        IterativeLinearSolver object;
        static PyObject *wrap_Object(const IterativeLinearSolver&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
