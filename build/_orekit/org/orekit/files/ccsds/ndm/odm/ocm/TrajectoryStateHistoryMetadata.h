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
          class FrameFacade;
          class BodyFacade;
        }
      }
    }
    namespace utils {
      namespace units {
        class Unit;
      }
    }
    namespace data {
      class DataContext;
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
                  mid_init$_f14f121ad3022904,
                  mid_copy_dd0ebaaba4228d02,
                  mid_getCenter_52253a5b5c02abfe,
                  mid_getInterpolationDegree_55546ef6a647f39b,
                  mid_getInterpolationMethod_0f2522b3fe45d99f,
                  mid_getOrbAveraging_1c1fa1e935d6cdcf,
                  mid_getOrbRevNum_55546ef6a647f39b,
                  mid_getOrbRevNumBasis_55546ef6a647f39b,
                  mid_getPropagator_1c1fa1e935d6cdcf,
                  mid_getTrajBasis_1c1fa1e935d6cdcf,
                  mid_getTrajBasisID_1c1fa1e935d6cdcf,
                  mid_getTrajFrameEpoch_c325492395d89b24,
                  mid_getTrajID_1c1fa1e935d6cdcf,
                  mid_getTrajNextID_1c1fa1e935d6cdcf,
                  mid_getTrajPrevID_1c1fa1e935d6cdcf,
                  mid_getTrajReferenceFrame_69d8be1b6b0a1a94,
                  mid_getTrajType_4eb559a63ad8d46d,
                  mid_getTrajUnits_e62d3bb06d56d7e3,
                  mid_getUseableStartTime_c325492395d89b24,
                  mid_getUseableStopTime_c325492395d89b24,
                  mid_incrementTrajID_6f0f3576df9f75ee,
                  mid_setCenter_564458ee450fa323,
                  mid_setInterpolationDegree_44ed599e93e8a30c,
                  mid_setInterpolationMethod_da218530d7e28b54,
                  mid_setOrbAveraging_734b91ac30d5f9b4,
                  mid_setOrbRevNum_44ed599e93e8a30c,
                  mid_setOrbRevNumBasis_44ed599e93e8a30c,
                  mid_setPropagator_734b91ac30d5f9b4,
                  mid_setTrajBasis_734b91ac30d5f9b4,
                  mid_setTrajBasisID_734b91ac30d5f9b4,
                  mid_setTrajFrameEpoch_02135a6ef25adb4b,
                  mid_setTrajID_734b91ac30d5f9b4,
                  mid_setTrajNextID_734b91ac30d5f9b4,
                  mid_setTrajPrevID_734b91ac30d5f9b4,
                  mid_setTrajReferenceFrame_4755133c5c4c59be,
                  mid_setTrajType_c891909ddae6c021,
                  mid_setTrajUnits_0e7c3032c7c93ed3,
                  mid_setUseableStartTime_02135a6ef25adb4b,
                  mid_setUseableStopTime_02135a6ef25adb4b,
                  mid_validate_8ba9fe7a847cecad,
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
