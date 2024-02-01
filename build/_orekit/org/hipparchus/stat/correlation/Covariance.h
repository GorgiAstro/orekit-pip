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
            mid_init$_ff7cb6c242604316,
            mid_init$_11ecdbb5af7ed67d,
            mid_init$_f5364c9a9d9cbd53,
            mid_init$_1abb553ff9db34ff,
            mid_init$_40961afdecb20a23,
            mid_covariance_b01af8a77d4df96f,
            mid_covariance_2cf76703ce30b165,
            mid_getCovarianceMatrix_b2eebabce70526d8,
            mid_getN_d6ab429752e7c267,
            mid_computeCovarianceMatrix_5a8a8185eb309db7,
            mid_computeCovarianceMatrix_04e001ecedde68c6,
            mid_computeCovarianceMatrix_a50478fa84afaa43,
            mid_computeCovarianceMatrix_62872d3e890d4114,
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
