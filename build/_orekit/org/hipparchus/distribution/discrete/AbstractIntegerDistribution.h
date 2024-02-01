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
            mid_init$_ff7cb6c242604316,
            mid_inverseCumulativeProbability_9e72cb20adb363fb,
            mid_logProbability_ce4c02d583456bc9,
            mid_probability_6d920aab27f0a3d2,
            mid_solveInverseCumulativeProbability_bf59914e93956019,
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
