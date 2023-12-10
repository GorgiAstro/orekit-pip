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
          mid_cumulativeProbability_dcbc7ce2902fa136,
          mid_density_dcbc7ce2902fa136,
          mid_getNumericalMean_dff5885c2c873297,
          mid_getNumericalVariance_dff5885c2c873297,
          mid_getSupportLowerBound_dff5885c2c873297,
          mid_getSupportUpperBound_dff5885c2c873297,
          mid_inverseCumulativeProbability_dcbc7ce2902fa136,
          mid_isSupportConnected_b108b35ef48e27bd,
          mid_logDensity_dcbc7ce2902fa136,
          mid_probability_86ffecc08a63eff0,
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
