#ifndef org_hipparchus_analysis_solvers_UnivariateSolverUtils_H
#define org_hipparchus_analysis_solvers_UnivariateSolverUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    namespace analysis {
      namespace solvers {
        class BracketedUnivariateSolver;
        class AllowedSolution;
      }
      class CalculusFieldUnivariateFunction;
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

        class UnivariateSolverUtils : public ::java::lang::Object {
         public:
          enum {
            mid_bracket_7d07e834d1560d20,
            mid_bracket_ae44ff21090a05a0,
            mid_bracket_6eb0163ea54a62ee,
            mid_bracket_7566829eb722c317,
            mid_bracket_c193ecb21a9ce776,
            mid_bracket_92a809184785c765,
            mid_forceSide_f88463ece891564f,
            mid_isBracketing_017290ba39975b30,
            mid_isSequence_01c0c8b0c5f55ddf,
            mid_midpoint_86ffecc08a63eff0,
            mid_solve_d5a404b7fd8792e0,
            mid_solve_3d7ade767bbea1e3,
            mid_verifyBracketing_0f8fa28d44d7129e,
            mid_verifyInterval_8f2e782d5278b131,
            mid_verifySequence_2c56b6dd4d4b1dec,
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
