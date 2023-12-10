#ifndef org_orekit_files_ccsds_section_MetadataKey_H
#define org_orekit_files_ccsds_section_MetadataKey_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {
          class Metadata;
          class MetadataKey;
        }
        namespace utils {
          class ContextBinding;
          namespace lexical {
            class ParseToken;
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
        namespace section {

          class MetadataKey : public ::java::lang::Enum {
           public:
            enum {
              mid_process_f6faac1eea0db10c,
              mid_valueOf_4f2d2fd275ae2a29,
              mid_values_e8e28154be4e8a98,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MetadataKey(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MetadataKey(const MetadataKey& obj) : ::java::lang::Enum(obj) {}

            static MetadataKey *COMMENT;
            static MetadataKey *TIME_SYSTEM;

            jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::section::Metadata &) const;
            static MetadataKey valueOf(const ::java::lang::String &);
            static JArray< MetadataKey > values();
          };
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
        namespace section {
          extern PyType_Def PY_TYPE_DEF(MetadataKey);
          extern PyTypeObject *PY_TYPE(MetadataKey);

          class t_MetadataKey {
          public:
            PyObject_HEAD
            MetadataKey object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_MetadataKey *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const MetadataKey&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const MetadataKey&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
