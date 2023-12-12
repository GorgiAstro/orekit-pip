#ifndef org_hipparchus_distribution_continuous_LogNormalDistribution_H
#define org_hipparchus_distribution_continuous_LogNormalDistribution_H

#include "org/hipparchus/distribution/continuous/AbstractRealDistribution.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
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

        class LogNormalDistribution : public ::org::hipparchus::distribution::continuous::AbstractRealDistribution {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_init$_ab23f4ae0fb33968,
            mid_init$_87096e3fd8086100,
            mid_cumulativeProbability_7e960cd6eee376d8,
            mid_density_7e960cd6eee376d8,
            mid_getLocation_557b8123390d8d0c,
            mid_getNumericalMean_557b8123390d8d0c,
            mid_getNumericalVariance_557b8123390d8d0c,
            mid_getShape_557b8123390d8d0c,
            mid_getSupportLowerBound_557b8123390d8d0c,
            mid_getSupportUpperBound_557b8123390d8d0c,
            mid_isSupportConnected_89b302893bdbe1f1,
            mid_logDensity_7e960cd6eee376d8,
            mid_probability_2268d18be49a6087,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LogNormalDistribution(jobject obj) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LogNormalDistribution(const LogNormalDistribution& obj) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(obj) {}

          LogNormalDistribution();
          LogNormalDistribution(jdouble, jdouble);
          LogNormalDistribution(jdouble, jdouble, jdouble);

          jdouble cumulativeProbability(jdouble) const;
          jdouble density(jdouble) const;
          jdouble getLocation() const;
          jdouble getNumericalMean() const;
          jdouble getNumericalVariance() const;
          jdouble getShape() const;
          jdouble getSupportLowerBound() const;
          jdouble getSupportUpperBound() const;
          jboolean isSupportConnected() const;
          jdouble logDensity(jdouble) const;
          jdouble probability(jdouble, jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(LogNormalDistribution);
        extern PyTypeObject *PY_TYPE(LogNormalDistribution);

        class t_LogNormalDistribution {
        public:
          PyObject_HEAD
          LogNormalDistribution object;
          static PyObject *wrap_Object(const LogNormalDistribution&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
