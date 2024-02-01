#ifndef org_hipparchus_analysis_solvers_BaseAbstractUnivariateSolver_H
#define org_hipparchus_analysis_solvers_BaseAbstractUnivariateSolver_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
    }
    namespace analysis {
      class UnivariateFunction;
      namespace solvers {
        class BaseUnivariateSolver;
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

        class BaseAbstractUnivariateSolver : public ::java::lang::Object {
         public:
          enum {
            mid_getAbsoluteAccuracy_9981f74b2d109da6,
            mid_getEvaluations_d6ab429752e7c267,
            mid_getFunctionValueAccuracy_9981f74b2d109da6,
            mid_getMax_9981f74b2d109da6,
            mid_getMin_9981f74b2d109da6,
            mid_getRelativeAccuracy_9981f74b2d109da6,
            mid_getStartValue_9981f74b2d109da6,
            mid_solve_473ffc752427b240,
            mid_solve_f8d9b8fc210a2541,
            mid_solve_fe5bc4a065ab530b,
            mid_computeObjectiveValue_bf28ed64d6e8576b,
            mid_incrementEvaluationCount_ff7cb6c242604316,
            mid_verifyInterval_13edac039e8cc967,
            mid_doSolve_9981f74b2d109da6,
            mid_verifyBracketing_13edac039e8cc967,
            mid_isBracketing_0fc66ee74538f12c,
            mid_isSequence_de33958d3e7816c8,
            mid_verifySequence_bd28dc6055dc5bbd,
            mid_setup_4b5586fe764146e7,
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
