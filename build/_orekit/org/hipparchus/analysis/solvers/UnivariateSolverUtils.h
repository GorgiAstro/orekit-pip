#ifndef org_hipparchus_analysis_solvers_UnivariateSolverUtils_H
#define org_hipparchus_analysis_solvers_UnivariateSolverUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
    }
    namespace analysis {
      class UnivariateFunction;
      class CalculusFieldUnivariateFunction;
      namespace solvers {
        class AllowedSolution;
        class BracketedUnivariateSolver;
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

        class UnivariateSolverUtils : public ::java::lang::Object {
         public:
          enum {
            mid_bracket_1ce1584b4c4d1aa0,
            mid_bracket_2da5bc955995af72,
            mid_bracket_5d2b1d16d63bbb70,
            mid_bracket_c858898bfc3913a1,
            mid_bracket_e007deb4884f124c,
            mid_bracket_93c2be7897d91e00,
            mid_forceSide_74679e43d1154a2a,
            mid_isBracketing_d4e7a619be4735dd,
            mid_isSequence_3d7c70c33c048085,
            mid_midpoint_2268d18be49a6087,
            mid_solve_588f35b6905f1239,
            mid_solve_9d0d6e0b2f32c6e6,
            mid_verifyBracketing_ac068e084ec85d06,
            mid_verifyInterval_ab23f4ae0fb33968,
            mid_verifySequence_87096e3fd8086100,
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
