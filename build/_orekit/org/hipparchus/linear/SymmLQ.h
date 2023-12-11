#ifndef org_hipparchus_linear_SymmLQ_H
#define org_hipparchus_linear_SymmLQ_H

#include "org/hipparchus/linear/PreconditionedIterativeLinearSolver.h"

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

      class SymmLQ : public ::org::hipparchus::linear::PreconditionedIterativeLinearSolver {
       public:
        enum {
          mid_init$_54544b43400189dc,
          mid_init$_bcaf7e2c67482688,
          mid_shouldCheck_89b302893bdbe1f1,
          mid_solve_6b479a0f30bd3d0f,
          mid_solve_2afa71936b186c26,
          mid_solve_5846c18557c7b879,
          mid_solve_794cf6c78f8f4b2d,
          mid_solve_272f088736796c76,
          mid_solve_6caca95bd3e248d3,
          mid_solveInPlace_2afa71936b186c26,
          mid_solveInPlace_794cf6c78f8f4b2d,
          mid_solveInPlace_f3afef04e4ba1565,
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
