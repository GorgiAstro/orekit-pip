#ifndef org_orekit_files_ccsds_ndm_odm_ocm_OrbitCovarianceHistoryMetadataKey_H
#define org_orekit_files_ccsds_ndm_odm_ocm_OrbitCovarianceHistoryMetadataKey_H

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
              class OrbitCovarianceHistoryMetadata;
              class OrbitCovarianceHistoryMetadataKey;
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

              class OrbitCovarianceHistoryMetadataKey : public ::java::lang::Enum {
               public:
                enum {
                  mid_process_09eafc6941d7bef7,
                  mid_valueOf_68e5ab106f806138,
                  mid_values_fecf9ca8ab6cb863,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit OrbitCovarianceHistoryMetadataKey(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OrbitCovarianceHistoryMetadataKey(const OrbitCovarianceHistoryMetadataKey& obj) : ::java::lang::Enum(obj) {}

                static OrbitCovarianceHistoryMetadataKey *COMMENT;
                static OrbitCovarianceHistoryMetadataKey *COV_BASIS;
                static OrbitCovarianceHistoryMetadataKey *COV_BASIS_ID;
                static OrbitCovarianceHistoryMetadataKey *COV_CONFIDENCE;
                static OrbitCovarianceHistoryMetadataKey *COV_FRAME_EPOCH;
                static OrbitCovarianceHistoryMetadataKey *COV_ID;
                static OrbitCovarianceHistoryMetadataKey *COV_NEXT_ID;
                static OrbitCovarianceHistoryMetadataKey *COV_ORDERING;
                static OrbitCovarianceHistoryMetadataKey *COV_PREV_ID;
                static OrbitCovarianceHistoryMetadataKey *COV_REF_FRAME;
                static OrbitCovarianceHistoryMetadataKey *COV_SCALE_MAX;
                static OrbitCovarianceHistoryMetadataKey *COV_SCALE_MIN;
                static OrbitCovarianceHistoryMetadataKey *COV_TYPE;
                static OrbitCovarianceHistoryMetadataKey *COV_UNITS;

                jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata &) const;
                static OrbitCovarianceHistoryMetadataKey valueOf(const ::java::lang::String &);
                static JArray< OrbitCovarianceHistoryMetadataKey > values();
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
              extern PyType_Def PY_TYPE_DEF(OrbitCovarianceHistoryMetadataKey);
              extern PyTypeObject *PY_TYPE(OrbitCovarianceHistoryMetadataKey);

              class t_OrbitCovarianceHistoryMetadataKey {
              public:
                PyObject_HEAD
                OrbitCovarianceHistoryMetadataKey object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_OrbitCovarianceHistoryMetadataKey *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const OrbitCovarianceHistoryMetadataKey&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const OrbitCovarianceHistoryMetadataKey&, PyTypeObject *);
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
