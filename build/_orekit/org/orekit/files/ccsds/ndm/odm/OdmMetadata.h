#ifndef org_orekit_files_ccsds_ndm_odm_OdmMetadata_H
#define org_orekit_files_ccsds_ndm_odm_OdmMetadata_H

#include "org/orekit/files/ccsds/section/Metadata.h"

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

            class OdmMetadata : public ::org::orekit::files::ccsds::section::Metadata {
             public:
              enum {
                mid_getObjectName_d2c8eb4129821f0e,
                mid_setObjectName_105e1eadb709d9ac,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit OdmMetadata(jobject obj) : ::org::orekit::files::ccsds::section::Metadata(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              OdmMetadata(const OdmMetadata& obj) : ::org::orekit::files::ccsds::section::Metadata(obj) {}

              ::java::lang::String getObjectName() const;
              void setObjectName(const ::java::lang::String &) const;
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
            extern PyType_Def PY_TYPE_DEF(OdmMetadata);
            extern PyTypeObject *PY_TYPE(OdmMetadata);

            class t_OdmMetadata {
            public:
              PyObject_HEAD
              OdmMetadata object;
              static PyObject *wrap_Object(const OdmMetadata&);
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
