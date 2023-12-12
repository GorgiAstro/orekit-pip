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
            mid_init$_746492bb94848925,
            mid_init$_6aa5604f729b68b3,
            mid_addObservation_3682f2e0c8382fe5,
            mid_addObservations_122207bd161e9ddc,
            mid_clear_0640e6acf969ed28,
            mid_getDiagonalOfHatMatrix_86c4a0582e0747ce,
            mid_getN_9e26256fb0d384a2,
            mid_getOrderOfRegressors_1b41cf9ebf653611,
            mid_getPartialCorrelations_1da5c9e77f24f269,
            mid_hasIntercept_89b302893bdbe1f1,
            mid_regress_2f78c8eefa6215e0,
            mid_regress_bfd11e26913ff479,
            mid_regress_422f9ba585c59080,
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
