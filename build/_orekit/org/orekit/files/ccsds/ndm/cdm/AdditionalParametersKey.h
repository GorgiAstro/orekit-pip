#ifndef org_orekit_files_ccsds_ndm_cdm_AdditionalParametersKey_H
#define org_orekit_files_ccsds_ndm_cdm_AdditionalParametersKey_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            class AdditionalParameters;
            class AdditionalParametersKey;
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

            class AdditionalParametersKey : public ::java::lang::Enum {
             public:
              enum {
                mid_process_4dded83b8b2e78c2,
                mid_valueOf_11fe4c995a2893ab,
                mid_values_ef7ca7f6f85c90c1,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AdditionalParametersKey(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AdditionalParametersKey(const AdditionalParametersKey& obj) : ::java::lang::Enum(obj) {}

              static AdditionalParametersKey *APOAPSIS_ALTITUDE;
              static AdditionalParametersKey *AREA_ALONG_OEB_INT;
              static AdditionalParametersKey *AREA_ALONG_OEB_MAX;
              static AdditionalParametersKey *AREA_ALONG_OEB_MIN;
              static AdditionalParametersKey *AREA_DRG;
              static AdditionalParametersKey *AREA_PC;
              static AdditionalParametersKey *AREA_PC_MAX;
              static AdditionalParametersKey *AREA_PC_MIN;
              static AdditionalParametersKey *AREA_SRP;
              static AdditionalParametersKey *CD_AREA_OVER_MASS;
              static AdditionalParametersKey *COMMENT;
              static AdditionalParametersKey *COV_CONFIDENCE;
              static AdditionalParametersKey *COV_CONFIDENCE_METHOD;
              static AdditionalParametersKey *CR_AREA_OVER_MASS;
              static AdditionalParametersKey *HBR;
              static AdditionalParametersKey *INCLINATION;
              static AdditionalParametersKey *MASS;
              static AdditionalParametersKey *OEB_INT;
              static AdditionalParametersKey *OEB_MAX;
              static AdditionalParametersKey *OEB_MIN;
              static AdditionalParametersKey *OEB_PARENT_FRAME;
              static AdditionalParametersKey *OEB_PARENT_FRAME_EPOCH;
              static AdditionalParametersKey *OEB_Q1;
              static AdditionalParametersKey *OEB_Q2;
              static AdditionalParametersKey *OEB_Q3;
              static AdditionalParametersKey *OEB_QC;
              static AdditionalParametersKey *PERIAPSIS_ALTITUDE;
              static AdditionalParametersKey *RCS;
              static AdditionalParametersKey *RCS_MAX;
              static AdditionalParametersKey *RCS_MIN;
              static AdditionalParametersKey *REFLECTANCE;
              static AdditionalParametersKey *SEDR;
              static AdditionalParametersKey *THRUST_ACCELERATION;
              static AdditionalParametersKey *VM_ABSOLUTE;
              static AdditionalParametersKey *VM_APPARENT;
              static AdditionalParametersKey *VM_APPARENT_MAX;
              static AdditionalParametersKey *VM_APPARENT_MIN;

              jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters &) const;
              static AdditionalParametersKey valueOf(const ::java::lang::String &);
              static JArray< AdditionalParametersKey > values();
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
            extern PyType_Def PY_TYPE_DEF(AdditionalParametersKey);
            extern PyTypeObject *PY_TYPE(AdditionalParametersKey);

            class t_AdditionalParametersKey {
            public:
              PyObject_HEAD
              AdditionalParametersKey object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_AdditionalParametersKey *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const AdditionalParametersKey&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const AdditionalParametersKey&, PyTypeObject *);
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
