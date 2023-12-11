#ifndef org_hipparchus_distribution_IntegerDistribution_H
#define org_hipparchus_distribution_IntegerDistribution_H

#include "java/lang/Object.h"

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

      class IntegerDistribution : public ::java::lang::Object {
       public:
        enum {
          mid_cumulativeProbability_69cfb132c661aca4,
          mid_getNumericalMean_557b8123390d8d0c,
          mid_getNumericalVariance_557b8123390d8d0c,
          mid_getSupportLowerBound_412668abc8d889e9,
          mid_getSupportUpperBound_412668abc8d889e9,
          mid_inverseCumulativeProbability_abbeb9db7144ca23,
          mid_isSupportConnected_89b302893bdbe1f1,
          mid_logProbability_69cfb132c661aca4,
          mid_probability_69cfb132c661aca4,
          mid_probability_21b81d54c06b64b0,
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
