#ifndef org_orekit_gnss_metric_ntrip_Authentication_H
#define org_orekit_gnss_metric_ntrip_Authentication_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {
          class Authentication;
        }
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
    namespace gnss {
      namespace metric {
        namespace ntrip {

          class Authentication : public ::java::lang::Enum {
           public:
            enum {
              mid_getAuthentication_8094c921fde19441,
              mid_valueOf_8094c921fde19441,
              mid_values_681a9ac7b396cda5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Authentication(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Authentication(const Authentication& obj) : ::java::lang::Enum(obj) {}

            static Authentication *BASIC;
            static Authentication *DIGEST;
            static Authentication *NONE;

            static Authentication getAuthentication(const ::java::lang::String &);
            static Authentication valueOf(const ::java::lang::String &);
            static JArray< Authentication > values();
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {
          extern PyType_Def PY_TYPE_DEF(Authentication);
          extern PyTypeObject *PY_TYPE(Authentication);

          class t_Authentication {
          public:
            PyObject_HEAD
            Authentication object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Authentication *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Authentication&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Authentication&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
