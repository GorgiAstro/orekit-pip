#ifndef org_orekit_files_ccsds_ndm_odm_ocm_OrbitManeuverHistoryMetadata_H
#define org_orekit_files_ccsds_ndm_odm_ocm_OrbitManeuverHistoryMetadata_H

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
          class DutyCycleType;
          class SpacecraftBodyFrame;
          class FrameFacade;
        }
        namespace ndm {
          namespace odm {
            namespace ocm {
              class ManBasis;
              class ManeuverFieldType;
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
                  mid_init$_20affcbd28542333,
                  mid_getDcBodyFrame_f86371e743965d5e,
                  mid_getDcBodyTrigger_f88961cca75a2c0a,
                  mid_getDcExecStart_7a97f7e149e79afb,
                  mid_getDcExecStop_7a97f7e149e79afb,
                  mid_getDcMaxCycles_412668abc8d889e9,
                  mid_getDcMinCycles_412668abc8d889e9,
                  mid_getDcPhaseStartAngle_557b8123390d8d0c,
                  mid_getDcPhaseStopAngle_557b8123390d8d0c,
                  mid_getDcRefDir_f88961cca75a2c0a,
                  mid_getDcRefTime_7a97f7e149e79afb,
                  mid_getDcTimePulseDuration_557b8123390d8d0c,
                  mid_getDcTimePulsePeriod_557b8123390d8d0c,
                  mid_getDcType_f6ee7f5f33e09f00,
                  mid_getDcWindowClose_7a97f7e149e79afb,
                  mid_getDcWindowOpen_7a97f7e149e79afb,
                  mid_getGravitationalAssist_c642bce266d6d89a,
                  mid_getManBasis_1929aa09b0efe5e6,
                  mid_getManBasisID_3cffd47377eca18a,
                  mid_getManComposition_0d9551367f7ecdef,
                  mid_getManDeviceID_3cffd47377eca18a,
                  mid_getManFrameEpoch_7a97f7e149e79afb,
                  mid_getManID_3cffd47377eca18a,
                  mid_getManNextEpoch_7a97f7e149e79afb,
                  mid_getManNextID_3cffd47377eca18a,
                  mid_getManPredSource_3cffd47377eca18a,
                  mid_getManPrevEpoch_7a97f7e149e79afb,
                  mid_getManPrevID_3cffd47377eca18a,
                  mid_getManPurpose_0d9551367f7ecdef,
                  mid_getManReferenceFrame_98f5fcaff3e3f9d2,
                  mid_getManUnits_0d9551367f7ecdef,
                  mid_setDcBodyFrame_cd9779da9f153284,
                  mid_setDcBodyTrigger_2810d2bec90e7b1c,
                  mid_setDcExecStart_20affcbd28542333,
                  mid_setDcExecStop_20affcbd28542333,
                  mid_setDcMaxCycles_a3da1a935cb37f7b,
                  mid_setDcMinCycles_a3da1a935cb37f7b,
                  mid_setDcPhaseStartAngle_10f281d777284cea,
                  mid_setDcPhaseStopAngle_10f281d777284cea,
                  mid_setDcRefDir_2810d2bec90e7b1c,
                  mid_setDcRefTime_20affcbd28542333,
                  mid_setDcTimePulseDuration_10f281d777284cea,
                  mid_setDcTimePulsePeriod_10f281d777284cea,
                  mid_setDcType_4d69b82588c717d8,
                  mid_setDcWindowClose_20affcbd28542333,
                  mid_setDcWindowOpen_20affcbd28542333,
                  mid_setGravitationalAssist_e6f755c267d91c26,
                  mid_setManBasis_5c26ac53f1ec8457,
                  mid_setManBasisID_f5ffdf29129ef90a,
                  mid_setManComposition_4ccaedadb068bdeb,
                  mid_setManDeviceID_f5ffdf29129ef90a,
                  mid_setManFrameEpoch_20affcbd28542333,
                  mid_setManID_f5ffdf29129ef90a,
                  mid_setManNextEpoch_20affcbd28542333,
                  mid_setManNextID_f5ffdf29129ef90a,
                  mid_setManPredSource_f5ffdf29129ef90a,
                  mid_setManPrevEpoch_20affcbd28542333,
                  mid_setManPrevID_f5ffdf29129ef90a,
                  mid_setManPurpose_4ccaedadb068bdeb,
                  mid_setManReferenceFrame_f55eee1236275bb1,
                  mid_setManUnits_4ccaedadb068bdeb,
                  mid_validate_10f281d777284cea,
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
