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
      class SatInSystem;
      class SatelliteSystem;
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
              mid_init$_0fa09c18fee449d5,
              mid_addAppliedDCBS_924dc948b3328b0a,
              mid_addAppliedPCVS_6ae122bae3989b66,
              mid_addGlonassChannel_229e08939b0b6df7,
              mid_addPhaseShiftCorrection_16a4824169a35abe,
              mid_addScaleFactorCorrection_4b56a58268a38e26,
              mid_getAgencyName_11b109bd155ca898,
              mid_getAntennaAzimuth_dff5885c2c873297,
              mid_getAntennaBSight_d52645e0d4c07563,
              mid_getAntennaHeight_dff5885c2c873297,
              mid_getAntennaNumber_11b109bd155ca898,
              mid_getAntennaPhaseCenter_d52645e0d4c07563,
              mid_getAntennaReferencePoint_d52645e0d4c07563,
              mid_getAntennaType_11b109bd155ca898,
              mid_getAntennaZeroDirection_d52645e0d4c07563,
              mid_getApproxPos_d52645e0d4c07563,
              mid_getC1cCodePhaseBias_dff5885c2c873297,
              mid_getC1pCodePhaseBias_dff5885c2c873297,
              mid_getC2cCodePhaseBias_dff5885c2c873297,
              mid_getC2pCodePhaseBias_dff5885c2c873297,
              mid_getCenterMass_d52645e0d4c07563,
              mid_getClkOffset_570ce0828f81a2c1,
              mid_getEccentricities_73f627838730c264,
              mid_getGlonassChannels_2afa36052df4765d,
              mid_getInterval_dff5885c2c873297,
              mid_getLeapSeconds_570ce0828f81a2c1,
              mid_getLeapSecondsDayNum_570ce0828f81a2c1,
              mid_getLeapSecondsFuture_570ce0828f81a2c1,
              mid_getLeapSecondsWeekNum_570ce0828f81a2c1,
              mid_getListAppliedDCBS_2afa36052df4765d,
              mid_getListAppliedPCVS_2afa36052df4765d,
              mid_getMarkerName_11b109bd155ca898,
              mid_getMarkerNumber_11b109bd155ca898,
              mid_getMarkerType_11b109bd155ca898,
              mid_getNbObsPerSat_6f5a75ccd8c04465,
              mid_getNbSat_570ce0828f81a2c1,
              mid_getObservationCode_11b109bd155ca898,
              mid_getObserverName_11b109bd155ca898,
              mid_getPhaseCenterSystem_01acae5c1a253b8e,
              mid_getPhaseShiftCorrections_2afa36052df4765d,
              mid_getReceiverNumber_11b109bd155ca898,
              mid_getReceiverType_11b109bd155ca898,
              mid_getReceiverVersion_11b109bd155ca898,
              mid_getScaleFactorCorrections_a32fd2dc2b4dc37a,
              mid_getSignalStrengthUnit_11b109bd155ca898,
              mid_getTFirstObs_85703d13e302437e,
              mid_getTLastObs_85703d13e302437e,
              mid_getTypeObs_6f5a75ccd8c04465,
              mid_setAgencyName_d0bc48d5b00dc40c,
              mid_setAntennaAzimuth_17db3a65980d3441,
              mid_setAntennaBSight_029ff0cbf68ea054,
              mid_setAntennaHeight_17db3a65980d3441,
              mid_setAntennaNumber_d0bc48d5b00dc40c,
              mid_setAntennaPhaseCenter_029ff0cbf68ea054,
              mid_setAntennaReferencePoint_029ff0cbf68ea054,
              mid_setAntennaType_d0bc48d5b00dc40c,
              mid_setAntennaZeroDirection_029ff0cbf68ea054,
              mid_setApproxPos_029ff0cbf68ea054,
              mid_setC1cCodePhaseBias_17db3a65980d3441,
              mid_setC1pCodePhaseBias_17db3a65980d3441,
              mid_setC2cCodePhaseBias_17db3a65980d3441,
              mid_setC2pCodePhaseBias_17db3a65980d3441,
              mid_setCenterMass_029ff0cbf68ea054,
              mid_setClkOffset_99803b0791f320ff,
              mid_setEccentricities_6008d3447ce702ca,
              mid_setInterval_17db3a65980d3441,
              mid_setLeapSeconds_99803b0791f320ff,
              mid_setLeapSecondsDayNum_99803b0791f320ff,
              mid_setLeapSecondsFuture_99803b0791f320ff,
              mid_setLeapSecondsWeekNum_99803b0791f320ff,
              mid_setMarkerName_d0bc48d5b00dc40c,
              mid_setMarkerNumber_d0bc48d5b00dc40c,
              mid_setMarkerType_d0bc48d5b00dc40c,
              mid_setNbObsPerSatellite_5704e79955ccac22,
              mid_setNbSat_99803b0791f320ff,
              mid_setObservationCode_d0bc48d5b00dc40c,
              mid_setObserverName_d0bc48d5b00dc40c,
              mid_setPhaseCenterSystem_10d44f5686b1d39e,
              mid_setReceiverNumber_d0bc48d5b00dc40c,
              mid_setReceiverType_d0bc48d5b00dc40c,
              mid_setReceiverVersion_d0bc48d5b00dc40c,
              mid_setSignalStrengthUnit_d0bc48d5b00dc40c,
              mid_setTFirstObs_600a2a61652bc473,
              mid_setTLastObs_600a2a61652bc473,
              mid_setTypeObs_9814758cc9231e7c,
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
