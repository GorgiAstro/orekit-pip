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
          class FrameFacade;
          class BodyFacade;
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
                  mid_init$_e82d68cd9f886886,
                  mid_getDcBodyFrame_c39ec70cc3f195d1,
                  mid_getDcBodyTrigger_17a952530a808943,
                  mid_getDcExecStart_aaa854c403487cf3,
                  mid_getDcExecStop_aaa854c403487cf3,
                  mid_getDcMaxCycles_f2f64475e4580546,
                  mid_getDcMinCycles_f2f64475e4580546,
                  mid_getDcPhaseStartAngle_456d9a2f64d6b28d,
                  mid_getDcPhaseStopAngle_456d9a2f64d6b28d,
                  mid_getDcRefDir_17a952530a808943,
                  mid_getDcRefTime_aaa854c403487cf3,
                  mid_getDcTimePulseDuration_456d9a2f64d6b28d,
                  mid_getDcTimePulsePeriod_456d9a2f64d6b28d,
                  mid_getDcType_91b602a2b98c841d,
                  mid_getDcWindowClose_aaa854c403487cf3,
                  mid_getDcWindowOpen_aaa854c403487cf3,
                  mid_getGravitationalAssist_78375ee64056f203,
                  mid_getManBasis_d862fe28292c9b9b,
                  mid_getManBasisID_0090f7797e403f43,
                  mid_getManComposition_a6156df500549a58,
                  mid_getManDeviceID_0090f7797e403f43,
                  mid_getManFrameEpoch_aaa854c403487cf3,
                  mid_getManID_0090f7797e403f43,
                  mid_getManNextEpoch_aaa854c403487cf3,
                  mid_getManNextID_0090f7797e403f43,
                  mid_getManPredSource_0090f7797e403f43,
                  mid_getManPrevEpoch_aaa854c403487cf3,
                  mid_getManPrevID_0090f7797e403f43,
                  mid_getManPurpose_a6156df500549a58,
                  mid_getManReferenceFrame_aa70fdb14ae9305f,
                  mid_getManUnits_a6156df500549a58,
                  mid_setDcBodyFrame_9299ac438623e4ce,
                  mid_setDcBodyTrigger_a94622407b723689,
                  mid_setDcExecStart_e82d68cd9f886886,
                  mid_setDcExecStop_e82d68cd9f886886,
                  mid_setDcMaxCycles_0a2a1ac2721c0336,
                  mid_setDcMinCycles_0a2a1ac2721c0336,
                  mid_setDcPhaseStartAngle_77e0f9a1f260e2e5,
                  mid_setDcPhaseStopAngle_77e0f9a1f260e2e5,
                  mid_setDcRefDir_a94622407b723689,
                  mid_setDcRefTime_e82d68cd9f886886,
                  mid_setDcTimePulseDuration_77e0f9a1f260e2e5,
                  mid_setDcTimePulsePeriod_77e0f9a1f260e2e5,
                  mid_setDcType_290537ac8c0c16a7,
                  mid_setDcWindowClose_e82d68cd9f886886,
                  mid_setDcWindowOpen_e82d68cd9f886886,
                  mid_setGravitationalAssist_4937bc9292f008b1,
                  mid_setManBasis_34e00ce846eac6f3,
                  mid_setManBasisID_e939c6558ae8d313,
                  mid_setManComposition_65de9727799c5641,
                  mid_setManDeviceID_e939c6558ae8d313,
                  mid_setManFrameEpoch_e82d68cd9f886886,
                  mid_setManID_e939c6558ae8d313,
                  mid_setManNextEpoch_e82d68cd9f886886,
                  mid_setManNextID_e939c6558ae8d313,
                  mid_setManPredSource_e939c6558ae8d313,
                  mid_setManPrevEpoch_e82d68cd9f886886,
                  mid_setManPrevID_e939c6558ae8d313,
                  mid_setManPurpose_65de9727799c5641,
                  mid_setManReferenceFrame_a455f3ff24eb0b47,
                  mid_setManUnits_65de9727799c5641,
                  mid_validate_77e0f9a1f260e2e5,
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
