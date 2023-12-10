#ifndef org_orekit_files_ccsds_ndm_adm_acm_AcmMetadataKey_H
#define org_orekit_files_ccsds_ndm_adm_acm_AcmMetadataKey_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              class AcmMetadata;
              class AcmMetadataKey;
            }
          }
        }
        namespace utils {
          class ContextBinding;
          namespace lexical {
            class ParseToken;
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
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

              class AcmMetadataKey : public ::java::lang::Enum {
               public:
                enum {
                  mid_process_196a1b88556776cf,
                  mid_valueOf_87928577c751a1bf,
                  mid_values_e3e7aa3cda9fbf92,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AcmMetadataKey(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AcmMetadataKey(const AcmMetadataKey& obj) : ::java::lang::Enum(obj) {}

                static AcmMetadataKey *ACM_DATA_ELEMENTS;
                static AcmMetadataKey *CATALOG_NAME;
                static AcmMetadataKey *EPOCH_TZERO;
                static AcmMetadataKey *INTERNATIONAL_DESIGNATOR;
                static AcmMetadataKey *NEXT_LEAP_EPOCH;
                static AcmMetadataKey *NEXT_LEAP_TAIMUTC;
                static AcmMetadataKey *OBJECT_DESIGNATOR;
                static AcmMetadataKey *ODM_MSG_LINK;
                static AcmMetadataKey *ORIGINATOR_ADDRESS;
                static AcmMetadataKey *ORIGINATOR_EMAIL;
                static AcmMetadataKey *ORIGINATOR_PHONE;
                static AcmMetadataKey *ORIGINATOR_POC;
                static AcmMetadataKey *ORIGINATOR_POSITION;
                static AcmMetadataKey *START_TIME;
                static AcmMetadataKey *STOP_TIME;
                static AcmMetadataKey *TAIMUTC_AT_TZERO;

                jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadata &) const;
                static AcmMetadataKey valueOf(const ::java::lang::String &);
                static JArray< AcmMetadataKey > values();
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
              extern PyType_Def PY_TYPE_DEF(AcmMetadataKey);
              extern PyTypeObject *PY_TYPE(AcmMetadataKey);

              class t_AcmMetadataKey {
              public:
                PyObject_HEAD
                AcmMetadataKey object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_AcmMetadataKey *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const AcmMetadataKey&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const AcmMetadataKey&, PyTypeObject *);
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
