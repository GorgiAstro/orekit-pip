#ifndef org_hipparchus_analysis_solvers_BracketedRealFieldUnivariateSolver$Interval_H
#define org_hipparchus_analysis_solvers_BracketedRealFieldUnivariateSolver$Interval_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {
        class AllowedSolution;
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

        class BracketedRealFieldUnivariateSolver$Interval : public ::java::lang::Object {
         public:
          enum {
            mid_init$_d9053bad9d08a9e6,
            mid_getLeftAbscissa_08d37e3f77b7239d,
            mid_getLeftValue_08d37e3f77b7239d,
            mid_getRightAbscissa_08d37e3f77b7239d,
            mid_getRightValue_08d37e3f77b7239d,
            mid_getSide_7cadd08d3a6050c1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BracketedRealFieldUnivariateSolver$Interval(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BracketedRealFieldUnivariateSolver$Interval(const BracketedRealFieldUnivariateSolver$Interval& obj) : ::java::lang::Object(obj) {}

          BracketedRealFieldUnivariateSolver$Interval(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);

          ::org::hipparchus::CalculusFieldElement getLeftAbscissa() const;
          ::org::hipparchus::CalculusFieldElement getLeftValue() const;
          ::org::hipparchus::CalculusFieldElement getRightAbscissa() const;
          ::org::hipparchus::CalculusFieldElement getRightValue() const;
          ::org::hipparchus::CalculusFieldElement getSide(const ::org::hipparchus::analysis::solvers::AllowedSolution &) const;
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
        extern PyType_Def PY_TYPE_DEF(BracketedRealFieldUnivariateSolver$Interval);
        extern PyTypeObject *PY_TYPE(BracketedRealFieldUnivariateSolver$Interval);

        class t_BracketedRealFieldUnivariateSolver$Interval {
        public:
          PyObject_HEAD
          BracketedRealFieldUnivariateSolver$Interval object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_BracketedRealFieldUnivariateSolver$Interval *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const BracketedRealFieldUnivariateSolver$Interval&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const BracketedRealFieldUnivariateSolver$Interval&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
