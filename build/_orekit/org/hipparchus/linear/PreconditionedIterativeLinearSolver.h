#ifndef org_hipparchus_linear_PreconditionedIterativeLinearSolver_H
#define org_hipparchus_linear_PreconditionedIterativeLinearSolver_H

#include "org/hipparchus/linear/IterativeLinearSolver.h"

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

      class PreconditionedIterativeLinearSolver : public ::org::hipparchus::linear::IterativeLinearSolver {
       public:
        enum {
          mid_init$_298a9e348b1bb52b,
          mid_init$_99803b0791f320ff,
          mid_solve_0c01ae2730abb842,
          mid_solve_f5ad289a93e4d7cc,
          mid_solve_89085f14c3881b25,
          mid_solve_b66895678db09891,
          mid_solveInPlace_f5ad289a93e4d7cc,
          mid_solveInPlace_b66895678db09891,
          mid_checkParameters_971434c87bc35b4e,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PreconditionedIterativeLinearSolver(jobject obj) : ::org::hipparchus::linear::IterativeLinearSolver(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PreconditionedIterativeLinearSolver(const PreconditionedIterativeLinearSolver& obj) : ::org::hipparchus::linear::IterativeLinearSolver(obj) {}

        PreconditionedIterativeLinearSolver(const ::org::hipparchus::util::IterationManager &);
        PreconditionedIterativeLinearSolver(jint);

        ::org::hipparchus::linear::RealVector solve(const ::org::hipparchus::linear::RealLinearOperator &, const ::org::hipparchus::linear::RealVector &) const;
        ::org::hipparchus::linear::RealVector solve(const ::org::hipparchus::linear::RealLinearOperator &, const ::org::hipparchus::linear::RealVector &, const ::org::hipparchus::linear::RealVector &) const;
        ::org::hipparchus::linear::RealVector solve(const ::org::hipparchus::linear::RealLinearOperator &, const ::org::hipparchus::linear::RealLinearOperator &, const ::org::hipparchus::linear::RealVector &) const;
        ::org::hipparchus::linear::RealVector solve(const ::org::hipparchus::linear::RealLinearOperator &, const ::org::hipparchus::linear::RealLinearOperator &, const ::org::hipparchus::linear::RealVector &, const ::org::hipparchus::linear::RealVector &) const;
        ::org::hipparchus::linear::RealVector solveInPlace(const ::org::hipparchus::linear::RealLinearOperator &, const ::org::hipparchus::linear::RealVector &, const ::org::hipparchus::linear::RealVector &) const;
        ::org::hipparchus::linear::RealVector solveInPlace(const ::org::hipparchus::linear::RealLinearOperator &, const ::org::hipparchus::linear::RealLinearOperator &, const ::org::hipparchus::linear::RealVector &, const ::org::hipparchus::linear::RealVector &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(PreconditionedIterativeLinearSolver);
      extern PyTypeObject *PY_TYPE(PreconditionedIterativeLinearSolver);

      class t_PreconditionedIterativeLinearSolver {
      public:
        PyObject_HEAD
        PreconditionedIterativeLinearSolver object;
        static PyObject *wrap_Object(const PreconditionedIterativeLinearSolver&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
