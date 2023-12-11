#ifndef org_orekit_files_rinex_observation_RinexObservationHeader_H
#define org_orekit_files_rinex_observation_RinexObservationHeader_H

#include "org/orekit/files/rinex/section/RinexBaseHeader.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {
          class ScaleFactorCorrection;
          class PhaseShiftCorrection;
          class GlonassSatelliteChannel;
        }
        class AppliedPCVS;
        class AppliedDCBS;
      }
    }
    namespace gnss {
      class ObservationType;
      class SatelliteSystem;
      class SatInSystem;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          class Vector2D;
        }
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
              mid_init$_0640e6acf969ed28,
              mid_addAppliedDCBS_5034cecf671e2223,
              mid_addAppliedPCVS_f2258d58c79245ba,
              mid_addGlonassChannel_efb944f0094c6fb9,
              mid_addPhaseShiftCorrection_b47a486125b2400e,
              mid_addScaleFactorCorrection_667db1451efaddbb,
              mid_getAgencyName_3cffd47377eca18a,
              mid_getAntennaAzimuth_557b8123390d8d0c,
              mid_getAntennaBSight_f88961cca75a2c0a,
              mid_getAntennaHeight_557b8123390d8d0c,
              mid_getAntennaNumber_3cffd47377eca18a,
              mid_getAntennaPhaseCenter_f88961cca75a2c0a,
              mid_getAntennaReferencePoint_f88961cca75a2c0a,
              mid_getAntennaType_3cffd47377eca18a,
              mid_getAntennaZeroDirection_f88961cca75a2c0a,
              mid_getApproxPos_f88961cca75a2c0a,
              mid_getC1cCodePhaseBias_557b8123390d8d0c,
              mid_getC1pCodePhaseBias_557b8123390d8d0c,
              mid_getC2cCodePhaseBias_557b8123390d8d0c,
              mid_getC2pCodePhaseBias_557b8123390d8d0c,
              mid_getCenterMass_f88961cca75a2c0a,
              mid_getClkOffset_412668abc8d889e9,
              mid_getEccentricities_f681f2fc9cdfab57,
              mid_getGlonassChannels_0d9551367f7ecdef,
              mid_getInterval_557b8123390d8d0c,
              mid_getLeapSeconds_412668abc8d889e9,
              mid_getLeapSecondsDayNum_412668abc8d889e9,
              mid_getLeapSecondsFuture_412668abc8d889e9,
              mid_getLeapSecondsWeekNum_412668abc8d889e9,
              mid_getListAppliedDCBS_0d9551367f7ecdef,
              mid_getListAppliedPCVS_0d9551367f7ecdef,
              mid_getMarkerName_3cffd47377eca18a,
              mid_getMarkerNumber_3cffd47377eca18a,
              mid_getMarkerType_3cffd47377eca18a,
              mid_getNbObsPerSat_1e62c2f73fbdd1c4,
              mid_getNbSat_412668abc8d889e9,
              mid_getObservationCode_3cffd47377eca18a,
              mid_getObserverName_3cffd47377eca18a,
              mid_getPhaseCenterSystem_8b86408cc2633961,
              mid_getPhaseShiftCorrections_0d9551367f7ecdef,
              mid_getReceiverNumber_3cffd47377eca18a,
              mid_getReceiverType_3cffd47377eca18a,
              mid_getReceiverVersion_3cffd47377eca18a,
              mid_getScaleFactorCorrections_00be16943b113650,
              mid_getSignalStrengthUnit_3cffd47377eca18a,
              mid_getTFirstObs_7a97f7e149e79afb,
              mid_getTLastObs_7a97f7e149e79afb,
              mid_getTypeObs_1e62c2f73fbdd1c4,
              mid_setAgencyName_f5ffdf29129ef90a,
              mid_setAntennaAzimuth_10f281d777284cea,
              mid_setAntennaBSight_2810d2bec90e7b1c,
              mid_setAntennaHeight_10f281d777284cea,
              mid_setAntennaNumber_f5ffdf29129ef90a,
              mid_setAntennaPhaseCenter_2810d2bec90e7b1c,
              mid_setAntennaReferencePoint_2810d2bec90e7b1c,
              mid_setAntennaType_f5ffdf29129ef90a,
              mid_setAntennaZeroDirection_2810d2bec90e7b1c,
              mid_setApproxPos_2810d2bec90e7b1c,
              mid_setC1cCodePhaseBias_10f281d777284cea,
              mid_setC1pCodePhaseBias_10f281d777284cea,
              mid_setC2cCodePhaseBias_10f281d777284cea,
              mid_setC2pCodePhaseBias_10f281d777284cea,
              mid_setCenterMass_2810d2bec90e7b1c,
              mid_setClkOffset_a3da1a935cb37f7b,
              mid_setEccentricities_086d06980fa26fc1,
              mid_setInterval_10f281d777284cea,
              mid_setLeapSeconds_a3da1a935cb37f7b,
              mid_setLeapSecondsDayNum_a3da1a935cb37f7b,
              mid_setLeapSecondsFuture_a3da1a935cb37f7b,
              mid_setLeapSecondsWeekNum_a3da1a935cb37f7b,
              mid_setMarkerName_f5ffdf29129ef90a,
              mid_setMarkerNumber_f5ffdf29129ef90a,
              mid_setMarkerType_f5ffdf29129ef90a,
              mid_setNbObsPerSatellite_9d69b214249a70a5,
              mid_setNbSat_a3da1a935cb37f7b,
              mid_setObservationCode_f5ffdf29129ef90a,
              mid_setObserverName_f5ffdf29129ef90a,
              mid_setPhaseCenterSystem_b744026f46deda44,
              mid_setReceiverNumber_f5ffdf29129ef90a,
              mid_setReceiverType_f5ffdf29129ef90a,
              mid_setReceiverVersion_f5ffdf29129ef90a,
              mid_setSignalStrengthUnit_f5ffdf29129ef90a,
              mid_setTFirstObs_20affcbd28542333,
              mid_setTLastObs_20affcbd28542333,
              mid_setTypeObs_2060bf8275840ff8,
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
