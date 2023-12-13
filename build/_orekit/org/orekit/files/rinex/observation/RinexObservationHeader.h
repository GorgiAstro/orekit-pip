#ifndef org_orekit_files_rinex_observation_RinexObservationHeader_H
#define org_orekit_files_rinex_observation_RinexObservationHeader_H

#include "org/orekit/files/rinex/section/RinexBaseHeader.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {
          class PhaseShiftCorrection;
          class GlonassSatelliteChannel;
          class ScaleFactorCorrection;
        }
        class AppliedDCBS;
        class AppliedPCVS;
      }
    }
    namespace gnss {
      class SatelliteSystem;
      class SatInSystem;
      class ObservationType;
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
    class List;
    class Map;
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
              mid_init$_a1fa5dae97ea5ed2,
              mid_addAppliedDCBS_0fdf888bd1afbe51,
              mid_addAppliedPCVS_f61ab6fa49270d08,
              mid_addGlonassChannel_33adad59f1fe6906,
              mid_addPhaseShiftCorrection_1621cb7001452a6c,
              mid_addScaleFactorCorrection_72ae2e1032ed1675,
              mid_getAgencyName_1c1fa1e935d6cdcf,
              mid_getAntennaAzimuth_b74f83833fdad017,
              mid_getAntennaBSight_8b724f8b4fdad1a2,
              mid_getAntennaHeight_b74f83833fdad017,
              mid_getAntennaNumber_1c1fa1e935d6cdcf,
              mid_getAntennaPhaseCenter_8b724f8b4fdad1a2,
              mid_getAntennaReferencePoint_8b724f8b4fdad1a2,
              mid_getAntennaType_1c1fa1e935d6cdcf,
              mid_getAntennaZeroDirection_8b724f8b4fdad1a2,
              mid_getApproxPos_8b724f8b4fdad1a2,
              mid_getC1cCodePhaseBias_b74f83833fdad017,
              mid_getC1pCodePhaseBias_b74f83833fdad017,
              mid_getC2cCodePhaseBias_b74f83833fdad017,
              mid_getC2pCodePhaseBias_b74f83833fdad017,
              mid_getCenterMass_8b724f8b4fdad1a2,
              mid_getClkOffset_55546ef6a647f39b,
              mid_getEccentricities_9cb1572c1d4936cf,
              mid_getGlonassChannels_e62d3bb06d56d7e3,
              mid_getInterval_b74f83833fdad017,
              mid_getLeapSeconds_55546ef6a647f39b,
              mid_getLeapSecondsDayNum_55546ef6a647f39b,
              mid_getLeapSecondsFuture_55546ef6a647f39b,
              mid_getLeapSecondsWeekNum_55546ef6a647f39b,
              mid_getListAppliedDCBS_e62d3bb06d56d7e3,
              mid_getListAppliedPCVS_e62d3bb06d56d7e3,
              mid_getMarkerName_1c1fa1e935d6cdcf,
              mid_getMarkerNumber_1c1fa1e935d6cdcf,
              mid_getMarkerType_1c1fa1e935d6cdcf,
              mid_getNbObsPerSat_810bed48fafb0b9a,
              mid_getNbSat_55546ef6a647f39b,
              mid_getObservationCode_1c1fa1e935d6cdcf,
              mid_getObserverName_1c1fa1e935d6cdcf,
              mid_getPhaseCenterSystem_21bd759cc4a81606,
              mid_getPhaseShiftCorrections_e62d3bb06d56d7e3,
              mid_getReceiverNumber_1c1fa1e935d6cdcf,
              mid_getReceiverType_1c1fa1e935d6cdcf,
              mid_getReceiverVersion_1c1fa1e935d6cdcf,
              mid_getScaleFactorCorrections_c8350d68c8d51d84,
              mid_getSignalStrengthUnit_1c1fa1e935d6cdcf,
              mid_getTFirstObs_c325492395d89b24,
              mid_getTLastObs_c325492395d89b24,
              mid_getTypeObs_810bed48fafb0b9a,
              mid_setAgencyName_734b91ac30d5f9b4,
              mid_setAntennaAzimuth_8ba9fe7a847cecad,
              mid_setAntennaBSight_1844f891addbac57,
              mid_setAntennaHeight_8ba9fe7a847cecad,
              mid_setAntennaNumber_734b91ac30d5f9b4,
              mid_setAntennaPhaseCenter_1844f891addbac57,
              mid_setAntennaReferencePoint_1844f891addbac57,
              mid_setAntennaType_734b91ac30d5f9b4,
              mid_setAntennaZeroDirection_1844f891addbac57,
              mid_setApproxPos_1844f891addbac57,
              mid_setC1cCodePhaseBias_8ba9fe7a847cecad,
              mid_setC1pCodePhaseBias_8ba9fe7a847cecad,
              mid_setC2cCodePhaseBias_8ba9fe7a847cecad,
              mid_setC2pCodePhaseBias_8ba9fe7a847cecad,
              mid_setCenterMass_1844f891addbac57,
              mid_setClkOffset_44ed599e93e8a30c,
              mid_setEccentricities_e94ae32a63c9501d,
              mid_setInterval_8ba9fe7a847cecad,
              mid_setLeapSeconds_44ed599e93e8a30c,
              mid_setLeapSecondsDayNum_44ed599e93e8a30c,
              mid_setLeapSecondsFuture_44ed599e93e8a30c,
              mid_setLeapSecondsWeekNum_44ed599e93e8a30c,
              mid_setMarkerName_734b91ac30d5f9b4,
              mid_setMarkerNumber_734b91ac30d5f9b4,
              mid_setMarkerType_734b91ac30d5f9b4,
              mid_setNbObsPerSatellite_accf4185711b3ada,
              mid_setNbSat_44ed599e93e8a30c,
              mid_setObservationCode_734b91ac30d5f9b4,
              mid_setObserverName_734b91ac30d5f9b4,
              mid_setPhaseCenterSystem_cfddc646eebc7104,
              mid_setReceiverNumber_734b91ac30d5f9b4,
              mid_setReceiverType_734b91ac30d5f9b4,
              mid_setReceiverVersion_734b91ac30d5f9b4,
              mid_setSignalStrengthUnit_734b91ac30d5f9b4,
              mid_setTFirstObs_02135a6ef25adb4b,
              mid_setTLastObs_02135a6ef25adb4b,
              mid_setTypeObs_86f62df52fe5e155,
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
