#ifndef org_hipparchus_analysis_solvers_BaseAbstractUnivariateSolver_H
#define org_hipparchus_analysis_solvers_BaseAbstractUnivariateSolver_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
    }
    namespace analysis {
      namespace solvers {
        class BaseUnivariateSolver;
      }
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

        class BaseAbstractUnivariateSolver : public ::java::lang::Object {
         public:
          enum {
            mid_getAbsoluteAccuracy_dff5885c2c873297,
            mid_getEvaluations_570ce0828f81a2c1,
            mid_getFunctionValueAccuracy_dff5885c2c873297,
            mid_getMax_dff5885c2c873297,
            mid_getMin_dff5885c2c873297,
            mid_getRelativeAccuracy_dff5885c2c873297,
            mid_getStartValue_dff5885c2c873297,
            mid_solve_a156b737628248ac,
            mid_solve_5531acb13e429311,
            mid_solve_136fe8df860928b8,
            mid_incrementEvaluationCount_0fa09c18fee449d5,
            mid_verifyInterval_8f2e782d5278b131,
            mid_computeObjectiveValue_dcbc7ce2902fa136,
            mid_doSolve_dff5885c2c873297,
            mid_verifySequence_2c56b6dd4d4b1dec,
            mid_verifyBracketing_8f2e782d5278b131,
            mid_isBracketing_ff85a0d8ff097ee5,
            mid_isSequence_01c0c8b0c5f55ddf,
            mid_setup_57787c1c1c19a92c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BaseAbstractUnivariateSolver(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BaseAbstractUnivariateSolver(const BaseAbstractUnivariateSolver& obj) : ::java::lang::Object(obj) {}

          jdouble getAbsoluteAccuracy() const;
          jint getEvaluations() const;
          jdouble getFunctionValueAccuracy() const;
          jdouble getMax() const;
          jdouble getMin() const;
          jdouble getRelativeAccuracy() const;
          jdouble getStartValue() const;
          jdouble solve(jint, const ::org::hipparchus::analysis::UnivariateFunction &, jdouble) const;
          jdouble solve(jint, const ::org::hipparchus::analysis::UnivariateFunction &, jdouble, jdouble) const;
          jdouble solve(jint, const ::org::hipparchus::analysis::UnivariateFunction &, jdouble, jdouble, jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(BaseAbstractUnivariateSolver);
        extern PyTypeObject *PY_TYPE(BaseAbstractUnivariateSolver);

        class t_BaseAbstractUnivariateSolver {
        public:
          PyObject_HEAD
          BaseAbstractUnivariateSolver object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_BaseAbstractUnivariateSolver *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const BaseAbstractUnivariateSolver&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const BaseAbstractUnivariateSolver&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
