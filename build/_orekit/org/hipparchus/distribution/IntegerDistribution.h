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
          mid_cumulativeProbability_46f85b53d9aedd96,
          mid_getNumericalMean_dff5885c2c873297,
          mid_getNumericalVariance_dff5885c2c873297,
          mid_getSupportLowerBound_570ce0828f81a2c1,
          mid_getSupportUpperBound_570ce0828f81a2c1,
          mid_inverseCumulativeProbability_4508852644846c83,
          mid_isSupportConnected_b108b35ef48e27bd,
          mid_logProbability_46f85b53d9aedd96,
          mid_probability_46f85b53d9aedd96,
          mid_probability_dbbe5f05149dbf73,
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
