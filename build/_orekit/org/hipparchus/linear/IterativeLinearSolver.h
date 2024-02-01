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

      class IterativeLinearSolver : public ::java::lang::Object {
       public:
        enum {
          mid_init$_825e5a57590da83c,
          mid_init$_8fd427ab23829bf5,
          mid_getIterationManager_189f5d3e1d7b776f,
          mid_solve_0cdb2b64c2fd2ee5,
          mid_solve_0299ee26edcac320,
          mid_solveInPlace_0299ee26edcac320,
          mid_checkParameters_1b962cd1836dca11,
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
