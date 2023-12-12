#ifndef org_orekit_files_ccsds_ndm_tdm_TimetagReference_H
#define org_orekit_files_ccsds_ndm_tdm_TimetagReference_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {
            class TimetagReference;
          }
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            class TimetagReference : public ::java::lang::Enum {
             public:
              enum {
                mid_valueOf_bc053f433d2984d8,
                mid_values_2c23046667b6a263,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TimetagReference(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              TimetagReference(const TimetagReference& obj) : ::java::lang::Enum(obj) {}

              static TimetagReference *RECEIVE;
              static TimetagReference *TRANSMIT;

              static TimetagReference valueOf(const ::java::lang::String &);
              static JArray< TimetagReference > values();
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {
            extern PyType_Def PY_TYPE_DEF(TimetagReference);
            extern PyTypeObject *PY_TYPE(TimetagReference);

            class t_TimetagReference {
            public:
              PyObject_HEAD
              TimetagReference object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_TimetagReference *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const TimetagReference&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const TimetagReference&, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
