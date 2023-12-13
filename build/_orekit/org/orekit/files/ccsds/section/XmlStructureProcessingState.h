#ifndef org_orekit_files_ccsds_section_XmlStructureProcessingState_H
#define org_orekit_files_ccsds_section_XmlStructureProcessingState_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {
            class ProcessingState;
            class AbstractConstituentParser;
          }
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

          class XmlStructureProcessingState : public ::java::lang::Object {
           public:
            enum {
              mid_init$_136315fcdbcf2678,
              mid_processToken_5949d4df22f33350,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit XmlStructureProcessingState(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            XmlStructureProcessingState(const XmlStructureProcessingState& obj) : ::java::lang::Object(obj) {}

            XmlStructureProcessingState(const ::java::lang::String &, const ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser &);

            jboolean processToken(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &) const;
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
          extern PyType_Def PY_TYPE_DEF(XmlStructureProcessingState);
          extern PyTypeObject *PY_TYPE(XmlStructureProcessingState);

          class t_XmlStructureProcessingState {
          public:
            PyObject_HEAD
            XmlStructureProcessingState object;
            static PyObject *wrap_Object(const XmlStructureProcessingState&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
