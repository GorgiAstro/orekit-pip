#ifndef org_orekit_files_ccsds_section_KvnStructureProcessingState_H
#define org_orekit_files_ccsds_section_KvnStructureProcessingState_H

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

          class KvnStructureProcessingState : public ::java::lang::Object {
           public:
            enum {
              mid_init$_50726b2cbe411b54,
              mid_processToken_48865e799ebb0b92,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit KvnStructureProcessingState(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            KvnStructureProcessingState(const KvnStructureProcessingState& obj) : ::java::lang::Object(obj) {}

            KvnStructureProcessingState(const ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser &);

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
          extern PyType_Def PY_TYPE_DEF(KvnStructureProcessingState);
          extern PyTypeObject *PY_TYPE(KvnStructureProcessingState);

          class t_KvnStructureProcessingState {
          public:
            PyObject_HEAD
            KvnStructureProcessingState object;
            static PyObject *wrap_Object(const KvnStructureProcessingState&);
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
