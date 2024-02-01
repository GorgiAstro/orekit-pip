#ifndef org_orekit_files_ccsds_ndm_odm_OdmCommonMetadata_H
#define org_orekit_files_ccsds_ndm_odm_OdmCommonMetadata_H

#include "org/orekit/files/ccsds/ndm/odm/OdmMetadata.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class FrameFacade;
          class BodyFacade;
        }
        namespace utils {
          class ContextBinding;
        }
      }
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace frames {
      class Frame;
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
                mid_init$_ff7cb6c242604316,
                mid_finalizeMetadata_1564c35f88556e3e,
                mid_getCenter_540df4afb4ddb1b4,
                mid_getFrame_cb151471db4570f0,
                mid_getFrameEpoch_80e11148db499dda,
                mid_getLaunchNumber_d6ab429752e7c267,
                mid_getLaunchPiece_d2c8eb4129821f0e,
                mid_getLaunchYear_d6ab429752e7c267,
                mid_getObjectID_d2c8eb4129821f0e,
                mid_getReferenceFrame_0fc1562b68204151,
                mid_setCenter_9fc8078d81282211,
                mid_setFrameEpoch_8497861b879c83f7,
                mid_setFrameEpochString_105e1eadb709d9ac,
                mid_setObjectID_105e1eadb709d9ac,
                mid_setReferenceFrame_2c8b859a72c0094e,
                mid_validate_1ad26e8c8c0cd65b,
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
