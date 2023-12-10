#ifndef org_hipparchus_distribution_multivariate_AbstractMultivariateRealDistribution_H
#define org_hipparchus_distribution_multivariate_AbstractMultivariateRealDistribution_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace distribution {
      class MultivariateRealDistribution;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace multivariate {

        class AbstractMultivariateRealDistribution : public ::java::lang::Object {
         public:
          enum {
            mid_getDimension_570ce0828f81a2c1,
            mid_reseedRandomGenerator_3a8e7649f31fdb20,
            mid_sample_60c7040667a7dc5c,
            mid_sample_d3e8f395184a4338,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractMultivariateRealDistribution(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractMultivariateRealDistribution(const AbstractMultivariateRealDistribution& obj) : ::java::lang::Object(obj) {}

          jint getDimension() const;
          void reseedRandomGenerator(jlong) const;
          JArray< jdouble > sample() const;
          JArray< JArray< jdouble > > sample(jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace multivariate {
        extern PyType_Def PY_TYPE_DEF(AbstractMultivariateRealDistribution);
        extern PyTypeObject *PY_TYPE(AbstractMultivariateRealDistribution);

        class t_AbstractMultivariateRealDistribution {
        public:
          PyObject_HEAD
          AbstractMultivariateRealDistribution object;
          static PyObject *wrap_Object(const AbstractMultivariateRealDistribution&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
