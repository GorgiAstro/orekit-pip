#ifndef org_orekit_files_ccsds_ndm_cdm_AdditionalCovarianceMetadataKey_H
#define org_orekit_files_ccsds_ndm_cdm_AdditionalCovarianceMetadataKey_H

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
          namespace cdm {
            class AdditionalCovarianceMetadata;
            class AdditionalCovarianceMetadataKey;
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
          namespace cdm {

            class AdditionalCovarianceMetadataKey : public ::java::lang::Enum {
             public:
              enum {
                mid_process_7b1045fc7401b1a9,
                mid_valueOf_baf4b765ae43c544,
                mid_values_a077849e82e8a19a,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AdditionalCovarianceMetadataKey(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AdditionalCovarianceMetadataKey(const AdditionalCovarianceMetadataKey& obj) : ::java::lang::Enum(obj) {}

              static AdditionalCovarianceMetadataKey *COMMENT;
              static AdditionalCovarianceMetadataKey *CSCALE_FACTOR;
              static AdditionalCovarianceMetadataKey *CSCALE_FACTOR_MAX;
              static AdditionalCovarianceMetadataKey *CSCALE_FACTOR_MIN;
              static AdditionalCovarianceMetadataKey *DCP_SENSITIVITY_VECTOR_POSITION;
              static AdditionalCovarianceMetadataKey *DCP_SENSITIVITY_VECTOR_VELOCITY;
              static AdditionalCovarianceMetadataKey *DENSITY_FORECAST_UNCERTAINTY;
              static AdditionalCovarianceMetadataKey *SCREENING_DATA_SOURCE;

              jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata &) const;
              static AdditionalCovarianceMetadataKey valueOf(const ::java::lang::String &);
              static JArray< AdditionalCovarianceMetadataKey > values();
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
            extern PyType_Def PY_TYPE_DEF(AdditionalCovarianceMetadataKey);
            extern PyTypeObject *PY_TYPE(AdditionalCovarianceMetadataKey);

            class t_AdditionalCovarianceMetadataKey {
            public:
              PyObject_HEAD
              AdditionalCovarianceMetadataKey object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_AdditionalCovarianceMetadataKey *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const AdditionalCovarianceMetadataKey&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const AdditionalCovarianceMetadataKey&, PyTypeObject *);
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
