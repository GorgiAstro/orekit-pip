#ifndef org_hipparchus_analysis_solvers_UnivariateSolverUtils_H
#define org_hipparchus_analysis_solvers_UnivariateSolverUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {
        class AllowedSolution;
        class BracketedUnivariateSolver;
      }
      class UnivariateFunction;
      class CalculusFieldUnivariateFunction;
    }
    namespace exception {
      class MathIllegalArgumentException;
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

        class UnivariateSolverUtils : public ::java::lang::Object {
         public:
          enum {
            mid_bracket_e3f421790ff933be,
            mid_bracket_e46afa233273adfb,
            mid_bracket_dddc38e6e775dbf1,
            mid_bracket_b5a9fea683362dcf,
            mid_bracket_3ca7c0fdd4b9ad45,
            mid_bracket_ecf3e65a7cf8fbcf,
            mid_forceSide_d9f29460303e6086,
            mid_isBracketing_3128f9dde8ed0864,
            mid_isSequence_de33958d3e7816c8,
            mid_midpoint_82f92590f4247da1,
            mid_solve_fdd56ebd95eae6c2,
            mid_solve_c95a4e4458ad3d65,
            mid_verifyBracketing_ea7556216ba6c251,
            mid_verifyInterval_13edac039e8cc967,
            mid_verifySequence_bd28dc6055dc5bbd,
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
          static JArray< ::org::hipparchus::CalculusFieldElement > bracket(const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, jint);
          static JArray< jdouble > bracket(const ::org::hipparchus::analysis::UnivariateFunction &, jdouble, jdouble, jdouble, jdouble, jdouble, jint);
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
