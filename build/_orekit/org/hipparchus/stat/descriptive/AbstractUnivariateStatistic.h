#ifndef org_hipparchus_stat_descriptive_AbstractUnivariateStatistic_H
#define org_hipparchus_stat_descriptive_AbstractUnivariateStatistic_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace stat {
      namespace descriptive {
        class UnivariateStatistic;
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
      namespace descriptive {

        class AbstractUnivariateStatistic : public ::java::lang::Object {
         public:
          enum {
            mid_copy_04f2e677f90ab735,
            mid_evaluate_b74f83833fdad017,
            mid_evaluate_1567a80062adb31b,
            mid_getData_25e1757a36c4dde2,
            mid_setData_ab69da052b88f50c,
            mid_setData_4484ad1f15b73c7a,
            mid_getDataRef_25e1757a36c4dde2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractUnivariateStatistic(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractUnivariateStatistic(const AbstractUnivariateStatistic& obj) : ::java::lang::Object(obj) {}

          ::org::hipparchus::stat::descriptive::UnivariateStatistic copy() const;
          jdouble evaluate() const;
          jdouble evaluate(const JArray< jdouble > &, jint, jint) const;
          JArray< jdouble > getData() const;
          void setData(const JArray< jdouble > &) const;
          void setData(const JArray< jdouble > &, jint, jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        extern PyType_Def PY_TYPE_DEF(AbstractUnivariateStatistic);
        extern PyTypeObject *PY_TYPE(AbstractUnivariateStatistic);

        class t_AbstractUnivariateStatistic {
        public:
          PyObject_HEAD
          AbstractUnivariateStatistic object;
          static PyObject *wrap_Object(const AbstractUnivariateStatistic&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
