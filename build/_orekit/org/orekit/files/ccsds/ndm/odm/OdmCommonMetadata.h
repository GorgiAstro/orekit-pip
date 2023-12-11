#ifndef org_orekit_files_ccsds_ndm_odm_OdmCommonMetadata_H
#define org_orekit_files_ccsds_ndm_odm_OdmCommonMetadata_H

#include "org/orekit/files/ccsds/ndm/odm/OdmMetadata.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          class ContextBinding;
        }
        namespace definitions {
          class BodyFacade;
          class FrameFacade;
        }
      }
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            class OdmCommonMetadata : public ::org::orekit::files::ccsds::ndm::odm::OdmMetadata {
             public:
              enum {
                mid_init$_0640e6acf969ed28,
                mid_finalizeMetadata_f673e6e131e83586,
                mid_getCenter_c642bce266d6d89a,
                mid_getFrame_6c9bc0a928c56d4e,
                mid_getFrameEpoch_7a97f7e149e79afb,
                mid_getLaunchNumber_412668abc8d889e9,
                mid_getLaunchPiece_3cffd47377eca18a,
                mid_getLaunchYear_412668abc8d889e9,
                mid_getObjectID_3cffd47377eca18a,
                mid_getReferenceFrame_98f5fcaff3e3f9d2,
                mid_setCenter_e6f755c267d91c26,
                mid_setFrameEpoch_20affcbd28542333,
                mid_setFrameEpochString_f5ffdf29129ef90a,
                mid_setObjectID_f5ffdf29129ef90a,
                mid_setReferenceFrame_f55eee1236275bb1,
                mid_validate_10f281d777284cea,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit OdmCommonMetadata(jobject obj) : ::org::orekit::files::ccsds::ndm::odm::OdmMetadata(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              OdmCommonMetadata(const OdmCommonMetadata& obj) : ::org::orekit::files::ccsds::ndm::odm::OdmMetadata(obj) {}

              OdmCommonMetadata();

              void finalizeMetadata(const ::org::orekit::files::ccsds::utils::ContextBinding &) const;
              ::org::orekit::files::ccsds::definitions::BodyFacade getCenter() const;
              ::org::orekit::frames::Frame getFrame() const;
              ::org::orekit::time::AbsoluteDate getFrameEpoch() const;
              jint getLaunchNumber() const;
              ::java::lang::String getLaunchPiece() const;
              jint getLaunchYear() const;
              ::java::lang::String getObjectID() const;
              ::org::orekit::files::ccsds::definitions::FrameFacade getReferenceFrame() const;
              void setCenter(const ::org::orekit::files::ccsds::definitions::BodyFacade &) const;
              void setFrameEpoch(const ::org::orekit::time::AbsoluteDate &) const;
              void setFrameEpochString(const ::java::lang::String &) const;
              void setObjectID(const ::java::lang::String &) const;
              void setReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade &) const;
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
          namespace odm {
            extern PyType_Def PY_TYPE_DEF(OdmCommonMetadata);
            extern PyTypeObject *PY_TYPE(OdmCommonMetadata);

            class t_OdmCommonMetadata {
            public:
              PyObject_HEAD
              OdmCommonMetadata object;
              static PyObject *wrap_Object(const OdmCommonMetadata&);
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
