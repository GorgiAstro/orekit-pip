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
                mid_init$_a1fa5dae97ea5ed2,
                mid_getCenter_52253a5b5c02abfe,
                mid_getHasCreatableBody_9ab94ac1dc23b105,
                mid_getLaunchNumber_55546ef6a647f39b,
                mid_getLaunchPiece_1c1fa1e935d6cdcf,
                mid_getLaunchYear_55546ef6a647f39b,
                mid_getObjectID_1c1fa1e935d6cdcf,
                mid_getObjectName_1c1fa1e935d6cdcf,
                mid_setCenter_564458ee450fa323,
                mid_setObjectID_734b91ac30d5f9b4,
                mid_setObjectName_734b91ac30d5f9b4,
                mid_validate_8ba9fe7a847cecad,
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
