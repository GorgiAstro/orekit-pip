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
            mid_clear_7ae3461a92a43152,
            mid_getDimension_f2f64475e4580546,
            mid_getN_a27fc9afd27e559d,
            mid_getResult_7cdc325af0834901,
            mid_increment_ebc26dcaf4761286,
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
