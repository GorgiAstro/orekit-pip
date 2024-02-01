#ifndef org_orekit_files_ccsds_ndm_adm_acm_AttitudeStateHistoryMetadataKey_H
#define org_orekit_files_ccsds_ndm_adm_acm_AttitudeStateHistoryMetadataKey_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              class AttitudeStateHistoryMetadataKey;
              class AttitudeStateHistoryMetadata;
            }
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
          namespace adm {
            namespace acm {

              class AttitudeStateHistoryMetadataKey : public ::java::lang::Enum {
               public:
                enum {
                  mid_process_91af28c6dea84a1d,
                  mid_valueOf_31901f62f33de415,
                  mid_values_fa0222e50e0cfb5d,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AttitudeStateHistoryMetadataKey(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AttitudeStateHistoryMetadataKey(const AttitudeStateHistoryMetadataKey& obj) : ::java::lang::Enum(obj) {}

                static AttitudeStateHistoryMetadataKey *ATT_BASIS;
                static AttitudeStateHistoryMetadataKey *ATT_BASIS_ID;
                static AttitudeStateHistoryMetadataKey *ATT_ID;
                static AttitudeStateHistoryMetadataKey *ATT_PREV_ID;
                static AttitudeStateHistoryMetadataKey *ATT_TYPE;
                static AttitudeStateHistoryMetadataKey *COMMENT;
                static AttitudeStateHistoryMetadataKey *EULER_ROT_SEQ;
                static AttitudeStateHistoryMetadataKey *NUMBER_STATES;
                static AttitudeStateHistoryMetadataKey *RATE_TYPE;
                static AttitudeStateHistoryMetadataKey *REF_FRAME_A;
                static AttitudeStateHistoryMetadataKey *REF_FRAME_B;

                jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata &) const;
                static AttitudeStateHistoryMetadataKey valueOf(const ::java::lang::String &);
                static JArray< AttitudeStateHistoryMetadataKey > values();
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
              extern PyType_Def PY_TYPE_DEF(AttitudeStateHistoryMetadataKey);
              extern PyTypeObject *PY_TYPE(AttitudeStateHistoryMetadataKey);

              class t_AttitudeStateHistoryMetadataKey {
              public:
                PyObject_HEAD
                AttitudeStateHistoryMetadataKey object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_AttitudeStateHistoryMetadataKey *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const AttitudeStateHistoryMetadataKey&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const AttitudeStateHistoryMetadataKey&, PyTypeObject *);
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
