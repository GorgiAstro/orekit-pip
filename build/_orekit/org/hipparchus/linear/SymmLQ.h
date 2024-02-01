#ifndef org_hipparchus_linear_SymmLQ_H
#define org_hipparchus_linear_SymmLQ_H

#include "org/hipparchus/linear/PreconditionedIterativeLinearSolver.h"

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

      class SymmLQ : public ::org::hipparchus::linear::PreconditionedIterativeLinearSolver {
       public:
        enum {
          mid_init$_c5b1307f8763947a,
          mid_init$_50acb8bcbb80a276,
          mid_shouldCheck_eee3de00fe971136,
          mid_solve_0cdb2b64c2fd2ee5,
          mid_solve_0299ee26edcac320,
          mid_solve_9820092a50d54355,
          mid_solve_35226d9fdc897ac0,
          mid_solve_0729d74880ac1f87,
          mid_solve_e0e56b5e51a70a3d,
          mid_solveInPlace_0299ee26edcac320,
          mid_solveInPlace_35226d9fdc897ac0,
          mid_solveInPlace_d1dc9ac8657eea32,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit SymmLQ(jobject obj) : ::org::hipparchus::linear::PreconditionedIterativeLinearSolver(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        SymmLQ(const SymmLQ& obj) : ::org::hipparchus::linear::PreconditionedIterativeLinearSolver(obj) {}

        SymmLQ(const ::org::hipparchus::util::IterationManager &, jdouble, jboolean);
        SymmLQ(jint, jdouble, jboolean);

        jboolean shouldCheck() const;
        ::org::hipparchus::linear::RealVector solve(const ::org::hipparchus::linear::RealLinearOperator &, const ::org::hipparchus::linear::RealVector &) const;
        ::org::hipparchus::linear::RealVector solve(const ::org::hipparchus::linear::RealLinearOperator &, const ::org::hipparchus::linear::RealVector &, const ::org::hipparchus::linear::RealVector &) const;
        ::org::hipparchus::linear::RealVector solve(const ::org::hipparchus::linear::RealLinearOperator &, const ::org::hipparchus::linear::RealLinearOperator &, const ::org::hipparchus::linear::RealVector &) const;
        ::org::hipparchus::linear::RealVector solve(const ::org::hipparchus::linear::RealLinearOperator &, const ::org::hipparchus::linear::RealLinearOperator &, const ::org::hipparchus::linear::RealVector &, const ::org::hipparchus::linear::RealVector &) const;
        ::org::hipparchus::linear::RealVector solve(const ::org::hipparchus::linear::RealLinearOperator &, const ::org::hipparchus::linear::RealVector &, jboolean, jdouble) const;
        ::org::hipparchus::linear::RealVector solve(const ::org::hipparchus::linear::RealLinearOperator &, const ::org::hipparchus::linear::RealLinearOperator &, const ::org::hipparchus::linear::RealVector &, jboolean, jdouble) const;
        ::org::hipparchus::linear::RealVector solveInPlace(const ::org::hipparchus::linear::RealLinearOperator &, const ::org::hipparchus::linear::RealVector &, const ::org::hipparchus::linear::RealVector &) const;
        ::org::hipparchus::linear::RealVector solveInPlace(const ::org::hipparchus::linear::RealLinearOperator &, const ::org::hipparchus::linear::RealLinearOperator &, const ::org::hipparchus::linear::RealVector &, const ::org::hipparchus::linear::RealVector &) const;
        ::org::hipparchus::linear::RealVector solveInPlace(const ::org::hipparchus::linear::RealLinearOperator &, const ::org::hipparchus::linear::RealLinearOperator &, const ::org::hipparchus::linear::RealVector &, const ::org::hipparchus::linear::RealVector &, jboolean, jdouble) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(SymmLQ);
      extern PyTypeObject *PY_TYPE(SymmLQ);

      class t_SymmLQ {
      public:
        PyObject_HEAD
        SymmLQ object;
        static PyObject *wrap_Object(const SymmLQ&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
