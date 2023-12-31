#ifndef org_orekit_files_ccsds_ndm_odm_omm_OmmMetadataKey_H
#define org_orekit_files_ccsds_ndm_odm_omm_OmmMetadataKey_H

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
            namespace omm {
              class OmmMetadata;
              class OmmMetadataKey;
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
            namespace omm {

              class OmmMetadataKey : public ::java::lang::Enum {
               public:
                enum {
                  mid_process_1aa2624f0f391000,
                  mid_valueOf_606e01385a396a20,
                  mid_values_a7eff504fe925ecd,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit OmmMetadataKey(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OmmMetadataKey(const OmmMetadataKey& obj) : ::java::lang::Enum(obj) {}

                static OmmMetadataKey *MEAN_ELEMENT_THEORY;

                jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadata &) const;
                static OmmMetadataKey valueOf(const ::java::lang::String &);
                static JArray< OmmMetadataKey > values();
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
            namespace omm {
              extern PyType_Def PY_TYPE_DEF(OmmMetadataKey);
              extern PyTypeObject *PY_TYPE(OmmMetadataKey);

              class t_OmmMetadataKey {
              public:
                PyObject_HEAD
                OmmMetadataKey object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_OmmMetadataKey *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const OmmMetadataKey&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const OmmMetadataKey&, PyTypeObject *);
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
