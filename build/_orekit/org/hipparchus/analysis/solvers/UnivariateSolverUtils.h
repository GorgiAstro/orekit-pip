#ifndef org_hipparchus_analysis_solvers_UnivariateSolverUtils_H
#define org_hipparchus_analysis_solvers_UnivariateSolverUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      class UnivariateFunction;
      namespace solvers {
        class AllowedSolution;
        class BracketedUnivariateSolver;
      }
      class CalculusFieldUnivariateFunction;
    }
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
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

        class UnivariateSolverUtils : public ::java::lang::Object {
         public:
          enum {
            mid_bracket_0bf261f4799c8aa5,
            mid_bracket_27ea5dab28f50cf5,
            mid_bracket_d63e4b4284454f95,
            mid_bracket_96142a24a6019c04,
            mid_bracket_2dfd1b59f21ce481,
            mid_bracket_70f142d93ed41d85,
            mid_forceSide_dced817eae0dbc88,
            mid_isBracketing_b04e7cb9d40d5124,
            mid_isSequence_15ea3a7b52896f96,
            mid_midpoint_824133ce4aec3505,
            mid_solve_73f058e6f77a8c39,
            mid_solve_33d916265311f585,
            mid_verifyBracketing_05bcfaa39902e6f0,
            mid_verifyInterval_1d715fa3b7b756e1,
            mid_verifySequence_d0d6094fbd7015c5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UnivariateSolverUtils(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UnivariateSolverUtils(const UnivariateSolverUtils& obj) : ::java::lang::Object(obj) {}

          static JArray< jdouble > bracket(const ::org::hipparchus::analysis::UnivariateFunction &, jdouble, jdouble, jdouble);
          static JArray< ::org::hipparchus::CalculusFieldElement > bracket(const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
          static JArray< ::org::hipparchus::CalculusFieldElement > bracket(const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, jint);
          static JArray< jdouble > bracket(const ::org::hipparchus::analysis::UnivariateFunction &, jdouble, jdouble, jdouble, jint);
          static JArray< jdouble > bracket(const ::org::hipparchus::analysis::UnivariateFunction &, jdouble, jdouble, jdouble, jdouble, jdouble, jint);
          static JArray< ::org::hipparchus::CalculusFieldElement > bracket(const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, jint);
          static jdouble forceSide(jint, const ::org::hipparchus::analysis::UnivariateFunction &, const ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver &, jdouble, jdouble, jdouble, const ::org::hipparchus::analysis::solvers::AllowedSolution &);
          static jboolean isBracketing(const ::org::hipparchus::analysis::UnivariateFunction &, jdouble, jdouble);
          static jboolean isSequence(jdouble, jdouble, jdouble);
          static jdouble midpoint(jdouble, jdouble);
          static jdouble solve(const ::org::hipparchus::analysis::UnivariateFunction &, jdouble, jdouble);
          static jdouble solve(const ::org::hipparchus::analysis::UnivariateFunction &, jdouble, jdouble, jdouble);
          static void verifyBracketing(const ::org::hipparchus::analysis::UnivariateFunction &, jdouble, jdouble);
          static void verifyInterval(jdouble, jdouble);
          static void verifySequence(jdouble, jdouble, jdouble);
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
        extern PyType_Def PY_TYPE_DEF(UnivariateSolverUtils);
        extern PyTypeObject *PY_TYPE(UnivariateSolverUtils);

        class t_UnivariateSolverUtils {
        public:
          PyObject_HEAD
          UnivariateSolverUtils object;
          static PyObject *wrap_Object(const UnivariateSolverUtils&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
