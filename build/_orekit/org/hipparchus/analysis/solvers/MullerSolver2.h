#ifndef org_hipparchus_analysis_solvers_MullerSolver2_H
#define org_hipparchus_analysis_solvers_MullerSolver2_H

#include "org/hipparchus/analysis/solvers/AbstractUnivariateSolver.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      class UnivariateFunction;
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
    namespace analysis {
      namespace solvers {

        class MullerSolver2 : public ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver {
         public:
          enum {
            mid_init$_a1fa5dae97ea5ed2,
            mid_init$_8ba9fe7a847cecad,
            mid_init$_369b4c97255d5afa,
            mid_doSolve_b74f83833fdad017,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MullerSolver2(jobject obj) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MullerSolver2(const MullerSolver2& obj) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(obj) {}

          MullerSolver2();
          MullerSolver2(jdouble);
          MullerSolver2(jdouble, jdouble);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {
        extern PyType_Def PY_TYPE_DEF(MullerSolver2);
        extern PyTypeObject *PY_TYPE(MullerSolver2);

        class t_MullerSolver2 {
        public:
          PyObject_HEAD
          MullerSolver2 object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_MullerSolver2 *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const MullerSolver2&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const MullerSolver2&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
