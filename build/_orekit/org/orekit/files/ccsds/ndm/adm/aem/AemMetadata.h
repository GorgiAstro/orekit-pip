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
            class AttitudeEndpoints;
            class AttitudeType;
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
                  mid_init$_8fd427ab23829bf5,
                  mid_getAttitudeType_117217196ac7a101,
                  mid_getEndpoints_d67fadc29cf1ce4a,
                  mid_getEulerRotSeq_503d51f00fe64860,
                  mid_getFrameAngvelFrame_0fc1562b68204151,
                  mid_getInterpolationDegree_d6ab429752e7c267,
                  mid_getInterpolationMethod_d2c8eb4129821f0e,
                  mid_getInterpolationSamples_d6ab429752e7c267,
                  mid_getStart_80e11148db499dda,
                  mid_getStartTime_80e11148db499dda,
                  mid_getStop_80e11148db499dda,
                  mid_getStopTime_80e11148db499dda,
                  mid_getUseableStartTime_80e11148db499dda,
                  mid_getUseableStopTime_80e11148db499dda,
                  mid_isFirst_b55c3109c27b90e3,
                  mid_isSpacecraftBodyRate_eee3de00fe971136,
                  mid_rateFrameIsA_eee3de00fe971136,
                  mid_setAngvelFrame_2c8b859a72c0094e,
                  mid_setAttitudeType_3b273fe5845fa3ea,
                  mid_setEulerRotSeq_d6989ad0241efe2c,
                  mid_setInterpolationDegree_8fd427ab23829bf5,
                  mid_setInterpolationMethod_105e1eadb709d9ac,
                  mid_setIsFirst_b35db77cae58639e,
                  mid_setRateFrameIsA_b35db77cae58639e,
                  mid_setStartTime_8497861b879c83f7,
                  mid_setStopTime_8497861b879c83f7,
                  mid_setUseableStartTime_8497861b879c83f7,
                  mid_setUseableStopTime_8497861b879c83f7,
                  mid_validate_1ad26e8c8c0cd65b,
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
