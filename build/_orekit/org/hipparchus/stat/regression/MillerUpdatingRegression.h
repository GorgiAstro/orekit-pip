#ifndef org_hipparchus_stat_regression_MillerUpdatingRegression_H
#define org_hipparchus_stat_regression_MillerUpdatingRegression_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {
        class RegressionResults;
        class UpdatingMultipleLinearRegression;
      }
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
      namespace regression {

        class MillerUpdatingRegression : public ::java::lang::Object {
         public:
          enum {
            mid_init$_34742154de10200a,
            mid_init$_2620dfac41107d35,
            mid_addObservation_334f245ec9cee46b,
            mid_addObservations_8a9d29a6bd2c9070,
            mid_clear_a1fa5dae97ea5ed2,
            mid_getDiagonalOfHatMatrix_b060e4326765ccf1,
            mid_getN_6c0ce7e438e5ded4,
            mid_getOrderOfRegressors_4d095d7a08163110,
            mid_getPartialCorrelations_bb2a44a76ad252f7,
            mid_hasIntercept_9ab94ac1dc23b105,
            mid_regress_d38bcfe2c0d5b843,
            mid_regress_6d4269f398dcfc41,
            mid_regress_c9fc7eba9cd71ebd,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MillerUpdatingRegression(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MillerUpdatingRegression(const MillerUpdatingRegression& obj) : ::java::lang::Object(obj) {}

          MillerUpdatingRegression(jint, jboolean);
          MillerUpdatingRegression(jint, jboolean, jdouble);

          void addObservation(const JArray< jdouble > &, jdouble) const;
          void addObservations(const JArray< JArray< jdouble > > &, const JArray< jdouble > &) const;
          void clear() const;
          jdouble getDiagonalOfHatMatrix(const JArray< jdouble > &) const;
          jlong getN() const;
          JArray< jint > getOrderOfRegressors() const;
          JArray< jdouble > getPartialCorrelations(jint) const;
          jboolean hasIntercept() const;
          ::org::hipparchus::stat::regression::RegressionResults regress() const;
          ::org::hipparchus::stat::regression::RegressionResults regress(const JArray< jint > &) const;
          ::org::hipparchus::stat::regression::RegressionResults regress(jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {
        extern PyType_Def PY_TYPE_DEF(MillerUpdatingRegression);
        extern PyTypeObject *PY_TYPE(MillerUpdatingRegression);

        class t_MillerUpdatingRegression {
        public:
          PyObject_HEAD
          MillerUpdatingRegression object;
          static PyObject *wrap_Object(const MillerUpdatingRegression&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
