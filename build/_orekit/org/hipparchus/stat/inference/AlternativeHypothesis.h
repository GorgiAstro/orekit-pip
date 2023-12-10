#ifndef org_hipparchus_stat_inference_AlternativeHypothesis_H
#define org_hipparchus_stat_inference_AlternativeHypothesis_H

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
      namespace inference {
        class AlternativeHypothesis;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        class AlternativeHypothesis : public ::java::lang::Enum {
         public:
          enum {
            mid_valueOf_48d44e32d373ac66,
            mid_values_4891acb11876446e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AlternativeHypothesis(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AlternativeHypothesis(const AlternativeHypothesis& obj) : ::java::lang::Enum(obj) {}

          static AlternativeHypothesis *GREATER_THAN;
          static AlternativeHypothesis *LESS_THAN;
          static AlternativeHypothesis *TWO_SIDED;

          static AlternativeHypothesis valueOf(const ::java::lang::String &);
          static JArray< AlternativeHypothesis > values();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {
        extern PyType_Def PY_TYPE_DEF(AlternativeHypothesis);
        extern PyTypeObject *PY_TYPE(AlternativeHypothesis);

        class t_AlternativeHypothesis {
        public:
          PyObject_HEAD
          AlternativeHypothesis object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_AlternativeHypothesis *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const AlternativeHypothesis&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const AlternativeHypothesis&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
