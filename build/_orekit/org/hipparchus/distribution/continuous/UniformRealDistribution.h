#ifndef org_hipparchus_distribution_continuous_UniformRealDistribution_H
#define org_hipparchus_distribution_continuous_UniformRealDistribution_H

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

        class UniformRealDistribution : public ::org::hipparchus::distribution::continuous::AbstractRealDistribution {
         public:
          enum {
            mid_init$_a1fa5dae97ea5ed2,
            mid_init$_369b4c97255d5afa,
            mid_cumulativeProbability_04fd0666b613d2ab,
            mid_density_04fd0666b613d2ab,
            mid_getNumericalMean_b74f83833fdad017,
            mid_getNumericalVariance_b74f83833fdad017,
            mid_getSupportLowerBound_b74f83833fdad017,
            mid_getSupportUpperBound_b74f83833fdad017,
            mid_inverseCumulativeProbability_04fd0666b613d2ab,
            mid_isSupportConnected_9ab94ac1dc23b105,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UniformRealDistribution(jobject obj) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UniformRealDistribution(const UniformRealDistribution& obj) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(obj) {}

          UniformRealDistribution();
          UniformRealDistribution(jdouble, jdouble);

          jdouble cumulativeProbability(jdouble) const;
          jdouble density(jdouble) const;
          jdouble getNumericalMean() const;
          jdouble getNumericalVariance() const;
          jdouble getSupportLowerBound() const;
          jdouble getSupportUpperBound() const;
          jdouble inverseCumulativeProbability(jdouble) const;
          jboolean isSupportConnected() const;
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
        extern PyType_Def PY_TYPE_DEF(UniformRealDistribution);
        extern PyTypeObject *PY_TYPE(UniformRealDistribution);

        class t_UniformRealDistribution {
        public:
          PyObject_HEAD
          UniformRealDistribution object;
          static PyObject *wrap_Object(const UniformRealDistribution&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
