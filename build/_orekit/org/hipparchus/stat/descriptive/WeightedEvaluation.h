#ifndef org_hipparchus_stat_descriptive_WeightedEvaluation_H
#define org_hipparchus_stat_descriptive_WeightedEvaluation_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        class WeightedEvaluation : public ::java::lang::Object {
         public:
          enum {
            mid_evaluate_628a76297e217f13,
            mid_evaluate_579f1672894f464a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit WeightedEvaluation(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          WeightedEvaluation(const WeightedEvaluation& obj) : ::java::lang::Object(obj) {}

          jdouble evaluate(const JArray< jdouble > &, const JArray< jdouble > &) const;
          jdouble evaluate(const JArray< jdouble > &, const JArray< jdouble > &, jint, jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        extern PyType_Def PY_TYPE_DEF(WeightedEvaluation);
        extern PyTypeObject *PY_TYPE(WeightedEvaluation);

        class t_WeightedEvaluation {
        public:
          PyObject_HEAD
          WeightedEvaluation object;
          static PyObject *wrap_Object(const WeightedEvaluation&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
