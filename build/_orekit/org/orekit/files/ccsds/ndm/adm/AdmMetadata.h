#ifndef org_orekit_files_ccsds_ndm_adm_AdmMetadata_H
#define org_orekit_files_ccsds_ndm_adm_AdmMetadata_H

#include "org/orekit/files/ccsds/section/Metadata.h"

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
          namespace adm {

            class AdmMetadata : public ::org::orekit::files::ccsds::section::Metadata {
             public:
              enum {
                mid_init$_ff7cb6c242604316,
                mid_getCenter_540df4afb4ddb1b4,
                mid_getHasCreatableBody_eee3de00fe971136,
                mid_getLaunchNumber_d6ab429752e7c267,
                mid_getLaunchPiece_d2c8eb4129821f0e,
                mid_getLaunchYear_d6ab429752e7c267,
                mid_getObjectID_d2c8eb4129821f0e,
                mid_getObjectName_d2c8eb4129821f0e,
                mid_setCenter_9fc8078d81282211,
                mid_setObjectID_105e1eadb709d9ac,
                mid_setObjectName_105e1eadb709d9ac,
                mid_validate_1ad26e8c8c0cd65b,
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
