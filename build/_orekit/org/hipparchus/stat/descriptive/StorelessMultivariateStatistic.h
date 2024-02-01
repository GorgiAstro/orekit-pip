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
            mid_clear_ff7cb6c242604316,
            mid_getDimension_d6ab429752e7c267,
            mid_getN_42c72b98e3c2e08a,
            mid_getResult_be783177b060994b,
            mid_increment_a71c45509eaf92d1,
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
