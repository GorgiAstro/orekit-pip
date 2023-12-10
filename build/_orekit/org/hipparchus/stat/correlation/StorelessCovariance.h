#ifndef org_hipparchus_stat_correlation_StorelessCovariance_H
#define org_hipparchus_stat_correlation_StorelessCovariance_H

#include "org/hipparchus/stat/correlation/Covariance.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
      class MathRuntimeException;
    }
    namespace linear {
      class RealMatrix;
    }
    namespace stat {
      namespace correlation {
        class StorelessCovariance;
      }
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
            mid_init$_0a2a1ac2721c0336,
            mid_init$_bc79bc153a2b3c2e,
            mid_append_420411a03a672224,
            mid_getCovariance_a84e4ee1da3f1ab8,
            mid_getCovarianceMatrix_7116bbecdd8ceb21,
            mid_getData_43de1192439efa92,
            mid_getN_f2f64475e4580546,
            mid_increment_ebc26dcaf4761286,
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
