#ifndef org_hipparchus_linear_ConjugateGradient_H
#define org_hipparchus_linear_ConjugateGradient_H

#include "org/hipparchus/linear/PreconditionedIterativeLinearSolver.h"

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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class ConjugateGradient : public ::org::hipparchus::linear::PreconditionedIterativeLinearSolver {
       public:
        enum {
          mid_init$_18b5cf63963cf251,
          mid_init$_726464cbb7d28c95,
          mid_shouldCheck_e470b6d9e0d979db,
          mid_solveInPlace_914768267c38d49b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ConjugateGradient(jobject obj) : ::org::hipparchus::linear::PreconditionedIterativeLinearSolver(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ConjugateGradient(const ConjugateGradient& obj) : ::org::hipparchus::linear::PreconditionedIterativeLinearSolver(obj) {}

        static ::java::lang::String *OPERATOR;
        static ::java::lang::String *VECTOR;

        ConjugateGradient(const ::org::hipparchus::util::IterationManager &, jdouble, jboolean);
        ConjugateGradient(jint, jdouble, jboolean);

        jboolean shouldCheck() const;
        ::org::hipparchus::linear::RealVector solveInPlace(const ::org::hipparchus::linear::RealLinearOperator &, const ::org::hipparchus::linear::RealLinearOperator &, const ::org::hipparchus::linear::RealVector &, const ::org::hipparchus::linear::RealVector &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(ConjugateGradient);
      extern PyTypeObject *PY_TYPE(ConjugateGradient);

      class t_ConjugateGradient {
      public:
        PyObject_HEAD
        ConjugateGradient object;
        static PyObject *wrap_Object(const ConjugateGradient&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
