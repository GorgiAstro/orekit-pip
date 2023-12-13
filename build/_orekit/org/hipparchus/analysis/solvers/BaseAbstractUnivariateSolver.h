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
            mid_getAbsoluteAccuracy_b74f83833fdad017,
            mid_getEvaluations_55546ef6a647f39b,
            mid_getFunctionValueAccuracy_b74f83833fdad017,
            mid_getMax_b74f83833fdad017,
            mid_getMin_b74f83833fdad017,
            mid_getRelativeAccuracy_b74f83833fdad017,
            mid_getStartValue_b74f83833fdad017,
            mid_solve_6fb62642ce3110d4,
            mid_solve_076ce9f904fe1577,
            mid_solve_82bbd98edb095e2c,
            mid_computeObjectiveValue_04fd0666b613d2ab,
            mid_verifyInterval_369b4c97255d5afa,
            mid_incrementEvaluationCount_a1fa5dae97ea5ed2,
            mid_doSolve_b74f83833fdad017,
            mid_verifySequence_b5167f35b2521627,
            mid_verifyBracketing_369b4c97255d5afa,
            mid_isBracketing_cd8da52a7e84190c,
            mid_isSequence_bf10cceb76af8f9c,
            mid_setup_6c6e0210841d1026,
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
