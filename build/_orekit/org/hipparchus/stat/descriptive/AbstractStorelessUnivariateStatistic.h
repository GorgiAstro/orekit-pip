#ifndef org_hipparchus_stat_descriptive_AbstractStorelessUnivariateStatistic_H
#define org_hipparchus_stat_descriptive_AbstractStorelessUnivariateStatistic_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        class StorelessUnivariateStatistic;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        class AbstractStorelessUnivariateStatistic : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_clear_0640e6acf969ed28,
            mid_copy_0a0ee925e68176d0,
            mid_equals_221e8e85cb385209,
            mid_getResult_557b8123390d8d0c,
            mid_hashCode_412668abc8d889e9,
            mid_increment_10f281d777284cea,
            mid_toString_3cffd47377eca18a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractStorelessUnivariateStatistic(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractStorelessUnivariateStatistic(const AbstractStorelessUnivariateStatistic& obj) : ::java::lang::Object(obj) {}

          AbstractStorelessUnivariateStatistic();

          void clear() const;
          ::org::hipparchus::stat::descriptive::StorelessUnivariateStatistic copy() const;
          jboolean equals(const ::java::lang::Object &) const;
          jdouble getResult() const;
          jint hashCode() const;
          void increment(jdouble) const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(AbstractStorelessUnivariateStatistic);
        extern PyTypeObject *PY_TYPE(AbstractStorelessUnivariateStatistic);

        class t_AbstractStorelessUnivariateStatistic {
        public:
          PyObject_HEAD
          AbstractStorelessUnivariateStatistic object;
          static PyObject *wrap_Object(const AbstractStorelessUnivariateStatistic&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
