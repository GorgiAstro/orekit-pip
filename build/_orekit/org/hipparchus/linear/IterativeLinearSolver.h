#ifndef org_hipparchus_linear_IterativeLinearSolver_H
#define org_hipparchus_linear_IterativeLinearSolver_H

#include "java/lang/Object.h"

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

      class IterativeLinearSolver : public ::java::lang::Object {
       public:
        enum {
          mid_init$_96d20dd3d7b62ec2,
          mid_init$_0a2a1ac2721c0336,
          mid_getIterationManager_78ef6bf5b7f544c8,
          mid_solve_2d301f1e49d9c390,
          mid_solve_52b5cc8d60bfdcba,
          mid_solveInPlace_52b5cc8d60bfdcba,
          mid_checkParameters_741ee6016394481d,
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
