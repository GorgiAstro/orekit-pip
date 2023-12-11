#ifndef org_hipparchus_distribution_discrete_PascalDistribution_H
#define org_hipparchus_distribution_discrete_PascalDistribution_H

#include "org/hipparchus/distribution/discrete/AbstractIntegerDistribution.h"

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
    namespace distribution {
      namespace discrete {

        class PascalDistribution : public ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution {
         public:
          enum {
            mid_init$_89aad365fb0ed8da,
            mid_cumulativeProbability_69cfb132c661aca4,
            mid_getNumberOfSuccesses_412668abc8d889e9,
            mid_getNumericalMean_557b8123390d8d0c,
            mid_getNumericalVariance_557b8123390d8d0c,
            mid_getProbabilityOfSuccess_557b8123390d8d0c,
            mid_getSupportLowerBound_412668abc8d889e9,
            mid_getSupportUpperBound_412668abc8d889e9,
            mid_isSupportConnected_89b302893bdbe1f1,
            mid_logProbability_69cfb132c661aca4,
            mid_probability_69cfb132c661aca4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PascalDistribution(jobject obj) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PascalDistribution(const PascalDistribution& obj) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(obj) {}

          PascalDistribution(jint, jdouble);

          jdouble cumulativeProbability(jint) const;
          jint getNumberOfSuccesses() const;
          jdouble getNumericalMean() const;
          jdouble getNumericalVariance() const;
          jdouble getProbabilityOfSuccess() const;
          jint getSupportLowerBound() const;
          jint getSupportUpperBound() const;
          jboolean isSupportConnected() const;
          jdouble logProbability(jint) const;
          jdouble probability(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(PascalDistribution);
        extern PyTypeObject *PY_TYPE(PascalDistribution);

        class t_PascalDistribution {
        public:
          PyObject_HEAD
          PascalDistribution object;
          static PyObject *wrap_Object(const PascalDistribution&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
