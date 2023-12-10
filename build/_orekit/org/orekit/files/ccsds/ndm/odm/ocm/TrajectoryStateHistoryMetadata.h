#ifndef org_orekit_files_ccsds_ndm_odm_ocm_TrajectoryStateHistoryMetadata_H
#define org_orekit_files_ccsds_ndm_odm_ocm_TrajectoryStateHistoryMetadata_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              class OrbitElementsType;
              class TrajectoryStateHistoryMetadata;
            }
            namespace oem {
              class InterpolationMethod;
            }
          }
        }
        namespace definitions {
          class BodyFacade;
          class FrameFacade;
        }
      }
    }
    namespace data {
      class DataContext;
    }
    namespace utils {
      namespace units {
        class Unit;
      }
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
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
            namespace ocm {

              class TrajectoryStateHistoryMetadata : public ::org::orekit::files::ccsds::section::CommentsContainer {
               public:
                enum {
                  mid_init$_cb5a6d3e3169f7fc,
                  mid_copy_3722f59620bb4a14,
                  mid_getCenter_23d31d5db0bee8e9,
                  mid_getInterpolationDegree_570ce0828f81a2c1,
                  mid_getInterpolationMethod_94ea91241555a59e,
                  mid_getOrbAveraging_11b109bd155ca898,
                  mid_getOrbRevNum_570ce0828f81a2c1,
                  mid_getOrbRevNumBasis_570ce0828f81a2c1,
                  mid_getPropagator_11b109bd155ca898,
                  mid_getTrajBasis_11b109bd155ca898,
                  mid_getTrajBasisID_11b109bd155ca898,
                  mid_getTrajFrameEpoch_85703d13e302437e,
                  mid_getTrajID_11b109bd155ca898,
                  mid_getTrajNextID_11b109bd155ca898,
                  mid_getTrajPrevID_11b109bd155ca898,
                  mid_getTrajReferenceFrame_5d5dd95b04037824,
                  mid_getTrajType_f6a584069fbe1b12,
                  mid_getTrajUnits_2afa36052df4765d,
                  mid_getUseableStartTime_85703d13e302437e,
                  mid_getUseableStopTime_85703d13e302437e,
                  mid_incrementTrajID_92807efd57acb082,
                  mid_setCenter_32e120c3a0353f27,
                  mid_setInterpolationDegree_99803b0791f320ff,
                  mid_setInterpolationMethod_f05dcf712ccb2c7b,
                  mid_setOrbAveraging_d0bc48d5b00dc40c,
                  mid_setOrbRevNum_99803b0791f320ff,
                  mid_setOrbRevNumBasis_99803b0791f320ff,
                  mid_setPropagator_d0bc48d5b00dc40c,
                  mid_setTrajBasis_d0bc48d5b00dc40c,
                  mid_setTrajBasisID_d0bc48d5b00dc40c,
                  mid_setTrajFrameEpoch_600a2a61652bc473,
                  mid_setTrajID_d0bc48d5b00dc40c,
                  mid_setTrajNextID_d0bc48d5b00dc40c,
                  mid_setTrajPrevID_d0bc48d5b00dc40c,
                  mid_setTrajReferenceFrame_849bc9e3b38b9bcb,
                  mid_setTrajType_fa6b10c2faa6bff6,
                  mid_setTrajUnits_de3e021e7266b71e,
                  mid_setUseableStartTime_600a2a61652bc473,
                  mid_setUseableStopTime_600a2a61652bc473,
                  mid_validate_17db3a65980d3441,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit TrajectoryStateHistoryMetadata(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                TrajectoryStateHistoryMetadata(const TrajectoryStateHistoryMetadata& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

                static jint DEFAULT_INTERPOLATION_DEGREE;
                static ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod *DEFAULT_INTERPOLATION_METHOD;

                TrajectoryStateHistoryMetadata(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::data::DataContext &);

                TrajectoryStateHistoryMetadata copy(jdouble) const;
                ::org::orekit::files::ccsds::definitions::BodyFacade getCenter() const;
                jint getInterpolationDegree() const;
                ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod getInterpolationMethod() const;
                ::java::lang::String getOrbAveraging() const;
                jint getOrbRevNum() const;
                jint getOrbRevNumBasis() const;
                ::java::lang::String getPropagator() const;
                ::java::lang::String getTrajBasis() const;
                ::java::lang::String getTrajBasisID() const;
                ::org::orekit::time::AbsoluteDate getTrajFrameEpoch() const;
                ::java::lang::String getTrajID() const;
                ::java::lang::String getTrajNextID() const;
                ::java::lang::String getTrajPrevID() const;
                ::org::orekit::files::ccsds::definitions::FrameFacade getTrajReferenceFrame() const;
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType getTrajType() const;
                ::java::util::List getTrajUnits() const;
                ::org::orekit::time::AbsoluteDate getUseableStartTime() const;
                ::org::orekit::time::AbsoluteDate getUseableStopTime() const;
                static ::java::lang::String incrementTrajID(const ::java::lang::String &);
                void setCenter(const ::org::orekit::files::ccsds::definitions::BodyFacade &) const;
                void setInterpolationDegree(jint) const;
                void setInterpolationMethod(const ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod &) const;
                void setOrbAveraging(const ::java::lang::String &) const;
                void setOrbRevNum(jint) const;
                void setOrbRevNumBasis(jint) const;
                void setPropagator(const ::java::lang::String &) const;
                void setTrajBasis(const ::java::lang::String &) const;
                void setTrajBasisID(const ::java::lang::String &) const;
                void setTrajFrameEpoch(const ::org::orekit::time::AbsoluteDate &) const;
                void setTrajID(const ::java::lang::String &) const;
                void setTrajNextID(const ::java::lang::String &) const;
                void setTrajPrevID(const ::java::lang::String &) const;
                void setTrajReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade &) const;
                void setTrajType(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType &) const;
                void setTrajUnits(const ::java::util::List &) const;
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
          namespace odm {
            namespace ocm {
              extern PyType_Def PY_TYPE_DEF(TrajectoryStateHistoryMetadata);
              extern PyTypeObject *PY_TYPE(TrajectoryStateHistoryMetadata);

              class t_TrajectoryStateHistoryMetadata {
              public:
                PyObject_HEAD
                TrajectoryStateHistoryMetadata object;
                static PyObject *wrap_Object(const TrajectoryStateHistoryMetadata&);
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
