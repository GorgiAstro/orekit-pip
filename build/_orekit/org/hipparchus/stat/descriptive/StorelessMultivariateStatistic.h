#ifndef org_hipparchus_stat_descriptive_StorelessMultivariateStatistic_H
#define org_hipparchus_stat_descriptive_StorelessMultivariateStatistic_H

#include "java/lang/Object.h"

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

        class StorelessMultivariateStatistic : public ::java::lang::Object {
         public:
          enum {
            mid_clear_0640e6acf969ed28,
            mid_getDimension_412668abc8d889e9,
            mid_getN_9e26256fb0d384a2,
            mid_getResult_a53a7513ecedada2,
            mid_increment_cc18240f4a737f14,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StorelessMultivariateStatistic(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StorelessMultivariateStatistic(const StorelessMultivariateStatistic& obj) : ::java::lang::Object(obj) {}

          void clear() const;
          jint getDimension() const;
          jlong getN() const;
          JArray< jdouble > getResult() const;
          void increment(const JArray< jdouble > &) const;
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
        extern PyType_Def PY_TYPE_DEF(StorelessMultivariateStatistic);
        extern PyTypeObject *PY_TYPE(StorelessMultivariateStatistic);

        class t_StorelessMultivariateStatistic {
        public:
          PyObject_HEAD
          StorelessMultivariateStatistic object;
          static PyObject *wrap_Object(const StorelessMultivariateStatistic&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
