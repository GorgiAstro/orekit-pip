#ifndef org_hipparchus_stat_ranking_TiesStrategy_H
#define org_hipparchus_stat_ranking_TiesStrategy_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace stat {
      namespace ranking {
        class TiesStrategy;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace ranking {

        class TiesStrategy : public ::java::lang::Enum {
         public:
          enum {
            mid_valueOf_9e07525c5046ba38,
            mid_values_2366d1ed29343f5a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TiesStrategy(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TiesStrategy(const TiesStrategy& obj) : ::java::lang::Enum(obj) {}

          static TiesStrategy *AVERAGE;
          static TiesStrategy *MAXIMUM;
          static TiesStrategy *MINIMUM;
          static TiesStrategy *RANDOM;
          static TiesStrategy *SEQUENTIAL;

          static TiesStrategy valueOf(const ::java::lang::String &);
          static JArray< TiesStrategy > values();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace ranking {
        extern PyType_Def PY_TYPE_DEF(TiesStrategy);
        extern PyTypeObject *PY_TYPE(TiesStrategy);

        class t_TiesStrategy {
        public:
          PyObject_HEAD
          TiesStrategy object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_TiesStrategy *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const TiesStrategy&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const TiesStrategy&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
