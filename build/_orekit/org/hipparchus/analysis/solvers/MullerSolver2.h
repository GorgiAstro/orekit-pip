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
            mid_init$_ff7cb6c242604316,
            mid_init$_1ad26e8c8c0cd65b,
            mid_init$_13edac039e8cc967,
            mid_doSolve_9981f74b2d109da6,
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
