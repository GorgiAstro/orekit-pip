#ifndef org_orekit_files_ccsds_ndm_cdm_StateVectorWriter_H
#define org_orekit_files_ccsds_ndm_cdm_StateVectorWriter_H

#include "org/orekit/files/ccsds/section/AbstractWriter.h"

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

            class StateVectorWriter : public ::org::orekit::files::ccsds::section::AbstractWriter {
             public:
              enum {
                mid_writeContent_fb222e851cd27682,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit StateVectorWriter(jobject obj) : ::org::orekit::files::ccsds::section::AbstractWriter(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              StateVectorWriter(const StateVectorWriter& obj) : ::org::orekit::files::ccsds::section::AbstractWriter(obj) {}
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
            extern PyType_Def PY_TYPE_DEF(StateVectorWriter);
            extern PyTypeObject *PY_TYPE(StateVectorWriter);

            class t_StateVectorWriter {
            public:
              PyObject_HEAD
              StateVectorWriter object;
              static PyObject *wrap_Object(const StateVectorWriter&);
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
