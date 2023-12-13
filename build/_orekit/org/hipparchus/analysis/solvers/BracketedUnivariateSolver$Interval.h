#ifndef org_hipparchus_analysis_solvers_BracketedUnivariateSolver$Interval_H
#define org_hipparchus_analysis_solvers_BracketedUnivariateSolver$Interval_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {
        class AllowedSolution;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        class BracketedUnivariateSolver$Interval : public ::java::lang::Object {
         public:
          enum {
            mid_init$_49f4b5153d696ea5,
            mid_getLeftAbscissa_b74f83833fdad017,
            mid_getLeftValue_b74f83833fdad017,
            mid_getRightAbscissa_b74f83833fdad017,
            mid_getRightValue_b74f83833fdad017,
            mid_getSide_76453ee02da91cfc,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BracketedUnivariateSolver$Interval(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BracketedUnivariateSolver$Interval(const BracketedUnivariateSolver$Interval& obj) : ::java::lang::Object(obj) {}

          BracketedUnivariateSolver$Interval(jdouble, jdouble, jdouble, jdouble);

          jdouble getLeftAbscissa() const;
          jdouble getLeftValue() const;
          jdouble getRightAbscissa() const;
          jdouble getRightValue() const;
          jdouble getSide(const ::org::hipparchus::analysis::solvers::AllowedSolution &) const;
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
        extern PyType_Def PY_TYPE_DEF(BracketedUnivariateSolver$Interval);
        extern PyTypeObject *PY_TYPE(BracketedUnivariateSolver$Interval);

        class t_BracketedUnivariateSolver$Interval {
        public:
          PyObject_HEAD
          BracketedUnivariateSolver$Interval object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_BracketedUnivariateSolver$Interval *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const BracketedUnivariateSolver$Interval&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const BracketedUnivariateSolver$Interval&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
