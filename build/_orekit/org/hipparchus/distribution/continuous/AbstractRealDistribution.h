#ifndef org_hipparchus_distribution_continuous_AbstractRealDistribution_H
#define org_hipparchus_distribution_continuous_AbstractRealDistribution_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      class RealDistribution;
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
      namespace continuous {

        class AbstractRealDistribution : public ::java::lang::Object {
         public:
          enum {
            mid_inverseCumulativeProbability_bf28ed64d6e8576b,
            mid_logDensity_bf28ed64d6e8576b,
            mid_probability_82f92590f4247da1,
            mid_getSolverAbsoluteAccuracy_9981f74b2d109da6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractRealDistribution(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractRealDistribution(const AbstractRealDistribution& obj) : ::java::lang::Object(obj) {}

          jdouble inverseCumulativeProbability(jdouble) const;
          jdouble logDensity(jdouble) const;
          jdouble probability(jdouble, jdouble) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {
        extern PyType_Def PY_TYPE_DEF(AbstractRealDistribution);
        extern PyTypeObject *PY_TYPE(AbstractRealDistribution);

        class t_AbstractRealDistribution {
        public:
          PyObject_HEAD
          AbstractRealDistribution object;
          static PyObject *wrap_Object(const AbstractRealDistribution&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
