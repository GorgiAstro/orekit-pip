#ifndef org_hipparchus_stat_correlation_StorelessCovariance_H
#define org_hipparchus_stat_correlation_StorelessCovariance_H

#include "org/hipparchus/stat/correlation/Covariance.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace correlation {
        class StorelessCovariance;
      }
    }
    namespace exception {
      class MathRuntimeException;
      class MathIllegalArgumentException;
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
            mid_init$_44ed599e93e8a30c,
            mid_init$_34742154de10200a,
            mid_append_a6bf97afc932971f,
            mid_getCovariance_cad98089d00f8a5b,
            mid_getCovarianceMatrix_f77d745f2128c391,
            mid_getData_3b7b373db8e7887f,
            mid_getN_55546ef6a647f39b,
            mid_increment_ab69da052b88f50c,
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
