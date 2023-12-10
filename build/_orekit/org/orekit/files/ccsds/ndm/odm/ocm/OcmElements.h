#ifndef org_orekit_files_ccsds_ndm_odm_ocm_OcmElements_H
#define org_orekit_files_ccsds_ndm_odm_ocm_OcmElements_H

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
              class OcmElements;
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

              class OcmElements : public ::java::lang::Enum {
               public:
                enum {
                  mid_valueOf_ea7ff09e28f9c18b,
                  mid_values_b4f2b69e777aa1cf,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit OcmElements(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OcmElements(const OcmElements& obj) : ::java::lang::Enum(obj) {}

                static OcmElements *COV;
                static OcmElements *MAN;
                static OcmElements *OD;
                static OcmElements *ORB;
                static OcmElements *PERT;
                static OcmElements *PHYS;
                static OcmElements *USER;

                static OcmElements valueOf(const ::java::lang::String &);
                static JArray< OcmElements > values();
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
              extern PyType_Def PY_TYPE_DEF(OcmElements);
              extern PyTypeObject *PY_TYPE(OcmElements);

              class t_OcmElements {
              public:
                PyObject_HEAD
                OcmElements object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_OcmElements *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const OcmElements&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const OcmElements&, PyTypeObject *);
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
