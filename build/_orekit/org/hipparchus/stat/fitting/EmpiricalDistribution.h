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
    namespace random {
      class RandomGenerator;
    }
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
      class NullArgumentException;
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
            mid_init$_7ae3461a92a43152,
            mid_init$_0a2a1ac2721c0336,
            mid_init$_bb31e8cbfaf41e63,
            mid_init$_3838ea28c063a110,
            mid_cumulativeProbability_0ba5fed9597b693e,
            mid_density_0ba5fed9597b693e,
            mid_getBinCount_f2f64475e4580546,
            mid_getBinStats_a6156df500549a58,
            mid_getGeneratorUpperBounds_7cdc325af0834901,
            mid_getNextValue_456d9a2f64d6b28d,
            mid_getNumericalMean_456d9a2f64d6b28d,
            mid_getNumericalVariance_456d9a2f64d6b28d,
            mid_getSampleStats_47e97143cdc53a1c,
            mid_getSupportLowerBound_456d9a2f64d6b28d,
            mid_getSupportUpperBound_456d9a2f64d6b28d,
            mid_getUpperBounds_7cdc325af0834901,
            mid_inverseCumulativeProbability_0ba5fed9597b693e,
            mid_isLoaded_e470b6d9e0d979db,
            mid_isSupportConnected_e470b6d9e0d979db,
            mid_load_ebc26dcaf4761286,
            mid_load_46e66c77c82c9a6b,
            mid_load_466101f788d70aca,
            mid_reSeed_fefb08975c10f0a1,
            mid_reseedRandomGenerator_fefb08975c10f0a1,
            mid_getKernel_f22f19290070a5b3,
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
