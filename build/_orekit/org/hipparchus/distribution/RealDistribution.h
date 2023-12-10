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
          mid_cumulativeProbability_0ba5fed9597b693e,
          mid_density_0ba5fed9597b693e,
          mid_getNumericalMean_456d9a2f64d6b28d,
          mid_getNumericalVariance_456d9a2f64d6b28d,
          mid_getSupportLowerBound_456d9a2f64d6b28d,
          mid_getSupportUpperBound_456d9a2f64d6b28d,
          mid_inverseCumulativeProbability_0ba5fed9597b693e,
          mid_isSupportConnected_e470b6d9e0d979db,
          mid_logDensity_0ba5fed9597b693e,
          mid_probability_824133ce4aec3505,
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
