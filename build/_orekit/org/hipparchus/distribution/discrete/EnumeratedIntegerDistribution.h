#ifndef org_hipparchus_distribution_discrete_EnumeratedIntegerDistribution_H
#define org_hipparchus_distribution_discrete_EnumeratedIntegerDistribution_H

#include "org/hipparchus/distribution/discrete/AbstractIntegerDistribution.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Integer;
    class Double;
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace util {
      class Pair;
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        class EnumeratedIntegerDistribution : public ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution {
         public:
          enum {
            mid_init$_d147d7ce001e2d45,
            mid_init$_7847f5fdfa3f26f7,
            mid_cumulativeProbability_46f85b53d9aedd96,
            mid_getNumericalMean_dff5885c2c873297,
            mid_getNumericalVariance_dff5885c2c873297,
            mid_getPmf_2afa36052df4765d,
            mid_getSupportLowerBound_570ce0828f81a2c1,
            mid_getSupportUpperBound_570ce0828f81a2c1,
            mid_isSupportConnected_b108b35ef48e27bd,
            mid_probability_46f85b53d9aedd96,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EnumeratedIntegerDistribution(jobject obj) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EnumeratedIntegerDistribution(const EnumeratedIntegerDistribution& obj) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(obj) {}

          EnumeratedIntegerDistribution(const JArray< jint > &);
          EnumeratedIntegerDistribution(const JArray< jint > &, const JArray< jdouble > &);

          jdouble cumulativeProbability(jint) const;
          jdouble getNumericalMean() const;
          jdouble getNumericalVariance() const;
          ::java::util::List getPmf() const;
          jint getSupportLowerBound() const;
          jint getSupportUpperBound() const;
          jboolean isSupportConnected() const;
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
        extern PyType_Def PY_TYPE_DEF(EnumeratedIntegerDistribution);
        extern PyTypeObject *PY_TYPE(EnumeratedIntegerDistribution);

        class t_EnumeratedIntegerDistribution {
        public:
          PyObject_HEAD
          EnumeratedIntegerDistribution object;
          static PyObject *wrap_Object(const EnumeratedIntegerDistribution&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
