#ifndef org_orekit_files_ccsds_ndm_adm_AdmMetadata_H
#define org_orekit_files_ccsds_ndm_adm_AdmMetadata_H

#include "org/orekit/files/ccsds/section/Metadata.h"

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
        namespace definitions {
          class BodyFacade;
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
          namespace adm {

            class AdmMetadata : public ::org::orekit::files::ccsds::section::Metadata {
             public:
              enum {
                mid_init$_7ae3461a92a43152,
                mid_getCenter_78375ee64056f203,
                mid_getHasCreatableBody_e470b6d9e0d979db,
                mid_getLaunchNumber_f2f64475e4580546,
                mid_getLaunchPiece_0090f7797e403f43,
                mid_getLaunchYear_f2f64475e4580546,
                mid_getObjectID_0090f7797e403f43,
                mid_getObjectName_0090f7797e403f43,
                mid_setCenter_4937bc9292f008b1,
                mid_setObjectID_e939c6558ae8d313,
                mid_setObjectName_e939c6558ae8d313,
                mid_validate_77e0f9a1f260e2e5,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AdmMetadata(jobject obj) : ::org::orekit::files::ccsds::section::Metadata(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AdmMetadata(const AdmMetadata& obj) : ::org::orekit::files::ccsds::section::Metadata(obj) {}

              AdmMetadata();

              ::org::orekit::files::ccsds::definitions::BodyFacade getCenter() const;
              jboolean getHasCreatableBody() const;
              jint getLaunchNumber() const;
              ::java::lang::String getLaunchPiece() const;
              jint getLaunchYear() const;
              ::java::lang::String getObjectID() const;
              ::java::lang::String getObjectName() const;
              void setCenter(const ::org::orekit::files::ccsds::definitions::BodyFacade &) const;
              void setObjectID(const ::java::lang::String &) const;
              void setObjectName(const ::java::lang::String &) const;
              void validate(jdouble) const;
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
          namespace adm {
            extern PyType_Def PY_TYPE_DEF(AdmMetadata);
            extern PyTypeObject *PY_TYPE(AdmMetadata);

            class t_AdmMetadata {
            public:
              PyObject_HEAD
              AdmMetadata object;
              static PyObject *wrap_Object(const AdmMetadata&);
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
