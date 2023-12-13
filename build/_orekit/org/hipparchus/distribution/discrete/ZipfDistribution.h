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
            mid_init$_d5322b8b512aeb26,
            mid_cumulativeProbability_2afcbc21f4e57ab2,
            mid_getExponent_b74f83833fdad017,
            mid_getNumberOfElements_55546ef6a647f39b,
            mid_getNumericalMean_b74f83833fdad017,
            mid_getNumericalVariance_b74f83833fdad017,
            mid_getSupportLowerBound_55546ef6a647f39b,
            mid_getSupportUpperBound_55546ef6a647f39b,
            mid_isSupportConnected_9ab94ac1dc23b105,
            mid_logProbability_2afcbc21f4e57ab2,
            mid_probability_2afcbc21f4e57ab2,
            mid_calculateNumericalMean_b74f83833fdad017,
            mid_calculateNumericalVariance_b74f83833fdad017,
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
