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
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace util {
      class Pair;
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
            mid_init$_d43202153dd284f7,
            mid_init$_ed2d4c3b1a8f42a9,
            mid_cumulativeProbability_ce4c02d583456bc9,
            mid_getNumericalMean_9981f74b2d109da6,
            mid_getNumericalVariance_9981f74b2d109da6,
            mid_getPmf_d751c1a57012b438,
            mid_getSupportLowerBound_d6ab429752e7c267,
            mid_getSupportUpperBound_d6ab429752e7c267,
            mid_isSupportConnected_eee3de00fe971136,
            mid_probability_ce4c02d583456bc9,
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
