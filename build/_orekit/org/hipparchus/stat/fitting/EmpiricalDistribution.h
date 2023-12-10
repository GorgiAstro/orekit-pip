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
      class MathIllegalStateException;
      class NullArgumentException;
      class MathIllegalArgumentException;
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
            mid_init$_0fa09c18fee449d5,
            mid_init$_99803b0791f320ff,
            mid_init$_a351c1fd6920cdee,
            mid_init$_2b71fcb2111892eb,
            mid_cumulativeProbability_dcbc7ce2902fa136,
            mid_density_dcbc7ce2902fa136,
            mid_getBinCount_570ce0828f81a2c1,
            mid_getBinStats_2afa36052df4765d,
            mid_getGeneratorUpperBounds_60c7040667a7dc5c,
            mid_getNextValue_dff5885c2c873297,
            mid_getNumericalMean_dff5885c2c873297,
            mid_getNumericalVariance_dff5885c2c873297,
            mid_getSampleStats_5a169194284d157f,
            mid_getSupportLowerBound_dff5885c2c873297,
            mid_getSupportUpperBound_dff5885c2c873297,
            mid_getUpperBounds_60c7040667a7dc5c,
            mid_inverseCumulativeProbability_dcbc7ce2902fa136,
            mid_isLoaded_b108b35ef48e27bd,
            mid_isSupportConnected_b108b35ef48e27bd,
            mid_load_fa9d415d19f69361,
            mid_load_0613af62f2ba5dba,
            mid_load_fe56d648976a8dcb,
            mid_reSeed_3a8e7649f31fdb20,
            mid_reseedRandomGenerator_3a8e7649f31fdb20,
            mid_getKernel_3100b8ccdc6b60fb,
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
