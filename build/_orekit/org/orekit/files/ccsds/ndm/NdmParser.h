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
              mid_addComment_fd2162b8a05a22fe,
              mid_build_5b240f5241934437,
              mid_getSpecialXmlElementsBuilders_1e62c2f73fbdd1c4,
              mid_reset_a580586827f4ec13,
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
