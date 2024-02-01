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
            mid_init$_a71c45509eaf92d1,
            mid_init$_64100e41ba74de8f,
            mid_cumulativeProbability_bf28ed64d6e8576b,
            mid_density_bf28ed64d6e8576b,
            mid_getNumericalMean_9981f74b2d109da6,
            mid_getNumericalVariance_9981f74b2d109da6,
            mid_getPmf_d751c1a57012b438,
            mid_getSupportLowerBound_9981f74b2d109da6,
            mid_getSupportUpperBound_9981f74b2d109da6,
            mid_inverseCumulativeProbability_bf28ed64d6e8576b,
            mid_isSupportConnected_eee3de00fe971136,
            mid_probability_bf28ed64d6e8576b,
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
