#ifndef org_hipparchus_analysis_solvers_FieldBracketingNthOrderBrentSolver_H
#define org_hipparchus_analysis_solvers_FieldBracketingNthOrderBrentSolver_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {
        class BracketedRealFieldUnivariateSolver$Interval;
        class AllowedSolution;
        class BracketedRealFieldUnivariateSolver;
      }
      class CalculusFieldUnivariateFunction;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
      class NullArgumentException;
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

        class FieldBracketingNthOrderBrentSolver : public ::java::lang::Object {
         public:
          enum {
            mid_init$_be414b4726c448be,
            mid_getAbsoluteAccuracy_08d37e3f77b7239d,
            mid_getEvaluations_d6ab429752e7c267,
            mid_getFunctionValueAccuracy_08d37e3f77b7239d,
            mid_getMaxEvaluations_d6ab429752e7c267,
            mid_getMaximalOrder_d6ab429752e7c267,
            mid_getRelativeAccuracy_08d37e3f77b7239d,
            mid_solve_6851f2838839ed9a,
            mid_solve_506031728277a68d,
            mid_solveInterval_20e7140a9cf1e1c4,
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
