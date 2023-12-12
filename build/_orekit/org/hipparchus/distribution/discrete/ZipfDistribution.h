#ifndef org_hipparchus_distribution_discrete_ZipfDistribution_H
#define org_hipparchus_distribution_discrete_ZipfDistribution_H

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

        class ZipfDistribution : public ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution {
         public:
          enum {
            mid_init$_89aad365fb0ed8da,
            mid_cumulativeProbability_69cfb132c661aca4,
            mid_getExponent_557b8123390d8d0c,
            mid_getNumberOfElements_412668abc8d889e9,
            mid_getNumericalMean_557b8123390d8d0c,
            mid_getNumericalVariance_557b8123390d8d0c,
            mid_getSupportLowerBound_412668abc8d889e9,
            mid_getSupportUpperBound_412668abc8d889e9,
            mid_isSupportConnected_89b302893bdbe1f1,
            mid_logProbability_69cfb132c661aca4,
            mid_probability_69cfb132c661aca4,
            mid_calculateNumericalMean_557b8123390d8d0c,
            mid_calculateNumericalVariance_557b8123390d8d0c,
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
