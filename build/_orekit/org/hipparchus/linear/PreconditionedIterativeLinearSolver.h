#ifndef org_hipparchus_linear_PreconditionedIterativeLinearSolver_H
#define org_hipparchus_linear_PreconditionedIterativeLinearSolver_H

#include "org/hipparchus/linear/IterativeLinearSolver.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class IterationManager;
    }
    namespace linear {
      class RealVector;
      class RealLinearOperator;
    }
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
      class MathIllegalStateException;
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
          mid_init$_96d20dd3d7b62ec2,
          mid_init$_0a2a1ac2721c0336,
          mid_solve_2d301f1e49d9c390,
          mid_solve_52b5cc8d60bfdcba,
          mid_solve_55921fcd14d39e3f,
          mid_solve_914768267c38d49b,
          mid_solveInPlace_52b5cc8d60bfdcba,
          mid_solveInPlace_914768267c38d49b,
          mid_checkParameters_f0802c57438f99ba,
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
