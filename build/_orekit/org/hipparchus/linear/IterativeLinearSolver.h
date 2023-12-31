#ifndef org_hipparchus_linear_IterativeLinearSolver_H
#define org_hipparchus_linear_IterativeLinearSolver_H

#include "java/lang/Object.h"

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

      class IterativeLinearSolver : public ::java::lang::Object {
       public:
        enum {
          mid_init$_c5c01059ddc6554a,
          mid_init$_44ed599e93e8a30c,
          mid_getIterationManager_1ef5960453e107b4,
          mid_solve_756296b1f68e7038,
          mid_solve_8e7f7f43cd6eb914,
          mid_solveInPlace_8e7f7f43cd6eb914,
          mid_checkParameters_93a6361f42495c67,
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
