#ifndef org_orekit_files_ccsds_ndm_odm_ocm_OpsStatus_H
#define org_orekit_files_ccsds_ndm_odm_ocm_OpsStatus_H

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
          namespace odm {
            namespace ocm {
              class OpsStatus;
            }
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
          namespace odm {
            namespace ocm {

              class OpsStatus : public ::java::lang::Enum {
               public:
                enum {
                  mid_toString_d2c8eb4129821f0e,
                  mid_valueOf_e54e3e39cbb31e72,
                  mid_values_36dffa7e7cb47adb,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit OpsStatus(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OpsStatus(const OpsStatus& obj) : ::java::lang::Enum(obj) {}

                static OpsStatus *BACKUP;
                static OpsStatus *DECAYED;
                static OpsStatus *EXTENDED_MISSION;
                static OpsStatus *NONOPERATIONAL;
                static OpsStatus *OPERATIONAL;
                static OpsStatus *PARTIALLY_OPERATIONAL;
                static OpsStatus *REENTRY_MODE;
                static OpsStatus *STANBY;
                static OpsStatus *UNKNOWN;

                ::java::lang::String toString() const;
                static OpsStatus valueOf(const ::java::lang::String &);
                static JArray< OpsStatus > values();
              };
            }
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
          namespace odm {
            namespace ocm {
              extern PyType_Def PY_TYPE_DEF(OpsStatus);
              extern PyTypeObject *PY_TYPE(OpsStatus);

              class t_OpsStatus {
              public:
                PyObject_HEAD
                OpsStatus object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_OpsStatus *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const OpsStatus&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const OpsStatus&, PyTypeObject *);
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
}

#endif
