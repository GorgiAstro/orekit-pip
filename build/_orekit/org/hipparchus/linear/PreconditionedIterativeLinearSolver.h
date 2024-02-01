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
      class MathIllegalArgumentException;
      class MathIllegalStateException;
      class NullArgumentException;
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
          mid_init$_825e5a57590da83c,
          mid_init$_8fd427ab23829bf5,
          mid_solve_0cdb2b64c2fd2ee5,
          mid_solve_0299ee26edcac320,
          mid_solve_9820092a50d54355,
          mid_solve_35226d9fdc897ac0,
          mid_solveInPlace_0299ee26edcac320,
          mid_solveInPlace_35226d9fdc897ac0,
          mid_checkParameters_b3d45b3939216c0b,
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
