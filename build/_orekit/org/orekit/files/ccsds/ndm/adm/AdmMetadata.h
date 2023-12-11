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
                mid_init$_0640e6acf969ed28,
                mid_getCenter_c642bce266d6d89a,
                mid_getHasCreatableBody_89b302893bdbe1f1,
                mid_getLaunchNumber_412668abc8d889e9,
                mid_getLaunchPiece_3cffd47377eca18a,
                mid_getLaunchYear_412668abc8d889e9,
                mid_getObjectID_3cffd47377eca18a,
                mid_getObjectName_3cffd47377eca18a,
                mid_setCenter_e6f755c267d91c26,
                mid_setObjectID_f5ffdf29129ef90a,
                mid_setObjectName_f5ffdf29129ef90a,
                mid_validate_10f281d777284cea,
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
