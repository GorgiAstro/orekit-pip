#ifndef org_hipparchus_distribution_RealDistribution_H
#define org_hipparchus_distribution_RealDistribution_H

#include "java/lang/Object.h"

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

      class RealDistribution : public ::java::lang::Object {
       public:
        enum {
          mid_cumulativeProbability_bf28ed64d6e8576b,
          mid_density_bf28ed64d6e8576b,
          mid_getNumericalMean_9981f74b2d109da6,
          mid_getNumericalVariance_9981f74b2d109da6,
          mid_getSupportLowerBound_9981f74b2d109da6,
          mid_getSupportUpperBound_9981f74b2d109da6,
          mid_inverseCumulativeProbability_bf28ed64d6e8576b,
          mid_isSupportConnected_eee3de00fe971136,
          mid_logDensity_bf28ed64d6e8576b,
          mid_probability_82f92590f4247da1,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit RealDistribution(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        RealDistribution(const RealDistribution& obj) : ::java::lang::Object(obj) {}

        jdouble cumulativeProbability(jdouble) const;
        jdouble density(jdouble) const;
        jdouble getNumericalMean() const;
        jdouble getNumericalVariance() const;
        jdouble getSupportLowerBound() const;
        jdouble getSupportUpperBound() const;
        jdouble inverseCumulativeProbability(jdouble) const;
        jboolean isSupportConnected() const;
        jdouble logDensity(jdouble) const;
        jdouble probability(jdouble, jdouble) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace distribution {
      extern PyType_Def PY_TYPE_DEF(RealDistribution);
      extern PyTypeObject *PY_TYPE(RealDistribution);

      class t_RealDistribution {
      public:
        PyObject_HEAD
        RealDistribution object;
        static PyObject *wrap_Object(const RealDistribution&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
