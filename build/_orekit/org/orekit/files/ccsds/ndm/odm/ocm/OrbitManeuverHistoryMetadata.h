#ifndef org_orekit_files_ccsds_ndm_odm_ocm_OrbitManeuverHistoryMetadata_H
#define org_orekit_files_ccsds_ndm_odm_ocm_OrbitManeuverHistoryMetadata_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              class ManBasis;
              class ManeuverFieldType;
            }
          }
        }
        namespace definitions {
          class BodyFacade;
          class FrameFacade;
          class SpacecraftBodyFrame;
          class DutyCycleType;
        }
      }
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
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
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

              class OrbitManeuverHistoryMetadata : public ::org::orekit::files::ccsds::section::CommentsContainer {
               public:
                enum {
                  mid_init$_600a2a61652bc473,
                  mid_getDcBodyFrame_630d91cd1f29802e,
                  mid_getDcBodyTrigger_d52645e0d4c07563,
                  mid_getDcExecStart_85703d13e302437e,
                  mid_getDcExecStop_85703d13e302437e,
                  mid_getDcMaxCycles_570ce0828f81a2c1,
                  mid_getDcMinCycles_570ce0828f81a2c1,
                  mid_getDcPhaseStartAngle_dff5885c2c873297,
                  mid_getDcPhaseStopAngle_dff5885c2c873297,
                  mid_getDcRefDir_d52645e0d4c07563,
                  mid_getDcRefTime_85703d13e302437e,
                  mid_getDcTimePulseDuration_dff5885c2c873297,
                  mid_getDcTimePulsePeriod_dff5885c2c873297,
                  mid_getDcType_f6c2c917cc164be8,
                  mid_getDcWindowClose_85703d13e302437e,
                  mid_getDcWindowOpen_85703d13e302437e,
                  mid_getGravitationalAssist_23d31d5db0bee8e9,
                  mid_getManBasis_c5a5e285b1a83f5e,
                  mid_getManBasisID_11b109bd155ca898,
                  mid_getManComposition_2afa36052df4765d,
                  mid_getManDeviceID_11b109bd155ca898,
                  mid_getManFrameEpoch_85703d13e302437e,
                  mid_getManID_11b109bd155ca898,
                  mid_getManNextEpoch_85703d13e302437e,
                  mid_getManNextID_11b109bd155ca898,
                  mid_getManPredSource_11b109bd155ca898,
                  mid_getManPrevEpoch_85703d13e302437e,
                  mid_getManPrevID_11b109bd155ca898,
                  mid_getManPurpose_2afa36052df4765d,
                  mid_getManReferenceFrame_5d5dd95b04037824,
                  mid_getManUnits_2afa36052df4765d,
                  mid_setDcBodyFrame_da2b68dd5e1213c8,
                  mid_setDcBodyTrigger_029ff0cbf68ea054,
                  mid_setDcExecStart_600a2a61652bc473,
                  mid_setDcExecStop_600a2a61652bc473,
                  mid_setDcMaxCycles_99803b0791f320ff,
                  mid_setDcMinCycles_99803b0791f320ff,
                  mid_setDcPhaseStartAngle_17db3a65980d3441,
                  mid_setDcPhaseStopAngle_17db3a65980d3441,
                  mid_setDcRefDir_029ff0cbf68ea054,
                  mid_setDcRefTime_600a2a61652bc473,
                  mid_setDcTimePulseDuration_17db3a65980d3441,
                  mid_setDcTimePulsePeriod_17db3a65980d3441,
                  mid_setDcType_16c5f15eeddfdcd8,
                  mid_setDcWindowClose_600a2a61652bc473,
                  mid_setDcWindowOpen_600a2a61652bc473,
                  mid_setGravitationalAssist_32e120c3a0353f27,
                  mid_setManBasis_e936bb223a91f519,
                  mid_setManBasisID_d0bc48d5b00dc40c,
                  mid_setManComposition_de3e021e7266b71e,
                  mid_setManDeviceID_d0bc48d5b00dc40c,
                  mid_setManFrameEpoch_600a2a61652bc473,
                  mid_setManID_d0bc48d5b00dc40c,
                  mid_setManNextEpoch_600a2a61652bc473,
                  mid_setManNextID_d0bc48d5b00dc40c,
                  mid_setManPredSource_d0bc48d5b00dc40c,
                  mid_setManPrevEpoch_600a2a61652bc473,
                  mid_setManPrevID_d0bc48d5b00dc40c,
                  mid_setManPurpose_de3e021e7266b71e,
                  mid_setManReferenceFrame_849bc9e3b38b9bcb,
                  mid_setManUnits_de3e021e7266b71e,
                  mid_validate_17db3a65980d3441,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit OrbitManeuverHistoryMetadata(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OrbitManeuverHistoryMetadata(const OrbitManeuverHistoryMetadata& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

                static ::org::orekit::files::ccsds::definitions::DutyCycleType *DEFAULT_DC_TYPE;

                OrbitManeuverHistoryMetadata(const ::org::orekit::time::AbsoluteDate &);

                ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame getDcBodyFrame() const;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D getDcBodyTrigger() const;
                ::org::orekit::time::AbsoluteDate getDcExecStart() const;
                ::org::orekit::time::AbsoluteDate getDcExecStop() const;
                jint getDcMaxCycles() const;
                jint getDcMinCycles() const;
                jdouble getDcPhaseStartAngle() const;
                jdouble getDcPhaseStopAngle() const;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D getDcRefDir() const;
                ::org::orekit::time::AbsoluteDate getDcRefTime() const;
                jdouble getDcTimePulseDuration() const;
                jdouble getDcTimePulsePeriod() const;
                ::org::orekit::files::ccsds::definitions::DutyCycleType getDcType() const;
                ::org::orekit::time::AbsoluteDate getDcWindowClose() const;
                ::org::orekit::time::AbsoluteDate getDcWindowOpen() const;
                ::org::orekit::files::ccsds::definitions::BodyFacade getGravitationalAssist() const;
                ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis getManBasis() const;
                ::java::lang::String getManBasisID() const;
                ::java::util::List getManComposition() const;
                ::java::lang::String getManDeviceID() const;
                ::org::orekit::time::AbsoluteDate getManFrameEpoch() const;
                ::java::lang::String getManID() const;
                ::org::orekit::time::AbsoluteDate getManNextEpoch() const;
                ::java::lang::String getManNextID() const;
                ::java::lang::String getManPredSource() const;
                ::org::orekit::time::AbsoluteDate getManPrevEpoch() const;
                ::java::lang::String getManPrevID() const;
                ::java::util::List getManPurpose() const;
                ::org::orekit::files::ccsds::definitions::FrameFacade getManReferenceFrame() const;
                ::java::util::List getManUnits() const;
                void setDcBodyFrame(const ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame &) const;
                void setDcBodyTrigger(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
                void setDcExecStart(const ::org::orekit::time::AbsoluteDate &) const;
                void setDcExecStop(const ::org::orekit::time::AbsoluteDate &) const;
                void setDcMaxCycles(jint) const;
                void setDcMinCycles(jint) const;
                void setDcPhaseStartAngle(jdouble) const;
                void setDcPhaseStopAngle(jdouble) const;
                void setDcRefDir(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
                void setDcRefTime(const ::org::orekit::time::AbsoluteDate &) const;
                void setDcTimePulseDuration(jdouble) const;
                void setDcTimePulsePeriod(jdouble) const;
                void setDcType(const ::org::orekit::files::ccsds::definitions::DutyCycleType &) const;
                void setDcWindowClose(const ::org::orekit::time::AbsoluteDate &) const;
                void setDcWindowOpen(const ::org::orekit::time::AbsoluteDate &) const;
                void setGravitationalAssist(const ::org::orekit::files::ccsds::definitions::BodyFacade &) const;
                void setManBasis(const ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis &) const;
                void setManBasisID(const ::java::lang::String &) const;
                void setManComposition(const ::java::util::List &) const;
                void setManDeviceID(const ::java::lang::String &) const;
                void setManFrameEpoch(const ::org::orekit::time::AbsoluteDate &) const;
                void setManID(const ::java::lang::String &) const;
                void setManNextEpoch(const ::org::orekit::time::AbsoluteDate &) const;
                void setManNextID(const ::java::lang::String &) const;
                void setManPredSource(const ::java::lang::String &) const;
                void setManPrevEpoch(const ::org::orekit::time::AbsoluteDate &) const;
                void setManPrevID(const ::java::lang::String &) const;
                void setManPurpose(const ::java::util::List &) const;
                void setManReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade &) const;
                void setManUnits(const ::java::util::List &) const;
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
              extern PyType_Def PY_TYPE_DEF(OrbitManeuverHistoryMetadata);
              extern PyTypeObject *PY_TYPE(OrbitManeuverHistoryMetadata);

              class t_OrbitManeuverHistoryMetadata {
              public:
                PyObject_HEAD
                OrbitManeuverHistoryMetadata object;
                static PyObject *wrap_Object(const OrbitManeuverHistoryMetadata&);
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
