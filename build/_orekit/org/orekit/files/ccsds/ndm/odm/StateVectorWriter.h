#ifndef org_orekit_files_ccsds_ndm_odm_StateVectorWriter_H
#define org_orekit_files_ccsds_ndm_odm_StateVectorWriter_H

#include "org/orekit/files/ccsds/section/AbstractWriter.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class TimeConverter;
        }
        namespace ndm {
          namespace odm {
            class StateVector;
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            class StateVectorWriter : public ::org::orekit::files::ccsds::section::AbstractWriter {
             public:
              enum {
                mid_init$_0c832d24faad04e3,
                mid_writeContent_05c6d36d73082fa6,
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

              StateVectorWriter(const ::java::lang::String &, const ::java::lang::String &, const ::org::orekit::files::ccsds::ndm::odm::StateVector &, const ::org::orekit::files::ccsds::definitions::TimeConverter &);
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
          namespace odm {
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
