#ifndef org_hipparchus_distribution_discrete_UniformIntegerDistribution_H
#define org_hipparchus_distribution_discrete_UniformIntegerDistribution_H

#include "org/hipparchus/distribution/discrete/AbstractIntegerDistribution.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        class UniformIntegerDistribution : public ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution {
         public:
          enum {
            mid_init$_3313c75e3e16c428,
            mid_cumulativeProbability_2afcbc21f4e57ab2,
            mid_getNumericalMean_b74f83833fdad017,
            mid_getNumericalVariance_b74f83833fdad017,
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

          explicit UniformIntegerDistribution(jobject obj) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UniformIntegerDistribution(const UniformIntegerDistribution& obj) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(obj) {}

          UniformIntegerDistribution(jint, jint);

          jdouble cumulativeProbability(jint) const;
          jdouble getNumericalMean() const;
          jdouble getNumericalVariance() const;
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
        extern PyType_Def PY_TYPE_DEF(UniformIntegerDistribution);
        extern PyTypeObject *PY_TYPE(UniformIntegerDistribution);

        class t_UniformIntegerDistribution {
        public:
          PyObject_HEAD
          UniformIntegerDistribution object;
          static PyObject *wrap_Object(const UniformIntegerDistribution&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
