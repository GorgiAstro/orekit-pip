#ifndef org_hipparchus_distribution_continuous_AbstractRealDistribution_H
#define org_hipparchus_distribution_continuous_AbstractRealDistribution_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace distribution {
      class RealDistribution;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        class AbstractRealDistribution : public ::java::lang::Object {
         public:
          enum {
            mid_inverseCumulativeProbability_04fd0666b613d2ab,
            mid_logDensity_04fd0666b613d2ab,
            mid_probability_99e3200dafc19573,
            mid_getSolverAbsoluteAccuracy_b74f83833fdad017,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractRealDistribution(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractRealDistribution(const AbstractRealDistribution& obj) : ::java::lang::Object(obj) {}

          jdouble inverseCumulativeProbability(jdouble) const;
          jdouble logDensity(jdouble) const;
          jdouble probability(jdouble, jdouble) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {
        extern PyType_Def PY_TYPE_DEF(AbstractRealDistribution);
        extern PyTypeObject *PY_TYPE(AbstractRealDistribution);

        class t_AbstractRealDistribution {
        public:
          PyObject_HEAD
          AbstractRealDistribution object;
          static PyObject *wrap_Object(const AbstractRealDistribution&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
