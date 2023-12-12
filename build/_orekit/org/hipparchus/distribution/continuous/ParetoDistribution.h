#ifndef org_hipparchus_distribution_continuous_ParetoDistribution_H
#define org_hipparchus_distribution_continuous_ParetoDistribution_H

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

        class ParetoDistribution : public ::org::hipparchus::distribution::continuous::AbstractRealDistribution {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_init$_ab23f4ae0fb33968,
            mid_init$_87096e3fd8086100,
            mid_cumulativeProbability_7e960cd6eee376d8,
            mid_density_7e960cd6eee376d8,
            mid_getNumericalMean_557b8123390d8d0c,
            mid_getNumericalVariance_557b8123390d8d0c,
            mid_getScale_557b8123390d8d0c,
            mid_getShape_557b8123390d8d0c,
            mid_getSupportLowerBound_557b8123390d8d0c,
            mid_getSupportUpperBound_557b8123390d8d0c,
            mid_isSupportConnected_89b302893bdbe1f1,
            mid_logDensity_7e960cd6eee376d8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ParetoDistribution(jobject obj) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ParetoDistribution(const ParetoDistribution& obj) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(obj) {}

          ParetoDistribution();
          ParetoDistribution(jdouble, jdouble);
          ParetoDistribution(jdouble, jdouble, jdouble);

          jdouble cumulativeProbability(jdouble) const;
          jdouble density(jdouble) const;
          jdouble getNumericalMean() const;
          jdouble getNumericalVariance() const;
          jdouble getScale() const;
          jdouble getShape() const;
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
        extern PyType_Def PY_TYPE_DEF(ParetoDistribution);
        extern PyTypeObject *PY_TYPE(ParetoDistribution);

        class t_ParetoDistribution {
        public:
          PyObject_HEAD
          ParetoDistribution object;
          static PyObject *wrap_Object(const ParetoDistribution&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
