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
          mid_cumulativeProbability_2afcbc21f4e57ab2,
          mid_getNumericalMean_b74f83833fdad017,
          mid_getNumericalVariance_b74f83833fdad017,
          mid_getSupportLowerBound_55546ef6a647f39b,
          mid_getSupportUpperBound_55546ef6a647f39b,
          mid_inverseCumulativeProbability_2af4736545087009,
          mid_isSupportConnected_9ab94ac1dc23b105,
          mid_logProbability_2afcbc21f4e57ab2,
          mid_probability_2afcbc21f4e57ab2,
          mid_probability_cad98089d00f8a5b,
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
