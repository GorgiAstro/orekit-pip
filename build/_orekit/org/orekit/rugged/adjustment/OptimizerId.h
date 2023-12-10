#ifndef org_orekit_rugged_adjustment_OptimizerId_H
#define org_orekit_rugged_adjustment_OptimizerId_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {
        class OptimizerId;
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
  namespace orekit {
    namespace rugged {
      namespace adjustment {

        class OptimizerId : public ::java::lang::Enum {
         public:
          enum {
            mid_valueOf_0a38d85ef48494bf,
            mid_values_204a88ef5fe6ef9d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OptimizerId(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          OptimizerId(const OptimizerId& obj) : ::java::lang::Enum(obj) {}

          static OptimizerId *GAUSS_NEWTON_LU;
          static OptimizerId *GAUSS_NEWTON_QR;
          static OptimizerId *LEVENBERG_MARQUADT;

          static OptimizerId valueOf(const ::java::lang::String &);
          static JArray< OptimizerId > values();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {
        extern PyType_Def PY_TYPE_DEF(OptimizerId);
        extern PyTypeObject *PY_TYPE(OptimizerId);

        class t_OptimizerId {
        public:
          PyObject_HEAD
          OptimizerId object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_OptimizerId *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const OptimizerId&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const OptimizerId&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
