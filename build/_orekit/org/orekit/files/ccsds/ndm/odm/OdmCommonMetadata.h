#ifndef org_orekit_files_ccsds_ndm_odm_OdmCommonMetadata_H
#define org_orekit_files_ccsds_ndm_odm_OdmCommonMetadata_H

#include "org/orekit/files/ccsds/ndm/odm/OdmMetadata.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class BodyFacade;
          class FrameFacade;
        }
        namespace utils {
          class ContextBinding;
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
                mid_init$_0fa09c18fee449d5,
                mid_finalizeMetadata_279465702b09ae7f,
                mid_getCenter_23d31d5db0bee8e9,
                mid_getFrame_b86f9f61d97a7244,
                mid_getFrameEpoch_85703d13e302437e,
                mid_getLaunchNumber_570ce0828f81a2c1,
                mid_getLaunchPiece_11b109bd155ca898,
                mid_getLaunchYear_570ce0828f81a2c1,
                mid_getObjectID_11b109bd155ca898,
                mid_getReferenceFrame_5d5dd95b04037824,
                mid_setCenter_32e120c3a0353f27,
                mid_setFrameEpoch_600a2a61652bc473,
                mid_setFrameEpochString_d0bc48d5b00dc40c,
                mid_setObjectID_d0bc48d5b00dc40c,
                mid_setReferenceFrame_849bc9e3b38b9bcb,
                mid_validate_17db3a65980d3441,
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
