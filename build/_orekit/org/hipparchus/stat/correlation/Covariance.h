#ifndef org_hipparchus_stat_correlation_Covariance_H
#define org_hipparchus_stat_correlation_Covariance_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
    }
    namespace exception {
      class MathIllegalArgumentException;
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
            mid_init$_0fa09c18fee449d5,
            mid_init$_a0befc7f3dc19e41,
            mid_init$_c67473bd6cfaa69b,
            mid_init$_eade0e830cb99555,
            mid_init$_a95dc6fea74c2d0e,
            mid_covariance_b561c6892e9976f8,
            mid_covariance_c98cc76e0ea0aa4c,
            mid_getCovarianceMatrix_688b496048ff947b,
            mid_getN_570ce0828f81a2c1,
            mid_computeCovarianceMatrix_e9b72403ad502221,
            mid_computeCovarianceMatrix_dddf4310e653828d,
            mid_computeCovarianceMatrix_62c0bfb50b5dacc0,
            mid_computeCovarianceMatrix_08333a1161303d01,
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
