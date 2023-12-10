#ifndef org_hipparchus_distribution_IntegerDistribution_H
#define org_hipparchus_distribution_IntegerDistribution_H

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

      class IntegerDistribution : public ::java::lang::Object {
       public:
        enum {
          mid_cumulativeProbability_b772323fc98b7293,
          mid_getNumericalMean_456d9a2f64d6b28d,
          mid_getNumericalVariance_456d9a2f64d6b28d,
          mid_getSupportLowerBound_f2f64475e4580546,
          mid_getSupportUpperBound_f2f64475e4580546,
          mid_inverseCumulativeProbability_12ebab281ee35c98,
          mid_isSupportConnected_e470b6d9e0d979db,
          mid_logProbability_b772323fc98b7293,
          mid_probability_b772323fc98b7293,
          mid_probability_a84e4ee1da3f1ab8,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit IntegerDistribution(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        IntegerDistribution(const IntegerDistribution& obj) : ::java::lang::Object(obj) {}

        jdouble cumulativeProbability(jint) const;
        jdouble getNumericalMean() const;
        jdouble getNumericalVariance() const;
        jint getSupportLowerBound() const;
        jint getSupportUpperBound() const;
        jint inverseCumulativeProbability(jdouble) const;
        jboolean isSupportConnected() const;
        jdouble logProbability(jint) const;
        jdouble probability(jint) const;
        jdouble probability(jint, jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace distribution {
      extern PyType_Def PY_TYPE_DEF(IntegerDistribution);
      extern PyTypeObject *PY_TYPE(IntegerDistribution);

      class t_IntegerDistribution {
      public:
        PyObject_HEAD
        IntegerDistribution object;
        static PyObject *wrap_Object(const IntegerDistribution&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
