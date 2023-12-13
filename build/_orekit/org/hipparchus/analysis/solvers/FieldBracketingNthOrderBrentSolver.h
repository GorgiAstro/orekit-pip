#ifndef org_hipparchus_analysis_solvers_FieldBracketingNthOrderBrentSolver_H
#define org_hipparchus_analysis_solvers_FieldBracketingNthOrderBrentSolver_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathIllegalStateException;
      class MathIllegalArgumentException;
    }
    class CalculusFieldElement;
    namespace analysis {
      class CalculusFieldUnivariateFunction;
      namespace solvers {
        class BracketedRealFieldUnivariateSolver;
        class BracketedRealFieldUnivariateSolver$Interval;
        class AllowedSolution;
      }
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

        class FieldBracketingNthOrderBrentSolver : public ::java::lang::Object {
         public:
          enum {
            mid_init$_acf92559ec8aaacb,
            mid_getAbsoluteAccuracy_81520b552cb3fa26,
            mid_getEvaluations_55546ef6a647f39b,
            mid_getFunctionValueAccuracy_81520b552cb3fa26,
            mid_getMaxEvaluations_55546ef6a647f39b,
            mid_getMaximalOrder_55546ef6a647f39b,
            mid_getRelativeAccuracy_81520b552cb3fa26,
            mid_solve_274432d986e24d18,
            mid_solve_1274323488150eef,
            mid_solveInterval_01108cb21dc9897d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldBracketingNthOrderBrentSolver(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldBracketingNthOrderBrentSolver(const FieldBracketingNthOrderBrentSolver& obj) : ::java::lang::Object(obj) {}

          FieldBracketingNthOrderBrentSolver(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, jint);

          ::org::hipparchus::CalculusFieldElement getAbsoluteAccuracy() const;
          jint getEvaluations() const;
          ::org::hipparchus::CalculusFieldElement getFunctionValueAccuracy() const;
          jint getMaxEvaluations() const;
          jint getMaximalOrder() const;
          ::org::hipparchus::CalculusFieldElement getRelativeAccuracy() const;
          ::org::hipparchus::CalculusFieldElement solve(jint, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::analysis::solvers::AllowedSolution &) const;
          ::org::hipparchus::CalculusFieldElement solve(jint, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::analysis::solvers::AllowedSolution &) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldBracketingNthOrderBrentSolver);
        extern PyTypeObject *PY_TYPE(FieldBracketingNthOrderBrentSolver);

        class t_FieldBracketingNthOrderBrentSolver {
        public:
          PyObject_HEAD
          FieldBracketingNthOrderBrentSolver object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldBracketingNthOrderBrentSolver *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldBracketingNthOrderBrentSolver&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldBracketingNthOrderBrentSolver&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
