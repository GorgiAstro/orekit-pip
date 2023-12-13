#ifndef org_hipparchus_stat_correlation_Covariance_H
#define org_hipparchus_stat_correlation_Covariance_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
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

        class Covariance : public ::java::lang::Object {
         public:
          enum {
            mid_init$_a1fa5dae97ea5ed2,
            mid_init$_07adb42ffaa97d31,
            mid_init$_84bd15e0995d0c79,
            mid_init$_30d41d58c8b5e4dc,
            mid_init$_07bc3fb795eede6d,
            mid_covariance_3207f9c2ae7271d9,
            mid_covariance_0c373dc781edcf2f,
            mid_getCovarianceMatrix_f77d745f2128c391,
            mid_getN_55546ef6a647f39b,
            mid_computeCovarianceMatrix_be124f4006dc9f69,
            mid_computeCovarianceMatrix_3afee3542a0dc560,
            mid_computeCovarianceMatrix_2d1b7d41dfd6b278,
            mid_computeCovarianceMatrix_1a55785d25d46a45,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Covariance(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Covariance(const Covariance& obj) : ::java::lang::Object(obj) {}

          Covariance();
          Covariance(const JArray< JArray< jdouble > > &);
          Covariance(const ::org::hipparchus::linear::RealMatrix &);
          Covariance(const JArray< JArray< jdouble > > &, jboolean);
          Covariance(const ::org::hipparchus::linear::RealMatrix &, jboolean);

          jdouble covariance(const JArray< jdouble > &, const JArray< jdouble > &) const;
          jdouble covariance(const JArray< jdouble > &, const JArray< jdouble > &, jboolean) const;
          ::org::hipparchus::linear::RealMatrix getCovarianceMatrix() const;
          jint getN() const;
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
        extern PyType_Def PY_TYPE_DEF(Covariance);
        extern PyTypeObject *PY_TYPE(Covariance);

        class t_Covariance {
        public:
          PyObject_HEAD
          Covariance object;
          static PyObject *wrap_Object(const Covariance&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
