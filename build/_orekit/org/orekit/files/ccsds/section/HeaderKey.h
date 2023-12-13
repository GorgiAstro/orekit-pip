#ifndef org_orekit_files_ccsds_section_HeaderKey_H
#define org_orekit_files_ccsds_section_HeaderKey_H

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
          class Header;
          class HeaderKey;
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

          class HeaderKey : public ::java::lang::Enum {
           public:
            enum {
              mid_process_149808c0cf85c37e,
              mid_valueOf_ff1e64ac0d1e9c2e,
              mid_values_d8fadf6e84e608fd,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HeaderKey(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HeaderKey(const HeaderKey& obj) : ::java::lang::Enum(obj) {}

            static HeaderKey *CLASSIFICATION;
            static HeaderKey *COMMENT;
            static HeaderKey *CREATION_DATE;
            static HeaderKey *MESSAGE_ID;
            static HeaderKey *ORIGINATOR;

            jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::section::Header &) const;
            static HeaderKey valueOf(const ::java::lang::String &);
            static JArray< HeaderKey > values();
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
          extern PyType_Def PY_TYPE_DEF(HeaderKey);
          extern PyTypeObject *PY_TYPE(HeaderKey);

          class t_HeaderKey {
          public:
            PyObject_HEAD
            HeaderKey object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_HeaderKey *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const HeaderKey&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const HeaderKey&, PyTypeObject *);
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
