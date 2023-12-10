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
            mid_addObservation_bc1ff02eb3693128,
            mid_addObservations_38e689b845a7e4f9,
            mid_clear_0fa09c18fee449d5,
            mid_getN_492808a339bfa35f,
            mid_hasIntercept_b108b35ef48e27bd,
            mid_regress_0142096ec696b4f7,
            mid_regress_7a5a137e3f3bf403,
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
