#ifndef org_hipparchus_linear_PreconditionedIterativeLinearSolver_H
#define org_hipparchus_linear_PreconditionedIterativeLinearSolver_H

#include "org/hipparchus/linear/IterativeLinearSolver.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathIllegalStateException;
      class MathIllegalArgumentException;
    }
    namespace util {
      class IterationManager;
    }
    namespace linear {
      class RealLinearOperator;
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

      class PreconditionedIterativeLinearSolver : public ::org::hipparchus::linear::IterativeLinearSolver {
       public:
        enum {
          mid_init$_c5c01059ddc6554a,
          mid_init$_44ed599e93e8a30c,
          mid_solve_756296b1f68e7038,
          mid_solve_8e7f7f43cd6eb914,
          mid_solve_3a7358168b964bea,
          mid_solve_0f4c606f88ffcaeb,
          mid_solveInPlace_8e7f7f43cd6eb914,
          mid_solveInPlace_0f4c606f88ffcaeb,
          mid_checkParameters_5c418ed0a0a3e6f3,
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
