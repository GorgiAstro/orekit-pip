#ifndef org_hipparchus_distribution_discrete_ZipfDistribution_H
#define org_hipparchus_distribution_discrete_ZipfDistribution_H

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

        class ZipfDistribution : public ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution {
         public:
          enum {
            mid_init$_bb79ca80d85d0a66,
            mid_cumulativeProbability_46f85b53d9aedd96,
            mid_getExponent_dff5885c2c873297,
            mid_getNumberOfElements_570ce0828f81a2c1,
            mid_getNumericalMean_dff5885c2c873297,
            mid_getNumericalVariance_dff5885c2c873297,
            mid_getSupportLowerBound_570ce0828f81a2c1,
            mid_getSupportUpperBound_570ce0828f81a2c1,
            mid_isSupportConnected_b108b35ef48e27bd,
            mid_logProbability_46f85b53d9aedd96,
            mid_probability_46f85b53d9aedd96,
            mid_calculateNumericalMean_dff5885c2c873297,
            mid_calculateNumericalVariance_dff5885c2c873297,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ZipfDistribution(jobject obj) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ZipfDistribution(const ZipfDistribution& obj) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(obj) {}

          ZipfDistribution(jint, jdouble);

          jdouble cumulativeProbability(jint) const;
          jdouble getExponent() const;
          jint getNumberOfElements() const;
          jdouble getNumericalMean() const;
          jdouble getNumericalVariance() const;
          jint getSupportLowerBound() const;
          jint getSupportUpperBound() const;
          jboolean isSupportConnected() const;
          jdouble logProbability(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(ZipfDistribution);
        extern PyTypeObject *PY_TYPE(ZipfDistribution);

        class t_ZipfDistribution {
        public:
          PyObject_HEAD
          ZipfDistribution object;
          static PyObject *wrap_Object(const ZipfDistribution&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
