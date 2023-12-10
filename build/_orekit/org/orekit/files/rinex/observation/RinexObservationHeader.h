#ifndef org_orekit_files_rinex_observation_RinexObservationHeader_H
#define org_orekit_files_rinex_observation_RinexObservationHeader_H

#include "org/orekit/files/rinex/section/RinexBaseHeader.h"

namespace org {
  namespace orekit {
    namespace gnss {
      class SatInSystem;
      class ObservationType;
      class SatelliteSystem;
    }
    namespace files {
      namespace rinex {
        class AppliedPCVS;
        class AppliedDCBS;
        namespace observation {
          class GlonassSatelliteChannel;
          class PhaseShiftCorrection;
          class ScaleFactorCorrection;
        }
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
        namespace twod {
          class Vector2D;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
    class List;
  }
  namespace lang {
    class Integer;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          class RinexObservationHeader : public ::org::orekit::files::rinex::section::RinexBaseHeader {
           public:
            enum {
              mid_init$_7ae3461a92a43152,
              mid_addAppliedDCBS_ff0e7309079f40cf,
              mid_addAppliedPCVS_53fc7a51ceba7c31,
              mid_addGlonassChannel_70e9e40c5d576285,
              mid_addPhaseShiftCorrection_9cf1aa1004e8e5bd,
              mid_addScaleFactorCorrection_a1d4795e2dd1188b,
              mid_getAgencyName_0090f7797e403f43,
              mid_getAntennaAzimuth_456d9a2f64d6b28d,
              mid_getAntennaBSight_17a952530a808943,
              mid_getAntennaHeight_456d9a2f64d6b28d,
              mid_getAntennaNumber_0090f7797e403f43,
              mid_getAntennaPhaseCenter_17a952530a808943,
              mid_getAntennaReferencePoint_17a952530a808943,
              mid_getAntennaType_0090f7797e403f43,
              mid_getAntennaZeroDirection_17a952530a808943,
              mid_getApproxPos_17a952530a808943,
              mid_getC1cCodePhaseBias_456d9a2f64d6b28d,
              mid_getC1pCodePhaseBias_456d9a2f64d6b28d,
              mid_getC2cCodePhaseBias_456d9a2f64d6b28d,
              mid_getC2pCodePhaseBias_456d9a2f64d6b28d,
              mid_getCenterMass_17a952530a808943,
              mid_getClkOffset_f2f64475e4580546,
              mid_getEccentricities_6d781af269bebe5e,
              mid_getGlonassChannels_a6156df500549a58,
              mid_getInterval_456d9a2f64d6b28d,
              mid_getLeapSeconds_f2f64475e4580546,
              mid_getLeapSecondsDayNum_f2f64475e4580546,
              mid_getLeapSecondsFuture_f2f64475e4580546,
              mid_getLeapSecondsWeekNum_f2f64475e4580546,
              mid_getListAppliedDCBS_a6156df500549a58,
              mid_getListAppliedPCVS_a6156df500549a58,
              mid_getMarkerName_0090f7797e403f43,
              mid_getMarkerNumber_0090f7797e403f43,
              mid_getMarkerType_0090f7797e403f43,
              mid_getNbObsPerSat_d6753b7055940a54,
              mid_getNbSat_f2f64475e4580546,
              mid_getObservationCode_0090f7797e403f43,
              mid_getObserverName_0090f7797e403f43,
              mid_getPhaseCenterSystem_1b72fcc8f550bfc7,
              mid_getPhaseShiftCorrections_a6156df500549a58,
              mid_getReceiverNumber_0090f7797e403f43,
              mid_getReceiverType_0090f7797e403f43,
              mid_getReceiverVersion_0090f7797e403f43,
              mid_getScaleFactorCorrections_31d4a1bf5da85458,
              mid_getSignalStrengthUnit_0090f7797e403f43,
              mid_getTFirstObs_aaa854c403487cf3,
              mid_getTLastObs_aaa854c403487cf3,
              mid_getTypeObs_d6753b7055940a54,
              mid_setAgencyName_e939c6558ae8d313,
              mid_setAntennaAzimuth_77e0f9a1f260e2e5,
              mid_setAntennaBSight_a94622407b723689,
              mid_setAntennaHeight_77e0f9a1f260e2e5,
              mid_setAntennaNumber_e939c6558ae8d313,
              mid_setAntennaPhaseCenter_a94622407b723689,
              mid_setAntennaReferencePoint_a94622407b723689,
              mid_setAntennaType_e939c6558ae8d313,
              mid_setAntennaZeroDirection_a94622407b723689,
              mid_setApproxPos_a94622407b723689,
              mid_setC1cCodePhaseBias_77e0f9a1f260e2e5,
              mid_setC1pCodePhaseBias_77e0f9a1f260e2e5,
              mid_setC2cCodePhaseBias_77e0f9a1f260e2e5,
              mid_setC2pCodePhaseBias_77e0f9a1f260e2e5,
              mid_setCenterMass_a94622407b723689,
              mid_setClkOffset_0a2a1ac2721c0336,
              mid_setEccentricities_6b877e75654b72f2,
              mid_setInterval_77e0f9a1f260e2e5,
              mid_setLeapSeconds_0a2a1ac2721c0336,
              mid_setLeapSecondsDayNum_0a2a1ac2721c0336,
              mid_setLeapSecondsFuture_0a2a1ac2721c0336,
              mid_setLeapSecondsWeekNum_0a2a1ac2721c0336,
              mid_setMarkerName_e939c6558ae8d313,
              mid_setMarkerNumber_e939c6558ae8d313,
              mid_setMarkerType_e939c6558ae8d313,
              mid_setNbObsPerSatellite_a41e1305960ee8b3,
              mid_setNbSat_0a2a1ac2721c0336,
              mid_setObservationCode_e939c6558ae8d313,
              mid_setObserverName_e939c6558ae8d313,
              mid_setPhaseCenterSystem_a9204a81fe55aebe,
              mid_setReceiverNumber_e939c6558ae8d313,
              mid_setReceiverType_e939c6558ae8d313,
              mid_setReceiverVersion_e939c6558ae8d313,
              mid_setSignalStrengthUnit_e939c6558ae8d313,
              mid_setTFirstObs_e82d68cd9f886886,
              mid_setTLastObs_e82d68cd9f886886,
              mid_setTypeObs_e302854832599b59,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RinexObservationHeader(jobject obj) : ::org::orekit::files::rinex::section::RinexBaseHeader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RinexObservationHeader(const RinexObservationHeader& obj) : ::org::orekit::files::rinex::section::RinexBaseHeader(obj) {}

