#ifndef org_hipparchus_stat_descriptive_AbstractUnivariateStatistic_H
#define org_hipparchus_stat_descriptive_AbstractUnivariateStatistic_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        class AbstractUnivariateStatistic : public ::java::lang::Object {
         public:
          enum {
            mid_copy_98b5288d1f202841,
            mid_evaluate_557b8123390d8d0c,
            mid_evaluate_9eeeb1ae977f525d,
            mid_getData_a53a7513ecedada2,
            mid_setData_cc18240f4a737f14,
            mid_setData_91b51b3c05127ead,
            mid_getDataRef_a53a7513ecedada2,
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
