#ifndef org_hipparchus_stat_fitting_EmpiricalDistribution_H
#define org_hipparchus_stat_fitting_EmpiricalDistribution_H

#include "org/hipparchus/distribution/continuous/AbstractRealDistribution.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathIllegalStateException;
      class MathIllegalArgumentException;
    }
    namespace random {
      class RandomGenerator;
    }
    namespace stat {
      namespace descriptive {
        class StatisticalSummary;
        class StreamingStatistics;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace net {
    class URL;
  }
  namespace io {
    class File;
    class IOException;
  }
  namespace lang {
    class Class;
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
            mid_init$_a1fa5dae97ea5ed2,
            mid_init$_44ed599e93e8a30c,
            mid_init$_f1c8159898f25396,
            mid_init$_bf920f5be5cd75f9,
            mid_cumulativeProbability_04fd0666b613d2ab,
            mid_density_04fd0666b613d2ab,
            mid_getBinCount_55546ef6a647f39b,
            mid_getBinStats_e62d3bb06d56d7e3,
            mid_getGeneratorUpperBounds_25e1757a36c4dde2,
            mid_getNextValue_b74f83833fdad017,
            mid_getNumericalMean_b74f83833fdad017,
            mid_getNumericalVariance_b74f83833fdad017,
            mid_getSampleStats_ce50f3086162cae8,
            mid_getSupportLowerBound_b74f83833fdad017,
            mid_getSupportUpperBound_b74f83833fdad017,
            mid_getUpperBounds_25e1757a36c4dde2,
            mid_inverseCumulativeProbability_04fd0666b613d2ab,
            mid_isLoaded_9ab94ac1dc23b105,
            mid_isSupportConnected_9ab94ac1dc23b105,
            mid_load_ab69da052b88f50c,
            mid_load_7e1d51614d5d6a43,
            mid_load_c76f3e82e2dd3be4,
            mid_reSeed_3d7dd2314a0dd456,
            mid_reseedRandomGenerator_3d7dd2314a0dd456,
            mid_getKernel_8d8c41a2965e1bf4,
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
