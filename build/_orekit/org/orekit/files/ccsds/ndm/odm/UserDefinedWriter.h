#ifndef org_orekit_files_ccsds_ndm_odm_UserDefinedWriter_H
#define org_orekit_files_ccsds_ndm_odm_UserDefinedWriter_H

#include "org/orekit/files/ccsds/section/AbstractWriter.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            class UserDefined;
          }
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
          namespace odm {

            class UserDefinedWriter : public ::org::orekit::files::ccsds::section::AbstractWriter {
             public:
              enum {
                mid_init$_22bf6791b643d8df,
                mid_writeContent_05c6d36d73082fa6,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit UserDefinedWriter(jobject obj) : ::org::orekit::files::ccsds::section::AbstractWriter(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              UserDefinedWriter(const UserDefinedWriter& obj) : ::org::orekit::files::ccsds::section::AbstractWriter(obj) {}

              UserDefinedWriter(const ::java::lang::String &, const ::java::lang::String &, const ::org::orekit::files::ccsds::ndm::odm::UserDefined &);
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
            extern PyType_Def PY_TYPE_DEF(UserDefinedWriter);
            extern PyTypeObject *PY_TYPE(UserDefinedWriter);

            class t_UserDefinedWriter {
            public:
              PyObject_HEAD
              UserDefinedWriter object;
              static PyObject *wrap_Object(const UserDefinedWriter&);
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
