#ifndef org_orekit_files_ccsds_section_MetadataKey_H
#define org_orekit_files_ccsds_section_MetadataKey_H

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
        namespace section {
          class MetadataKey;
          class Metadata;
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
              mid_process_6e1cbf265f95fa8c,
              mid_valueOf_d9c9d3d33db5e28f,
              mid_values_bb1f82657412de2c,
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
