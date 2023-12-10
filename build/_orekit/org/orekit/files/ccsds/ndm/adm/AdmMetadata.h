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
                mid_init$_0fa09c18fee449d5,
                mid_getCenter_23d31d5db0bee8e9,
                mid_getHasCreatableBody_b108b35ef48e27bd,
                mid_getLaunchNumber_570ce0828f81a2c1,
                mid_getLaunchPiece_11b109bd155ca898,
                mid_getLaunchYear_570ce0828f81a2c1,
                mid_getObjectID_11b109bd155ca898,
                mid_getObjectName_11b109bd155ca898,
                mid_setCenter_32e120c3a0353f27,
                mid_setObjectID_d0bc48d5b00dc40c,
                mid_setObjectName_d0bc48d5b00dc40c,
                mid_validate_17db3a65980d3441,
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
