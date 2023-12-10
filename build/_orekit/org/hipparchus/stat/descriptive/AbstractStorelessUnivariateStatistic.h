#ifndef org_hipparchus_stat_descriptive_AbstractStorelessUnivariateStatistic_H
#define org_hipparchus_stat_descriptive_AbstractStorelessUnivariateStatistic_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        class StorelessUnivariateStatistic;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
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
            mid_init$_0fa09c18fee449d5,
            mid_clear_0fa09c18fee449d5,
            mid_copy_ac0cb19696f2f20f,
            mid_equals_65c7d273e80d497a,
            mid_getResult_dff5885c2c873297,
            mid_hashCode_570ce0828f81a2c1,
            mid_increment_17db3a65980d3441,
            mid_toString_11b109bd155ca898,
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
