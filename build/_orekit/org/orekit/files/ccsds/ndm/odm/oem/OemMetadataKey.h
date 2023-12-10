#ifndef org_orekit_files_ccsds_ndm_odm_oem_OemMetadataKey_H
#define org_orekit_files_ccsds_ndm_odm_oem_OemMetadataKey_H

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
            namespace oem {
              class OemMetadataKey;
              class OemMetadata;
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
            namespace oem {

              class OemMetadataKey : public ::java::lang::Enum {
               public:
                enum {
                  mid_process_892dd9ba4cb3beb3,
                  mid_valueOf_1a58bc0ccc127771,
                  mid_values_55deafb4722ef4b4,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit OemMetadataKey(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OemMetadataKey(const OemMetadataKey& obj) : ::java::lang::Enum(obj) {}

                static OemMetadataKey *INTERPOLATION;
                static OemMetadataKey *INTERPOLATION_DEGREE;
                static OemMetadataKey *START_TIME;
                static OemMetadataKey *STOP_TIME;
                static OemMetadataKey *USEABLE_START_TIME;
                static OemMetadataKey *USEABLE_STOP_TIME;

                jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata &) const;
                static OemMetadataKey valueOf(const ::java::lang::String &);
                static JArray< OemMetadataKey > values();
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
            namespace oem {
              extern PyType_Def PY_TYPE_DEF(OemMetadataKey);
              extern PyTypeObject *PY_TYPE(OemMetadataKey);

              class t_OemMetadataKey {
              public:
                PyObject_HEAD
                OemMetadataKey object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_OemMetadataKey *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const OemMetadataKey&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const OemMetadataKey&, PyTypeObject *);
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
