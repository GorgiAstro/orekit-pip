#ifndef org_hipparchus_analysis_solvers_BracketedRealFieldUnivariateSolver_H
#define org_hipparchus_analysis_solvers_BracketedRealFieldUnivariateSolver_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
    }
    namespace analysis {
      class CalculusFieldUnivariateFunction;
      namespace solvers {
        class AllowedSolution;
        class BracketedRealFieldUnivariateSolver$Interval;
      }
    }
    class CalculusFieldElement;
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

        class BracketedRealFieldUnivariateSolver : public ::java::lang::Object {
         public:
          enum {
            mid_getAbsoluteAccuracy_613c8f46c659f636,
            mid_getEvaluations_412668abc8d889e9,
            mid_getFunctionValueAccuracy_613c8f46c659f636,
            mid_getMaxEvaluations_412668abc8d889e9,
            mid_getRelativeAccuracy_613c8f46c659f636,
            mid_solve_f6a5d6fadadd7d54,
            mid_solve_430e429ac2a8f17e,
            mid_solveInterval_acb4742c5c4534ec,
            mid_solveInterval_1d0ea34064f6834b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BracketedRealFieldUnivariateSolver(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BracketedRealFieldUnivariateSolver(const BracketedRealFieldUnivariateSolver& obj) : ::java::lang::Object(obj) {}

          ::org::hipparchus::CalculusFieldElement getAbsoluteAccuracy() const;
          jint getEvaluations() const;
          ::org::hipparchus::CalculusFieldElement getFunctionValueAccuracy() const;
          jint getMaxEvaluations() const;
          ::org::hipparchus::CalculusFieldElement getRelativeAccuracy() const;
          ::org::hipparchus::CalculusFieldElement solve(jint, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::analysis::solvers::AllowedSolution &) const;
          ::org::hipparchus::CalculusFieldElement solve(jint, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::analysis::solvers::AllowedSolution &) const;
          ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval solveInterval(jint, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &) const;
          ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval solveInterval(jint, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &) const;
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
        extern PyType_Def PY_TYPE_DEF(BracketedRealFieldUnivariateSolver);
        extern PyTypeObject *PY_TYPE(BracketedRealFieldUnivariateSolver);

        class t_BracketedRealFieldUnivariateSolver {
        public:
          PyObject_HEAD
          BracketedRealFieldUnivariateSolver object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_BracketedRealFieldUnivariateSolver *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const BracketedRealFieldUnivariateSolver&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const BracketedRealFieldUnivariateSolver&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
