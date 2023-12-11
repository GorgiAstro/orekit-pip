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
                  mid_init$_a3da1a935cb37f7b,
                  mid_getAttitudeType_f1cb2bc8e0f6e00a,
                  mid_getEndpoints_c66f753ddee38944,
                  mid_getEulerRotSeq_cd8353278e08930b,
                  mid_getFrameAngvelFrame_98f5fcaff3e3f9d2,
                  mid_getInterpolationDegree_412668abc8d889e9,
                  mid_getInterpolationMethod_3cffd47377eca18a,
                  mid_getInterpolationSamples_412668abc8d889e9,
                  mid_getStart_7a97f7e149e79afb,
                  mid_getStartTime_7a97f7e149e79afb,
                  mid_getStop_7a97f7e149e79afb,
                  mid_getStopTime_7a97f7e149e79afb,
                  mid_getUseableStartTime_7a97f7e149e79afb,
                  mid_getUseableStopTime_7a97f7e149e79afb,
                  mid_isFirst_adef4ca621ef1c5e,
                  mid_isSpacecraftBodyRate_89b302893bdbe1f1,
                  mid_rateFrameIsA_89b302893bdbe1f1,
                  mid_setAngvelFrame_f55eee1236275bb1,
                  mid_setAttitudeType_78cfb04ba41acba4,
                  mid_setEulerRotSeq_8b9f97be929dfd52,
                  mid_setInterpolationDegree_a3da1a935cb37f7b,
                  mid_setInterpolationMethod_f5ffdf29129ef90a,
                  mid_setIsFirst_ed2afdb8506b9742,
                  mid_setRateFrameIsA_ed2afdb8506b9742,
                  mid_setStartTime_20affcbd28542333,
                  mid_setStopTime_20affcbd28542333,
                  mid_setUseableStartTime_20affcbd28542333,
                  mid_setUseableStopTime_20affcbd28542333,
                  mid_validate_10f281d777284cea,
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
