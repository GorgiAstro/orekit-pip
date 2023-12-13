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
            mid_init$_a1fa5dae97ea5ed2,
            mid_clear_a1fa5dae97ea5ed2,
            mid_copy_2b25c166f19a0def,
            mid_equals_460c5e2d9d51c6cc,
            mid_getResult_b74f83833fdad017,
            mid_hashCode_55546ef6a647f39b,
            mid_increment_8ba9fe7a847cecad,
            mid_toString_1c1fa1e935d6cdcf,
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
