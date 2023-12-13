#ifndef org_hipparchus_analysis_solvers_UnivariateSolverUtils_H
#define org_hipparchus_analysis_solvers_UnivariateSolverUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    namespace analysis {
      namespace solvers {
        class BracketedUnivariateSolver;
        class AllowedSolution;
      }
      class UnivariateFunction;
      class CalculusFieldUnivariateFunction;
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
            mid_bracket_26c61f283b74355e,
            mid_bracket_ecb059e7a302e82b,
            mid_bracket_a571d14e2a719f43,
            mid_bracket_c1721adb193fa0da,
            mid_bracket_d41ccbfa744c4e3e,
            mid_bracket_e3d8316b64f6e8ef,
            mid_forceSide_c334e0ee1dc3b91e,
            mid_isBracketing_8833bdb865ca4110,
            mid_isSequence_bf10cceb76af8f9c,
            mid_midpoint_99e3200dafc19573,
            mid_solve_0313652d45b9425b,
            mid_solve_c3fe2f21161f2c00,
            mid_verifyBracketing_9d8b62edc3c4b123,
            mid_verifyInterval_369b4c97255d5afa,
            mid_verifySequence_b5167f35b2521627,
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
