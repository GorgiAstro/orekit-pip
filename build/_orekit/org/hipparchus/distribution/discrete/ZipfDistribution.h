#ifndef org_hipparchus_distribution_discrete_ZipfDistribution_H
#define org_hipparchus_distribution_discrete_ZipfDistribution_H

#include "org/hipparchus/distribution/discrete/AbstractIntegerDistribution.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
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
    namespace distribution {
      namespace discrete {

        class ZipfDistribution : public ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution {
         public:
          enum {
            mid_init$_987a5fb872043b12,
            mid_cumulativeProbability_b772323fc98b7293,
            mid_getExponent_456d9a2f64d6b28d,
            mid_getNumberOfElements_f2f64475e4580546,
            mid_getNumericalMean_456d9a2f64d6b28d,
            mid_getNumericalVariance_456d9a2f64d6b28d,
            mid_getSupportLowerBound_f2f64475e4580546,
            mid_getSupportUpperBound_f2f64475e4580546,
            mid_isSupportConnected_e470b6d9e0d979db,
            mid_logProbability_b772323fc98b7293,
            mid_probability_b772323fc98b7293,
            mid_calculateNumericalMean_456d9a2f64d6b28d,
            mid_calculateNumericalVariance_456d9a2f64d6b28d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ZipfDistribution(jobject obj) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ZipfDistribution(const ZipfDistribution& obj) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(obj) {}

          ZipfDistribution(jint, jdouble);

          jdouble cumulativeProbability(jint) const;
          jdouble getExponent() const;
          jint getNumberOfElements() const;
          jdouble getNumericalMean() const;
          jdouble getNumericalVariance() const;
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
        extern PyType_Def PY_TYPE_DEF(ZipfDistribution);
        extern PyTypeObject *PY_TYPE(ZipfDistribution);

        class t_ZipfDistribution {
        public:
          PyObject_HEAD
          ZipfDistribution object;
          static PyObject *wrap_Object(const ZipfDistribution&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
