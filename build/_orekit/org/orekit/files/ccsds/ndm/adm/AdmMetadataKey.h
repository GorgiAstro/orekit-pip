#ifndef org_orekit_files_ccsds_ndm_adm_AdmMetadataKey_H
#define org_orekit_files_ccsds_ndm_adm_AdmMetadataKey_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            class AdmMetadataKey;
            class AdmMetadata;
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

            class AdmMetadataKey : public ::java::lang::Enum {
             public:
              enum {
                mid_process_f4d574d3ad330d8c,
                mid_valueOf_c8088b8b34807ec2,
                mid_values_b24ce319e3b2ab76,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AdmMetadataKey(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AdmMetadataKey(const AdmMetadataKey& obj) : ::java::lang::Enum(obj) {}

              static AdmMetadataKey *CENTER_NAME;
              static AdmMetadataKey *OBJECT_NAME;

              jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::adm::AdmMetadata &) const;
              static AdmMetadataKey valueOf(const ::java::lang::String &);
              static JArray< AdmMetadataKey > values();
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
          namespace adm {
            extern PyType_Def PY_TYPE_DEF(AdmMetadataKey);
            extern PyTypeObject *PY_TYPE(AdmMetadataKey);

            class t_AdmMetadataKey {
            public:
              PyObject_HEAD
              AdmMetadataKey object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_AdmMetadataKey *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const AdmMetadataKey&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const AdmMetadataKey&, PyTypeObject *);
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
