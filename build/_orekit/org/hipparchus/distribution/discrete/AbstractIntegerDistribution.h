#ifndef org_hipparchus_distribution_discrete_AbstractIntegerDistribution_H
#define org_hipparchus_distribution_discrete_AbstractIntegerDistribution_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace distribution {
      class IntegerDistribution;
    }
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
            mid_init$_0640e6acf969ed28,
            mid_inverseCumulativeProbability_abbeb9db7144ca23,
            mid_logProbability_69cfb132c661aca4,
            mid_probability_21b81d54c06b64b0,
            mid_solveInverseCumulativeProbability_fcd4fd665c5a481d,
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
