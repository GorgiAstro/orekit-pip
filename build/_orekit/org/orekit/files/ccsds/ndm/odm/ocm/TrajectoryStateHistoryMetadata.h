#ifndef org_orekit_files_ccsds_ndm_odm_ocm_TrajectoryStateHistoryMetadata_H
#define org_orekit_files_ccsds_ndm_odm_ocm_TrajectoryStateHistoryMetadata_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataContext;
    }
    namespace files {
      namespace ccsds {
        namespace definitions {
          class FrameFacade;
          class BodyFacade;
        }
        namespace ndm {
          namespace odm {
            namespace oem {
              class InterpolationMethod;
            }
            namespace ocm {
              class TrajectoryStateHistoryMetadata;
              class OrbitElementsType;
            }
          }
        }
      }
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      namespace units {
        class Unit;
      }
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
                  mid_init$_960848fecfd8dc41,
                  mid_copy_3a61331c4c7cd805,
                  mid_getCenter_540df4afb4ddb1b4,
                  mid_getInterpolationDegree_d6ab429752e7c267,
                  mid_getInterpolationMethod_5c787fe19a1e0bf9,
                  mid_getOrbAveraging_d2c8eb4129821f0e,
                  mid_getOrbRevNum_d6ab429752e7c267,
                  mid_getOrbRevNumBasis_d6ab429752e7c267,
                  mid_getPropagator_d2c8eb4129821f0e,
                  mid_getTrajBasis_d2c8eb4129821f0e,
                  mid_getTrajBasisID_d2c8eb4129821f0e,
                  mid_getTrajFrameEpoch_80e11148db499dda,
                  mid_getTrajID_d2c8eb4129821f0e,
                  mid_getTrajNextID_d2c8eb4129821f0e,
                  mid_getTrajPrevID_d2c8eb4129821f0e,
                  mid_getTrajReferenceFrame_0fc1562b68204151,
                  mid_getTrajType_53d3e424bd18099f,
                  mid_getTrajUnits_d751c1a57012b438,
                  mid_getUseableStartTime_80e11148db499dda,
                  mid_getUseableStopTime_80e11148db499dda,
                  mid_incrementTrajID_95277969d373e11f,
                  mid_setCenter_9fc8078d81282211,
                  mid_setInterpolationDegree_8fd427ab23829bf5,
                  mid_setInterpolationMethod_373a113be1fa06ae,
                  mid_setOrbAveraging_105e1eadb709d9ac,
                  mid_setOrbRevNum_8fd427ab23829bf5,
                  mid_setOrbRevNumBasis_8fd427ab23829bf5,
                  mid_setPropagator_105e1eadb709d9ac,
                  mid_setTrajBasis_105e1eadb709d9ac,
                  mid_setTrajBasisID_105e1eadb709d9ac,
                  mid_setTrajFrameEpoch_8497861b879c83f7,
                  mid_setTrajID_105e1eadb709d9ac,
                  mid_setTrajNextID_105e1eadb709d9ac,
                  mid_setTrajPrevID_105e1eadb709d9ac,
                  mid_setTrajReferenceFrame_2c8b859a72c0094e,
                  mid_setTrajType_60e103afec7f4bee,
                  mid_setTrajUnits_aa335fea495d60e0,
                  mid_setUseableStartTime_8497861b879c83f7,
                  mid_setUseableStopTime_8497861b879c83f7,
                  mid_validate_1ad26e8c8c0cd65b,
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
