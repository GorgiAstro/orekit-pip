#ifndef org_hipparchus_stat_descriptive_AggregatableStatistic_H
#define org_hipparchus_stat_descriptive_AggregatableStatistic_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
    }
  }
}
namespace java {
  namespace lang {
    class Iterable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        class AggregatableStatistic : public ::java::lang::Object {
         public:
          enum {
            mid_aggregate_c87c65058a9c47e3,
            mid_aggregate_616dc59fbc71e214,
            mid_aggregate_2990946c992aafed,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AggregatableStatistic(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AggregatableStatistic(const AggregatableStatistic& obj) : ::java::lang::Object(obj) {}

          void aggregate(const JArray< ::java::lang::Object > &) const;
          void aggregate(const ::java::lang::Iterable &) const;
          void aggregate(const ::java::lang::Object &) const;
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
        extern PyType_Def PY_TYPE_DEF(AggregatableStatistic);
        extern PyTypeObject *PY_TYPE(AggregatableStatistic);

        class t_AggregatableStatistic {
        public:
          PyObject_HEAD
          AggregatableStatistic object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_AggregatableStatistic *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const AggregatableStatistic&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const AggregatableStatistic&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
