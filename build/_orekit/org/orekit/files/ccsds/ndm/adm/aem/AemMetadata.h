#ifndef org_orekit_files_ccsds_ndm_adm_aem_AemMetadata_H
#define org_orekit_files_ccsds_ndm_adm_aem_AemMetadata_H

#include "org/orekit/files/ccsds/ndm/adm/AdmMetadata.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class FrameFacade;
        }
        namespace ndm {
          namespace adm {
            class AttitudeType;
            class AttitudeEndpoints;
          }
        }
      }
    }
    namespace time {
      class AbsoluteDate;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class RotationOrder;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Boolean;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              class AemMetadata : public ::org::orekit::files::ccsds::ndm::adm::AdmMetadata {
               public:
                enum {
                  mid_init$_0a2a1ac2721c0336,
                  mid_getAttitudeType_3d59887fa86c3808,
                  mid_getEndpoints_160aadf35481229b,
                  mid_getEulerRotSeq_425debac8563c8f4,
                  mid_getFrameAngvelFrame_aa70fdb14ae9305f,
                  mid_getInterpolationDegree_f2f64475e4580546,
                  mid_getInterpolationMethod_0090f7797e403f43,
                  mid_getInterpolationSamples_f2f64475e4580546,
                  mid_getStart_aaa854c403487cf3,
                  mid_getStartTime_aaa854c403487cf3,
                  mid_getStop_aaa854c403487cf3,
                  mid_getStopTime_aaa854c403487cf3,
                  mid_getUseableStartTime_aaa854c403487cf3,
                  mid_getUseableStopTime_aaa854c403487cf3,
                  mid_isFirst_cc0d8e7d471c2d45,
                  mid_isSpacecraftBodyRate_e470b6d9e0d979db,
                  mid_rateFrameIsA_e470b6d9e0d979db,
                  mid_setAngvelFrame_a455f3ff24eb0b47,
                  mid_setAttitudeType_d2af9b8a84ea38b2,
                  mid_setEulerRotSeq_3c290f1c2c08ff0e,
                  mid_setInterpolationDegree_0a2a1ac2721c0336,
                  mid_setInterpolationMethod_e939c6558ae8d313,
                  mid_setIsFirst_50a2e0b139e80a58,
                  mid_setRateFrameIsA_50a2e0b139e80a58,
                  mid_setStartTime_e82d68cd9f886886,
                  mid_setStopTime_e82d68cd9f886886,
                  mid_setUseableStartTime_e82d68cd9f886886,
                  mid_setUseableStopTime_e82d68cd9f886886,
                  mid_validate_77e0f9a1f260e2e5,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AemMetadata(jobject obj) : ::org::orekit::files::ccsds::ndm::adm::AdmMetadata(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AemMetadata(const AemMetadata& obj) : ::org::orekit::files::ccsds::ndm::adm::AdmMetadata(obj) {}

                AemMetadata(jint);

                ::org::orekit::files::ccsds::ndm::adm::AttitudeType getAttitudeType() const;
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints getEndpoints() const;
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder getEulerRotSeq() const;
                ::org::orekit::files::ccsds::definitions::FrameFacade getFrameAngvelFrame() const;
                jint getInterpolationDegree() const;
                ::java::lang::String getInterpolationMethod() const;
                jint getInterpolationSamples() const;
                ::org::orekit::time::AbsoluteDate getStart() const;
                ::org::orekit::time::AbsoluteDate getStartTime() const;
                ::org::orekit::time::AbsoluteDate getStop() const;
                ::org::orekit::time::AbsoluteDate getStopTime() const;
                ::org::orekit::time::AbsoluteDate getUseableStartTime() const;
                ::org::orekit::time::AbsoluteDate getUseableStopTime() const;
                ::java::lang::Boolean isFirst() const;
                jboolean isSpacecraftBodyRate() const;
                jboolean rateFrameIsA() const;
                void setAngvelFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade &) const;
                void setAttitudeType(const ::org::orekit::files::ccsds::ndm::adm::AttitudeType &) const;
                void setEulerRotSeq(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder &) const;
                void setInterpolationDegree(jint) const;
                void setInterpolationMethod(const ::java::lang::String &) const;
                void setIsFirst(jboolean) const;
                void setRateFrameIsA(jboolean) const;
                void setStartTime(const ::org::orekit::time::AbsoluteDate &) const;
                void setStopTime(const ::org::orekit::time::AbsoluteDate &) const;
                void setUseableStartTime(const ::org::orekit::time::AbsoluteDate &) const;
                void setUseableStopTime(const ::org::orekit::time::AbsoluteDate &) const;
                void validate(jdouble) const;
              };
            }
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
            namespace aem {
              extern PyType_Def PY_TYPE_DEF(AemMetadata);
              extern PyTypeObject *PY_TYPE(AemMetadata);

              class t_AemMetadata {
              public:
                PyObject_HEAD
                AemMetadata object;
                static PyObject *wrap_Object(const AemMetadata&);
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
}

#endif
