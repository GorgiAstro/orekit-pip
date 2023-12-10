#ifndef org_hipparchus_stat_correlation_StorelessCovariance_H
#define org_hipparchus_stat_correlation_StorelessCovariance_H

#include "org/hipparchus/stat/correlation/Covariance.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathRuntimeException;
      class MathIllegalArgumentException;
    }
    namespace stat {
      namespace correlation {
        class StorelessCovariance;
      }
    }
    namespace linear {
      class RealMatrix;
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
    namespace stat {
      namespace correlation {

        class StorelessCovariance : public ::org::hipparchus::stat::correlation::Covariance {
         public:
          enum {
            mid_init$_99803b0791f320ff,
            mid_init$_f61a0322e15bde25,
            mid_append_b79f135bd5c26485,
            mid_getCovariance_dbbe5f05149dbf73,
            mid_getCovarianceMatrix_688b496048ff947b,
            mid_getData_0358d8ea02f2cdb1,
            mid_getN_570ce0828f81a2c1,
            mid_increment_fa9d415d19f69361,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StorelessCovariance(jobject obj) : ::org::hipparchus::stat::correlation::Covariance(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StorelessCovariance(const StorelessCovariance& obj) : ::org::hipparchus::stat::correlation::Covariance(obj) {}

          StorelessCovariance(jint);
          StorelessCovariance(jint, jboolean);

          void append(const StorelessCovariance &) const;
          jdouble getCovariance(jint, jint) const;
          ::org::hipparchus::linear::RealMatrix getCovarianceMatrix() const;
          JArray< JArray< jdouble > > getData() const;
          jint getN() const;
          void increment(const JArray< jdouble > &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace correlation {
        extern PyType_Def PY_TYPE_DEF(StorelessCovariance);
        extern PyTypeObject *PY_TYPE(StorelessCovariance);

        class t_StorelessCovariance {
        public:
          PyObject_HEAD
          StorelessCovariance object;
          static PyObject *wrap_Object(const StorelessCovariance&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
