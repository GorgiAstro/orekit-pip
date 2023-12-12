#ifndef org_hipparchus_stat_correlation_StorelessCovariance_H
#define org_hipparchus_stat_correlation_StorelessCovariance_H

#include "org/hipparchus/stat/correlation/Covariance.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
      class MathRuntimeException;
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
            mid_init$_a3da1a935cb37f7b,
            mid_init$_746492bb94848925,
            mid_append_f4663404551d300b,
            mid_getCovariance_21b81d54c06b64b0,
            mid_getCovarianceMatrix_70a207fcbc031df2,
            mid_getData_8cf5267aa13a77f3,
            mid_getN_412668abc8d889e9,
            mid_increment_cc18240f4a737f14,
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
