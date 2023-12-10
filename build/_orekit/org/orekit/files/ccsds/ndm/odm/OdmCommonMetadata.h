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
                mid_init$_7ae3461a92a43152,
                mid_finalizeMetadata_b23a8b8e76c44cd4,
                mid_getCenter_78375ee64056f203,
                mid_getFrame_c8fe21bcdac65bf6,
                mid_getFrameEpoch_aaa854c403487cf3,
                mid_getLaunchNumber_f2f64475e4580546,
                mid_getLaunchPiece_0090f7797e403f43,
                mid_getLaunchYear_f2f64475e4580546,
                mid_getObjectID_0090f7797e403f43,
                mid_getReferenceFrame_aa70fdb14ae9305f,
                mid_setCenter_4937bc9292f008b1,
                mid_setFrameEpoch_e82d68cd9f886886,
                mid_setFrameEpochString_e939c6558ae8d313,
                mid_setObjectID_e939c6558ae8d313,
                mid_setReferenceFrame_a455f3ff24eb0b47,
                mid_validate_77e0f9a1f260e2e5,
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
