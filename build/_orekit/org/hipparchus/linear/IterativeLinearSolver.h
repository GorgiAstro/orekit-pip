#ifndef org_hipparchus_linear_IterativeLinearSolver_H
#define org_hipparchus_linear_IterativeLinearSolver_H

#include "java/lang/Object.h"

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

      class IterativeLinearSolver : public ::java::lang::Object {
       public:
        enum {
          mid_init$_5620df2219299797,
          mid_init$_a3da1a935cb37f7b,
          mid_getIterationManager_93f814e538fc8778,
          mid_solve_6b479a0f30bd3d0f,
          mid_solve_2afa71936b186c26,
          mid_solveInPlace_2afa71936b186c26,
          mid_checkParameters_a268619231ff7cd6,
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
