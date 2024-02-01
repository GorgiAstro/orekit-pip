#ifndef org_hipparchus_stat_descriptive_AggregatableStatistic_H
#define org_hipparchus_stat_descriptive_AggregatableStatistic_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Iterable;
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
    }
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
            mid_aggregate_fc48e5166ee82e6b,
            mid_aggregate_26934bc48ccb39e9,
            mid_aggregate_83ee235bb1e64e94,
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
