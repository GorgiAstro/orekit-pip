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
            mid_init$_0640e6acf969ed28,
            mid_init$_edb361bfdd1ad9ae,
            mid_init$_f3731847577f13e6,
            mid_init$_3490b011a7c22af0,
            mid_init$_1fed4fc8db78540d,
            mid_covariance_628a76297e217f13,
            mid_covariance_81226d0b24750fea,
            mid_getCovarianceMatrix_70a207fcbc031df2,
            mid_getN_412668abc8d889e9,
            mid_computeCovarianceMatrix_340b47d21842d02c,
            mid_computeCovarianceMatrix_1d40fe87afcd29e7,
            mid_computeCovarianceMatrix_05cc2960cde80114,
            mid_computeCovarianceMatrix_e1d072ab7390a6e5,
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
