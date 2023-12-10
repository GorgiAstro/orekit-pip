#ifndef org_orekit_files_ccsds_ndm_adm_AdmCommonMetadataKey_H
#define org_orekit_files_ccsds_ndm_adm_AdmCommonMetadataKey_H

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
            class AdmMetadata;
            class AdmCommonMetadataKey;
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

            class AdmCommonMetadataKey : public ::java::lang::Enum {
             public:
              enum {
                mid_process_3f621e0676a56eac,
                mid_valueOf_e55a7fac0a6d5afb,
                mid_values_7a7523b02927a2ee,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AdmCommonMetadataKey(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AdmCommonMetadataKey(const AdmCommonMetadataKey& obj) : ::java::lang::Enum(obj) {}

              static AdmCommonMetadataKey *OBJECT_ID;

              jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::adm::AdmMetadata &) const;
              static AdmCommonMetadataKey valueOf(const ::java::lang::String &);
              static JArray< AdmCommonMetadataKey > values();
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
            extern PyType_Def PY_TYPE_DEF(AdmCommonMetadataKey);
            extern PyTypeObject *PY_TYPE(AdmCommonMetadataKey);

            class t_AdmCommonMetadataKey {
            public:
              PyObject_HEAD
              AdmCommonMetadataKey object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_AdmCommonMetadataKey *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const AdmCommonMetadataKey&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const AdmCommonMetadataKey&, PyTypeObject *);
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
