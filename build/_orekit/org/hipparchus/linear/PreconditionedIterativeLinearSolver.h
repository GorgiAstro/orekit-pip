#ifndef org_hipparchus_linear_PreconditionedIterativeLinearSolver_H
#define org_hipparchus_linear_PreconditionedIterativeLinearSolver_H

#include "org/hipparchus/linear/IterativeLinearSolver.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
      class MathIllegalStateException;
    }
    namespace util {
      class IterationManager;
    }
    namespace linear {
      class RealVector;
      class RealLinearOperator;
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
          mid_init$_5620df2219299797,
          mid_init$_a3da1a935cb37f7b,
          mid_solve_6b479a0f30bd3d0f,
          mid_solve_2afa71936b186c26,
          mid_solve_5846c18557c7b879,
          mid_solve_794cf6c78f8f4b2d,
          mid_solveInPlace_2afa71936b186c26,
          mid_solveInPlace_794cf6c78f8f4b2d,
          mid_checkParameters_8a2752c0ac4ba040,
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
