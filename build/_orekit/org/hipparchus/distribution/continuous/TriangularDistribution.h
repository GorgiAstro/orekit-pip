#ifndef org_hipparchus_distribution_continuous_TriangularDistribution_H
#define org_hipparchus_distribution_continuous_TriangularDistribution_H

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

        class TriangularDistribution : public ::org::hipparchus::distribution::continuous::AbstractRealDistribution {
         public:
          enum {
            mid_init$_b5167f35b2521627,
            mid_cumulativeProbability_04fd0666b613d2ab,
            mid_density_04fd0666b613d2ab,
            mid_getMode_b74f83833fdad017,
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

          explicit TriangularDistribution(jobject obj) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TriangularDistribution(const TriangularDistribution& obj) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(obj) {}

          TriangularDistribution(jdouble, jdouble, jdouble);

          jdouble cumulativeProbability(jdouble) const;
          jdouble density(jdouble) const;
          jdouble getMode() const;
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
        extern PyType_Def PY_TYPE_DEF(TriangularDistribution);
        extern PyTypeObject *PY_TYPE(TriangularDistribution);

        class t_TriangularDistribution {
        public:
          PyObject_HEAD
          TriangularDistribution object;
          static PyObject *wrap_Object(const TriangularDistribution&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
