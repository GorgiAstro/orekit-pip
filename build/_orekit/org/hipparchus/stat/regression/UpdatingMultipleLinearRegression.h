#ifndef org_hipparchus_stat_regression_UpdatingMultipleLinearRegression_H
#define org_hipparchus_stat_regression_UpdatingMultipleLinearRegression_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace stat {
      namespace regression {
        class RegressionResults;
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

        class UpdatingMultipleLinearRegression : public ::java::lang::Object {
         public:
          enum {
            mid_addObservation_19a01fdb4baa56b0,
            mid_addObservations_f1517d9a21833345,
            mid_clear_ff7cb6c242604316,
            mid_getN_42c72b98e3c2e08a,
            mid_hasIntercept_eee3de00fe971136,
            mid_regress_b2f062f0fff197c0,
            mid_regress_54420be6ab2acfca,
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