            RinexObservationHeader();

            void addAppliedDCBS(const ::org::orekit::files::rinex::AppliedDCBS &) const;
            void addAppliedPCVS(const ::org::orekit::files::rinex::AppliedPCVS &) const;
            void addGlonassChannel(const ::org::orekit::files::rinex::observation::GlonassSatelliteChannel &) const;
            void addPhaseShiftCorrection(const ::org::orekit::files::rinex::observation::PhaseShiftCorrection &) const;
            void addScaleFactorCorrection(const ::org::orekit::gnss::SatelliteSystem &, const ::org::orekit::files::rinex::observation::ScaleFactorCorrection &) const;
            ::java::lang::String getAgencyName() const;
            jdouble getAntennaAzimuth() const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getAntennaBSight() const;
            jdouble getAntennaHeight() const;
            ::java::lang::String getAntennaNumber() const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getAntennaPhaseCenter() const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getAntennaReferencePoint() const;
            ::java::lang::String getAntennaType() const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getAntennaZeroDirection() const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getApproxPos() const;
            jdouble getC1cCodePhaseBias() const;
            jdouble getC1pCodePhaseBias() const;
            jdouble getC2cCodePhaseBias() const;
            jdouble getC2pCodePhaseBias() const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getCenterMass() const;
            jint getClkOffset() const;
            ::org::hipparchus::geometry::euclidean::twod::Vector2D getEccentricities() const;
            ::java::util::List getGlonassChannels() const;
            jdouble getInterval() const;
            jint getLeapSeconds() const;
            jint getLeapSecondsDayNum() const;
            jint getLeapSecondsFuture() const;
            jint getLeapSecondsWeekNum() const;
            ::java::util::List getListAppliedDCBS() const;
            ::java::util::List getListAppliedPCVS() const;
            ::java::lang::String getMarkerName() const;
            ::java::lang::String getMarkerNumber() const;
            ::java::lang::String getMarkerType() const;
            ::java::util::Map getNbObsPerSat() const;
            jint getNbSat() const;
            ::java::lang::String getObservationCode() const;
            ::java::lang::String getObserverName() const;
            ::org::orekit::gnss::SatelliteSystem getPhaseCenterSystem() const;
            ::java::util::List getPhaseShiftCorrections() const;
            ::java::lang::String getReceiverNumber() const;
            ::java::lang::String getReceiverType() const;
            ::java::lang::String getReceiverVersion() const;
            ::java::util::List getScaleFactorCorrections(const ::org::orekit::gnss::SatelliteSystem &) const;
            ::java::lang::String getSignalStrengthUnit() const;
            ::org::orekit::time::AbsoluteDate getTFirstObs() const;
            ::org::orekit::time::AbsoluteDate getTLastObs() const;
            ::java::util::Map getTypeObs() const;
            void setAgencyName(const ::java::lang::String &) const;
            void setAntennaAzimuth(jdouble) const;
            void setAntennaBSight(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            void setAntennaHeight(jdouble) const;
            void setAntennaNumber(const ::java::lang::String &) const;
            void setAntennaPhaseCenter(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            void setAntennaReferencePoint(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            void setAntennaType(const ::java::lang::String &) const;
            void setAntennaZeroDirection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            void setApproxPos(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            void setC1cCodePhaseBias(jdouble) const;
            void setC1pCodePhaseBias(jdouble) const;
            void setC2cCodePhaseBias(jdouble) const;
            void setC2pCodePhaseBias(jdouble) const;
            void setCenterMass(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            void setClkOffset(jint) const;
            void setEccentricities(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &) const;
            void setInterval(jdouble) const;
            void setLeapSeconds(jint) const;
            void setLeapSecondsDayNum(jint) const;
            void setLeapSecondsFuture(jint) const;
            void setLeapSecondsWeekNum(jint) const;
            void setMarkerName(const ::java::lang::String &) const;
            void setMarkerNumber(const ::java::lang::String &) const;
            void setMarkerType(const ::java::lang::String &) const;
            void setNbObsPerSatellite(const ::org::orekit::gnss::SatInSystem &, const ::org::orekit::gnss::ObservationType &, jint) const;
            void setNbSat(jint) const;
            void setObservationCode(const ::java::lang::String &) const;
            void setObserverName(const ::java::lang::String &) const;
            void setPhaseCenterSystem(const ::org::orekit::gnss::SatelliteSystem &) const;
            void setReceiverNumber(const ::java::lang::String &) const;
            void setReceiverType(const ::java::lang::String &) const;
            void setReceiverVersion(const ::java::lang::String &) const;
            void setSignalStrengthUnit(const ::java::lang::String &) const;
            void setTFirstObs(const ::org::orekit::time::AbsoluteDate &) const;
            void setTLastObs(const ::org::orekit::time::AbsoluteDate &) const;
            void setTypeObs(const ::org::orekit::gnss::SatelliteSystem &, const ::java::util::List &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {
          extern PyType_Def PY_TYPE_DEF(RinexObservationHeader);
          extern PyTypeObject *PY_TYPE(RinexObservationHeader);

          class t_RinexObservationHeader {
          public:
            PyObject_HEAD
            RinexObservationHeader object;
            static PyObject *wrap_Object(const RinexObservationHeader&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
