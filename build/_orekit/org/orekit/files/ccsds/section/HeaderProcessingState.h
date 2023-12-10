#ifndef org_orekit_files_ccsds_section_HeaderProcessingState_H
#define org_orekit_files_ccsds_section_HeaderProcessingState_H

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
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          class HeaderProcessingState : public ::java::lang::Object {
           public:
            enum {
              mid_init$_89ca4960a54b0876,
              mid_processToken_aa256c47fb7b26f1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HeaderProcessingState(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HeaderProcessingState(const HeaderProcessingState& obj) : ::java::lang::Object(obj) {}

            HeaderProcessingState(const ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser &);

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
          extern PyType_Def PY_TYPE_DEF(HeaderProcessingState);
          extern PyTypeObject *PY_TYPE(HeaderProcessingState);

          class t_HeaderProcessingState {
          public:
            PyObject_HEAD
            HeaderProcessingState object;
            static PyObject *wrap_Object(const HeaderProcessingState&);
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
