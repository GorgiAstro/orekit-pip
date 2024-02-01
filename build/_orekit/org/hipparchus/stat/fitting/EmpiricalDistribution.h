#ifndef org_hipparchus_stat_fitting_EmpiricalDistribution_H
#define org_hipparchus_stat_fitting_EmpiricalDistribution_H

#include "org/hipparchus/distribution/continuous/AbstractRealDistribution.h"

namespace java {
  namespace util {
    class List;
  }
  namespace io {
    class IOException;
    class File;
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
      class MathIllegalStateException;
      class NullArgumentException;
    }
    namespace stat {
      namespace descriptive {
        class StatisticalSummary;
        class StreamingStatistics;
      }
    }
    namespace random {
      class RandomGenerator;
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
            mid_init$_ff7cb6c242604316,
            mid_init$_8fd427ab23829bf5,
            mid_init$_e24b125c6ff6cc8c,
            mid_init$_1c7be4615a4e46b1,
            mid_cumulativeProbability_bf28ed64d6e8576b,
            mid_density_bf28ed64d6e8576b,
            mid_getBinCount_d6ab429752e7c267,
            mid_getBinStats_d751c1a57012b438,
            mid_getGeneratorUpperBounds_be783177b060994b,
            mid_getNextValue_9981f74b2d109da6,
            mid_getNumericalMean_9981f74b2d109da6,
            mid_getNumericalVariance_9981f74b2d109da6,
            mid_getSampleStats_ce882cfbdfe8020d,
            mid_getSupportLowerBound_9981f74b2d109da6,
            mid_getSupportUpperBound_9981f74b2d109da6,
            mid_getUpperBounds_be783177b060994b,
            mid_inverseCumulativeProbability_bf28ed64d6e8576b,
            mid_isLoaded_eee3de00fe971136,
            mid_isSupportConnected_eee3de00fe971136,
            mid_load_a71c45509eaf92d1,
            mid_load_44d81342f3d8a712,
            mid_load_9a9c801b84dad3ae,
            mid_reSeed_f5bbab7e97879358,
            mid_reseedRandomGenerator_f5bbab7e97879358,
            mid_getKernel_cfe928edfab4d015,
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
