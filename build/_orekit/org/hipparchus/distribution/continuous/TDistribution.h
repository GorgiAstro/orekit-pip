#ifndef org_hipparchus_distribution_continuous_TDistribution_H
#define org_hipparchus_distribution_continuous_TDistribution_H

#include "org/hipparchus/distribution/continuous/AbstractRealDistribution.h"

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
      namespace continuous {

        class TDistribution : public ::org::hipparchus::distribution::continuous::AbstractRealDistribution {
         public:
          enum {
            mid_init$_8ba9fe7a847cecad,
            mid_init$_369b4c97255d5afa,
            mid_cumulativeProbability_04fd0666b613d2ab,
            mid_density_04fd0666b613d2ab,
            mid_getDegreesOfFreedom_b74f83833fdad017,
            mid_getNumericalMean_b74f83833fdad017,
            mid_getNumericalVariance_b74f83833fdad017,
            mid_getSupportLowerBound_b74f83833fdad017,
            mid_getSupportUpperBound_b74f83833fdad017,
            mid_isSupportConnected_9ab94ac1dc23b105,
            mid_logDensity_04fd0666b613d2ab,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TDistribution(jobject obj) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TDistribution(const TDistribution& obj) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(obj) {}

          TDistribution(jdouble);
          TDistribution(jdouble, jdouble);

          jdouble cumulativeProbability(jdouble) const;
          jdouble density(jdouble) const;
          jdouble getDegreesOfFreedom() const;
          jdouble getNumericalMean() const;
          jdouble getNumericalVariance() const;
          jdouble getSupportLowerBound() const;
          jdouble getSupportUpperBound() const;
          jboolean isSupportConnected() const;
          jdouble logDensity(jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(TDistribution);
        extern PyTypeObject *PY_TYPE(TDistribution);

        class t_TDistribution {
        public:
          PyObject_HEAD
          TDistribution object;
          static PyObject *wrap_Object(const TDistribution&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
