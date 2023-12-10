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
            mid_init$_bc79bc153a2b3c2e,
            mid_init$_43205367e2308f0a,
            mid_addObservation_caadaecfce5fba2f,
            mid_addObservations_f51b12ef24067352,
            mid_clear_7ae3461a92a43152,
            mid_getDiagonalOfHatMatrix_f05cb8c6dfd5e0b9,
            mid_getN_a27fc9afd27e559d,
            mid_getOrderOfRegressors_d8ead0d90ce828b0,
            mid_getPartialCorrelations_eb9cceadce1b2217,
            mid_hasIntercept_e470b6d9e0d979db,
            mid_regress_b84c99961a7276a9,
            mid_regress_d722bd798e38d351,
            mid_regress_6d016b31aa6309e4,
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
