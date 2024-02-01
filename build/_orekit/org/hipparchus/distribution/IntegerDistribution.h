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
          mid_cumulativeProbability_ce4c02d583456bc9,
          mid_getNumericalMean_9981f74b2d109da6,
          mid_getNumericalVariance_9981f74b2d109da6,
          mid_getSupportLowerBound_d6ab429752e7c267,
          mid_getSupportUpperBound_d6ab429752e7c267,
          mid_inverseCumulativeProbability_9e72cb20adb363fb,
          mid_isSupportConnected_eee3de00fe971136,
          mid_logProbability_ce4c02d583456bc9,
          mid_probability_ce4c02d583456bc9,
          mid_probability_6d920aab27f0a3d2,
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
