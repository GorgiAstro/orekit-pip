#ifndef org_hipparchus_stat_ranking_NaNStrategy_H
#define org_hipparchus_stat_ranking_NaNStrategy_H

#include "java/lang/Enum.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace ranking {
        class NaNStrategy;
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
      namespace ranking {

        class NaNStrategy : public ::java::lang::Enum {
         public:
          enum {
            mid_valueOf_fb3d0e097119eac2,
            mid_values_a5af87edf0a7e54f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NaNStrategy(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NaNStrategy(const NaNStrategy& obj) : ::java::lang::Enum(obj) {}

          static NaNStrategy *FAILED;
          static NaNStrategy *FIXED;
          static NaNStrategy *MAXIMAL;
          static NaNStrategy *MINIMAL;
          static NaNStrategy *REMOVED;

          static NaNStrategy valueOf(const ::java::lang::String &);
          static JArray< NaNStrategy > values();
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
        extern PyType_Def PY_TYPE_DEF(NaNStrategy);
        extern PyTypeObject *PY_TYPE(NaNStrategy);

        class t_NaNStrategy {
        public:
          PyObject_HEAD
          NaNStrategy object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_NaNStrategy *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const NaNStrategy&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const NaNStrategy&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
