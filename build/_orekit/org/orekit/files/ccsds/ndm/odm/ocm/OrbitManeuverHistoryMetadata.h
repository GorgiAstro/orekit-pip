#ifndef org_orekit_files_ccsds_ndm_odm_ocm_OrbitManeuverHistoryMetadata_H
#define org_orekit_files_ccsds_ndm_odm_ocm_OrbitManeuverHistoryMetadata_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class FrameFacade;
          class SpacecraftBodyFrame;
          class BodyFacade;
          class DutyCycleType;
        }
        namespace ndm {
          namespace odm {
            namespace ocm {
              class ManeuverFieldType;
              class ManBasis;
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
                  mid_init$_8497861b879c83f7,
                  mid_getDcBodyFrame_e9bc4980320b8143,
                  mid_getDcBodyTrigger_032312bdeb3f2f93,
                  mid_getDcExecStart_80e11148db499dda,
                  mid_getDcExecStop_80e11148db499dda,
                  mid_getDcMaxCycles_d6ab429752e7c267,
                  mid_getDcMinCycles_d6ab429752e7c267,
                  mid_getDcPhaseStartAngle_9981f74b2d109da6,
                  mid_getDcPhaseStopAngle_9981f74b2d109da6,
                  mid_getDcRefDir_032312bdeb3f2f93,
                  mid_getDcRefTime_80e11148db499dda,
                  mid_getDcTimePulseDuration_9981f74b2d109da6,
                  mid_getDcTimePulsePeriod_9981f74b2d109da6,
                  mid_getDcType_07d58be067d8cb2a,
                  mid_getDcWindowClose_80e11148db499dda,
                  mid_getDcWindowOpen_80e11148db499dda,
                  mid_getGravitationalAssist_540df4afb4ddb1b4,
                  mid_getManBasis_b17bc5f3c95b1cb7,
                  mid_getManBasisID_d2c8eb4129821f0e,
                  mid_getManComposition_d751c1a57012b438,
                  mid_getManDeviceID_d2c8eb4129821f0e,
                  mid_getManFrameEpoch_80e11148db499dda,
                  mid_getManID_d2c8eb4129821f0e,
                  mid_getManNextEpoch_80e11148db499dda,
                  mid_getManNextID_d2c8eb4129821f0e,
                  mid_getManPredSource_d2c8eb4129821f0e,
                  mid_getManPrevEpoch_80e11148db499dda,
                  mid_getManPrevID_d2c8eb4129821f0e,
                  mid_getManPurpose_d751c1a57012b438,
                  mid_getManReferenceFrame_0fc1562b68204151,
                  mid_getManUnits_d751c1a57012b438,
                  mid_setDcBodyFrame_1b58748bec435507,
                  mid_setDcBodyTrigger_30f8886dfb88a63c,
                  mid_setDcExecStart_8497861b879c83f7,
                  mid_setDcExecStop_8497861b879c83f7,
                  mid_setDcMaxCycles_8fd427ab23829bf5,
                  mid_setDcMinCycles_8fd427ab23829bf5,
                  mid_setDcPhaseStartAngle_1ad26e8c8c0cd65b,
                  mid_setDcPhaseStopAngle_1ad26e8c8c0cd65b,
                  mid_setDcRefDir_30f8886dfb88a63c,
                  mid_setDcRefTime_8497861b879c83f7,
                  mid_setDcTimePulseDuration_1ad26e8c8c0cd65b,
                  mid_setDcTimePulsePeriod_1ad26e8c8c0cd65b,
                  mid_setDcType_ab5db9abb743063f,
                  mid_setDcWindowClose_8497861b879c83f7,
                  mid_setDcWindowOpen_8497861b879c83f7,
                  mid_setGravitationalAssist_9fc8078d81282211,
                  mid_setManBasis_6733305d18006c0f,
                  mid_setManBasisID_105e1eadb709d9ac,
                  mid_setManComposition_aa335fea495d60e0,
                  mid_setManDeviceID_105e1eadb709d9ac,
                  mid_setManFrameEpoch_8497861b879c83f7,
                  mid_setManID_105e1eadb709d9ac,
                  mid_setManNextEpoch_8497861b879c83f7,
                  mid_setManNextID_105e1eadb709d9ac,
                  mid_setManPredSource_105e1eadb709d9ac,
                  mid_setManPrevEpoch_8497861b879c83f7,
                  mid_setManPrevID_105e1eadb709d9ac,
                  mid_setManPurpose_aa335fea495d60e0,
                  mid_setManReferenceFrame_2c8b859a72c0094e,
                  mid_setManUnits_aa335fea495d60e0,
                  mid_validate_1ad26e8c8c0cd65b,
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
