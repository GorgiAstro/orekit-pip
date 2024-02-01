#ifndef org_orekit_files_ccsds_ndm_NdmParser_H
#define org_orekit_files_ccsds_ndm_NdmParser_H

#include "org/orekit/files/ccsds/utils/parsing/AbstractMessageParser.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            class XmlTokenBuilder;
          }
          class FileFormat;
        }
        namespace ndm {
          class ParserBuilder;
          class Ndm;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          class NdmParser : public ::org::orekit::files::ccsds::utils::parsing::AbstractMessageParser {
           public:
            enum {
              mid_addComment_df4c65b2aede5c41,
              mid_build_050f767ec488cf7d,
              mid_getSpecialXmlElementsBuilders_dbcb8bbac6b35e0d,
              mid_reset_a23f5f7531d9b583,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NdmParser(jobject obj) : ::org::orekit::files::ccsds::utils::parsing::AbstractMessageParser(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NdmParser(const NdmParser& obj) : ::org::orekit::files::ccsds::utils::parsing::AbstractMessageParser(obj) {}

            jboolean addComment(const ::java::lang::String &) const;
            ::org::orekit::files::ccsds::ndm::Ndm build() const;
            ::java::util::Map getSpecialXmlElementsBuilders() const;
            void reset(const ::org::orekit::files::ccsds::utils::FileFormat &) const;
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
        namespace ndm {
          extern PyType_Def PY_TYPE_DEF(NdmParser);
          extern PyTypeObject *PY_TYPE(NdmParser);

          class t_NdmParser {
          public:
            PyObject_HEAD
            NdmParser object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_NdmParser *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const NdmParser&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const NdmParser&, PyTypeObject *);
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
