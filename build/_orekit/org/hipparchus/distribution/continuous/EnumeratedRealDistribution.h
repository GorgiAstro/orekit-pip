#ifndef org_hipparchus_distribution_continuous_EnumeratedRealDistribution_H
#define org_hipparchus_distribution_continuous_EnumeratedRealDistribution_H

#include "org/hipparchus/distribution/continuous/AbstractRealDistribution.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Double;
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace util {
      class Pair;
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        class EnumeratedRealDistribution : public ::org::hipparchus::distribution::continuous::AbstractRealDistribution {
         public:
          enum {
            mid_init$_fa9d415d19f69361,
            mid_init$_e1f4b15468f5564a,
            mid_cumulativeProbability_dcbc7ce2902fa136,
            mid_density_dcbc7ce2902fa136,
            mid_getNumericalMean_dff5885c2c873297,
            mid_getNumericalVariance_dff5885c2c873297,
            mid_getPmf_2afa36052df4765d,
            mid_getSupportLowerBound_dff5885c2c873297,
            mid_getSupportUpperBound_dff5885c2c873297,
            mid_inverseCumulativeProbability_dcbc7ce2902fa136,
            mid_isSupportConnected_b108b35ef48e27bd,
            mid_probability_dcbc7ce2902fa136,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EnumeratedRealDistribution(jobject obj) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EnumeratedRealDistribution(const EnumeratedRealDistribution& obj) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(obj) {}

          EnumeratedRealDistribution(const JArray< jdouble > &);
          EnumeratedRealDistribution(const JArray< jdouble > &, const JArray< jdouble > &);

          jdouble cumulativeProbability(jdouble) const;
          jdouble density(jdouble) const;
          jdouble getNumericalMean() const;
          jdouble getNumericalVariance() const;
          ::java::util::List getPmf() const;
          jdouble getSupportLowerBound() const;
          jdouble getSupportUpperBound() const;
          jdouble inverseCumulativeProbability(jdouble) const;
          jboolean isSupportConnected() const;
          jdouble probability(jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(EnumeratedRealDistribution);
        extern PyTypeObject *PY_TYPE(EnumeratedRealDistribution);

        class t_EnumeratedRealDistribution {
        public:
          PyObject_HEAD
          EnumeratedRealDistribution object;
          static PyObject *wrap_Object(const EnumeratedRealDistribution&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
