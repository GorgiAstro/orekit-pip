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
            mid_init$_f61a0322e15bde25,
            mid_init$_8aa86769efed9c57,
            mid_addObservation_bc1ff02eb3693128,
            mid_addObservations_38e689b845a7e4f9,
            mid_clear_0fa09c18fee449d5,
            mid_getDiagonalOfHatMatrix_9dc1ec0bcc0a9a29,
            mid_getN_492808a339bfa35f,
            mid_getOrderOfRegressors_d0635cea09dc178c,
            mid_getPartialCorrelations_abe82da4f5c7c981,
            mid_hasIntercept_b108b35ef48e27bd,
            mid_regress_0142096ec696b4f7,
            mid_regress_7a5a137e3f3bf403,
            mid_regress_8356b820807b832f,
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
