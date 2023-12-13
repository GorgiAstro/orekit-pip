#ifndef org_hipparchus_stat_regression_UpdatingMultipleLinearRegression_H
#define org_hipparchus_stat_regression_UpdatingMultipleLinearRegression_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {
        class RegressionResults;
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

        class UpdatingMultipleLinearRegression : public ::java::lang::Object {
         public:
          enum {
            mid_addObservation_334f245ec9cee46b,
            mid_addObservations_8a9d29a6bd2c9070,
            mid_clear_a1fa5dae97ea5ed2,
            mid_getN_6c0ce7e438e5ded4,
            mid_hasIntercept_9ab94ac1dc23b105,
            mid_regress_d38bcfe2c0d5b843,
            mid_regress_6d4269f398dcfc41,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UpdatingMultipleLinearRegression(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UpdatingMultipleLinearRegression(const UpdatingMultipleLinearRegression& obj) : ::java::lang::Object(obj) {}

          void addObservation(const JArray< jdouble > &, jdouble) const;
          void addObservations(const JArray< JArray< jdouble > > &, const JArray< jdouble > &) const;
          void clear() const;
          jlong getN() const;
          jboolean hasIntercept() const;
          ::org::hipparchus::stat::regression::RegressionResults regress() const;
          ::org::hipparchus::stat::regression::RegressionResults regress(const JArray< jint > &) const;
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
        extern PyType_Def PY_TYPE_DEF(UpdatingMultipleLinearRegression);
        extern PyTypeObject *PY_TYPE(UpdatingMultipleLinearRegression);

        class t_UpdatingMultipleLinearRegression {
        public:
          PyObject_HEAD
          UpdatingMultipleLinearRegression object;
          static PyObject *wrap_Object(const UpdatingMultipleLinearRegression&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
