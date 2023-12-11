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
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace util {
      class Pair;
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
            mid_init$_cc18240f4a737f14,
            mid_init$_ab4840ba016ef1da,
            mid_cumulativeProbability_7e960cd6eee376d8,
            mid_density_7e960cd6eee376d8,
            mid_getNumericalMean_557b8123390d8d0c,
            mid_getNumericalVariance_557b8123390d8d0c,
            mid_getPmf_0d9551367f7ecdef,
            mid_getSupportLowerBound_557b8123390d8d0c,
            mid_getSupportUpperBound_557b8123390d8d0c,
            mid_inverseCumulativeProbability_7e960cd6eee376d8,
            mid_isSupportConnected_89b302893bdbe1f1,
            mid_probability_7e960cd6eee376d8,
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
