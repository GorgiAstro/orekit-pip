#ifndef org_orekit_files_ccsds_ndm_adm_aem_AemMetadata_H
#define org_orekit_files_ccsds_ndm_adm_aem_AemMetadata_H

#include "org/orekit/files/ccsds/ndm/adm/AdmMetadata.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            class AttitudeType;
            class AttitudeEndpoints;
          }
        }
        namespace definitions {
          class FrameFacade;
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
                  mid_init$_99803b0791f320ff,
                  mid_getAttitudeType_c5e03d4484427bd1,
                  mid_getEndpoints_35bd4909c56b6915,
                  mid_getEulerRotSeq_5aea028785008a06,
                  mid_getFrameAngvelFrame_5d5dd95b04037824,
                  mid_getInterpolationDegree_570ce0828f81a2c1,
                  mid_getInterpolationMethod_11b109bd155ca898,
                  mid_getInterpolationSamples_570ce0828f81a2c1,
                  mid_getStart_85703d13e302437e,
                  mid_getStartTime_85703d13e302437e,
                  mid_getStop_85703d13e302437e,
                  mid_getStopTime_85703d13e302437e,
                  mid_getUseableStartTime_85703d13e302437e,
                  mid_getUseableStopTime_85703d13e302437e,
                  mid_isFirst_32e0a2327c4a0419,
                  mid_isSpacecraftBodyRate_b108b35ef48e27bd,
                  mid_rateFrameIsA_b108b35ef48e27bd,
                  mid_setAngvelFrame_849bc9e3b38b9bcb,
                  mid_setAttitudeType_beb598ebb58649c9,
                  mid_setEulerRotSeq_a908138988eb2a50,
                  mid_setInterpolationDegree_99803b0791f320ff,
                  mid_setInterpolationMethod_d0bc48d5b00dc40c,
                  mid_setIsFirst_bd04c9335fb9e4cf,
                  mid_setRateFrameIsA_bd04c9335fb9e4cf,
                  mid_setStartTime_600a2a61652bc473,
                  mid_setStopTime_600a2a61652bc473,
                  mid_setUseableStartTime_600a2a61652bc473,
                  mid_setUseableStopTime_600a2a61652bc473,
                  mid_validate_17db3a65980d3441,
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
