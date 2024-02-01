#ifndef org_orekit_files_ccsds_ndm_adm_aem_AemMetadataKey_H
#define org_orekit_files_ccsds_ndm_adm_aem_AemMetadataKey_H

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
          namespace adm {
            namespace aem {
              class AemMetadata;
              class AemMetadataKey;
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
          namespace adm {
            namespace aem {

              class AemMetadataKey : public ::java::lang::Enum {
               public:
                enum {
                  mid_process_e6c30b192f52a997,
                  mid_valueOf_a01b0e5039ad4ad8,
                  mid_values_b2d3a76f7e5eda1b,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AemMetadataKey(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AemMetadataKey(const AemMetadataKey& obj) : ::java::lang::Enum(obj) {}

                static AemMetadataKey *ANGVEL_FRAME;
                static AemMetadataKey *ATTITUDE_DIR;
                static AemMetadataKey *ATTITUDE_TYPE;
                static AemMetadataKey *EULER_ROT_SEQ;
                static AemMetadataKey *INTERPOLATION_DEGREE;
                static AemMetadataKey *INTERPOLATION_METHOD;
                static AemMetadataKey *QUATERNION_TYPE;
                static AemMetadataKey *RATE_FRAME;
                static AemMetadataKey *REF_FRAME_A;
                static AemMetadataKey *REF_FRAME_B;
                static AemMetadataKey *START_TIME;
                static AemMetadataKey *STOP_TIME;
                static AemMetadataKey *USEABLE_START_TIME;
                static AemMetadataKey *USEABLE_STOP_TIME;

                jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata &) const;
                static AemMetadataKey valueOf(const ::java::lang::String &);
                static JArray< AemMetadataKey > values();
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
            namespace aem {
              extern PyType_Def PY_TYPE_DEF(AemMetadataKey);
              extern PyTypeObject *PY_TYPE(AemMetadataKey);

              class t_AemMetadataKey {
              public:
                PyObject_HEAD
                AemMetadataKey object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_AemMetadataKey *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const AemMetadataKey&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const AemMetadataKey&, PyTypeObject *);
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
