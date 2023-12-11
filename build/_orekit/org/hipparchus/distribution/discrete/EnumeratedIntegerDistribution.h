#ifndef org_hipparchus_distribution_discrete_EnumeratedIntegerDistribution_H
#define org_hipparchus_distribution_discrete_EnumeratedIntegerDistribution_H

#include "org/hipparchus/distribution/discrete/AbstractIntegerDistribution.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Integer;
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
      namespace discrete {

        class EnumeratedIntegerDistribution : public ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution {
         public:
          enum {
            mid_init$_ec63cb8a58ef5a54,
            mid_init$_dfab3c2e0858359f,
            mid_cumulativeProbability_69cfb132c661aca4,
            mid_getNumericalMean_557b8123390d8d0c,
            mid_getNumericalVariance_557b8123390d8d0c,
            mid_getPmf_0d9551367f7ecdef,
            mid_getSupportLowerBound_412668abc8d889e9,
            mid_getSupportUpperBound_412668abc8d889e9,
            mid_isSupportConnected_89b302893bdbe1f1,
            mid_probability_69cfb132c661aca4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EnumeratedIntegerDistribution(jobject obj) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EnumeratedIntegerDistribution(const EnumeratedIntegerDistribution& obj) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(obj) {}

          EnumeratedIntegerDistribution(const JArray< jint > &);
          EnumeratedIntegerDistribution(const JArray< jint > &, const JArray< jdouble > &);

          jdouble cumulativeProbability(jint) const;
          jdouble getNumericalMean() const;
          jdouble getNumericalVariance() const;
          ::java::util::List getPmf() const;
          jint getSupportLowerBound() const;
          jint getSupportUpperBound() const;
          jboolean isSupportConnected() const;
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
        extern PyType_Def PY_TYPE_DEF(EnumeratedIntegerDistribution);
        extern PyTypeObject *PY_TYPE(EnumeratedIntegerDistribution);

        class t_EnumeratedIntegerDistribution {
        public:
          PyObject_HEAD
          EnumeratedIntegerDistribution object;
          static PyObject *wrap_Object(const EnumeratedIntegerDistribution&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
