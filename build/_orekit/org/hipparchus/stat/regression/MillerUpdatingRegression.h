#ifndef org_hipparchus_stat_regression_MillerUpdatingRegression_H
#define org_hipparchus_stat_regression_MillerUpdatingRegression_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace stat {
      namespace regression {
        class RegressionResults;
        class UpdatingMultipleLinearRegression;
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
      namespace regression {

        class MillerUpdatingRegression : public ::java::lang::Object {
         public:
          enum {
            mid_init$_06c90d8be18d8afa,
            mid_init$_f749fdf8034f9bd9,
            mid_addObservation_19a01fdb4baa56b0,
            mid_addObservations_f1517d9a21833345,
            mid_clear_ff7cb6c242604316,
            mid_getDiagonalOfHatMatrix_a40ce4fdf6559ac0,
            mid_getN_42c72b98e3c2e08a,
            mid_getOrderOfRegressors_d6f20bd740dd34cd,
            mid_getPartialCorrelations_81add9fc9d78d5b9,
            mid_hasIntercept_eee3de00fe971136,
            mid_regress_b2f062f0fff197c0,
            mid_regress_54420be6ab2acfca,
            mid_regress_ce00c0e72893108a,
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
