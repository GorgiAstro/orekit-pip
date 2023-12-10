#ifndef org_orekit_files_ccsds_ndm_adm_acm_AcmElements_H
#define org_orekit_files_ccsds_ndm_adm_acm_AcmElements_H

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
          namespace adm {
            namespace acm {
              class AcmElements;
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
          namespace adm {
            namespace acm {

              class AcmElements : public ::java::lang::Enum {
               public:
                enum {
                  mid_valueOf_dd25a9b5d490b162,
                  mid_values_19d103ff12239630,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AcmElements(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AcmElements(const AcmElements& obj) : ::java::lang::Enum(obj) {}

                static AcmElements *AD;
                static AcmElements *ATT;
                static AcmElements *COV;
                static AcmElements *MAN;
                static AcmElements *PHYS;
                static AcmElements *USER;

                static AcmElements valueOf(const ::java::lang::String &);
                static JArray< AcmElements > values();
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
          namespace adm {
            namespace acm {
              extern PyType_Def PY_TYPE_DEF(AcmElements);
              extern PyTypeObject *PY_TYPE(AcmElements);

              class t_AcmElements {
              public:
                PyObject_HEAD
                AcmElements object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_AcmElements *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const AcmElements&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const AcmElements&, PyTypeObject *);
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
