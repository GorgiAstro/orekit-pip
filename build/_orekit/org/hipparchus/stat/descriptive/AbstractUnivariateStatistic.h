#ifndef org_hipparchus_stat_descriptive_AbstractUnivariateStatistic_H
#define org_hipparchus_stat_descriptive_AbstractUnivariateStatistic_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        class UnivariateStatistic;
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
      namespace descriptive {

        class AbstractUnivariateStatistic : public ::java::lang::Object {
         public:
          enum {
            mid_copy_fe1447429c89969b,
            mid_evaluate_9981f74b2d109da6,
            mid_evaluate_620ea098e5f0da00,
            mid_getData_be783177b060994b,
            mid_setData_a71c45509eaf92d1,
            mid_setData_40b495c766d36227,
            mid_getDataRef_be783177b060994b,
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
