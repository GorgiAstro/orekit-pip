#ifndef org_orekit_files_ccsds_ndm_cdm_CdmHeaderProcessingState_H
#define org_orekit_files_ccsds_ndm_cdm_CdmHeaderProcessingState_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            class CdmParser;
          }
        }
        namespace utils {
          namespace parsing {
            class ProcessingState;
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
        namespace ndm {
          namespace cdm {

            class CdmHeaderProcessingState : public ::java::lang::Object {
             public:
              enum {
                mid_init$_77422ddc3ebc2295,
                mid_processToken_48865e799ebb0b92,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CdmHeaderProcessingState(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CdmHeaderProcessingState(const CdmHeaderProcessingState& obj) : ::java::lang::Object(obj) {}

              CdmHeaderProcessingState(const ::org::orekit::files::ccsds::ndm::cdm::CdmParser &);

              jboolean processToken(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &) const;
            };
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
          namespace cdm {
            extern PyType_Def PY_TYPE_DEF(CdmHeaderProcessingState);
            extern PyTypeObject *PY_TYPE(CdmHeaderProcessingState);

            class t_CdmHeaderProcessingState {
            public:
              PyObject_HEAD
              CdmHeaderProcessingState object;
              static PyObject *wrap_Object(const CdmHeaderProcessingState&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
