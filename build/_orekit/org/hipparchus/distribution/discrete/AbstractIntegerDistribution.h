#ifndef org_hipparchus_distribution_discrete_AbstractIntegerDistribution_H
#define org_hipparchus_distribution_discrete_AbstractIntegerDistribution_H

#include "java/lang/Object.h"

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
            mid_init$_7ae3461a92a43152,
            mid_inverseCumulativeProbability_12ebab281ee35c98,
            mid_logProbability_b772323fc98b7293,
            mid_probability_a84e4ee1da3f1ab8,
            mid_solveInverseCumulativeProbability_c23b9a4409f2aa55,
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
