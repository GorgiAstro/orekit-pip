#ifndef org_hipparchus_distribution_discrete_EnumeratedIntegerDistribution_H
#define org_hipparchus_distribution_discrete_EnumeratedIntegerDistribution_H

#include "org/hipparchus/distribution/discrete/AbstractIntegerDistribution.h"

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
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        class EnumeratedIntegerDistribution : public ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution {
         public:
          enum {
            mid_init$_86a2769cb881d388,
            mid_init$_37d92a29080bb9ce,
            mid_cumulativeProbability_2afcbc21f4e57ab2,
            mid_getNumericalMean_b74f83833fdad017,
            mid_getNumericalVariance_b74f83833fdad017,
            mid_getPmf_e62d3bb06d56d7e3,
            mid_getSupportLowerBound_55546ef6a647f39b,
            mid_getSupportUpperBound_55546ef6a647f39b,
            mid_isSupportConnected_9ab94ac1dc23b105,
            mid_probability_2afcbc21f4e57ab2,
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
