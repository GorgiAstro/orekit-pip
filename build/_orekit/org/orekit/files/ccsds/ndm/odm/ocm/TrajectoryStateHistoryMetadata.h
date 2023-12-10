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
          class FrameFacade;
          class BodyFacade;
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
                  mid_init$_d85fec4345815bba,
                  mid_copy_ccbf61d9f503b7f4,
                  mid_getCenter_78375ee64056f203,
                  mid_getInterpolationDegree_f2f64475e4580546,
                  mid_getInterpolationMethod_2bc2530179f8bab2,
                  mid_getOrbAveraging_0090f7797e403f43,
                  mid_getOrbRevNum_f2f64475e4580546,
                  mid_getOrbRevNumBasis_f2f64475e4580546,
                  mid_getPropagator_0090f7797e403f43,
                  mid_getTrajBasis_0090f7797e403f43,
                  mid_getTrajBasisID_0090f7797e403f43,
                  mid_getTrajFrameEpoch_aaa854c403487cf3,
                  mid_getTrajID_0090f7797e403f43,
                  mid_getTrajNextID_0090f7797e403f43,
                  mid_getTrajPrevID_0090f7797e403f43,
                  mid_getTrajReferenceFrame_aa70fdb14ae9305f,
                  mid_getTrajType_89f4b16f0349faa4,
                  mid_getTrajUnits_a6156df500549a58,
                  mid_getUseableStartTime_aaa854c403487cf3,
                  mid_getUseableStopTime_aaa854c403487cf3,
                  mid_incrementTrajID_43625fc1c3d86afe,
                  mid_setCenter_4937bc9292f008b1,
                  mid_setInterpolationDegree_0a2a1ac2721c0336,
                  mid_setInterpolationMethod_db94d5019ae505d8,
                  mid_setOrbAveraging_e939c6558ae8d313,
                  mid_setOrbRevNum_0a2a1ac2721c0336,
                  mid_setOrbRevNumBasis_0a2a1ac2721c0336,
                  mid_setPropagator_e939c6558ae8d313,
                  mid_setTrajBasis_e939c6558ae8d313,
                  mid_setTrajBasisID_e939c6558ae8d313,
                  mid_setTrajFrameEpoch_e82d68cd9f886886,
                  mid_setTrajID_e939c6558ae8d313,
                  mid_setTrajNextID_e939c6558ae8d313,
                  mid_setTrajPrevID_e939c6558ae8d313,
                  mid_setTrajReferenceFrame_a455f3ff24eb0b47,
                  mid_setTrajType_871e4887d93fc936,
                  mid_setTrajUnits_65de9727799c5641,
                  mid_setUseableStartTime_e82d68cd9f886886,
                  mid_setUseableStopTime_e82d68cd9f886886,
                  mid_validate_77e0f9a1f260e2e5,
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
