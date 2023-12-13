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
                mid_init$_a1fa5dae97ea5ed2,
                mid_finalizeMetadata_db5d6d07a090d1f4,
                mid_getCenter_52253a5b5c02abfe,
                mid_getFrame_2c51111cc6894ba1,
                mid_getFrameEpoch_c325492395d89b24,
                mid_getLaunchNumber_55546ef6a647f39b,
                mid_getLaunchPiece_1c1fa1e935d6cdcf,
                mid_getLaunchYear_55546ef6a647f39b,
                mid_getObjectID_1c1fa1e935d6cdcf,
                mid_getReferenceFrame_69d8be1b6b0a1a94,
                mid_setCenter_564458ee450fa323,
                mid_setFrameEpoch_02135a6ef25adb4b,
                mid_setFrameEpochString_734b91ac30d5f9b4,
                mid_setObjectID_734b91ac30d5f9b4,
                mid_setReferenceFrame_4755133c5c4c59be,
                mid_validate_8ba9fe7a847cecad,
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
