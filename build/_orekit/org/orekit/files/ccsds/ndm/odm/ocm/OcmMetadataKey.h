#ifndef org_orekit_files_ccsds_ndm_odm_ocm_OcmMetadataKey_H
#define org_orekit_files_ccsds_ndm_odm_ocm_OcmMetadataKey_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            class ParseToken;
          }
          class ContextBinding;
        }
        namespace ndm {
          namespace odm {
            namespace ocm {
              class OcmMetadataKey;
              class OcmMetadata;
            }
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
          namespace odm {
            namespace ocm {

              class OcmMetadataKey : public ::java::lang::Enum {
               public:
                enum {
                  mid_process_d82b13bed91c5a3a,
                  mid_valueOf_e7cf321c65e016d0,
                  mid_values_f0edd35700594a55,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit OcmMetadataKey(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OcmMetadataKey(const OcmMetadataKey& obj) : ::java::lang::Enum(obj) {}

                static OcmMetadataKey *ADM_MSG_LINK;
                static OcmMetadataKey *ALTERNATE_NAMES;
                static OcmMetadataKey *CATALOG_NAME;
                static OcmMetadataKey *CDM_MSG_LINK;
                static OcmMetadataKey *CELESTIAL_SOURCE;
                static OcmMetadataKey *CONSTELLATION;
                static OcmMetadataKey *COUNTRY;
                static OcmMetadataKey *EOP_SOURCE;
                static OcmMetadataKey *EPOCH_TZERO;
                static OcmMetadataKey *INTERNATIONAL_DESIGNATOR;
                static OcmMetadataKey *INTERP_METHOD_EOP;
                static OcmMetadataKey *NEXT_LEAP_EPOCH;
                static OcmMetadataKey *NEXT_LEAP_TAIMUTC;
                static OcmMetadataKey *NEXT_MESSAGE_EPOCH;
                static OcmMetadataKey *NEXT_MESSAGE_ID;
                static OcmMetadataKey *OBJECT_DESIGNATOR;
                static OcmMetadataKey *OBJECT_TYPE;
                static OcmMetadataKey *OCM_DATA_ELEMENTS;
                static OcmMetadataKey *OPERATOR;
                static OcmMetadataKey *OPS_STATUS;
                static OcmMetadataKey *ORBIT_CATEGORY;
                static OcmMetadataKey *ORIGINATOR_ADDRESS;
                static OcmMetadataKey *ORIGINATOR_EMAIL;
                static OcmMetadataKey *ORIGINATOR_PHONE;
                static OcmMetadataKey *ORIGINATOR_POC;
                static OcmMetadataKey *ORIGINATOR_POSITION;
                static OcmMetadataKey *OWNER;
                static OcmMetadataKey *PREVIOUS_MESSAGE_EPOCH;
                static OcmMetadataKey *PREVIOUS_MESSAGE_ID;
                static OcmMetadataKey *PRM_MSG_LINK;
                static OcmMetadataKey *RDM_MSG_LINK;
                static OcmMetadataKey *SCLK_OFFSET_AT_EPOCH;
                static OcmMetadataKey *SCLK_SEC_PER_SI_SEC;
                static OcmMetadataKey *START_TIME;
                static OcmMetadataKey *STOP_TIME;
                static OcmMetadataKey *TAIMUTC_AT_TZERO;
                static OcmMetadataKey *TDM_MSG_LINK;
                static OcmMetadataKey *TECH_ADDRESS;
                static OcmMetadataKey *TECH_EMAIL;
                static OcmMetadataKey *TECH_ORG;
                static OcmMetadataKey *TECH_PHONE;
                static OcmMetadataKey *TECH_POC;
                static OcmMetadataKey *TECH_POSITION;
                static OcmMetadataKey *TIME_SPAN;
                static OcmMetadataKey *UT1MUTC_AT_TZERO;

                jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata &) const;
                static OcmMetadataKey valueOf(const ::java::lang::String &);
                static JArray< OcmMetadataKey > values();
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
              extern PyType_Def PY_TYPE_DEF(OcmMetadataKey);
              extern PyTypeObject *PY_TYPE(OcmMetadataKey);

              class t_OcmMetadataKey {
              public:
                PyObject_HEAD
                OcmMetadataKey object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_OcmMetadataKey *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const OcmMetadataKey&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const OcmMetadataKey&, PyTypeObject *);
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
