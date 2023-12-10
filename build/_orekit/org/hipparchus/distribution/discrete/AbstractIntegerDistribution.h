#ifndef org_hipparchus_distribution_discrete_AbstractIntegerDistribution_H
#define org_hipparchus_distribution_discrete_AbstractIntegerDistribution_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      class IntegerDistribution;
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        class AbstractIntegerDistribution : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0fa09c18fee449d5,
            mid_inverseCumulativeProbability_4508852644846c83,
            mid_logProbability_46f85b53d9aedd96,
            mid_probability_dbbe5f05149dbf73,
            mid_solveInverseCumulativeProbability_5f5c98d9d6068625,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractIntegerDistribution(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractIntegerDistribution(const AbstractIntegerDistribution& obj) : ::java::lang::Object(obj) {}

          AbstractIntegerDistribution();

          jint inverseCumulativeProbability(jdouble) const;
          jdouble logProbability(jint) const;
          jdouble probability(jint, jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {
        extern PyType_Def PY_TYPE_DEF(AbstractIntegerDistribution);
        extern PyTypeObject *PY_TYPE(AbstractIntegerDistribution);

        class t_AbstractIntegerDistribution {
        public:
          PyObject_HEAD
          AbstractIntegerDistribution object;
          static PyObject *wrap_Object(const AbstractIntegerDistribution&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
