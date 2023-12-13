#ifndef org_orekit_files_ccsds_ndm_cdm_CdmMetadataKey_H
#define org_orekit_files_ccsds_ndm_cdm_CdmMetadataKey_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            class CdmMetadata;
            class CdmMetadataKey;
          }
        }
        namespace utils {
          namespace lexical {
            class ParseToken;
          }
          class ContextBinding;
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
          namespace cdm {

            class CdmMetadataKey : public ::java::lang::Enum {
             public:
              enum {
                mid_process_fb211c400eff2692,
                mid_valueOf_b0f560972826b0b8,
                mid_values_6d420f07df58e24b,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CdmMetadataKey(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CdmMetadataKey(const CdmMetadataKey& obj) : ::java::lang::Enum(obj) {}

              static CdmMetadataKey *ADM_MSG_LINK;
              static CdmMetadataKey *ALT_COV_REF_FRAME;
              static CdmMetadataKey *ALT_COV_TYPE;
              static CdmMetadataKey *ATMOSPHERIC_MODEL;
              static CdmMetadataKey *CATALOG_NAME;
              static CdmMetadataKey *COVARIANCE_METHOD;
              static CdmMetadataKey *COVARIANCE_SOURCE;
              static CdmMetadataKey *EARTH_TIDES;
              static CdmMetadataKey *EPHEMERIS_NAME;
              static CdmMetadataKey *GRAVITY_MODEL;
              static CdmMetadataKey *INTERNATIONAL_DESIGNATOR;
              static CdmMetadataKey *INTRACK_THRUST;
              static CdmMetadataKey *MANEUVERABLE;
              static CdmMetadataKey *N_BODY_PERTURBATIONS;
              static CdmMetadataKey *OBJECT;
              static CdmMetadataKey *OBJECT_DESIGNATOR;
              static CdmMetadataKey *OBJECT_NAME;
              static CdmMetadataKey *OBJECT_TYPE;
              static CdmMetadataKey *OBS_BEFORE_NEXT_MESSAGE;
              static CdmMetadataKey *ODM_MSG_LINK;
              static CdmMetadataKey *OPERATOR_CONTACT_POSITION;
              static CdmMetadataKey *OPERATOR_EMAIL;
              static CdmMetadataKey *OPERATOR_ORGANIZATION;
              static CdmMetadataKey *OPERATOR_PHONE;
              static CdmMetadataKey *ORBIT_CENTER;
              static CdmMetadataKey *REF_FRAME;
              static CdmMetadataKey *SOLAR_RAD_PRESSURE;

              jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata &) const;
              static CdmMetadataKey valueOf(const ::java::lang::String &);
              static JArray< CdmMetadataKey > values();
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
          namespace cdm {
            extern PyType_Def PY_TYPE_DEF(CdmMetadataKey);
            extern PyTypeObject *PY_TYPE(CdmMetadataKey);

            class t_CdmMetadataKey {
            public:
              PyObject_HEAD
              CdmMetadataKey object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_CdmMetadataKey *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const CdmMetadataKey&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const CdmMetadataKey&, PyTypeObject *);
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
