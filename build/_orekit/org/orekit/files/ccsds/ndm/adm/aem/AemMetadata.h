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
                  mid_init$_44ed599e93e8a30c,
                  mid_getAttitudeType_bcbb9cd2c002f9bf,
                  mid_getEndpoints_c60ad1d207bc8e06,
                  mid_getEulerRotSeq_513511eeab1350d5,
                  mid_getFrameAngvelFrame_69d8be1b6b0a1a94,
                  mid_getInterpolationDegree_55546ef6a647f39b,
                  mid_getInterpolationMethod_1c1fa1e935d6cdcf,
                  mid_getInterpolationSamples_55546ef6a647f39b,
                  mid_getStart_c325492395d89b24,
                  mid_getStartTime_c325492395d89b24,
                  mid_getStop_c325492395d89b24,
                  mid_getStopTime_c325492395d89b24,
                  mid_getUseableStartTime_c325492395d89b24,
                  mid_getUseableStopTime_c325492395d89b24,
                  mid_isFirst_34d396f05e4572d8,
                  mid_isSpacecraftBodyRate_9ab94ac1dc23b105,
                  mid_rateFrameIsA_9ab94ac1dc23b105,
                  mid_setAngvelFrame_4755133c5c4c59be,
                  mid_setAttitudeType_99b2da2ae2d39db5,
                  mid_setEulerRotSeq_062f1951e591952f,
                  mid_setInterpolationDegree_44ed599e93e8a30c,
                  mid_setInterpolationMethod_734b91ac30d5f9b4,
                  mid_setIsFirst_fcb96c98de6fad04,
                  mid_setRateFrameIsA_fcb96c98de6fad04,
                  mid_setStartTime_02135a6ef25adb4b,
                  mid_setStopTime_02135a6ef25adb4b,
                  mid_setUseableStartTime_02135a6ef25adb4b,
                  mid_setUseableStopTime_02135a6ef25adb4b,
                  mid_validate_8ba9fe7a847cecad,
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
