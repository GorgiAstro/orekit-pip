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
            mid_init$_7ae3461a92a43152,
            mid_clear_7ae3461a92a43152,
            mid_copy_341cf16d0d9912f3,
            mid_equals_229c87223f486349,
            mid_getResult_456d9a2f64d6b28d,
            mid_hashCode_f2f64475e4580546,
            mid_increment_77e0f9a1f260e2e5,
            mid_toString_0090f7797e403f43,
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
