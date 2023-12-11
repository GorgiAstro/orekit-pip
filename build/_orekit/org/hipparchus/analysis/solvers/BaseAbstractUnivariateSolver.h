#ifndef org_hipparchus_analysis_solvers_BaseAbstractUnivariateSolver_H
#define org_hipparchus_analysis_solvers_BaseAbstractUnivariateSolver_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {
        class BaseUnivariateSolver;
      }
      class UnivariateFunction;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
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
            mid_getAbsoluteAccuracy_557b8123390d8d0c,
            mid_getEvaluations_412668abc8d889e9,
            mid_getFunctionValueAccuracy_557b8123390d8d0c,
            mid_getMax_557b8123390d8d0c,
            mid_getMin_557b8123390d8d0c,
            mid_getRelativeAccuracy_557b8123390d8d0c,
            mid_getStartValue_557b8123390d8d0c,
            mid_solve_2acf1fcf666df32e,
            mid_solve_277b266ef2505d2d,
            mid_solve_50fe689dc1cd3df5,
            mid_computeObjectiveValue_7e960cd6eee376d8,
            mid_verifyInterval_ab23f4ae0fb33968,
            mid_verifySequence_87096e3fd8086100,
            mid_doSolve_557b8123390d8d0c,
            mid_isBracketing_41fce65646328eb2,
            mid_isSequence_3d7c70c33c048085,
            mid_verifyBracketing_ab23f4ae0fb33968,
            mid_incrementEvaluationCount_0640e6acf969ed28,
            mid_setup_4473eacac8160c42,
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
