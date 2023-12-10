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
            mid_addObservation_caadaecfce5fba2f,
            mid_addObservations_f51b12ef24067352,
            mid_clear_7ae3461a92a43152,
            mid_getN_a27fc9afd27e559d,
            mid_hasIntercept_e470b6d9e0d979db,
            mid_regress_b84c99961a7276a9,
            mid_regress_d722bd798e38d351,
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
