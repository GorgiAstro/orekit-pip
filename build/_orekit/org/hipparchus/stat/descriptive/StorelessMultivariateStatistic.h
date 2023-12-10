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
            mid_clear_0fa09c18fee449d5,
            mid_getDimension_570ce0828f81a2c1,
            mid_getN_492808a339bfa35f,
            mid_getResult_60c7040667a7dc5c,
            mid_increment_fa9d415d19f69361,
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
