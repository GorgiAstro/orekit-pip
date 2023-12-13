#ifndef org_orekit_files_ccsds_ndm_odm_ocm_OrbitManeuverHistoryMetadata_H
#define org_orekit_files_ccsds_ndm_odm_ocm_OrbitManeuverHistoryMetadata_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              class ManeuverFieldType;
              class ManBasis;
            }
          }
        }
        namespace definitions {
          class DutyCycleType;
          class FrameFacade;
          class BodyFacade;
          class SpacecraftBodyFrame;
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
                  mid_init$_02135a6ef25adb4b,
                  mid_getDcBodyFrame_24772727764a5aad,
                  mid_getDcBodyTrigger_8b724f8b4fdad1a2,
                  mid_getDcExecStart_c325492395d89b24,
                  mid_getDcExecStop_c325492395d89b24,
                  mid_getDcMaxCycles_55546ef6a647f39b,
                  mid_getDcMinCycles_55546ef6a647f39b,
                  mid_getDcPhaseStartAngle_b74f83833fdad017,
                  mid_getDcPhaseStopAngle_b74f83833fdad017,
                  mid_getDcRefDir_8b724f8b4fdad1a2,
                  mid_getDcRefTime_c325492395d89b24,
                  mid_getDcTimePulseDuration_b74f83833fdad017,
                  mid_getDcTimePulsePeriod_b74f83833fdad017,
                  mid_getDcType_e5e4c5e790c9f5ca,
                  mid_getDcWindowClose_c325492395d89b24,
                  mid_getDcWindowOpen_c325492395d89b24,
                  mid_getGravitationalAssist_52253a5b5c02abfe,
                  mid_getManBasis_a516a2e871bea30b,
                  mid_getManBasisID_1c1fa1e935d6cdcf,
                  mid_getManComposition_e62d3bb06d56d7e3,
                  mid_getManDeviceID_1c1fa1e935d6cdcf,
                  mid_getManFrameEpoch_c325492395d89b24,
                  mid_getManID_1c1fa1e935d6cdcf,
                  mid_getManNextEpoch_c325492395d89b24,
                  mid_getManNextID_1c1fa1e935d6cdcf,
                  mid_getManPredSource_1c1fa1e935d6cdcf,
                  mid_getManPrevEpoch_c325492395d89b24,
                  mid_getManPrevID_1c1fa1e935d6cdcf,
                  mid_getManPurpose_e62d3bb06d56d7e3,
                  mid_getManReferenceFrame_69d8be1b6b0a1a94,
                  mid_getManUnits_e62d3bb06d56d7e3,
                  mid_setDcBodyFrame_800c6f740bef7b6b,
                  mid_setDcBodyTrigger_1844f891addbac57,
                  mid_setDcExecStart_02135a6ef25adb4b,
                  mid_setDcExecStop_02135a6ef25adb4b,
                  mid_setDcMaxCycles_44ed599e93e8a30c,
                  mid_setDcMinCycles_44ed599e93e8a30c,
                  mid_setDcPhaseStartAngle_8ba9fe7a847cecad,
                  mid_setDcPhaseStopAngle_8ba9fe7a847cecad,
                  mid_setDcRefDir_1844f891addbac57,
                  mid_setDcRefTime_02135a6ef25adb4b,
                  mid_setDcTimePulseDuration_8ba9fe7a847cecad,
                  mid_setDcTimePulsePeriod_8ba9fe7a847cecad,
                  mid_setDcType_0249fbee5d8c189b,
                  mid_setDcWindowClose_02135a6ef25adb4b,
                  mid_setDcWindowOpen_02135a6ef25adb4b,
                  mid_setGravitationalAssist_564458ee450fa323,
                  mid_setManBasis_44d71a583450b179,
                  mid_setManBasisID_734b91ac30d5f9b4,
                  mid_setManComposition_0e7c3032c7c93ed3,
                  mid_setManDeviceID_734b91ac30d5f9b4,
                  mid_setManFrameEpoch_02135a6ef25adb4b,
                  mid_setManID_734b91ac30d5f9b4,
                  mid_setManNextEpoch_02135a6ef25adb4b,
                  mid_setManNextID_734b91ac30d5f9b4,
                  mid_setManPredSource_734b91ac30d5f9b4,
                  mid_setManPrevEpoch_02135a6ef25adb4b,
                  mid_setManPrevID_734b91ac30d5f9b4,
                  mid_setManPurpose_0e7c3032c7c93ed3,
                  mid_setManReferenceFrame_4755133c5c4c59be,
                  mid_setManUnits_0e7c3032c7c93ed3,
                  mid_validate_8ba9fe7a847cecad,
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
