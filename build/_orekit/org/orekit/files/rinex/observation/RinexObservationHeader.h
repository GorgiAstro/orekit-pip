#ifndef org_orekit_files_rinex_observation_RinexObservationHeader_H
#define org_orekit_files_rinex_observation_RinexObservationHeader_H

#include "org/orekit/files/rinex/section/RinexBaseHeader.h"

namespace org {
  namespace orekit {
    namespace gnss {
      class SatInSystem;
      class SatelliteSystem;
      class ObservationType;
    }
    namespace files {
      namespace rinex {
        namespace observation {
          class GlonassSatelliteChannel;
          class ScaleFactorCorrection;
          class PhaseShiftCorrection;
        }
        class AppliedDCBS;
        class AppliedPCVS;
      }
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
              mid_init$_ff7cb6c242604316,
              mid_addAppliedDCBS_cacb67a9e2822f90,
              mid_addAppliedPCVS_604ce729c44b1f15,
              mid_addGlonassChannel_31dba420c1ba38ab,
              mid_addPhaseShiftCorrection_d034c62f8126db5c,
              mid_addScaleFactorCorrection_41be978230b54fd6,
              mid_getAgencyName_d2c8eb4129821f0e,
              mid_getAntennaAzimuth_9981f74b2d109da6,
              mid_getAntennaBSight_032312bdeb3f2f93,
              mid_getAntennaHeight_9981f74b2d109da6,
              mid_getAntennaNumber_d2c8eb4129821f0e,
              mid_getAntennaPhaseCenter_032312bdeb3f2f93,
              mid_getAntennaReferencePoint_032312bdeb3f2f93,
              mid_getAntennaType_d2c8eb4129821f0e,
              mid_getAntennaZeroDirection_032312bdeb3f2f93,
              mid_getApproxPos_032312bdeb3f2f93,
              mid_getC1cCodePhaseBias_9981f74b2d109da6,
              mid_getC1pCodePhaseBias_9981f74b2d109da6,
              mid_getC2cCodePhaseBias_9981f74b2d109da6,
              mid_getC2pCodePhaseBias_9981f74b2d109da6,
              mid_getCenterMass_032312bdeb3f2f93,
              mid_getClkOffset_d6ab429752e7c267,
              mid_getEccentricities_0490d0574aafb07c,
              mid_getGlonassChannels_d751c1a57012b438,
              mid_getInterval_9981f74b2d109da6,
              mid_getLeapSeconds_d6ab429752e7c267,
              mid_getLeapSecondsDayNum_d6ab429752e7c267,
              mid_getLeapSecondsFuture_d6ab429752e7c267,
              mid_getLeapSecondsWeekNum_d6ab429752e7c267,
              mid_getListAppliedDCBS_d751c1a57012b438,
              mid_getListAppliedPCVS_d751c1a57012b438,
              mid_getMarkerName_d2c8eb4129821f0e,
              mid_getMarkerNumber_d2c8eb4129821f0e,
              mid_getMarkerType_d2c8eb4129821f0e,
              mid_getNbObsPerSat_dbcb8bbac6b35e0d,
              mid_getNbSat_d6ab429752e7c267,
              mid_getObservationCode_d2c8eb4129821f0e,
              mid_getObserverName_d2c8eb4129821f0e,
              mid_getPhaseCenterSystem_fb0bd27fcc3ba9fc,
              mid_getPhaseShiftCorrections_d751c1a57012b438,
              mid_getReceiverNumber_d2c8eb4129821f0e,
              mid_getReceiverType_d2c8eb4129821f0e,
              mid_getReceiverVersion_d2c8eb4129821f0e,
              mid_getScaleFactorCorrections_25558a74630b541a,
              mid_getSignalStrengthUnit_d2c8eb4129821f0e,
              mid_getTFirstObs_80e11148db499dda,
              mid_getTLastObs_80e11148db499dda,
              mid_getTypeObs_dbcb8bbac6b35e0d,
              mid_setAgencyName_105e1eadb709d9ac,
              mid_setAntennaAzimuth_1ad26e8c8c0cd65b,
              mid_setAntennaBSight_30f8886dfb88a63c,
              mid_setAntennaHeight_1ad26e8c8c0cd65b,
              mid_setAntennaNumber_105e1eadb709d9ac,
              mid_setAntennaPhaseCenter_30f8886dfb88a63c,
              mid_setAntennaReferencePoint_30f8886dfb88a63c,
              mid_setAntennaType_105e1eadb709d9ac,
              mid_setAntennaZeroDirection_30f8886dfb88a63c,
              mid_setApproxPos_30f8886dfb88a63c,
              mid_setC1cCodePhaseBias_1ad26e8c8c0cd65b,
              mid_setC1pCodePhaseBias_1ad26e8c8c0cd65b,
              mid_setC2cCodePhaseBias_1ad26e8c8c0cd65b,
              mid_setC2pCodePhaseBias_1ad26e8c8c0cd65b,
              mid_setCenterMass_30f8886dfb88a63c,
              mid_setClkOffset_8fd427ab23829bf5,
              mid_setEccentricities_bcb0f1d2f82539d7,
              mid_setInterval_1ad26e8c8c0cd65b,
              mid_setLeapSeconds_8fd427ab23829bf5,
              mid_setLeapSecondsDayNum_8fd427ab23829bf5,
              mid_setLeapSecondsFuture_8fd427ab23829bf5,
              mid_setLeapSecondsWeekNum_8fd427ab23829bf5,
              mid_setMarkerName_105e1eadb709d9ac,
              mid_setMarkerNumber_105e1eadb709d9ac,
              mid_setMarkerType_105e1eadb709d9ac,
              mid_setNbObsPerSatellite_971cfc972d2d9b4c,
              mid_setNbSat_8fd427ab23829bf5,
              mid_setObservationCode_105e1eadb709d9ac,
              mid_setObserverName_105e1eadb709d9ac,
              mid_setPhaseCenterSystem_b8157be2fa2780f9,
              mid_setReceiverNumber_105e1eadb709d9ac,
              mid_setReceiverType_105e1eadb709d9ac,
              mid_setReceiverVersion_105e1eadb709d9ac,
              mid_setSignalStrengthUnit_105e1eadb709d9ac,
              mid_setTFirstObs_8497861b879c83f7,
              mid_setTLastObs_8497861b879c83f7,
              mid_setTypeObs_7edf576ce12e7117,
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
