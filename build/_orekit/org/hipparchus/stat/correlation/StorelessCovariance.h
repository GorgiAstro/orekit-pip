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
            mid_init$_8fd427ab23829bf5,
            mid_init$_06c90d8be18d8afa,
            mid_append_8151927c1ac14952,
            mid_getCovariance_6d920aab27f0a3d2,
            mid_getCovarianceMatrix_b2eebabce70526d8,
            mid_getData_eda3f19b8225f78f,
            mid_getN_d6ab429752e7c267,
            mid_increment_a71c45509eaf92d1,
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
