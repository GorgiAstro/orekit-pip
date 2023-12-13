#ifndef org_orekit_files_ccsds_ndm_tdm_IntegrationReference_H
#define org_orekit_files_ccsds_ndm_tdm_IntegrationReference_H

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
            class IntegrationReference;
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

            class IntegrationReference : public ::java::lang::Enum {
             public:
              enum {
                mid_valueOf_7311f1caf365b1df,
                mid_values_e4d631ed1f433157,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit IntegrationReference(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              IntegrationReference(const IntegrationReference& obj) : ::java::lang::Enum(obj) {}

              static IntegrationReference *END;
              static IntegrationReference *MIDDLE;
              static IntegrationReference *START;

              static IntegrationReference valueOf(const ::java::lang::String &);
              static JArray< IntegrationReference > values();
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
            extern PyType_Def PY_TYPE_DEF(IntegrationReference);
            extern PyTypeObject *PY_TYPE(IntegrationReference);

            class t_IntegrationReference {
            public:
              PyObject_HEAD
              IntegrationReference object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_IntegrationReference *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const IntegrationReference&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const IntegrationReference&, PyTypeObject *);
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
