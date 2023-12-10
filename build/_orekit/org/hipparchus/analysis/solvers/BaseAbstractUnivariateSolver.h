#ifndef org_hipparchus_analysis_solvers_BaseAbstractUnivariateSolver_H
#define org_hipparchus_analysis_solvers_BaseAbstractUnivariateSolver_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      class UnivariateFunction;
      namespace solvers {
        class BaseUnivariateSolver;
      }
    }
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
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
            mid_getAbsoluteAccuracy_456d9a2f64d6b28d,
            mid_getEvaluations_f2f64475e4580546,
            mid_getFunctionValueAccuracy_456d9a2f64d6b28d,
            mid_getMax_456d9a2f64d6b28d,
            mid_getMin_456d9a2f64d6b28d,
            mid_getRelativeAccuracy_456d9a2f64d6b28d,
            mid_getStartValue_456d9a2f64d6b28d,
            mid_solve_f359ce7f50720544,
            mid_solve_5e6ae88ca7503288,
            mid_solve_5ec58f5d7d8b216f,
            mid_incrementEvaluationCount_7ae3461a92a43152,
            mid_computeObjectiveValue_0ba5fed9597b693e,
            mid_verifyInterval_1d715fa3b7b756e1,
            mid_doSolve_456d9a2f64d6b28d,
            mid_verifySequence_d0d6094fbd7015c5,
            mid_isBracketing_a836bdf37f582c99,
            mid_isSequence_15ea3a7b52896f96,
            mid_verifyBracketing_1d715fa3b7b756e1,
            mid_setup_70a5e0903bd9c7a8,
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
