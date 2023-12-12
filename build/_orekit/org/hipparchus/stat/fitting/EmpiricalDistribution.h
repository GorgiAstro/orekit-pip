#ifndef org_hipparchus_stat_fitting_EmpiricalDistribution_H
#define org_hipparchus_stat_fitting_EmpiricalDistribution_H

#include "org/hipparchus/distribution/continuous/AbstractRealDistribution.h"

namespace java {
  namespace io {
    class IOException;
    class File;
  }
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
  namespace net {
    class URL;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
      class MathIllegalStateException;
    }
    namespace random {
      class RandomGenerator;
    }
    namespace stat {
      namespace descriptive {
        class StreamingStatistics;
        class StatisticalSummary;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace fitting {

        class EmpiricalDistribution : public ::org::hipparchus::distribution::continuous::AbstractRealDistribution {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_init$_a3da1a935cb37f7b,
            mid_init$_19e7f6e95a4dc08e,
            mid_init$_c6a557dcc2f97b72,
            mid_cumulativeProbability_7e960cd6eee376d8,
            mid_density_7e960cd6eee376d8,
            mid_getBinCount_412668abc8d889e9,
            mid_getBinStats_0d9551367f7ecdef,
            mid_getGeneratorUpperBounds_a53a7513ecedada2,
            mid_getNextValue_557b8123390d8d0c,
            mid_getNumericalMean_557b8123390d8d0c,
            mid_getNumericalVariance_557b8123390d8d0c,
            mid_getSampleStats_8f883f2497314ce2,
            mid_getSupportLowerBound_557b8123390d8d0c,
            mid_getSupportUpperBound_557b8123390d8d0c,
            mid_getUpperBounds_a53a7513ecedada2,
            mid_inverseCumulativeProbability_7e960cd6eee376d8,
            mid_isLoaded_89b302893bdbe1f1,
            mid_isSupportConnected_89b302893bdbe1f1,
            mid_load_cc18240f4a737f14,
            mid_load_5d6bcca91ae998ee,
            mid_load_1d2bf2ec349f3959,
            mid_reSeed_3cd6a6b354c6aa22,
            mid_reseedRandomGenerator_3cd6a6b354c6aa22,
            mid_getKernel_20f58c1005243de6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EmpiricalDistribution(jobject obj) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EmpiricalDistribution(const EmpiricalDistribution& obj) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(obj) {}

          static jint DEFAULT_BIN_COUNT;

          EmpiricalDistribution();
          EmpiricalDistribution(jint);
          EmpiricalDistribution(const ::org::hipparchus::random::RandomGenerator &);
          EmpiricalDistribution(jint, const ::org::hipparchus::random::RandomGenerator &);

          jdouble cumulativeProbability(jdouble) const;
          jdouble density(jdouble) const;
          jint getBinCount() const;
          ::java::util::List getBinStats() const;
          JArray< jdouble > getGeneratorUpperBounds() const;
          jdouble getNextValue() const;
          jdouble getNumericalMean() const;
          jdouble getNumericalVariance() const;
          ::org::hipparchus::stat::descriptive::StatisticalSummary getSampleStats() const;
          jdouble getSupportLowerBound() const;
          jdouble getSupportUpperBound() const;
          JArray< jdouble > getUpperBounds() const;
          jdouble inverseCumulativeProbability(jdouble) const;
          jboolean isLoaded() const;
          jboolean isSupportConnected() const;
          void load(const JArray< jdouble > &) const;
          void load(const ::java::io::File &) const;
          void load(const ::java::net::URL &) const;
          void reSeed(jlong) const;
          void reseedRandomGenerator(jlong) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace fitting {
        extern PyType_Def PY_TYPE_DEF(EmpiricalDistribution);
        extern PyTypeObject *PY_TYPE(EmpiricalDistribution);

        class t_EmpiricalDistribution {
        public:
          PyObject_HEAD
          EmpiricalDistribution object;
          static PyObject *wrap_Object(const EmpiricalDistribution&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
