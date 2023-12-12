#ifndef org_orekit_files_ccsds_ndm_odm_ocm_TrajectoryStateHistoryMetadata_H
#define org_orekit_files_ccsds_ndm_odm_ocm_TrajectoryStateHistoryMetadata_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class BodyFacade;
          class FrameFacade;
        }
        namespace ndm {
          namespace odm {
            namespace ocm {
              class TrajectoryStateHistoryMetadata;
              class OrbitElementsType;
            }
            namespace oem {
              class InterpolationMethod;
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
    namespace data {
      class DataContext;
    }
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
                  mid_init$_11edd4fa0b5a3eaf,
                  mid_copy_3a8876e04e4abfef,
                  mid_getCenter_c642bce266d6d89a,
                  mid_getInterpolationDegree_412668abc8d889e9,
                  mid_getInterpolationMethod_8efb284b7b2c86d2,
                  mid_getOrbAveraging_3cffd47377eca18a,
                  mid_getOrbRevNum_412668abc8d889e9,
                  mid_getOrbRevNumBasis_412668abc8d889e9,
                  mid_getPropagator_3cffd47377eca18a,
                  mid_getTrajBasis_3cffd47377eca18a,
                  mid_getTrajBasisID_3cffd47377eca18a,
                  mid_getTrajFrameEpoch_7a97f7e149e79afb,
                  mid_getTrajID_3cffd47377eca18a,
                  mid_getTrajNextID_3cffd47377eca18a,
                  mid_getTrajPrevID_3cffd47377eca18a,
                  mid_getTrajReferenceFrame_98f5fcaff3e3f9d2,
                  mid_getTrajType_ada74ce902d29422,
                  mid_getTrajUnits_0d9551367f7ecdef,
                  mid_getUseableStartTime_7a97f7e149e79afb,
                  mid_getUseableStopTime_7a97f7e149e79afb,
                  mid_incrementTrajID_60bb1b490b673cbf,
                  mid_setCenter_e6f755c267d91c26,
                  mid_setInterpolationDegree_a3da1a935cb37f7b,
                  mid_setInterpolationMethod_db5b325923fed9a5,
                  mid_setOrbAveraging_f5ffdf29129ef90a,
                  mid_setOrbRevNum_a3da1a935cb37f7b,
                  mid_setOrbRevNumBasis_a3da1a935cb37f7b,
                  mid_setPropagator_f5ffdf29129ef90a,
                  mid_setTrajBasis_f5ffdf29129ef90a,
                  mid_setTrajBasisID_f5ffdf29129ef90a,
                  mid_setTrajFrameEpoch_20affcbd28542333,
                  mid_setTrajID_f5ffdf29129ef90a,
                  mid_setTrajNextID_f5ffdf29129ef90a,
                  mid_setTrajPrevID_f5ffdf29129ef90a,
                  mid_setTrajReferenceFrame_f55eee1236275bb1,
                  mid_setTrajType_94fd56ae4b55b80e,
                  mid_setTrajUnits_4ccaedadb068bdeb,
                  mid_setUseableStartTime_20affcbd28542333,
                  mid_setUseableStopTime_20affcbd28542333,
                  mid_validate_10f281d777284cea,
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
