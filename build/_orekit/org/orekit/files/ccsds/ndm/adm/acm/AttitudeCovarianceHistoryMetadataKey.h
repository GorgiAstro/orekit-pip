#ifndef org_orekit_files_ccsds_ndm_adm_acm_AttitudeCovarianceHistoryMetadataKey_H
#define org_orekit_files_ccsds_ndm_adm_acm_AttitudeCovarianceHistoryMetadataKey_H

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
            namespace acm {
              class AttitudeCovarianceHistoryMetadataKey;
              class AttitudeCovarianceHistoryMetadata;
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
            namespace acm {

              class AttitudeCovarianceHistoryMetadataKey : public ::java::lang::Enum {
               public:
                enum {
                  mid_process_1f1fbacba6da77e2,
                  mid_valueOf_9fc6548b11f261cc,
                  mid_values_b54a02921be8c5bd,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AttitudeCovarianceHistoryMetadataKey(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AttitudeCovarianceHistoryMetadataKey(const AttitudeCovarianceHistoryMetadataKey& obj) : ::java::lang::Enum(obj) {}

                static AttitudeCovarianceHistoryMetadataKey *COMMENT;
                static AttitudeCovarianceHistoryMetadataKey *COV_BASIS;
                static AttitudeCovarianceHistoryMetadataKey *COV_BASIS_ID;
                static AttitudeCovarianceHistoryMetadataKey *COV_ID;
                static AttitudeCovarianceHistoryMetadataKey *COV_PREV_ID;
                static AttitudeCovarianceHistoryMetadataKey *COV_REF_FRAME;
                static AttitudeCovarianceHistoryMetadataKey *COV_TYPE;

                jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata &) const;
                static AttitudeCovarianceHistoryMetadataKey valueOf(const ::java::lang::String &);
                static JArray< AttitudeCovarianceHistoryMetadataKey > values();
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
              extern PyType_Def PY_TYPE_DEF(AttitudeCovarianceHistoryMetadataKey);
              extern PyTypeObject *PY_TYPE(AttitudeCovarianceHistoryMetadataKey);

              class t_AttitudeCovarianceHistoryMetadataKey {
              public:
                PyObject_HEAD
                AttitudeCovarianceHistoryMetadataKey object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_AttitudeCovarianceHistoryMetadataKey *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const AttitudeCovarianceHistoryMetadataKey&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const AttitudeCovarianceHistoryMetadataKey&, PyTypeObject *);
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
