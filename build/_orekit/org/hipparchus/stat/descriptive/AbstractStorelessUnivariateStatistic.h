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
            mid_init$_ff7cb6c242604316,
            mid_clear_ff7cb6c242604316,
            mid_copy_2686517d773e76c2,
            mid_equals_72faff9b05f5ed5e,
            mid_getResult_9981f74b2d109da6,
            mid_hashCode_d6ab429752e7c267,
            mid_increment_1ad26e8c8c0cd65b,
            mid_toString_d2c8eb4129821f0e,
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
