#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/observation/RinexObservationHeader.h"
#include "org/orekit/files/rinex/observation/ScaleFactorCorrection.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/files/rinex/observation/PhaseShiftCorrection.h"
#include "java/lang/Integer.h"
#include "org/orekit/gnss/ObservationType.h"
#include "org/orekit/files/rinex/observation/GlonassSatelliteChannel.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/orekit/files/rinex/AppliedPCVS.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/SatInSystem.h"
#include "java/lang/String.h"
#include "org/orekit/files/rinex/AppliedDCBS.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *RinexObservationHeader::class$ = NULL;
          jmethodID *RinexObservationHeader::mids$ = NULL;
          bool RinexObservationHeader::live$ = false;

          jclass RinexObservationHeader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/RinexObservationHeader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addAppliedDCBS_5034cecf671e2223] = env->getMethodID(cls, "addAppliedDCBS", "(Lorg/orekit/files/rinex/AppliedDCBS;)V");
              mids$[mid_addAppliedPCVS_f2258d58c79245ba] = env->getMethodID(cls, "addAppliedPCVS", "(Lorg/orekit/files/rinex/AppliedPCVS;)V");
              mids$[mid_addGlonassChannel_efb944f0094c6fb9] = env->getMethodID(cls, "addGlonassChannel", "(Lorg/orekit/files/rinex/observation/GlonassSatelliteChannel;)V");
              mids$[mid_addPhaseShiftCorrection_b47a486125b2400e] = env->getMethodID(cls, "addPhaseShiftCorrection", "(Lorg/orekit/files/rinex/observation/PhaseShiftCorrection;)V");
              mids$[mid_addScaleFactorCorrection_667db1451efaddbb] = env->getMethodID(cls, "addScaleFactorCorrection", "(Lorg/orekit/gnss/SatelliteSystem;Lorg/orekit/files/rinex/observation/ScaleFactorCorrection;)V");
              mids$[mid_getAgencyName_3cffd47377eca18a] = env->getMethodID(cls, "getAgencyName", "()Ljava/lang/String;");
              mids$[mid_getAntennaAzimuth_557b8123390d8d0c] = env->getMethodID(cls, "getAntennaAzimuth", "()D");
              mids$[mid_getAntennaBSight_f88961cca75a2c0a] = env->getMethodID(cls, "getAntennaBSight", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getAntennaHeight_557b8123390d8d0c] = env->getMethodID(cls, "getAntennaHeight", "()D");
              mids$[mid_getAntennaNumber_3cffd47377eca18a] = env->getMethodID(cls, "getAntennaNumber", "()Ljava/lang/String;");
              mids$[mid_getAntennaPhaseCenter_f88961cca75a2c0a] = env->getMethodID(cls, "getAntennaPhaseCenter", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getAntennaReferencePoint_f88961cca75a2c0a] = env->getMethodID(cls, "getAntennaReferencePoint", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getAntennaType_3cffd47377eca18a] = env->getMethodID(cls, "getAntennaType", "()Ljava/lang/String;");
              mids$[mid_getAntennaZeroDirection_f88961cca75a2c0a] = env->getMethodID(cls, "getAntennaZeroDirection", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getApproxPos_f88961cca75a2c0a] = env->getMethodID(cls, "getApproxPos", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getC1cCodePhaseBias_557b8123390d8d0c] = env->getMethodID(cls, "getC1cCodePhaseBias", "()D");
              mids$[mid_getC1pCodePhaseBias_557b8123390d8d0c] = env->getMethodID(cls, "getC1pCodePhaseBias", "()D");
              mids$[mid_getC2cCodePhaseBias_557b8123390d8d0c] = env->getMethodID(cls, "getC2cCodePhaseBias", "()D");
              mids$[mid_getC2pCodePhaseBias_557b8123390d8d0c] = env->getMethodID(cls, "getC2pCodePhaseBias", "()D");
              mids$[mid_getCenterMass_f88961cca75a2c0a] = env->getMethodID(cls, "getCenterMass", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getClkOffset_412668abc8d889e9] = env->getMethodID(cls, "getClkOffset", "()I");
              mids$[mid_getEccentricities_f681f2fc9cdfab57] = env->getMethodID(cls, "getEccentricities", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_getGlonassChannels_0d9551367f7ecdef] = env->getMethodID(cls, "getGlonassChannels", "()Ljava/util/List;");
              mids$[mid_getInterval_557b8123390d8d0c] = env->getMethodID(cls, "getInterval", "()D");
              mids$[mid_getLeapSeconds_412668abc8d889e9] = env->getMethodID(cls, "getLeapSeconds", "()I");
              mids$[mid_getLeapSecondsDayNum_412668abc8d889e9] = env->getMethodID(cls, "getLeapSecondsDayNum", "()I");
              mids$[mid_getLeapSecondsFuture_412668abc8d889e9] = env->getMethodID(cls, "getLeapSecondsFuture", "()I");
              mids$[mid_getLeapSecondsWeekNum_412668abc8d889e9] = env->getMethodID(cls, "getLeapSecondsWeekNum", "()I");
              mids$[mid_getListAppliedDCBS_0d9551367f7ecdef] = env->getMethodID(cls, "getListAppliedDCBS", "()Ljava/util/List;");
              mids$[mid_getListAppliedPCVS_0d9551367f7ecdef] = env->getMethodID(cls, "getListAppliedPCVS", "()Ljava/util/List;");
              mids$[mid_getMarkerName_3cffd47377eca18a] = env->getMethodID(cls, "getMarkerName", "()Ljava/lang/String;");
              mids$[mid_getMarkerNumber_3cffd47377eca18a] = env->getMethodID(cls, "getMarkerNumber", "()Ljava/lang/String;");
              mids$[mid_getMarkerType_3cffd47377eca18a] = env->getMethodID(cls, "getMarkerType", "()Ljava/lang/String;");
              mids$[mid_getNbObsPerSat_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getNbObsPerSat", "()Ljava/util/Map;");
              mids$[mid_getNbSat_412668abc8d889e9] = env->getMethodID(cls, "getNbSat", "()I");
              mids$[mid_getObservationCode_3cffd47377eca18a] = env->getMethodID(cls, "getObservationCode", "()Ljava/lang/String;");
              mids$[mid_getObserverName_3cffd47377eca18a] = env->getMethodID(cls, "getObserverName", "()Ljava/lang/String;");
              mids$[mid_getPhaseCenterSystem_8b86408cc2633961] = env->getMethodID(cls, "getPhaseCenterSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
              mids$[mid_getPhaseShiftCorrections_0d9551367f7ecdef] = env->getMethodID(cls, "getPhaseShiftCorrections", "()Ljava/util/List;");
              mids$[mid_getReceiverNumber_3cffd47377eca18a] = env->getMethodID(cls, "getReceiverNumber", "()Ljava/lang/String;");
              mids$[mid_getReceiverType_3cffd47377eca18a] = env->getMethodID(cls, "getReceiverType", "()Ljava/lang/String;");
              mids$[mid_getReceiverVersion_3cffd47377eca18a] = env->getMethodID(cls, "getReceiverVersion", "()Ljava/lang/String;");
              mids$[mid_getScaleFactorCorrections_00be16943b113650] = env->getMethodID(cls, "getScaleFactorCorrections", "(Lorg/orekit/gnss/SatelliteSystem;)Ljava/util/List;");
              mids$[mid_getSignalStrengthUnit_3cffd47377eca18a] = env->getMethodID(cls, "getSignalStrengthUnit", "()Ljava/lang/String;");
              mids$[mid_getTFirstObs_7a97f7e149e79afb] = env->getMethodID(cls, "getTFirstObs", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTLastObs_7a97f7e149e79afb] = env->getMethodID(cls, "getTLastObs", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTypeObs_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getTypeObs", "()Ljava/util/Map;");
              mids$[mid_setAgencyName_f5ffdf29129ef90a] = env->getMethodID(cls, "setAgencyName", "(Ljava/lang/String;)V");
              mids$[mid_setAntennaAzimuth_10f281d777284cea] = env->getMethodID(cls, "setAntennaAzimuth", "(D)V");
              mids$[mid_setAntennaBSight_2810d2bec90e7b1c] = env->getMethodID(cls, "setAntennaBSight", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_setAntennaHeight_10f281d777284cea] = env->getMethodID(cls, "setAntennaHeight", "(D)V");
              mids$[mid_setAntennaNumber_f5ffdf29129ef90a] = env->getMethodID(cls, "setAntennaNumber", "(Ljava/lang/String;)V");
              mids$[mid_setAntennaPhaseCenter_2810d2bec90e7b1c] = env->getMethodID(cls, "setAntennaPhaseCenter", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_setAntennaReferencePoint_2810d2bec90e7b1c] = env->getMethodID(cls, "setAntennaReferencePoint", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_setAntennaType_f5ffdf29129ef90a] = env->getMethodID(cls, "setAntennaType", "(Ljava/lang/String;)V");
              mids$[mid_setAntennaZeroDirection_2810d2bec90e7b1c] = env->getMethodID(cls, "setAntennaZeroDirection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_setApproxPos_2810d2bec90e7b1c] = env->getMethodID(cls, "setApproxPos", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_setC1cCodePhaseBias_10f281d777284cea] = env->getMethodID(cls, "setC1cCodePhaseBias", "(D)V");
              mids$[mid_setC1pCodePhaseBias_10f281d777284cea] = env->getMethodID(cls, "setC1pCodePhaseBias", "(D)V");
              mids$[mid_setC2cCodePhaseBias_10f281d777284cea] = env->getMethodID(cls, "setC2cCodePhaseBias", "(D)V");
              mids$[mid_setC2pCodePhaseBias_10f281d777284cea] = env->getMethodID(cls, "setC2pCodePhaseBias", "(D)V");
              mids$[mid_setCenterMass_2810d2bec90e7b1c] = env->getMethodID(cls, "setCenterMass", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_setClkOffset_a3da1a935cb37f7b] = env->getMethodID(cls, "setClkOffset", "(I)V");
              mids$[mid_setEccentricities_086d06980fa26fc1] = env->getMethodID(cls, "setEccentricities", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_setInterval_10f281d777284cea] = env->getMethodID(cls, "setInterval", "(D)V");
              mids$[mid_setLeapSeconds_a3da1a935cb37f7b] = env->getMethodID(cls, "setLeapSeconds", "(I)V");
              mids$[mid_setLeapSecondsDayNum_a3da1a935cb37f7b] = env->getMethodID(cls, "setLeapSecondsDayNum", "(I)V");
              mids$[mid_setLeapSecondsFuture_a3da1a935cb37f7b] = env->getMethodID(cls, "setLeapSecondsFuture", "(I)V");
              mids$[mid_setLeapSecondsWeekNum_a3da1a935cb37f7b] = env->getMethodID(cls, "setLeapSecondsWeekNum", "(I)V");
              mids$[mid_setMarkerName_f5ffdf29129ef90a] = env->getMethodID(cls, "setMarkerName", "(Ljava/lang/String;)V");
              mids$[mid_setMarkerNumber_f5ffdf29129ef90a] = env->getMethodID(cls, "setMarkerNumber", "(Ljava/lang/String;)V");
              mids$[mid_setMarkerType_f5ffdf29129ef90a] = env->getMethodID(cls, "setMarkerType", "(Ljava/lang/String;)V");
              mids$[mid_setNbObsPerSatellite_9d69b214249a70a5] = env->getMethodID(cls, "setNbObsPerSatellite", "(Lorg/orekit/gnss/SatInSystem;Lorg/orekit/gnss/ObservationType;I)V");
              mids$[mid_setNbSat_a3da1a935cb37f7b] = env->getMethodID(cls, "setNbSat", "(I)V");
              mids$[mid_setObservationCode_f5ffdf29129ef90a] = env->getMethodID(cls, "setObservationCode", "(Ljava/lang/String;)V");
              mids$[mid_setObserverName_f5ffdf29129ef90a] = env->getMethodID(cls, "setObserverName", "(Ljava/lang/String;)V");
              mids$[mid_setPhaseCenterSystem_b744026f46deda44] = env->getMethodID(cls, "setPhaseCenterSystem", "(Lorg/orekit/gnss/SatelliteSystem;)V");
              mids$[mid_setReceiverNumber_f5ffdf29129ef90a] = env->getMethodID(cls, "setReceiverNumber", "(Ljava/lang/String;)V");
              mids$[mid_setReceiverType_f5ffdf29129ef90a] = env->getMethodID(cls, "setReceiverType", "(Ljava/lang/String;)V");
              mids$[mid_setReceiverVersion_f5ffdf29129ef90a] = env->getMethodID(cls, "setReceiverVersion", "(Ljava/lang/String;)V");
              mids$[mid_setSignalStrengthUnit_f5ffdf29129ef90a] = env->getMethodID(cls, "setSignalStrengthUnit", "(Ljava/lang/String;)V");
              mids$[mid_setTFirstObs_20affcbd28542333] = env->getMethodID(cls, "setTFirstObs", "(Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_setTLastObs_20affcbd28542333] = env->getMethodID(cls, "setTLastObs", "(Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_setTypeObs_2060bf8275840ff8] = env->getMethodID(cls, "setTypeObs", "(Lorg/orekit/gnss/SatelliteSystem;Ljava/util/List;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexObservationHeader::RinexObservationHeader() : ::org::orekit::files::rinex::section::RinexBaseHeader(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void RinexObservationHeader::addAppliedDCBS(const ::org::orekit::files::rinex::AppliedDCBS & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addAppliedDCBS_5034cecf671e2223], a0.this$);
          }

          void RinexObservationHeader::addAppliedPCVS(const ::org::orekit::files::rinex::AppliedPCVS & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addAppliedPCVS_f2258d58c79245ba], a0.this$);
          }

          void RinexObservationHeader::addGlonassChannel(const ::org::orekit::files::rinex::observation::GlonassSatelliteChannel & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addGlonassChannel_efb944f0094c6fb9], a0.this$);
          }

          void RinexObservationHeader::addPhaseShiftCorrection(const ::org::orekit::files::rinex::observation::PhaseShiftCorrection & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addPhaseShiftCorrection_b47a486125b2400e], a0.this$);
          }

          void RinexObservationHeader::addScaleFactorCorrection(const ::org::orekit::gnss::SatelliteSystem & a0, const ::org::orekit::files::rinex::observation::ScaleFactorCorrection & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addScaleFactorCorrection_667db1451efaddbb], a0.this$, a1.this$);
          }

          ::java::lang::String RinexObservationHeader::getAgencyName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAgencyName_3cffd47377eca18a]));
          }

          jdouble RinexObservationHeader::getAntennaAzimuth() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAntennaAzimuth_557b8123390d8d0c]);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RinexObservationHeader::getAntennaBSight() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAntennaBSight_f88961cca75a2c0a]));
          }

          jdouble RinexObservationHeader::getAntennaHeight() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAntennaHeight_557b8123390d8d0c]);
          }

          ::java::lang::String RinexObservationHeader::getAntennaNumber() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAntennaNumber_3cffd47377eca18a]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RinexObservationHeader::getAntennaPhaseCenter() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAntennaPhaseCenter_f88961cca75a2c0a]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RinexObservationHeader::getAntennaReferencePoint() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAntennaReferencePoint_f88961cca75a2c0a]));
          }

          ::java::lang::String RinexObservationHeader::getAntennaType() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAntennaType_3cffd47377eca18a]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RinexObservationHeader::getAntennaZeroDirection() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAntennaZeroDirection_f88961cca75a2c0a]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RinexObservationHeader::getApproxPos() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getApproxPos_f88961cca75a2c0a]));
          }

          jdouble RinexObservationHeader::getC1cCodePhaseBias() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getC1cCodePhaseBias_557b8123390d8d0c]);
          }

          jdouble RinexObservationHeader::getC1pCodePhaseBias() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getC1pCodePhaseBias_557b8123390d8d0c]);
          }

          jdouble RinexObservationHeader::getC2cCodePhaseBias() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getC2cCodePhaseBias_557b8123390d8d0c]);
          }

          jdouble RinexObservationHeader::getC2pCodePhaseBias() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getC2pCodePhaseBias_557b8123390d8d0c]);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RinexObservationHeader::getCenterMass() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getCenterMass_f88961cca75a2c0a]));
          }

          jint RinexObservationHeader::getClkOffset() const
          {
            return env->callIntMethod(this$, mids$[mid_getClkOffset_412668abc8d889e9]);
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D RinexObservationHeader::getEccentricities() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_getEccentricities_f681f2fc9cdfab57]));
          }

          ::java::util::List RinexObservationHeader::getGlonassChannels() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getGlonassChannels_0d9551367f7ecdef]));
          }

          jdouble RinexObservationHeader::getInterval() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getInterval_557b8123390d8d0c]);
          }

          jint RinexObservationHeader::getLeapSeconds() const
          {
            return env->callIntMethod(this$, mids$[mid_getLeapSeconds_412668abc8d889e9]);
          }

          jint RinexObservationHeader::getLeapSecondsDayNum() const
          {
            return env->callIntMethod(this$, mids$[mid_getLeapSecondsDayNum_412668abc8d889e9]);
          }

          jint RinexObservationHeader::getLeapSecondsFuture() const
          {
            return env->callIntMethod(this$, mids$[mid_getLeapSecondsFuture_412668abc8d889e9]);
          }

          jint RinexObservationHeader::getLeapSecondsWeekNum() const
          {
            return env->callIntMethod(this$, mids$[mid_getLeapSecondsWeekNum_412668abc8d889e9]);
          }

          ::java::util::List RinexObservationHeader::getListAppliedDCBS() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getListAppliedDCBS_0d9551367f7ecdef]));
          }

          ::java::util::List RinexObservationHeader::getListAppliedPCVS() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getListAppliedPCVS_0d9551367f7ecdef]));
          }

          ::java::lang::String RinexObservationHeader::getMarkerName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMarkerName_3cffd47377eca18a]));
          }

          ::java::lang::String RinexObservationHeader::getMarkerNumber() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMarkerNumber_3cffd47377eca18a]));
          }

          ::java::lang::String RinexObservationHeader::getMarkerType() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMarkerType_3cffd47377eca18a]));
          }

          ::java::util::Map RinexObservationHeader::getNbObsPerSat() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getNbObsPerSat_1e62c2f73fbdd1c4]));
          }

          jint RinexObservationHeader::getNbSat() const
          {
            return env->callIntMethod(this$, mids$[mid_getNbSat_412668abc8d889e9]);
          }

          ::java::lang::String RinexObservationHeader::getObservationCode() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObservationCode_3cffd47377eca18a]));
          }

          ::java::lang::String RinexObservationHeader::getObserverName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObserverName_3cffd47377eca18a]));
          }

          ::org::orekit::gnss::SatelliteSystem RinexObservationHeader::getPhaseCenterSystem() const
          {
            return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getPhaseCenterSystem_8b86408cc2633961]));
          }

          ::java::util::List RinexObservationHeader::getPhaseShiftCorrections() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPhaseShiftCorrections_0d9551367f7ecdef]));
          }

          ::java::lang::String RinexObservationHeader::getReceiverNumber() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getReceiverNumber_3cffd47377eca18a]));
          }

          ::java::lang::String RinexObservationHeader::getReceiverType() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getReceiverType_3cffd47377eca18a]));
          }

          ::java::lang::String RinexObservationHeader::getReceiverVersion() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getReceiverVersion_3cffd47377eca18a]));
          }

          ::java::util::List RinexObservationHeader::getScaleFactorCorrections(const ::org::orekit::gnss::SatelliteSystem & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getScaleFactorCorrections_00be16943b113650], a0.this$));
          }

          ::java::lang::String RinexObservationHeader::getSignalStrengthUnit() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSignalStrengthUnit_3cffd47377eca18a]));
          }

          ::org::orekit::time::AbsoluteDate RinexObservationHeader::getTFirstObs() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTFirstObs_7a97f7e149e79afb]));
          }

          ::org::orekit::time::AbsoluteDate RinexObservationHeader::getTLastObs() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTLastObs_7a97f7e149e79afb]));
          }

          ::java::util::Map RinexObservationHeader::getTypeObs() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getTypeObs_1e62c2f73fbdd1c4]));
          }

          void RinexObservationHeader::setAgencyName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAgencyName_f5ffdf29129ef90a], a0.this$);
          }

          void RinexObservationHeader::setAntennaAzimuth(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAntennaAzimuth_10f281d777284cea], a0);
          }

          void RinexObservationHeader::setAntennaBSight(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAntennaBSight_2810d2bec90e7b1c], a0.this$);
          }

          void RinexObservationHeader::setAntennaHeight(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAntennaHeight_10f281d777284cea], a0);
          }

          void RinexObservationHeader::setAntennaNumber(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAntennaNumber_f5ffdf29129ef90a], a0.this$);
          }

          void RinexObservationHeader::setAntennaPhaseCenter(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAntennaPhaseCenter_2810d2bec90e7b1c], a0.this$);
          }

          void RinexObservationHeader::setAntennaReferencePoint(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAntennaReferencePoint_2810d2bec90e7b1c], a0.this$);
          }

          void RinexObservationHeader::setAntennaType(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAntennaType_f5ffdf29129ef90a], a0.this$);
          }

          void RinexObservationHeader::setAntennaZeroDirection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAntennaZeroDirection_2810d2bec90e7b1c], a0.this$);
          }

          void RinexObservationHeader::setApproxPos(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setApproxPos_2810d2bec90e7b1c], a0.this$);
          }

          void RinexObservationHeader::setC1cCodePhaseBias(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setC1cCodePhaseBias_10f281d777284cea], a0);
          }

          void RinexObservationHeader::setC1pCodePhaseBias(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setC1pCodePhaseBias_10f281d777284cea], a0);
          }

          void RinexObservationHeader::setC2cCodePhaseBias(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setC2cCodePhaseBias_10f281d777284cea], a0);
          }

          void RinexObservationHeader::setC2pCodePhaseBias(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setC2pCodePhaseBias_10f281d777284cea], a0);
          }

          void RinexObservationHeader::setCenterMass(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCenterMass_2810d2bec90e7b1c], a0.this$);
          }

          void RinexObservationHeader::setClkOffset(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setClkOffset_a3da1a935cb37f7b], a0);
          }

          void RinexObservationHeader::setEccentricities(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setEccentricities_086d06980fa26fc1], a0.this$);
          }

          void RinexObservationHeader::setInterval(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setInterval_10f281d777284cea], a0);
          }

          void RinexObservationHeader::setLeapSeconds(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setLeapSeconds_a3da1a935cb37f7b], a0);
          }

          void RinexObservationHeader::setLeapSecondsDayNum(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setLeapSecondsDayNum_a3da1a935cb37f7b], a0);
          }

          void RinexObservationHeader::setLeapSecondsFuture(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setLeapSecondsFuture_a3da1a935cb37f7b], a0);
          }

          void RinexObservationHeader::setLeapSecondsWeekNum(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setLeapSecondsWeekNum_a3da1a935cb37f7b], a0);
          }

          void RinexObservationHeader::setMarkerName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMarkerName_f5ffdf29129ef90a], a0.this$);
          }

          void RinexObservationHeader::setMarkerNumber(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMarkerNumber_f5ffdf29129ef90a], a0.this$);
          }

          void RinexObservationHeader::setMarkerType(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMarkerType_f5ffdf29129ef90a], a0.this$);
          }

          void RinexObservationHeader::setNbObsPerSatellite(const ::org::orekit::gnss::SatInSystem & a0, const ::org::orekit::gnss::ObservationType & a1, jint a2) const
          {
            env->callVoidMethod(this$, mids$[mid_setNbObsPerSatellite_9d69b214249a70a5], a0.this$, a1.this$, a2);
          }

          void RinexObservationHeader::setNbSat(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setNbSat_a3da1a935cb37f7b], a0);
          }

          void RinexObservationHeader::setObservationCode(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setObservationCode_f5ffdf29129ef90a], a0.this$);
          }

          void RinexObservationHeader::setObserverName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setObserverName_f5ffdf29129ef90a], a0.this$);
          }

          void RinexObservationHeader::setPhaseCenterSystem(const ::org::orekit::gnss::SatelliteSystem & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setPhaseCenterSystem_b744026f46deda44], a0.this$);
          }

          void RinexObservationHeader::setReceiverNumber(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReceiverNumber_f5ffdf29129ef90a], a0.this$);
          }

          void RinexObservationHeader::setReceiverType(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReceiverType_f5ffdf29129ef90a], a0.this$);
          }

          void RinexObservationHeader::setReceiverVersion(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReceiverVersion_f5ffdf29129ef90a], a0.this$);
          }

          void RinexObservationHeader::setSignalStrengthUnit(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSignalStrengthUnit_f5ffdf29129ef90a], a0.this$);
          }

          void RinexObservationHeader::setTFirstObs(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTFirstObs_20affcbd28542333], a0.this$);
          }

          void RinexObservationHeader::setTLastObs(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTLastObs_20affcbd28542333], a0.this$);
          }

          void RinexObservationHeader::setTypeObs(const ::org::orekit::gnss::SatelliteSystem & a0, const ::java::util::List & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setTypeObs_2060bf8275840ff8], a0.this$, a1.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {
          static PyObject *t_RinexObservationHeader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexObservationHeader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexObservationHeader_init_(t_RinexObservationHeader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexObservationHeader_addAppliedDCBS(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_addAppliedPCVS(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_addGlonassChannel(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_addPhaseShiftCorrection(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_addScaleFactorCorrection(t_RinexObservationHeader *self, PyObject *args);
          static PyObject *t_RinexObservationHeader_getAgencyName(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getAntennaAzimuth(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getAntennaBSight(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getAntennaHeight(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getAntennaNumber(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getAntennaPhaseCenter(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getAntennaReferencePoint(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getAntennaType(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getAntennaZeroDirection(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getApproxPos(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getC1cCodePhaseBias(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getC1pCodePhaseBias(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getC2cCodePhaseBias(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getC2pCodePhaseBias(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getCenterMass(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getClkOffset(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getEccentricities(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getGlonassChannels(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getInterval(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getLeapSeconds(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getLeapSecondsDayNum(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getLeapSecondsFuture(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getLeapSecondsWeekNum(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getListAppliedDCBS(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getListAppliedPCVS(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getMarkerName(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getMarkerNumber(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getMarkerType(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getNbObsPerSat(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getNbSat(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getObservationCode(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getObserverName(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getPhaseCenterSystem(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getPhaseShiftCorrections(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getReceiverNumber(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getReceiverType(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getReceiverVersion(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getScaleFactorCorrections(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_getSignalStrengthUnit(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getTFirstObs(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getTLastObs(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getTypeObs(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_setAgencyName(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setAntennaAzimuth(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setAntennaBSight(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setAntennaHeight(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setAntennaNumber(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setAntennaPhaseCenter(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setAntennaReferencePoint(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setAntennaType(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setAntennaZeroDirection(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setApproxPos(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setC1cCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setC1pCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setC2cCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setC2pCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setCenterMass(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setClkOffset(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setEccentricities(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setInterval(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setLeapSeconds(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setLeapSecondsDayNum(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setLeapSecondsFuture(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setLeapSecondsWeekNum(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setMarkerName(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setMarkerNumber(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setMarkerType(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setNbObsPerSatellite(t_RinexObservationHeader *self, PyObject *args);
          static PyObject *t_RinexObservationHeader_setNbSat(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setObservationCode(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setObserverName(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setPhaseCenterSystem(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setReceiverNumber(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setReceiverType(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setReceiverVersion(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setSignalStrengthUnit(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setTFirstObs(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setTLastObs(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setTypeObs(t_RinexObservationHeader *self, PyObject *args);
          static PyObject *t_RinexObservationHeader_get__agencyName(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__agencyName(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__antennaAzimuth(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__antennaAzimuth(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__antennaBSight(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__antennaBSight(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__antennaHeight(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__antennaHeight(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__antennaNumber(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__antennaNumber(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__antennaPhaseCenter(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__antennaPhaseCenter(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__antennaReferencePoint(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__antennaReferencePoint(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__antennaType(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__antennaType(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__antennaZeroDirection(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__antennaZeroDirection(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__approxPos(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__approxPos(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__c1cCodePhaseBias(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__c1cCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__c1pCodePhaseBias(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__c1pCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__c2cCodePhaseBias(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__c2cCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__c2pCodePhaseBias(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__c2pCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__centerMass(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__centerMass(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__clkOffset(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__clkOffset(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__eccentricities(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__eccentricities(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__glonassChannels(t_RinexObservationHeader *self, void *data);
          static PyObject *t_RinexObservationHeader_get__interval(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__interval(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__leapSeconds(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__leapSeconds(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__leapSecondsDayNum(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__leapSecondsDayNum(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__leapSecondsFuture(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__leapSecondsFuture(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__leapSecondsWeekNum(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__leapSecondsWeekNum(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__listAppliedDCBS(t_RinexObservationHeader *self, void *data);
          static PyObject *t_RinexObservationHeader_get__listAppliedPCVS(t_RinexObservationHeader *self, void *data);
          static PyObject *t_RinexObservationHeader_get__markerName(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__markerName(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__markerNumber(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__markerNumber(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__markerType(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__markerType(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__nbObsPerSat(t_RinexObservationHeader *self, void *data);
          static PyObject *t_RinexObservationHeader_get__nbSat(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__nbSat(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__observationCode(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__observationCode(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__observerName(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__observerName(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__phaseCenterSystem(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__phaseCenterSystem(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__phaseShiftCorrections(t_RinexObservationHeader *self, void *data);
          static PyObject *t_RinexObservationHeader_get__receiverNumber(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__receiverNumber(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__receiverType(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__receiverType(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__receiverVersion(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__receiverVersion(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__signalStrengthUnit(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__signalStrengthUnit(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__tFirstObs(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__tFirstObs(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__tLastObs(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__tLastObs(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__typeObs(t_RinexObservationHeader *self, void *data);
          static PyGetSetDef t_RinexObservationHeader__fields_[] = {
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, agencyName),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, antennaAzimuth),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, antennaBSight),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, antennaHeight),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, antennaNumber),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, antennaPhaseCenter),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, antennaReferencePoint),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, antennaType),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, antennaZeroDirection),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, approxPos),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, c1cCodePhaseBias),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, c1pCodePhaseBias),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, c2cCodePhaseBias),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, c2pCodePhaseBias),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, centerMass),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, clkOffset),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, eccentricities),
            DECLARE_GET_FIELD(t_RinexObservationHeader, glonassChannels),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, interval),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, leapSeconds),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, leapSecondsDayNum),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, leapSecondsFuture),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, leapSecondsWeekNum),
            DECLARE_GET_FIELD(t_RinexObservationHeader, listAppliedDCBS),
            DECLARE_GET_FIELD(t_RinexObservationHeader, listAppliedPCVS),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, markerName),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, markerNumber),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, markerType),
            DECLARE_GET_FIELD(t_RinexObservationHeader, nbObsPerSat),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, nbSat),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, observationCode),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, observerName),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, phaseCenterSystem),
            DECLARE_GET_FIELD(t_RinexObservationHeader, phaseShiftCorrections),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, receiverNumber),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, receiverType),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, receiverVersion),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, signalStrengthUnit),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, tFirstObs),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, tLastObs),
            DECLARE_GET_FIELD(t_RinexObservationHeader, typeObs),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexObservationHeader__methods_[] = {
            DECLARE_METHOD(t_RinexObservationHeader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexObservationHeader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexObservationHeader, addAppliedDCBS, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, addAppliedPCVS, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, addGlonassChannel, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, addPhaseShiftCorrection, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, addScaleFactorCorrection, METH_VARARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAgencyName, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAntennaAzimuth, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAntennaBSight, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAntennaHeight, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAntennaNumber, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAntennaPhaseCenter, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAntennaReferencePoint, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAntennaType, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAntennaZeroDirection, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getApproxPos, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getC1cCodePhaseBias, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getC1pCodePhaseBias, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getC2cCodePhaseBias, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getC2pCodePhaseBias, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getCenterMass, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getClkOffset, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getEccentricities, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getGlonassChannels, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getInterval, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getLeapSeconds, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getLeapSecondsDayNum, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getLeapSecondsFuture, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getLeapSecondsWeekNum, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getListAppliedDCBS, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getListAppliedPCVS, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getMarkerName, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getMarkerNumber, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getMarkerType, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getNbObsPerSat, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getNbSat, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getObservationCode, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getObserverName, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getPhaseCenterSystem, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getPhaseShiftCorrections, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getReceiverNumber, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getReceiverType, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getReceiverVersion, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getScaleFactorCorrections, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, getSignalStrengthUnit, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getTFirstObs, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getTLastObs, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getTypeObs, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, setAgencyName, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setAntennaAzimuth, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setAntennaBSight, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setAntennaHeight, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setAntennaNumber, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setAntennaPhaseCenter, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setAntennaReferencePoint, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setAntennaType, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setAntennaZeroDirection, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setApproxPos, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setC1cCodePhaseBias, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setC1pCodePhaseBias, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setC2cCodePhaseBias, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setC2pCodePhaseBias, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setCenterMass, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setClkOffset, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setEccentricities, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setInterval, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setLeapSeconds, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setLeapSecondsDayNum, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setLeapSecondsFuture, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setLeapSecondsWeekNum, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setMarkerName, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setMarkerNumber, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setMarkerType, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setNbObsPerSatellite, METH_VARARGS),
            DECLARE_METHOD(t_RinexObservationHeader, setNbSat, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setObservationCode, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setObserverName, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setPhaseCenterSystem, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setReceiverNumber, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setReceiverType, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setReceiverVersion, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setSignalStrengthUnit, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setTFirstObs, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setTLastObs, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setTypeObs, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexObservationHeader)[] = {
            { Py_tp_methods, t_RinexObservationHeader__methods_ },
            { Py_tp_init, (void *) t_RinexObservationHeader_init_ },
            { Py_tp_getset, t_RinexObservationHeader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexObservationHeader)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::section::RinexBaseHeader),
            NULL
          };

          DEFINE_TYPE(RinexObservationHeader, t_RinexObservationHeader, RinexObservationHeader);

          void t_RinexObservationHeader::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexObservationHeader), &PY_TYPE_DEF(RinexObservationHeader), module, "RinexObservationHeader", 0);
          }

          void t_RinexObservationHeader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationHeader), "class_", make_descriptor(RinexObservationHeader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationHeader), "wrapfn_", make_descriptor(t_RinexObservationHeader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationHeader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexObservationHeader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexObservationHeader::initializeClass, 1)))
              return NULL;
            return t_RinexObservationHeader::wrap_Object(RinexObservationHeader(((t_RinexObservationHeader *) arg)->object.this$));
          }
          static PyObject *t_RinexObservationHeader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexObservationHeader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexObservationHeader_init_(t_RinexObservationHeader *self, PyObject *args, PyObject *kwds)
          {
            RinexObservationHeader object((jobject) NULL);

            INT_CALL(object = RinexObservationHeader());
            self->object = object;

            return 0;
          }

          static PyObject *t_RinexObservationHeader_addAppliedDCBS(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::AppliedDCBS a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::AppliedDCBS::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addAppliedDCBS(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addAppliedDCBS", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_addAppliedPCVS(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::AppliedPCVS a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::AppliedPCVS::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addAppliedPCVS(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addAppliedPCVS", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_addGlonassChannel(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::GlonassSatelliteChannel a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::GlonassSatelliteChannel::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addGlonassChannel(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addGlonassChannel", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_addPhaseShiftCorrection(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::PhaseShiftCorrection a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::PhaseShiftCorrection::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addPhaseShiftCorrection(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addPhaseShiftCorrection", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_addScaleFactorCorrection(t_RinexObservationHeader *self, PyObject *args)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::files::rinex::observation::ScaleFactorCorrection a1((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::files::rinex::observation::ScaleFactorCorrection::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1))
            {
              OBJ_CALL(self->object.addScaleFactorCorrection(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addScaleFactorCorrection", args);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_getAgencyName(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getAgencyName());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getAntennaAzimuth(t_RinexObservationHeader *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAntennaAzimuth());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexObservationHeader_getAntennaBSight(t_RinexObservationHeader *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getAntennaBSight());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getAntennaHeight(t_RinexObservationHeader *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAntennaHeight());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexObservationHeader_getAntennaNumber(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getAntennaNumber());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getAntennaPhaseCenter(t_RinexObservationHeader *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getAntennaPhaseCenter());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getAntennaReferencePoint(t_RinexObservationHeader *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getAntennaReferencePoint());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getAntennaType(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getAntennaType());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getAntennaZeroDirection(t_RinexObservationHeader *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getAntennaZeroDirection());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getApproxPos(t_RinexObservationHeader *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getApproxPos());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getC1cCodePhaseBias(t_RinexObservationHeader *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getC1cCodePhaseBias());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexObservationHeader_getC1pCodePhaseBias(t_RinexObservationHeader *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getC1pCodePhaseBias());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexObservationHeader_getC2cCodePhaseBias(t_RinexObservationHeader *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getC2cCodePhaseBias());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexObservationHeader_getC2pCodePhaseBias(t_RinexObservationHeader *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getC2pCodePhaseBias());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexObservationHeader_getCenterMass(t_RinexObservationHeader *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getCenterMass());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getClkOffset(t_RinexObservationHeader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getClkOffset());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexObservationHeader_getEccentricities(t_RinexObservationHeader *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.getEccentricities());
            return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getGlonassChannels(t_RinexObservationHeader *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getGlonassChannels());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::observation::PY_TYPE(GlonassSatelliteChannel));
          }

          static PyObject *t_RinexObservationHeader_getInterval(t_RinexObservationHeader *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getInterval());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexObservationHeader_getLeapSeconds(t_RinexObservationHeader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLeapSeconds());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexObservationHeader_getLeapSecondsDayNum(t_RinexObservationHeader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLeapSecondsDayNum());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexObservationHeader_getLeapSecondsFuture(t_RinexObservationHeader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLeapSecondsFuture());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexObservationHeader_getLeapSecondsWeekNum(t_RinexObservationHeader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLeapSecondsWeekNum());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexObservationHeader_getListAppliedDCBS(t_RinexObservationHeader *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getListAppliedDCBS());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::PY_TYPE(AppliedDCBS));
          }

          static PyObject *t_RinexObservationHeader_getListAppliedPCVS(t_RinexObservationHeader *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getListAppliedPCVS());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::PY_TYPE(AppliedPCVS));
          }

          static PyObject *t_RinexObservationHeader_getMarkerName(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMarkerName());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getMarkerNumber(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMarkerNumber());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getMarkerType(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMarkerType());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getNbObsPerSat(t_RinexObservationHeader *self)
          {
            ::java::util::Map result((jobject) NULL);
            OBJ_CALL(result = self->object.getNbObsPerSat());
            return ::java::util::t_Map::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getNbSat(t_RinexObservationHeader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNbSat());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexObservationHeader_getObservationCode(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getObservationCode());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getObserverName(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getObserverName());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getPhaseCenterSystem(t_RinexObservationHeader *self)
          {
            ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getPhaseCenterSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getPhaseShiftCorrections(t_RinexObservationHeader *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getPhaseShiftCorrections());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::observation::PY_TYPE(PhaseShiftCorrection));
          }

          static PyObject *t_RinexObservationHeader_getReceiverNumber(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getReceiverNumber());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getReceiverType(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getReceiverType());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getReceiverVersion(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getReceiverVersion());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getScaleFactorCorrections(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::List result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = self->object.getScaleFactorCorrections(a0));
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::observation::PY_TYPE(ScaleFactorCorrection));
            }

            PyErr_SetArgsError((PyObject *) self, "getScaleFactorCorrections", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_getSignalStrengthUnit(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSignalStrengthUnit());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getTFirstObs(t_RinexObservationHeader *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getTFirstObs());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getTLastObs(t_RinexObservationHeader *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getTLastObs());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getTypeObs(t_RinexObservationHeader *self)
          {
            ::java::util::Map result((jobject) NULL);
            OBJ_CALL(result = self->object.getTypeObs());
            return ::java::util::t_Map::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_setAgencyName(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setAgencyName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAgencyName", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setAntennaAzimuth(t_RinexObservationHeader *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setAntennaAzimuth(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAntennaAzimuth", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setAntennaBSight(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setAntennaBSight(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAntennaBSight", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setAntennaHeight(t_RinexObservationHeader *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setAntennaHeight(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAntennaHeight", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setAntennaNumber(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setAntennaNumber(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAntennaNumber", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setAntennaPhaseCenter(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setAntennaPhaseCenter(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAntennaPhaseCenter", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setAntennaReferencePoint(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setAntennaReferencePoint(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAntennaReferencePoint", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setAntennaType(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setAntennaType(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAntennaType", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setAntennaZeroDirection(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setAntennaZeroDirection(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAntennaZeroDirection", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setApproxPos(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setApproxPos(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setApproxPos", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setC1cCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setC1cCodePhaseBias(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setC1cCodePhaseBias", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setC1pCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setC1pCodePhaseBias(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setC1pCodePhaseBias", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setC2cCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setC2cCodePhaseBias(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setC2cCodePhaseBias", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setC2pCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setC2pCodePhaseBias(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setC2pCodePhaseBias", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setCenterMass(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setCenterMass(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setCenterMass", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setClkOffset(t_RinexObservationHeader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setClkOffset(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setClkOffset", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setEccentricities(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setEccentricities(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setEccentricities", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setInterval(t_RinexObservationHeader *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setInterval(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setInterval", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setLeapSeconds(t_RinexObservationHeader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setLeapSeconds(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setLeapSeconds", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setLeapSecondsDayNum(t_RinexObservationHeader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setLeapSecondsDayNum(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setLeapSecondsDayNum", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setLeapSecondsFuture(t_RinexObservationHeader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setLeapSecondsFuture(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setLeapSecondsFuture", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setLeapSecondsWeekNum(t_RinexObservationHeader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setLeapSecondsWeekNum(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setLeapSecondsWeekNum", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setMarkerName(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setMarkerName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMarkerName", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setMarkerNumber(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setMarkerNumber(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMarkerNumber", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setMarkerType(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setMarkerType(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMarkerType", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setNbObsPerSatellite(t_RinexObservationHeader *self, PyObject *args)
          {
            ::org::orekit::gnss::SatInSystem a0((jobject) NULL);
            ::org::orekit::gnss::ObservationType a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;

            if (!parseArgs(args, "kKI", ::org::orekit::gnss::SatInSystem::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_ObservationType::parameters_, &a2))
            {
              OBJ_CALL(self->object.setNbObsPerSatellite(a0, a1, a2));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setNbObsPerSatellite", args);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setNbSat(t_RinexObservationHeader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setNbSat(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setNbSat", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setObservationCode(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setObservationCode(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setObservationCode", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setObserverName(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setObserverName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setObserverName", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setPhaseCenterSystem(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(self->object.setPhaseCenterSystem(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setPhaseCenterSystem", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setReceiverNumber(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setReceiverNumber(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setReceiverNumber", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setReceiverType(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setReceiverType(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setReceiverType", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setReceiverVersion(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setReceiverVersion(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setReceiverVersion", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setSignalStrengthUnit(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setSignalStrengthUnit(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setSignalStrengthUnit", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setTFirstObs(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setTFirstObs(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTFirstObs", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setTLastObs(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setTLastObs(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTLastObs", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setTypeObs(t_RinexObservationHeader *self, PyObject *args)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "KK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &p1, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(self->object.setTypeObs(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTypeObs", args);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_get__agencyName(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getAgencyName());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__agencyName(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setAgencyName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "agencyName", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__antennaAzimuth(t_RinexObservationHeader *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAntennaAzimuth());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexObservationHeader_set__antennaAzimuth(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setAntennaAzimuth(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "antennaAzimuth", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__antennaBSight(t_RinexObservationHeader *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getAntennaBSight());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__antennaBSight(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
              {
                INT_CALL(self->object.setAntennaBSight(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "antennaBSight", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__antennaHeight(t_RinexObservationHeader *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAntennaHeight());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexObservationHeader_set__antennaHeight(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setAntennaHeight(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "antennaHeight", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__antennaNumber(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getAntennaNumber());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__antennaNumber(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setAntennaNumber(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "antennaNumber", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__antennaPhaseCenter(t_RinexObservationHeader *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getAntennaPhaseCenter());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__antennaPhaseCenter(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
              {
                INT_CALL(self->object.setAntennaPhaseCenter(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "antennaPhaseCenter", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__antennaReferencePoint(t_RinexObservationHeader *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getAntennaReferencePoint());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__antennaReferencePoint(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
              {
                INT_CALL(self->object.setAntennaReferencePoint(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "antennaReferencePoint", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__antennaType(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getAntennaType());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__antennaType(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setAntennaType(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "antennaType", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__antennaZeroDirection(t_RinexObservationHeader *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getAntennaZeroDirection());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__antennaZeroDirection(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
              {
                INT_CALL(self->object.setAntennaZeroDirection(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "antennaZeroDirection", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__approxPos(t_RinexObservationHeader *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getApproxPos());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__approxPos(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
              {
                INT_CALL(self->object.setApproxPos(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "approxPos", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__c1cCodePhaseBias(t_RinexObservationHeader *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getC1cCodePhaseBias());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexObservationHeader_set__c1cCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setC1cCodePhaseBias(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "c1cCodePhaseBias", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__c1pCodePhaseBias(t_RinexObservationHeader *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getC1pCodePhaseBias());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexObservationHeader_set__c1pCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setC1pCodePhaseBias(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "c1pCodePhaseBias", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__c2cCodePhaseBias(t_RinexObservationHeader *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getC2cCodePhaseBias());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexObservationHeader_set__c2cCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setC2cCodePhaseBias(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "c2cCodePhaseBias", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__c2pCodePhaseBias(t_RinexObservationHeader *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getC2pCodePhaseBias());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexObservationHeader_set__c2pCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setC2pCodePhaseBias(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "c2pCodePhaseBias", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__centerMass(t_RinexObservationHeader *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getCenterMass());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__centerMass(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
              {
                INT_CALL(self->object.setCenterMass(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "centerMass", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__clkOffset(t_RinexObservationHeader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getClkOffset());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexObservationHeader_set__clkOffset(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setClkOffset(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "clkOffset", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__eccentricities(t_RinexObservationHeader *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D value((jobject) NULL);
            OBJ_CALL(value = self->object.getEccentricities());
            return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__eccentricities(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::geometry::euclidean::twod::Vector2D value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &value))
              {
                INT_CALL(self->object.setEccentricities(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "eccentricities", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__glonassChannels(t_RinexObservationHeader *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getGlonassChannels());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexObservationHeader_get__interval(t_RinexObservationHeader *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getInterval());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexObservationHeader_set__interval(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setInterval(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "interval", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__leapSeconds(t_RinexObservationHeader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLeapSeconds());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexObservationHeader_set__leapSeconds(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setLeapSeconds(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "leapSeconds", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__leapSecondsDayNum(t_RinexObservationHeader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLeapSecondsDayNum());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexObservationHeader_set__leapSecondsDayNum(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setLeapSecondsDayNum(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "leapSecondsDayNum", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__leapSecondsFuture(t_RinexObservationHeader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLeapSecondsFuture());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexObservationHeader_set__leapSecondsFuture(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setLeapSecondsFuture(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "leapSecondsFuture", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__leapSecondsWeekNum(t_RinexObservationHeader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLeapSecondsWeekNum());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexObservationHeader_set__leapSecondsWeekNum(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setLeapSecondsWeekNum(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "leapSecondsWeekNum", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__listAppliedDCBS(t_RinexObservationHeader *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getListAppliedDCBS());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexObservationHeader_get__listAppliedPCVS(t_RinexObservationHeader *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getListAppliedPCVS());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexObservationHeader_get__markerName(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getMarkerName());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__markerName(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setMarkerName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "markerName", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__markerNumber(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getMarkerNumber());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__markerNumber(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setMarkerNumber(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "markerNumber", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__markerType(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getMarkerType());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__markerType(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setMarkerType(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "markerType", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__nbObsPerSat(t_RinexObservationHeader *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getNbObsPerSat());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexObservationHeader_get__nbSat(t_RinexObservationHeader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNbSat());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexObservationHeader_set__nbSat(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setNbSat(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "nbSat", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__observationCode(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getObservationCode());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__observationCode(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setObservationCode(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "observationCode", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__observerName(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getObserverName());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__observerName(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setObserverName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "observerName", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__phaseCenterSystem(t_RinexObservationHeader *self, void *data)
          {
            ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getPhaseCenterSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__phaseCenterSystem(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::gnss::SatelliteSystem::initializeClass, &value))
              {
                INT_CALL(self->object.setPhaseCenterSystem(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "phaseCenterSystem", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__phaseShiftCorrections(t_RinexObservationHeader *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getPhaseShiftCorrections());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexObservationHeader_get__receiverNumber(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getReceiverNumber());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__receiverNumber(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setReceiverNumber(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "receiverNumber", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__receiverType(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getReceiverType());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__receiverType(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setReceiverType(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "receiverType", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__receiverVersion(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getReceiverVersion());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__receiverVersion(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setReceiverVersion(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "receiverVersion", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__signalStrengthUnit(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSignalStrengthUnit());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__signalStrengthUnit(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setSignalStrengthUnit(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "signalStrengthUnit", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__tFirstObs(t_RinexObservationHeader *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getTFirstObs());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__tFirstObs(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                INT_CALL(self->object.setTFirstObs(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "tFirstObs", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__tLastObs(t_RinexObservationHeader *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getTLastObs());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__tLastObs(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                INT_CALL(self->object.setTLastObs(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "tLastObs", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__typeObs(t_RinexObservationHeader *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getTypeObs());
            return ::java::util::t_Map::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrameAlmanac.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrameAlmanac::class$ = NULL;
          jmethodID *SubFrameAlmanac::mids$ = NULL;
          bool SubFrameAlmanac::live$ = false;

          jclass SubFrameAlmanac::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrameAlmanac");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAF0_557b8123390d8d0c] = env->getMethodID(cls, "getAF0", "()D");
              mids$[mid_getAF1_557b8123390d8d0c] = env->getMethodID(cls, "getAF1", "()D");
              mids$[mid_getDeltai_557b8123390d8d0c] = env->getMethodID(cls, "getDeltai", "()D");
              mids$[mid_getE_557b8123390d8d0c] = env->getMethodID(cls, "getE", "()D");
              mids$[mid_getLowercaseOmega_557b8123390d8d0c] = env->getMethodID(cls, "getLowercaseOmega", "()D");
              mids$[mid_getM0_557b8123390d8d0c] = env->getMethodID(cls, "getM0", "()D");
              mids$[mid_getOmegaDot_557b8123390d8d0c] = env->getMethodID(cls, "getOmegaDot", "()D");
              mids$[mid_getPRN_412668abc8d889e9] = env->getMethodID(cls, "getPRN", "()I");
              mids$[mid_getSqrtA_557b8123390d8d0c] = env->getMethodID(cls, "getSqrtA", "()D");
              mids$[mid_getSvHealth_412668abc8d889e9] = env->getMethodID(cls, "getSvHealth", "()I");
              mids$[mid_getToaA_412668abc8d889e9] = env->getMethodID(cls, "getToaA", "()I");
              mids$[mid_getUppercaseOmega0_557b8123390d8d0c] = env->getMethodID(cls, "getUppercaseOmega0", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble SubFrameAlmanac::getAF0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAF0_557b8123390d8d0c]);
          }

          jdouble SubFrameAlmanac::getAF1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAF1_557b8123390d8d0c]);
          }

          jdouble SubFrameAlmanac::getDeltai() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDeltai_557b8123390d8d0c]);
          }

          jdouble SubFrameAlmanac::getE() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getE_557b8123390d8d0c]);
          }

          jdouble SubFrameAlmanac::getLowercaseOmega() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLowercaseOmega_557b8123390d8d0c]);
          }

          jdouble SubFrameAlmanac::getM0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getM0_557b8123390d8d0c]);
          }

          jdouble SubFrameAlmanac::getOmegaDot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOmegaDot_557b8123390d8d0c]);
          }

          jint SubFrameAlmanac::getPRN() const
          {
            return env->callIntMethod(this$, mids$[mid_getPRN_412668abc8d889e9]);
          }

          jdouble SubFrameAlmanac::getSqrtA() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSqrtA_557b8123390d8d0c]);
          }

          jint SubFrameAlmanac::getSvHealth() const
          {
            return env->callIntMethod(this$, mids$[mid_getSvHealth_412668abc8d889e9]);
          }

          jint SubFrameAlmanac::getToaA() const
          {
            return env->callIntMethod(this$, mids$[mid_getToaA_412668abc8d889e9]);
          }

          jdouble SubFrameAlmanac::getUppercaseOmega0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getUppercaseOmega0_557b8123390d8d0c]);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {
          static PyObject *t_SubFrameAlmanac_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrameAlmanac_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrameAlmanac_getAF0(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getAF1(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getDeltai(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getE(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getLowercaseOmega(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getM0(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getOmegaDot(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getPRN(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getSqrtA(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getSvHealth(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getToaA(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getUppercaseOmega0(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_get__aF0(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__aF1(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__deltai(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__e(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__lowercaseOmega(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__m0(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__omegaDot(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__pRN(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__sqrtA(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__svHealth(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__toaA(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__uppercaseOmega0(t_SubFrameAlmanac *self, void *data);
          static PyGetSetDef t_SubFrameAlmanac__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrameAlmanac, aF0),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, aF1),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, deltai),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, e),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, lowercaseOmega),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, m0),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, omegaDot),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, pRN),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, sqrtA),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, svHealth),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, toaA),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, uppercaseOmega0),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrameAlmanac__methods_[] = {
            DECLARE_METHOD(t_SubFrameAlmanac, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrameAlmanac, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrameAlmanac, getAF0, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getAF1, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getDeltai, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getE, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getLowercaseOmega, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getM0, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getOmegaDot, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getPRN, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getSqrtA, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getSvHealth, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getToaA, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getUppercaseOmega0, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrameAlmanac)[] = {
            { Py_tp_methods, t_SubFrameAlmanac__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrameAlmanac__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrameAlmanac)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame45),
            NULL
          };

          DEFINE_TYPE(SubFrameAlmanac, t_SubFrameAlmanac, SubFrameAlmanac);

          void t_SubFrameAlmanac::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrameAlmanac), &PY_TYPE_DEF(SubFrameAlmanac), module, "SubFrameAlmanac", 0);
          }

          void t_SubFrameAlmanac::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrameAlmanac), "class_", make_descriptor(SubFrameAlmanac::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrameAlmanac), "wrapfn_", make_descriptor(t_SubFrameAlmanac::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrameAlmanac), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrameAlmanac_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrameAlmanac::initializeClass, 1)))
              return NULL;
            return t_SubFrameAlmanac::wrap_Object(SubFrameAlmanac(((t_SubFrameAlmanac *) arg)->object.this$));
          }
          static PyObject *t_SubFrameAlmanac_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrameAlmanac::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrameAlmanac_getAF0(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAF0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_getAF1(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAF1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_getDeltai(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getDeltai());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_getE(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getE());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_getLowercaseOmega(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLowercaseOmega());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_getM0(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getM0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_getOmegaDot(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOmegaDot());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_getPRN(t_SubFrameAlmanac *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getPRN());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrameAlmanac_getSqrtA(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getSqrtA());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_getSvHealth(t_SubFrameAlmanac *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getSvHealth());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrameAlmanac_getToaA(t_SubFrameAlmanac *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getToaA());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrameAlmanac_getUppercaseOmega0(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getUppercaseOmega0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_get__aF0(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAF0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrameAlmanac_get__aF1(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAF1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrameAlmanac_get__deltai(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getDeltai());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrameAlmanac_get__e(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getE());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrameAlmanac_get__lowercaseOmega(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLowercaseOmega());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrameAlmanac_get__m0(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getM0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrameAlmanac_get__omegaDot(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOmegaDot());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrameAlmanac_get__pRN(t_SubFrameAlmanac *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getPRN());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrameAlmanac_get__sqrtA(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSqrtA());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrameAlmanac_get__svHealth(t_SubFrameAlmanac *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getSvHealth());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrameAlmanac_get__toaA(t_SubFrameAlmanac *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getToaA());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrameAlmanac_get__uppercaseOmega0(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getUppercaseOmega0());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/PythonFieldEventDetector.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "org/orekit/propagation/events/FieldAdaptableInterval.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonFieldEventDetector::class$ = NULL;
        jmethodID *PythonFieldEventDetector::mids$ = NULL;
        bool PythonFieldEventDetector::live$ = false;

        jclass PythonFieldEventDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonFieldEventDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_g_de1c2d709eb2829c] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getHandler_ae75cc14adc9e750] = env->getMethodID(cls, "getHandler", "()Lorg/orekit/propagation/events/handlers/FieldEventHandler;");
            mids$[mid_getMaxCheckInterval_24041a63d01af092] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/orekit/propagation/events/FieldAdaptableInterval;");
            mids$[mid_getMaxIterationCount_412668abc8d889e9] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getThreshold_613c8f46c659f636] = env->getMethodID(cls, "getThreshold", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_init_811e49dad2467b67] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldEventDetector::PythonFieldEventDetector() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonFieldEventDetector::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonFieldEventDetector::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonFieldEventDetector::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        static PyObject *t_PythonFieldEventDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldEventDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldEventDetector_of_(t_PythonFieldEventDetector *self, PyObject *args);
        static int t_PythonFieldEventDetector_init_(t_PythonFieldEventDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldEventDetector_finalize(t_PythonFieldEventDetector *self);
        static PyObject *t_PythonFieldEventDetector_pythonExtension(t_PythonFieldEventDetector *self, PyObject *args);
        static jobject JNICALL t_PythonFieldEventDetector_g0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonFieldEventDetector_getHandler1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonFieldEventDetector_getMaxCheckInterval2(JNIEnv *jenv, jobject jobj);
        static jint JNICALL t_PythonFieldEventDetector_getMaxIterationCount3(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonFieldEventDetector_getThreshold4(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonFieldEventDetector_init5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonFieldEventDetector_pythonDecRef6(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldEventDetector_get__self(t_PythonFieldEventDetector *self, void *data);
        static PyObject *t_PythonFieldEventDetector_get__parameters_(t_PythonFieldEventDetector *self, void *data);
        static PyGetSetDef t_PythonFieldEventDetector__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldEventDetector, self),
          DECLARE_GET_FIELD(t_PythonFieldEventDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldEventDetector__methods_[] = {
          DECLARE_METHOD(t_PythonFieldEventDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldEventDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldEventDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldEventDetector, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldEventDetector, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldEventDetector)[] = {
          { Py_tp_methods, t_PythonFieldEventDetector__methods_ },
          { Py_tp_init, (void *) t_PythonFieldEventDetector_init_ },
          { Py_tp_getset, t_PythonFieldEventDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldEventDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldEventDetector, t_PythonFieldEventDetector, PythonFieldEventDetector);
        PyObject *t_PythonFieldEventDetector::wrap_Object(const PythonFieldEventDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldEventDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldEventDetector *self = (t_PythonFieldEventDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldEventDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldEventDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldEventDetector *self = (t_PythonFieldEventDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldEventDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldEventDetector), &PY_TYPE_DEF(PythonFieldEventDetector), module, "PythonFieldEventDetector", 1);
        }

        void t_PythonFieldEventDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEventDetector), "class_", make_descriptor(PythonFieldEventDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEventDetector), "wrapfn_", make_descriptor(t_PythonFieldEventDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEventDetector), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldEventDetector::initializeClass);
          JNINativeMethod methods[] = {
            { "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldEventDetector_g0 },
            { "getHandler", "()Lorg/orekit/propagation/events/handlers/FieldEventHandler;", (void *) t_PythonFieldEventDetector_getHandler1 },
            { "getMaxCheckInterval", "()Lorg/orekit/propagation/events/FieldAdaptableInterval;", (void *) t_PythonFieldEventDetector_getMaxCheckInterval2 },
            { "getMaxIterationCount", "()I", (void *) t_PythonFieldEventDetector_getMaxIterationCount3 },
            { "getThreshold", "()Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldEventDetector_getThreshold4 },
            { "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V", (void *) t_PythonFieldEventDetector_init5 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldEventDetector_pythonDecRef6 },
          };
          env->registerNatives(cls, methods, 7);
        }

        static PyObject *t_PythonFieldEventDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldEventDetector::initializeClass, 1)))
            return NULL;
          return t_PythonFieldEventDetector::wrap_Object(PythonFieldEventDetector(((t_PythonFieldEventDetector *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldEventDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldEventDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldEventDetector_of_(t_PythonFieldEventDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldEventDetector_init_(t_PythonFieldEventDetector *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldEventDetector object((jobject) NULL);

          INT_CALL(object = PythonFieldEventDetector());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldEventDetector_finalize(t_PythonFieldEventDetector *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldEventDetector_pythonExtension(t_PythonFieldEventDetector *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jlong result;
              OBJ_CALL(result = self->object.pythonExtension());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
            break;
           case 1:
            {
              jlong a0;

              if (!parseArgs(args, "J", &a0))
              {
                OBJ_CALL(self->object.pythonExtension(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
          return NULL;
        }

        static jobject JNICALL t_PythonFieldEventDetector_g0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventDetector::mids$[PythonFieldEventDetector::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "g", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
          {
            throwTypeError("g", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jobject JNICALL t_PythonFieldEventDetector_getHandler1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventDetector::mids$[PythonFieldEventDetector::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::events::handlers::FieldEventHandler value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getHandler", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::events::handlers::FieldEventHandler::initializeClass, &value))
          {
            throwTypeError("getHandler", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jobject JNICALL t_PythonFieldEventDetector_getMaxCheckInterval2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventDetector::mids$[PythonFieldEventDetector::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::events::FieldAdaptableInterval value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getMaxCheckInterval", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::events::FieldAdaptableInterval::initializeClass, &value))
          {
            throwTypeError("getMaxCheckInterval", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jint JNICALL t_PythonFieldEventDetector_getMaxIterationCount3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventDetector::mids$[PythonFieldEventDetector::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getMaxIterationCount", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getMaxIterationCount", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jobject JNICALL t_PythonFieldEventDetector_getThreshold4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventDetector::mids$[PythonFieldEventDetector::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getThreshold", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
          {
            throwTypeError("getThreshold", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static void JNICALL t_PythonFieldEventDetector_init5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventDetector::mids$[PythonFieldEventDetector::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
          PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldEventDetector_pythonDecRef6(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventDetector::mids$[PythonFieldEventDetector::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldEventDetector::mids$[PythonFieldEventDetector::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldEventDetector_get__self(t_PythonFieldEventDetector *self, void *data)
        {
          jlong ptr;
          OBJ_CALL(ptr = self->object.pythonExtension());
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            Py_INCREF(obj);
            return obj;
          }
          else
            Py_RETURN_NONE;
        }
        static PyObject *t_PythonFieldEventDetector_get__parameters_(t_PythonFieldEventDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PythonAbstractWindUp.h"
#include "org/orekit/estimation/measurements/gnss/Dipole.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonAbstractWindUp::class$ = NULL;
          jmethodID *PythonAbstractWindUp::mids$ = NULL;
          bool PythonAbstractWindUp::live$ = false;

          jclass PythonAbstractWindUp::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonAbstractWindUp");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a32f2a0e5c93d0ee] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/gnss/Dipole;Lorg/orekit/estimation/measurements/gnss/Dipole;)V");
              mids$[mid_emitterToInert_d9b98e1ca49f6e0d] = env->getMethodID(cls, "emitterToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_receiverToInert_d9b98e1ca49f6e0d] = env->getMethodID(cls, "receiverToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractWindUp::PythonAbstractWindUp(const ::org::orekit::estimation::measurements::gnss::Dipole & a0, const ::org::orekit::estimation::measurements::gnss::Dipole & a1) : ::org::orekit::estimation::measurements::gnss::AbstractWindUp(env->newObject(initializeClass, &mids$, mid_init$_a32f2a0e5c93d0ee, a0.this$, a1.this$)) {}

          void PythonAbstractWindUp::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonAbstractWindUp::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonAbstractWindUp::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_PythonAbstractWindUp_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractWindUp_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractWindUp_of_(t_PythonAbstractWindUp *self, PyObject *args);
          static int t_PythonAbstractWindUp_init_(t_PythonAbstractWindUp *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractWindUp_finalize(t_PythonAbstractWindUp *self);
          static PyObject *t_PythonAbstractWindUp_pythonExtension(t_PythonAbstractWindUp *self, PyObject *args);
          static jobject JNICALL t_PythonAbstractWindUp_emitterToInert0(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonAbstractWindUp_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonAbstractWindUp_receiverToInert2(JNIEnv *jenv, jobject jobj, jobject a0);
          static PyObject *t_PythonAbstractWindUp_get__self(t_PythonAbstractWindUp *self, void *data);
          static PyObject *t_PythonAbstractWindUp_get__parameters_(t_PythonAbstractWindUp *self, void *data);
          static PyGetSetDef t_PythonAbstractWindUp__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractWindUp, self),
            DECLARE_GET_FIELD(t_PythonAbstractWindUp, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractWindUp__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractWindUp, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractWindUp, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractWindUp, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonAbstractWindUp, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractWindUp, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractWindUp)[] = {
            { Py_tp_methods, t_PythonAbstractWindUp__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractWindUp_init_ },
            { Py_tp_getset, t_PythonAbstractWindUp__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractWindUp)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractWindUp),
            NULL
          };

          DEFINE_TYPE(PythonAbstractWindUp, t_PythonAbstractWindUp, PythonAbstractWindUp);
          PyObject *t_PythonAbstractWindUp::wrap_Object(const PythonAbstractWindUp& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonAbstractWindUp::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonAbstractWindUp *self = (t_PythonAbstractWindUp *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonAbstractWindUp::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonAbstractWindUp::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonAbstractWindUp *self = (t_PythonAbstractWindUp *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonAbstractWindUp::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractWindUp), &PY_TYPE_DEF(PythonAbstractWindUp), module, "PythonAbstractWindUp", 1);
          }

          void t_PythonAbstractWindUp::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractWindUp), "class_", make_descriptor(PythonAbstractWindUp::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractWindUp), "wrapfn_", make_descriptor(t_PythonAbstractWindUp::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractWindUp), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractWindUp::initializeClass);
            JNINativeMethod methods[] = {
              { "emitterToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;", (void *) t_PythonAbstractWindUp_emitterToInert0 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractWindUp_pythonDecRef1 },
              { "receiverToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;", (void *) t_PythonAbstractWindUp_receiverToInert2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonAbstractWindUp_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractWindUp::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractWindUp::wrap_Object(PythonAbstractWindUp(((t_PythonAbstractWindUp *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractWindUp_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractWindUp::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonAbstractWindUp_of_(t_PythonAbstractWindUp *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonAbstractWindUp_init_(t_PythonAbstractWindUp *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::gnss::Dipole a0((jobject) NULL);
            ::org::orekit::estimation::measurements::gnss::Dipole a1((jobject) NULL);
            PythonAbstractWindUp object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::estimation::measurements::gnss::Dipole::initializeClass, ::org::orekit::estimation::measurements::gnss::Dipole::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PythonAbstractWindUp(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonAbstractWindUp_finalize(t_PythonAbstractWindUp *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractWindUp_pythonExtension(t_PythonAbstractWindUp *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jlong result;
                OBJ_CALL(result = self->object.pythonExtension());
                return PyLong_FromLongLong((PY_LONG_LONG) result);
              }
              break;
             case 1:
              {
                jlong a0;

                if (!parseArgs(args, "J", &a0))
                {
                  OBJ_CALL(self->object.pythonExtension(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
            return NULL;
          }

          static jobject JNICALL t_PythonAbstractWindUp_emitterToInert0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractWindUp::mids$[PythonAbstractWindUp::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
            PyObject *o0 = ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::wrap_Object(::org::orekit::estimation::measurements::EstimatedMeasurementBase(a0));
            PyObject *result = PyObject_CallMethod(obj, "emitterToInert", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &value))
            {
              throwTypeError("emitterToInert", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static void JNICALL t_PythonAbstractWindUp_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractWindUp::mids$[PythonAbstractWindUp::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractWindUp::mids$[PythonAbstractWindUp::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static jobject JNICALL t_PythonAbstractWindUp_receiverToInert2(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractWindUp::mids$[PythonAbstractWindUp::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
            PyObject *o0 = ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::wrap_Object(::org::orekit::estimation::measurements::EstimatedMeasurementBase(a0));
            PyObject *result = PyObject_CallMethod(obj, "receiverToInert", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &value))
            {
              throwTypeError("receiverToInert", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static PyObject *t_PythonAbstractWindUp_get__self(t_PythonAbstractWindUp *self, void *data)
          {
            jlong ptr;
            OBJ_CALL(ptr = self->object.pythonExtension());
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              Py_INCREF(obj);
              return obj;
            }
            else
              Py_RETURN_NONE;
          }
          static PyObject *t_PythonAbstractWindUp_get__parameters_(t_PythonAbstractWindUp *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenZonalLinear.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {

              ::java::lang::Class *HansenZonalLinear::class$ = NULL;
              jmethodID *HansenZonalLinear::mids$ = NULL;
              bool HansenZonalLinear::live$ = false;

              jclass HansenZonalLinear::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenZonalLinear");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a84c9a223722150c] = env->getMethodID(cls, "<init>", "(II)V");
                  mids$[mid_computeInitValues_10f281d777284cea] = env->getMethodID(cls, "computeInitValues", "(D)V");
                  mids$[mid_getDerivative_77f9e227e4cf04b4] = env->getMethodID(cls, "getDerivative", "(ID)D");
                  mids$[mid_getValue_77f9e227e4cf04b4] = env->getMethodID(cls, "getValue", "(ID)D");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              HansenZonalLinear::HansenZonalLinear(jint a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a84c9a223722150c, a0, a1)) {}

              void HansenZonalLinear::computeInitValues(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_computeInitValues_10f281d777284cea], a0);
              }

              jdouble HansenZonalLinear::getDerivative(jint a0, jdouble a1) const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDerivative_77f9e227e4cf04b4], a0, a1);
              }

              jdouble HansenZonalLinear::getValue(jint a0, jdouble a1) const
              {
                return env->callDoubleMethod(this$, mids$[mid_getValue_77f9e227e4cf04b4], a0, a1);
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {
              static PyObject *t_HansenZonalLinear_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_HansenZonalLinear_instance_(PyTypeObject *type, PyObject *arg);
              static int t_HansenZonalLinear_init_(t_HansenZonalLinear *self, PyObject *args, PyObject *kwds);
              static PyObject *t_HansenZonalLinear_computeInitValues(t_HansenZonalLinear *self, PyObject *arg);
              static PyObject *t_HansenZonalLinear_getDerivative(t_HansenZonalLinear *self, PyObject *args);
              static PyObject *t_HansenZonalLinear_getValue(t_HansenZonalLinear *self, PyObject *args);

              static PyMethodDef t_HansenZonalLinear__methods_[] = {
                DECLARE_METHOD(t_HansenZonalLinear, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_HansenZonalLinear, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_HansenZonalLinear, computeInitValues, METH_O),
                DECLARE_METHOD(t_HansenZonalLinear, getDerivative, METH_VARARGS),
                DECLARE_METHOD(t_HansenZonalLinear, getValue, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(HansenZonalLinear)[] = {
                { Py_tp_methods, t_HansenZonalLinear__methods_ },
                { Py_tp_init, (void *) t_HansenZonalLinear_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(HansenZonalLinear)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(HansenZonalLinear, t_HansenZonalLinear, HansenZonalLinear);

              void t_HansenZonalLinear::install(PyObject *module)
              {
                installType(&PY_TYPE(HansenZonalLinear), &PY_TYPE_DEF(HansenZonalLinear), module, "HansenZonalLinear", 0);
              }

              void t_HansenZonalLinear::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenZonalLinear), "class_", make_descriptor(HansenZonalLinear::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenZonalLinear), "wrapfn_", make_descriptor(t_HansenZonalLinear::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenZonalLinear), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_HansenZonalLinear_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, HansenZonalLinear::initializeClass, 1)))
                  return NULL;
                return t_HansenZonalLinear::wrap_Object(HansenZonalLinear(((t_HansenZonalLinear *) arg)->object.this$));
              }
              static PyObject *t_HansenZonalLinear_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, HansenZonalLinear::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_HansenZonalLinear_init_(t_HansenZonalLinear *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                jint a1;
                HansenZonalLinear object((jobject) NULL);

                if (!parseArgs(args, "II", &a0, &a1))
                {
                  INT_CALL(object = HansenZonalLinear(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_HansenZonalLinear_computeInitValues(t_HansenZonalLinear *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.computeInitValues(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "computeInitValues", arg);
                return NULL;
              }

              static PyObject *t_HansenZonalLinear_getDerivative(t_HansenZonalLinear *self, PyObject *args)
              {
                jint a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getDerivative(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }

                PyErr_SetArgsError((PyObject *) self, "getDerivative", args);
                return NULL;
              }

              static PyObject *t_HansenZonalLinear_getValue(t_HansenZonalLinear *self, PyObject *args)
              {
                jint a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getValue(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }

                PyErr_SetArgsError((PyObject *) self, "getValue", args);
                return NULL;
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/OnBoardAntennaOneWayGNSSPhaseModifier.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSPhase.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *OnBoardAntennaOneWayGNSSPhaseModifier::class$ = NULL;
          jmethodID *OnBoardAntennaOneWayGNSSPhaseModifier::mids$ = NULL;
          bool OnBoardAntennaOneWayGNSSPhaseModifier::live$ = false;

          jclass OnBoardAntennaOneWayGNSSPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/OnBoardAntennaOneWayGNSSPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b0d111dc230cd433] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/attitudes/AttitudeProvider;)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OnBoardAntennaOneWayGNSSPhaseModifier::OnBoardAntennaOneWayGNSSPhaseModifier(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::attitudes::AttitudeProvider & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b0d111dc230cd433, a0.this$, a1.this$, a2.this$)) {}

          ::java::util::List OnBoardAntennaOneWayGNSSPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void OnBoardAntennaOneWayGNSSPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_e471490df8741b73], a0.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OnBoardAntennaOneWayGNSSPhaseModifier_init_(t_OnBoardAntennaOneWayGNSSPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_getParametersDrivers(t_OnBoardAntennaOneWayGNSSPhaseModifier *self);
          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_modifyWithoutDerivatives(t_OnBoardAntennaOneWayGNSSPhaseModifier *self, PyObject *arg);
          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_get__parametersDrivers(t_OnBoardAntennaOneWayGNSSPhaseModifier *self, void *data);
          static PyGetSetDef t_OnBoardAntennaOneWayGNSSPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_OnBoardAntennaOneWayGNSSPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OnBoardAntennaOneWayGNSSPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_OnBoardAntennaOneWayGNSSPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaOneWayGNSSPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaOneWayGNSSPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_OnBoardAntennaOneWayGNSSPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OnBoardAntennaOneWayGNSSPhaseModifier)[] = {
            { Py_tp_methods, t_OnBoardAntennaOneWayGNSSPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_OnBoardAntennaOneWayGNSSPhaseModifier_init_ },
            { Py_tp_getset, t_OnBoardAntennaOneWayGNSSPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OnBoardAntennaOneWayGNSSPhaseModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OnBoardAntennaOneWayGNSSPhaseModifier, t_OnBoardAntennaOneWayGNSSPhaseModifier, OnBoardAntennaOneWayGNSSPhaseModifier);

          void t_OnBoardAntennaOneWayGNSSPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(OnBoardAntennaOneWayGNSSPhaseModifier), &PY_TYPE_DEF(OnBoardAntennaOneWayGNSSPhaseModifier), module, "OnBoardAntennaOneWayGNSSPhaseModifier", 0);
          }

          void t_OnBoardAntennaOneWayGNSSPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaOneWayGNSSPhaseModifier), "class_", make_descriptor(OnBoardAntennaOneWayGNSSPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaOneWayGNSSPhaseModifier), "wrapfn_", make_descriptor(t_OnBoardAntennaOneWayGNSSPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaOneWayGNSSPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OnBoardAntennaOneWayGNSSPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_OnBoardAntennaOneWayGNSSPhaseModifier::wrap_Object(OnBoardAntennaOneWayGNSSPhaseModifier(((t_OnBoardAntennaOneWayGNSSPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OnBoardAntennaOneWayGNSSPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OnBoardAntennaOneWayGNSSPhaseModifier_init_(t_OnBoardAntennaOneWayGNSSPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
            OnBoardAntennaOneWayGNSSPhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = OnBoardAntennaOneWayGNSSPhaseModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_getParametersDrivers(t_OnBoardAntennaOneWayGNSSPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_modifyWithoutDerivatives(t_OnBoardAntennaOneWayGNSSPhaseModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }

          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_get__parametersDrivers(t_OnBoardAntennaOneWayGNSSPhaseModifier *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/numerical/PythonPartialsObserver.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/numerical/StateTransitionMatrixGenerator$PartialsObserver.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *PythonPartialsObserver::class$ = NULL;
        jmethodID *PythonPartialsObserver::mids$ = NULL;
        bool PythonPartialsObserver::live$ = false;

        jclass PythonPartialsObserver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/PythonPartialsObserver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_partialsComputed_c6e78d5a2304799f] = env->getMethodID(cls, "partialsComputed", "(Lorg/orekit/propagation/SpacecraftState;[D[D)V");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonPartialsObserver::PythonPartialsObserver() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonPartialsObserver::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonPartialsObserver::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonPartialsObserver::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        static PyObject *t_PythonPartialsObserver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonPartialsObserver_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonPartialsObserver_init_(t_PythonPartialsObserver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonPartialsObserver_finalize(t_PythonPartialsObserver *self);
        static PyObject *t_PythonPartialsObserver_pythonExtension(t_PythonPartialsObserver *self, PyObject *args);
        static void JNICALL t_PythonPartialsObserver_partialsComputed0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static void JNICALL t_PythonPartialsObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonPartialsObserver_get__self(t_PythonPartialsObserver *self, void *data);
        static PyGetSetDef t_PythonPartialsObserver__fields_[] = {
          DECLARE_GET_FIELD(t_PythonPartialsObserver, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonPartialsObserver__methods_[] = {
          DECLARE_METHOD(t_PythonPartialsObserver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonPartialsObserver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonPartialsObserver, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonPartialsObserver, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonPartialsObserver)[] = {
          { Py_tp_methods, t_PythonPartialsObserver__methods_ },
          { Py_tp_init, (void *) t_PythonPartialsObserver_init_ },
          { Py_tp_getset, t_PythonPartialsObserver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonPartialsObserver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonPartialsObserver, t_PythonPartialsObserver, PythonPartialsObserver);

        void t_PythonPartialsObserver::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonPartialsObserver), &PY_TYPE_DEF(PythonPartialsObserver), module, "PythonPartialsObserver", 1);
        }

        void t_PythonPartialsObserver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPartialsObserver), "class_", make_descriptor(PythonPartialsObserver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPartialsObserver), "wrapfn_", make_descriptor(t_PythonPartialsObserver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPartialsObserver), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonPartialsObserver::initializeClass);
          JNINativeMethod methods[] = {
            { "partialsComputed", "(Lorg/orekit/propagation/SpacecraftState;[D[D)V", (void *) t_PythonPartialsObserver_partialsComputed0 },
            { "pythonDecRef", "()V", (void *) t_PythonPartialsObserver_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonPartialsObserver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonPartialsObserver::initializeClass, 1)))
            return NULL;
          return t_PythonPartialsObserver::wrap_Object(PythonPartialsObserver(((t_PythonPartialsObserver *) arg)->object.this$));
        }
        static PyObject *t_PythonPartialsObserver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonPartialsObserver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonPartialsObserver_init_(t_PythonPartialsObserver *self, PyObject *args, PyObject *kwds)
        {
          PythonPartialsObserver object((jobject) NULL);

          INT_CALL(object = PythonPartialsObserver());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonPartialsObserver_finalize(t_PythonPartialsObserver *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonPartialsObserver_pythonExtension(t_PythonPartialsObserver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jlong result;
              OBJ_CALL(result = self->object.pythonExtension());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
            break;
           case 1:
            {
              jlong a0;

              if (!parseArgs(args, "J", &a0))
              {
                OBJ_CALL(self->object.pythonExtension(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
          return NULL;
        }

        static void JNICALL t_PythonPartialsObserver_partialsComputed0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPartialsObserver::mids$[PythonPartialsObserver::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = JArray<jdouble>(a1).wrap();
          PyObject *o2 = JArray<jdouble>(a2).wrap();
          PyObject *result = PyObject_CallMethod(obj, "partialsComputed", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonPartialsObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPartialsObserver::mids$[PythonPartialsObserver::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonPartialsObserver::mids$[PythonPartialsObserver::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonPartialsObserver_get__self(t_PythonPartialsObserver *self, void *data)
        {
          jlong ptr;
          OBJ_CALL(ptr = self->object.pythonExtension());
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            Py_INCREF(obj);
            return obj;
          }
          else
            Py_RETURN_NONE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/KvnLexicalAnalyzer.h"
#include "org/orekit/files/ccsds/utils/lexical/LexicalAnalyzer.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/ccsds/utils/lexical/MessageParser.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *KvnLexicalAnalyzer::class$ = NULL;
            jmethodID *KvnLexicalAnalyzer::mids$ = NULL;
            bool KvnLexicalAnalyzer::live$ = false;

            jclass KvnLexicalAnalyzer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/KvnLexicalAnalyzer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_562a84d0b1d0d772] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;)V");
                mids$[mid_accept_dc31073a650e82af] = env->getMethodID(cls, "accept", "(Lorg/orekit/files/ccsds/utils/lexical/MessageParser;)Ljava/lang/Object;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            KvnLexicalAnalyzer::KvnLexicalAnalyzer(const ::org::orekit::data::DataSource & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_562a84d0b1d0d772, a0.this$)) {}

            ::java::lang::Object KvnLexicalAnalyzer::accept(const ::org::orekit::files::ccsds::utils::lexical::MessageParser & a0) const
            {
              return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_accept_dc31073a650e82af], a0.this$));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            static PyObject *t_KvnLexicalAnalyzer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_KvnLexicalAnalyzer_instance_(PyTypeObject *type, PyObject *arg);
            static int t_KvnLexicalAnalyzer_init_(t_KvnLexicalAnalyzer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_KvnLexicalAnalyzer_accept(t_KvnLexicalAnalyzer *self, PyObject *arg);

            static PyMethodDef t_KvnLexicalAnalyzer__methods_[] = {
              DECLARE_METHOD(t_KvnLexicalAnalyzer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_KvnLexicalAnalyzer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_KvnLexicalAnalyzer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(KvnLexicalAnalyzer)[] = {
              { Py_tp_methods, t_KvnLexicalAnalyzer__methods_ },
              { Py_tp_init, (void *) t_KvnLexicalAnalyzer_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(KvnLexicalAnalyzer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(KvnLexicalAnalyzer, t_KvnLexicalAnalyzer, KvnLexicalAnalyzer);

            void t_KvnLexicalAnalyzer::install(PyObject *module)
            {
              installType(&PY_TYPE(KvnLexicalAnalyzer), &PY_TYPE_DEF(KvnLexicalAnalyzer), module, "KvnLexicalAnalyzer", 0);
            }

            void t_KvnLexicalAnalyzer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(KvnLexicalAnalyzer), "class_", make_descriptor(KvnLexicalAnalyzer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KvnLexicalAnalyzer), "wrapfn_", make_descriptor(t_KvnLexicalAnalyzer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KvnLexicalAnalyzer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_KvnLexicalAnalyzer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, KvnLexicalAnalyzer::initializeClass, 1)))
                return NULL;
              return t_KvnLexicalAnalyzer::wrap_Object(KvnLexicalAnalyzer(((t_KvnLexicalAnalyzer *) arg)->object.this$));
            }
            static PyObject *t_KvnLexicalAnalyzer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, KvnLexicalAnalyzer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_KvnLexicalAnalyzer_init_(t_KvnLexicalAnalyzer *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              KvnLexicalAnalyzer object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
              {
                INT_CALL(object = KvnLexicalAnalyzer(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_KvnLexicalAnalyzer_accept(t_KvnLexicalAnalyzer *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::MessageParser a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::Object result((jobject) NULL);

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::utils::lexical::MessageParser::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::lexical::t_MessageParser::parameters_))
              {
                OBJ_CALL(result = self->object.accept(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ionosphere/SingleLayerModelMappingFunction.h"
#include "org/orekit/models/earth/ionosphere/IonosphericMappingFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *SingleLayerModelMappingFunction::class$ = NULL;
          jmethodID *SingleLayerModelMappingFunction::mids$ = NULL;
          bool SingleLayerModelMappingFunction::live$ = false;

          jclass SingleLayerModelMappingFunction::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/SingleLayerModelMappingFunction");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_mappingFactor_7e960cd6eee376d8] = env->getMethodID(cls, "mappingFactor", "(D)D");
              mids$[mid_mappingFactor_6672ad854985cb64] = env->getMethodID(cls, "mappingFactor", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SingleLayerModelMappingFunction::SingleLayerModelMappingFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          SingleLayerModelMappingFunction::SingleLayerModelMappingFunction(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

          jdouble SingleLayerModelMappingFunction::mappingFactor(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_mappingFactor_7e960cd6eee376d8], a0);
          }

          ::org::hipparchus::CalculusFieldElement SingleLayerModelMappingFunction::mappingFactor(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_mappingFactor_6672ad854985cb64], a0.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {
          static PyObject *t_SingleLayerModelMappingFunction_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SingleLayerModelMappingFunction_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SingleLayerModelMappingFunction_init_(t_SingleLayerModelMappingFunction *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SingleLayerModelMappingFunction_mappingFactor(t_SingleLayerModelMappingFunction *self, PyObject *args);

          static PyMethodDef t_SingleLayerModelMappingFunction__methods_[] = {
            DECLARE_METHOD(t_SingleLayerModelMappingFunction, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SingleLayerModelMappingFunction, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SingleLayerModelMappingFunction, mappingFactor, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SingleLayerModelMappingFunction)[] = {
            { Py_tp_methods, t_SingleLayerModelMappingFunction__methods_ },
            { Py_tp_init, (void *) t_SingleLayerModelMappingFunction_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SingleLayerModelMappingFunction)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SingleLayerModelMappingFunction, t_SingleLayerModelMappingFunction, SingleLayerModelMappingFunction);

          void t_SingleLayerModelMappingFunction::install(PyObject *module)
          {
            installType(&PY_TYPE(SingleLayerModelMappingFunction), &PY_TYPE_DEF(SingleLayerModelMappingFunction), module, "SingleLayerModelMappingFunction", 0);
          }

          void t_SingleLayerModelMappingFunction::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleLayerModelMappingFunction), "class_", make_descriptor(SingleLayerModelMappingFunction::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleLayerModelMappingFunction), "wrapfn_", make_descriptor(t_SingleLayerModelMappingFunction::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleLayerModelMappingFunction), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SingleLayerModelMappingFunction_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SingleLayerModelMappingFunction::initializeClass, 1)))
              return NULL;
            return t_SingleLayerModelMappingFunction::wrap_Object(SingleLayerModelMappingFunction(((t_SingleLayerModelMappingFunction *) arg)->object.this$));
          }
          static PyObject *t_SingleLayerModelMappingFunction_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SingleLayerModelMappingFunction::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SingleLayerModelMappingFunction_init_(t_SingleLayerModelMappingFunction *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                SingleLayerModelMappingFunction object((jobject) NULL);

                INT_CALL(object = SingleLayerModelMappingFunction());
                self->object = object;
                break;
              }
             case 1:
              {
                jdouble a0;
                SingleLayerModelMappingFunction object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = SingleLayerModelMappingFunction(a0));
                  self->object = object;
                  break;
                }
              }
             default:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SingleLayerModelMappingFunction_mappingFactor(t_SingleLayerModelMappingFunction *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.mappingFactor(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.mappingFactor(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "mappingFactor", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Ulp.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Ulp::class$ = NULL;
        jmethodID *Ulp::mids$ = NULL;
        bool Ulp::live$ = false;

        jclass Ulp::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Ulp");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Ulp::Ulp() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble Ulp::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Ulp_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Ulp_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Ulp_init_(t_Ulp *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Ulp_value(t_Ulp *self, PyObject *arg);

        static PyMethodDef t_Ulp__methods_[] = {
          DECLARE_METHOD(t_Ulp, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Ulp, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Ulp, value, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Ulp)[] = {
          { Py_tp_methods, t_Ulp__methods_ },
          { Py_tp_init, (void *) t_Ulp_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Ulp)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Ulp, t_Ulp, Ulp);

        void t_Ulp::install(PyObject *module)
        {
          installType(&PY_TYPE(Ulp), &PY_TYPE_DEF(Ulp), module, "Ulp", 0);
        }

        void t_Ulp::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ulp), "class_", make_descriptor(Ulp::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ulp), "wrapfn_", make_descriptor(t_Ulp::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ulp), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Ulp_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Ulp::initializeClass, 1)))
            return NULL;
          return t_Ulp::wrap_Object(Ulp(((t_Ulp *) arg)->object.this$));
        }
        static PyObject *t_Ulp_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Ulp::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Ulp_init_(t_Ulp *self, PyObject *args, PyObject *kwds)
        {
          Ulp object((jobject) NULL);

          INT_CALL(object = Ulp());
          self->object = object;

          return 0;
        }

        static PyObject *t_Ulp_value(t_Ulp *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.value(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "value", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/OrbitRelativeFrame.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/definitions/OrbitRelativeFrame.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/LOFType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *OrbitRelativeFrame::class$ = NULL;
          jmethodID *OrbitRelativeFrame::mids$ = NULL;
          bool OrbitRelativeFrame::live$ = false;
          OrbitRelativeFrame *OrbitRelativeFrame::EQW_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::LVLH = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::LVLH_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::LVLH_ROTATING = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::NSW_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::NSW_ROTATING = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::NTW_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::NTW_ROTATING = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::PQW_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::QSW = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::RIC = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::RSW = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::RSW_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::RSW_ROTATING = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::RTN = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::SEZ_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::SEZ_ROTATING = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::TNW = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::TNW_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::TNW_ROTATING = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::VNC_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::VNC_ROTATING = NULL;

          jclass OrbitRelativeFrame::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/OrbitRelativeFrame");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getLofType_fc5c5809abf07d72] = env->getMethodID(cls, "getLofType", "()Lorg/orekit/frames/LOFType;");
              mids$[mid_isQuasiInertial_89b302893bdbe1f1] = env->getMethodID(cls, "isQuasiInertial", "()Z");
              mids$[mid_valueOf_b7362a8cf230e6f3] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;");
              mids$[mid_values_4be4879d5f471ea6] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              EQW_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "EQW_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              LVLH = new OrbitRelativeFrame(env->getStaticObjectField(cls, "LVLH", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              LVLH_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "LVLH_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              LVLH_ROTATING = new OrbitRelativeFrame(env->getStaticObjectField(cls, "LVLH_ROTATING", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              NSW_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "NSW_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              NSW_ROTATING = new OrbitRelativeFrame(env->getStaticObjectField(cls, "NSW_ROTATING", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              NTW_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "NTW_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              NTW_ROTATING = new OrbitRelativeFrame(env->getStaticObjectField(cls, "NTW_ROTATING", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              PQW_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "PQW_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              QSW = new OrbitRelativeFrame(env->getStaticObjectField(cls, "QSW", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              RIC = new OrbitRelativeFrame(env->getStaticObjectField(cls, "RIC", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              RSW = new OrbitRelativeFrame(env->getStaticObjectField(cls, "RSW", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              RSW_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "RSW_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              RSW_ROTATING = new OrbitRelativeFrame(env->getStaticObjectField(cls, "RSW_ROTATING", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              RTN = new OrbitRelativeFrame(env->getStaticObjectField(cls, "RTN", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              SEZ_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "SEZ_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              SEZ_ROTATING = new OrbitRelativeFrame(env->getStaticObjectField(cls, "SEZ_ROTATING", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              TNW = new OrbitRelativeFrame(env->getStaticObjectField(cls, "TNW", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              TNW_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "TNW_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              TNW_ROTATING = new OrbitRelativeFrame(env->getStaticObjectField(cls, "TNW_ROTATING", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              VNC_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "VNC_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              VNC_ROTATING = new OrbitRelativeFrame(env->getStaticObjectField(cls, "VNC_ROTATING", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::frames::LOFType OrbitRelativeFrame::getLofType() const
          {
            return ::org::orekit::frames::LOFType(env->callObjectMethod(this$, mids$[mid_getLofType_fc5c5809abf07d72]));
          }

          jboolean OrbitRelativeFrame::isQuasiInertial() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isQuasiInertial_89b302893bdbe1f1]);
          }

          OrbitRelativeFrame OrbitRelativeFrame::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return OrbitRelativeFrame(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b7362a8cf230e6f3], a0.this$));
          }

          JArray< OrbitRelativeFrame > OrbitRelativeFrame::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< OrbitRelativeFrame >(env->callStaticObjectMethod(cls, mids$[mid_values_4be4879d5f471ea6]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          static PyObject *t_OrbitRelativeFrame_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OrbitRelativeFrame_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OrbitRelativeFrame_of_(t_OrbitRelativeFrame *self, PyObject *args);
          static PyObject *t_OrbitRelativeFrame_getLofType(t_OrbitRelativeFrame *self);
          static PyObject *t_OrbitRelativeFrame_isQuasiInertial(t_OrbitRelativeFrame *self);
          static PyObject *t_OrbitRelativeFrame_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_OrbitRelativeFrame_values(PyTypeObject *type);
          static PyObject *t_OrbitRelativeFrame_get__lofType(t_OrbitRelativeFrame *self, void *data);
          static PyObject *t_OrbitRelativeFrame_get__quasiInertial(t_OrbitRelativeFrame *self, void *data);
          static PyObject *t_OrbitRelativeFrame_get__parameters_(t_OrbitRelativeFrame *self, void *data);
          static PyGetSetDef t_OrbitRelativeFrame__fields_[] = {
            DECLARE_GET_FIELD(t_OrbitRelativeFrame, lofType),
            DECLARE_GET_FIELD(t_OrbitRelativeFrame, quasiInertial),
            DECLARE_GET_FIELD(t_OrbitRelativeFrame, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OrbitRelativeFrame__methods_[] = {
            DECLARE_METHOD(t_OrbitRelativeFrame, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OrbitRelativeFrame, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OrbitRelativeFrame, of_, METH_VARARGS),
            DECLARE_METHOD(t_OrbitRelativeFrame, getLofType, METH_NOARGS),
            DECLARE_METHOD(t_OrbitRelativeFrame, isQuasiInertial, METH_NOARGS),
            DECLARE_METHOD(t_OrbitRelativeFrame, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_OrbitRelativeFrame, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OrbitRelativeFrame)[] = {
            { Py_tp_methods, t_OrbitRelativeFrame__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_OrbitRelativeFrame__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OrbitRelativeFrame)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(OrbitRelativeFrame, t_OrbitRelativeFrame, OrbitRelativeFrame);
          PyObject *t_OrbitRelativeFrame::wrap_Object(const OrbitRelativeFrame& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OrbitRelativeFrame::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OrbitRelativeFrame *self = (t_OrbitRelativeFrame *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OrbitRelativeFrame::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OrbitRelativeFrame::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OrbitRelativeFrame *self = (t_OrbitRelativeFrame *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OrbitRelativeFrame::install(PyObject *module)
          {
            installType(&PY_TYPE(OrbitRelativeFrame), &PY_TYPE_DEF(OrbitRelativeFrame), module, "OrbitRelativeFrame", 0);
          }

          void t_OrbitRelativeFrame::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "class_", make_descriptor(OrbitRelativeFrame::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "wrapfn_", make_descriptor(t_OrbitRelativeFrame::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "boxfn_", make_descriptor(boxObject));
            env->getClass(OrbitRelativeFrame::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "EQW_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::EQW_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "LVLH", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::LVLH)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "LVLH_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::LVLH_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "LVLH_ROTATING", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::LVLH_ROTATING)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "NSW_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::NSW_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "NSW_ROTATING", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::NSW_ROTATING)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "NTW_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::NTW_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "NTW_ROTATING", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::NTW_ROTATING)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "PQW_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::PQW_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "QSW", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::QSW)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "RIC", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::RIC)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "RSW", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::RSW)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "RSW_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::RSW_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "RSW_ROTATING", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::RSW_ROTATING)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "RTN", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::RTN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "SEZ_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::SEZ_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "SEZ_ROTATING", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::SEZ_ROTATING)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "TNW", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::TNW)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "TNW_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::TNW_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "TNW_ROTATING", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::TNW_ROTATING)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "VNC_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::VNC_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "VNC_ROTATING", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::VNC_ROTATING)));
          }

          static PyObject *t_OrbitRelativeFrame_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OrbitRelativeFrame::initializeClass, 1)))
              return NULL;
            return t_OrbitRelativeFrame::wrap_Object(OrbitRelativeFrame(((t_OrbitRelativeFrame *) arg)->object.this$));
          }
          static PyObject *t_OrbitRelativeFrame_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OrbitRelativeFrame::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OrbitRelativeFrame_of_(t_OrbitRelativeFrame *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_OrbitRelativeFrame_getLofType(t_OrbitRelativeFrame *self)
          {
            ::org::orekit::frames::LOFType result((jobject) NULL);
            OBJ_CALL(result = self->object.getLofType());
            return ::org::orekit::frames::t_LOFType::wrap_Object(result);
          }

          static PyObject *t_OrbitRelativeFrame_isQuasiInertial(t_OrbitRelativeFrame *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isQuasiInertial());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_OrbitRelativeFrame_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            OrbitRelativeFrame result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame::valueOf(a0));
              return t_OrbitRelativeFrame::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_OrbitRelativeFrame_values(PyTypeObject *type)
          {
            JArray< OrbitRelativeFrame > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame::values());
            return JArray<jobject>(result.this$).wrap(t_OrbitRelativeFrame::wrap_jobject);
          }
          static PyObject *t_OrbitRelativeFrame_get__parameters_(t_OrbitRelativeFrame *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_OrbitRelativeFrame_get__lofType(t_OrbitRelativeFrame *self, void *data)
          {
            ::org::orekit::frames::LOFType value((jobject) NULL);
            OBJ_CALL(value = self->object.getLofType());
            return ::org::orekit::frames::t_LOFType::wrap_Object(value);
          }

          static PyObject *t_OrbitRelativeFrame_get__quasiInertial(t_OrbitRelativeFrame *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isQuasiInertial());
            Py_RETURN_BOOL(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RealLinearOperator.h"
#include "java/lang/UnsupportedOperationException.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealLinearOperator::class$ = NULL;
      jmethodID *RealLinearOperator::mids$ = NULL;
      bool RealLinearOperator::live$ = false;

      jclass RealLinearOperator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealLinearOperator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getColumnDimension_412668abc8d889e9] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getRowDimension_412668abc8d889e9] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_isTransposable_89b302893bdbe1f1] = env->getMethodID(cls, "isTransposable", "()Z");
          mids$[mid_operate_342d5b01463e0dc5] = env->getMethodID(cls, "operate", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_operateTranspose_342d5b01463e0dc5] = env->getMethodID(cls, "operateTranspose", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint RealLinearOperator::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_412668abc8d889e9]);
      }

      jint RealLinearOperator::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_412668abc8d889e9]);
      }

      jboolean RealLinearOperator::isTransposable() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isTransposable_89b302893bdbe1f1]);
      }

      ::org::hipparchus::linear::RealVector RealLinearOperator::operate(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_operate_342d5b01463e0dc5], a0.this$));
      }

      ::org::hipparchus::linear::RealVector RealLinearOperator::operateTranspose(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_operateTranspose_342d5b01463e0dc5], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_RealLinearOperator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealLinearOperator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealLinearOperator_getColumnDimension(t_RealLinearOperator *self);
      static PyObject *t_RealLinearOperator_getRowDimension(t_RealLinearOperator *self);
      static PyObject *t_RealLinearOperator_isTransposable(t_RealLinearOperator *self);
      static PyObject *t_RealLinearOperator_operate(t_RealLinearOperator *self, PyObject *arg);
      static PyObject *t_RealLinearOperator_operateTranspose(t_RealLinearOperator *self, PyObject *arg);
      static PyObject *t_RealLinearOperator_get__columnDimension(t_RealLinearOperator *self, void *data);
      static PyObject *t_RealLinearOperator_get__rowDimension(t_RealLinearOperator *self, void *data);
      static PyObject *t_RealLinearOperator_get__transposable(t_RealLinearOperator *self, void *data);
      static PyGetSetDef t_RealLinearOperator__fields_[] = {
        DECLARE_GET_FIELD(t_RealLinearOperator, columnDimension),
        DECLARE_GET_FIELD(t_RealLinearOperator, rowDimension),
        DECLARE_GET_FIELD(t_RealLinearOperator, transposable),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RealLinearOperator__methods_[] = {
        DECLARE_METHOD(t_RealLinearOperator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealLinearOperator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealLinearOperator, getColumnDimension, METH_NOARGS),
        DECLARE_METHOD(t_RealLinearOperator, getRowDimension, METH_NOARGS),
        DECLARE_METHOD(t_RealLinearOperator, isTransposable, METH_NOARGS),
        DECLARE_METHOD(t_RealLinearOperator, operate, METH_O),
        DECLARE_METHOD(t_RealLinearOperator, operateTranspose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealLinearOperator)[] = {
        { Py_tp_methods, t_RealLinearOperator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_RealLinearOperator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealLinearOperator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealLinearOperator, t_RealLinearOperator, RealLinearOperator);

      void t_RealLinearOperator::install(PyObject *module)
      {
        installType(&PY_TYPE(RealLinearOperator), &PY_TYPE_DEF(RealLinearOperator), module, "RealLinearOperator", 0);
      }

      void t_RealLinearOperator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealLinearOperator), "class_", make_descriptor(RealLinearOperator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealLinearOperator), "wrapfn_", make_descriptor(t_RealLinearOperator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealLinearOperator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealLinearOperator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealLinearOperator::initializeClass, 1)))
          return NULL;
        return t_RealLinearOperator::wrap_Object(RealLinearOperator(((t_RealLinearOperator *) arg)->object.this$));
      }
      static PyObject *t_RealLinearOperator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealLinearOperator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RealLinearOperator_getColumnDimension(t_RealLinearOperator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getColumnDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_RealLinearOperator_getRowDimension(t_RealLinearOperator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRowDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_RealLinearOperator_isTransposable(t_RealLinearOperator *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isTransposable());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_RealLinearOperator_operate(t_RealLinearOperator *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.operate(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "operate", arg);
        return NULL;
      }

      static PyObject *t_RealLinearOperator_operateTranspose(t_RealLinearOperator *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.operateTranspose(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "operateTranspose", arg);
        return NULL;
      }

      static PyObject *t_RealLinearOperator_get__columnDimension(t_RealLinearOperator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_RealLinearOperator_get__rowDimension(t_RealLinearOperator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_RealLinearOperator_get__transposable(t_RealLinearOperator *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isTransposable());
        Py_RETURN_BOOL(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/MultivariateMatrixFunction.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *MultivariateMatrixFunction::class$ = NULL;
      jmethodID *MultivariateMatrixFunction::mids$ = NULL;
      bool MultivariateMatrixFunction::live$ = false;

      jclass MultivariateMatrixFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/MultivariateMatrixFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_e1330e10f5139c33] = env->getMethodID(cls, "value", "([D)[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< JArray< jdouble > > MultivariateMatrixFunction::value(const JArray< jdouble > & a0) const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_value_e1330e10f5139c33], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      static PyObject *t_MultivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultivariateMatrixFunction_value(t_MultivariateMatrixFunction *self, PyObject *arg);

      static PyMethodDef t_MultivariateMatrixFunction__methods_[] = {
        DECLARE_METHOD(t_MultivariateMatrixFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultivariateMatrixFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultivariateMatrixFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultivariateMatrixFunction)[] = {
        { Py_tp_methods, t_MultivariateMatrixFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultivariateMatrixFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MultivariateMatrixFunction, t_MultivariateMatrixFunction, MultivariateMatrixFunction);

      void t_MultivariateMatrixFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(MultivariateMatrixFunction), &PY_TYPE_DEF(MultivariateMatrixFunction), module, "MultivariateMatrixFunction", 0);
      }

      void t_MultivariateMatrixFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateMatrixFunction), "class_", make_descriptor(MultivariateMatrixFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateMatrixFunction), "wrapfn_", make_descriptor(t_MultivariateMatrixFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateMatrixFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultivariateMatrixFunction::initializeClass, 1)))
          return NULL;
        return t_MultivariateMatrixFunction::wrap_Object(MultivariateMatrixFunction(((t_MultivariateMatrixFunction *) arg)->object.this$));
      }
      static PyObject *t_MultivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultivariateMatrixFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MultivariateMatrixFunction_value(t_MultivariateMatrixFunction *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/AbstractFieldOrbitInterpolator.h"
#include "java/util/Collection.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *AbstractFieldOrbitInterpolator::class$ = NULL;
      jmethodID *AbstractFieldOrbitInterpolator::mids$ = NULL;
      bool AbstractFieldOrbitInterpolator::live$ = false;

      jclass AbstractFieldOrbitInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/AbstractFieldOrbitInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_fc65bf318d004af6] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;)V");
          mids$[mid_getOutputInertialFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getOutputInertialFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_interpolate_14c0886f8f2e5608] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Collection;)Lorg/orekit/orbits/FieldOrbit;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractFieldOrbitInterpolator::AbstractFieldOrbitInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_fc65bf318d004af6, a0, a1, a2.this$)) {}

      ::org::orekit::frames::Frame AbstractFieldOrbitInterpolator::getOutputInertialFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getOutputInertialFrame_6c9bc0a928c56d4e]));
      }

      ::org::orekit::orbits::FieldOrbit AbstractFieldOrbitInterpolator::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_interpolate_14c0886f8f2e5608], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_AbstractFieldOrbitInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldOrbitInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldOrbitInterpolator_of_(t_AbstractFieldOrbitInterpolator *self, PyObject *args);
      static int t_AbstractFieldOrbitInterpolator_init_(t_AbstractFieldOrbitInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractFieldOrbitInterpolator_getOutputInertialFrame(t_AbstractFieldOrbitInterpolator *self);
      static PyObject *t_AbstractFieldOrbitInterpolator_interpolate(t_AbstractFieldOrbitInterpolator *self, PyObject *args);
      static PyObject *t_AbstractFieldOrbitInterpolator_get__outputInertialFrame(t_AbstractFieldOrbitInterpolator *self, void *data);
      static PyObject *t_AbstractFieldOrbitInterpolator_get__parameters_(t_AbstractFieldOrbitInterpolator *self, void *data);
      static PyGetSetDef t_AbstractFieldOrbitInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractFieldOrbitInterpolator, outputInertialFrame),
        DECLARE_GET_FIELD(t_AbstractFieldOrbitInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractFieldOrbitInterpolator__methods_[] = {
        DECLARE_METHOD(t_AbstractFieldOrbitInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldOrbitInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldOrbitInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldOrbitInterpolator, getOutputInertialFrame, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldOrbitInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractFieldOrbitInterpolator)[] = {
        { Py_tp_methods, t_AbstractFieldOrbitInterpolator__methods_ },
        { Py_tp_init, (void *) t_AbstractFieldOrbitInterpolator_init_ },
        { Py_tp_getset, t_AbstractFieldOrbitInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractFieldOrbitInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractFieldTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(AbstractFieldOrbitInterpolator, t_AbstractFieldOrbitInterpolator, AbstractFieldOrbitInterpolator);
      PyObject *t_AbstractFieldOrbitInterpolator::wrap_Object(const AbstractFieldOrbitInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractFieldOrbitInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldOrbitInterpolator *self = (t_AbstractFieldOrbitInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractFieldOrbitInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractFieldOrbitInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldOrbitInterpolator *self = (t_AbstractFieldOrbitInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractFieldOrbitInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractFieldOrbitInterpolator), &PY_TYPE_DEF(AbstractFieldOrbitInterpolator), module, "AbstractFieldOrbitInterpolator", 0);
      }

      void t_AbstractFieldOrbitInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldOrbitInterpolator), "class_", make_descriptor(AbstractFieldOrbitInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldOrbitInterpolator), "wrapfn_", make_descriptor(t_AbstractFieldOrbitInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldOrbitInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractFieldOrbitInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractFieldOrbitInterpolator::initializeClass, 1)))
          return NULL;
        return t_AbstractFieldOrbitInterpolator::wrap_Object(AbstractFieldOrbitInterpolator(((t_AbstractFieldOrbitInterpolator *) arg)->object.this$));
      }
      static PyObject *t_AbstractFieldOrbitInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractFieldOrbitInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractFieldOrbitInterpolator_of_(t_AbstractFieldOrbitInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_AbstractFieldOrbitInterpolator_init_(t_AbstractFieldOrbitInterpolator *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jdouble a1;
        ::org::orekit::frames::Frame a2((jobject) NULL);
        AbstractFieldOrbitInterpolator object((jobject) NULL);

        if (!parseArgs(args, "IDk", ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = AbstractFieldOrbitInterpolator(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AbstractFieldOrbitInterpolator_getOutputInertialFrame(t_AbstractFieldOrbitInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutputInertialFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_AbstractFieldOrbitInterpolator_interpolate(t_AbstractFieldOrbitInterpolator *self, PyObject *args)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::Collection a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::orbits::FieldOrbit result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
        {
          OBJ_CALL(result = self->object.interpolate(a0, a1));
          return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(AbstractFieldOrbitInterpolator), (PyObject *) self, "interpolate", args, 2);
      }
      static PyObject *t_AbstractFieldOrbitInterpolator_get__parameters_(t_AbstractFieldOrbitInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractFieldOrbitInterpolator_get__outputInertialFrame(t_AbstractFieldOrbitInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutputInertialFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarD.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *FieldCopolarD::class$ = NULL;
          jmethodID *FieldCopolarD::mids$ = NULL;
          bool FieldCopolarD::live$ = false;

          jclass FieldCopolarD::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/FieldCopolarD");

              mids$ = new jmethodID[max_mid];
              mids$[mid_cd_613c8f46c659f636] = env->getMethodID(cls, "cd", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_nd_613c8f46c659f636] = env->getMethodID(cls, "nd", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_sd_613c8f46c659f636] = env->getMethodID(cls, "sd", "()Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarD::cd() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_cd_613c8f46c659f636]));
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarD::nd() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_nd_613c8f46c659f636]));
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarD::sd() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_sd_613c8f46c659f636]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {
          static PyObject *t_FieldCopolarD_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldCopolarD_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldCopolarD_of_(t_FieldCopolarD *self, PyObject *args);
          static PyObject *t_FieldCopolarD_cd(t_FieldCopolarD *self);
          static PyObject *t_FieldCopolarD_nd(t_FieldCopolarD *self);
          static PyObject *t_FieldCopolarD_sd(t_FieldCopolarD *self);
          static PyObject *t_FieldCopolarD_get__parameters_(t_FieldCopolarD *self, void *data);
          static PyGetSetDef t_FieldCopolarD__fields_[] = {
            DECLARE_GET_FIELD(t_FieldCopolarD, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldCopolarD__methods_[] = {
            DECLARE_METHOD(t_FieldCopolarD, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldCopolarD, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldCopolarD, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldCopolarD, cd, METH_NOARGS),
            DECLARE_METHOD(t_FieldCopolarD, nd, METH_NOARGS),
            DECLARE_METHOD(t_FieldCopolarD, sd, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldCopolarD)[] = {
            { Py_tp_methods, t_FieldCopolarD__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldCopolarD__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldCopolarD)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldCopolarD, t_FieldCopolarD, FieldCopolarD);
          PyObject *t_FieldCopolarD::wrap_Object(const FieldCopolarD& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldCopolarD::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldCopolarD *self = (t_FieldCopolarD *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldCopolarD::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldCopolarD::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldCopolarD *self = (t_FieldCopolarD *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldCopolarD::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldCopolarD), &PY_TYPE_DEF(FieldCopolarD), module, "FieldCopolarD", 0);
          }

          void t_FieldCopolarD::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarD), "class_", make_descriptor(FieldCopolarD::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarD), "wrapfn_", make_descriptor(t_FieldCopolarD::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarD), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldCopolarD_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldCopolarD::initializeClass, 1)))
              return NULL;
            return t_FieldCopolarD::wrap_Object(FieldCopolarD(((t_FieldCopolarD *) arg)->object.this$));
          }
          static PyObject *t_FieldCopolarD_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldCopolarD::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldCopolarD_of_(t_FieldCopolarD *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldCopolarD_cd(t_FieldCopolarD *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.cd());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldCopolarD_nd(t_FieldCopolarD *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.nd());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldCopolarD_sd(t_FieldCopolarD *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.sd());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }
          static PyObject *t_FieldCopolarD_get__parameters_(t_FieldCopolarD *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/MaxIter.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/optim/MaxIter.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *MaxIter::class$ = NULL;
      jmethodID *MaxIter::mids$ = NULL;
      bool MaxIter::live$ = false;

      jclass MaxIter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/MaxIter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_getMaxIter_412668abc8d889e9] = env->getMethodID(cls, "getMaxIter", "()I");
          mids$[mid_unlimited_fd582a77ea2c8591] = env->getStaticMethodID(cls, "unlimited", "()Lorg/hipparchus/optim/MaxIter;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MaxIter::MaxIter(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

      jint MaxIter::getMaxIter() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxIter_412668abc8d889e9]);
      }

      MaxIter MaxIter::unlimited()
      {
        jclass cls = env->getClass(initializeClass);
        return MaxIter(env->callStaticObjectMethod(cls, mids$[mid_unlimited_fd582a77ea2c8591]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      static PyObject *t_MaxIter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MaxIter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MaxIter_init_(t_MaxIter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_MaxIter_getMaxIter(t_MaxIter *self);
      static PyObject *t_MaxIter_unlimited(PyTypeObject *type);
      static PyObject *t_MaxIter_get__maxIter(t_MaxIter *self, void *data);
      static PyGetSetDef t_MaxIter__fields_[] = {
        DECLARE_GET_FIELD(t_MaxIter, maxIter),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MaxIter__methods_[] = {
        DECLARE_METHOD(t_MaxIter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MaxIter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MaxIter, getMaxIter, METH_NOARGS),
        DECLARE_METHOD(t_MaxIter, unlimited, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MaxIter)[] = {
        { Py_tp_methods, t_MaxIter__methods_ },
        { Py_tp_init, (void *) t_MaxIter_init_ },
        { Py_tp_getset, t_MaxIter__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MaxIter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MaxIter, t_MaxIter, MaxIter);

      void t_MaxIter::install(PyObject *module)
      {
        installType(&PY_TYPE(MaxIter), &PY_TYPE_DEF(MaxIter), module, "MaxIter", 0);
      }

      void t_MaxIter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MaxIter), "class_", make_descriptor(MaxIter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MaxIter), "wrapfn_", make_descriptor(t_MaxIter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MaxIter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MaxIter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MaxIter::initializeClass, 1)))
          return NULL;
        return t_MaxIter::wrap_Object(MaxIter(((t_MaxIter *) arg)->object.this$));
      }
      static PyObject *t_MaxIter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MaxIter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MaxIter_init_(t_MaxIter *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        MaxIter object((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          INT_CALL(object = MaxIter(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_MaxIter_getMaxIter(t_MaxIter *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxIter());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_MaxIter_unlimited(PyTypeObject *type)
      {
        MaxIter result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::optim::MaxIter::unlimited());
        return t_MaxIter::wrap_Object(result);
      }

      static PyObject *t_MaxIter_get__maxIter(t_MaxIter *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxIter());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame4E.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame4E::class$ = NULL;
          jmethodID *SubFrame4E::mids$ = NULL;
          bool SubFrame4E::live$ = false;
          jint SubFrame4E::NB_AS = (jint) 0;
          jint SubFrame4E::NB_SVH = (jint) 0;

          jclass SubFrame4E::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame4E");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAntiSpoofing_0092017e99012694] = env->getMethodID(cls, "getAntiSpoofing", "(I)I");
              mids$[mid_getReserved10_412668abc8d889e9] = env->getMethodID(cls, "getReserved10", "()I");
              mids$[mid_getReserved8_412668abc8d889e9] = env->getMethodID(cls, "getReserved8", "()I");
              mids$[mid_getSvHealth_0092017e99012694] = env->getMethodID(cls, "getSvHealth", "(I)I");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              NB_AS = env->getStaticIntField(cls, "NB_AS");
              NB_SVH = env->getStaticIntField(cls, "NB_SVH");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint SubFrame4E::getAntiSpoofing(jint a0) const
          {
            return env->callIntMethod(this$, mids$[mid_getAntiSpoofing_0092017e99012694], a0);
          }

          jint SubFrame4E::getReserved10() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved10_412668abc8d889e9]);
          }

          jint SubFrame4E::getReserved8() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved8_412668abc8d889e9]);
          }

          jint SubFrame4E::getSvHealth(jint a0) const
          {
            return env->callIntMethod(this$, mids$[mid_getSvHealth_0092017e99012694], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {
          static PyObject *t_SubFrame4E_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4E_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4E_getAntiSpoofing(t_SubFrame4E *self, PyObject *args);
          static PyObject *t_SubFrame4E_getReserved10(t_SubFrame4E *self);
          static PyObject *t_SubFrame4E_getReserved8(t_SubFrame4E *self);
          static PyObject *t_SubFrame4E_getSvHealth(t_SubFrame4E *self, PyObject *arg);
          static PyObject *t_SubFrame4E_get__reserved10(t_SubFrame4E *self, void *data);
          static PyObject *t_SubFrame4E_get__reserved8(t_SubFrame4E *self, void *data);
          static PyGetSetDef t_SubFrame4E__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame4E, reserved10),
            DECLARE_GET_FIELD(t_SubFrame4E, reserved8),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame4E__methods_[] = {
            DECLARE_METHOD(t_SubFrame4E, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4E, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4E, getAntiSpoofing, METH_VARARGS),
            DECLARE_METHOD(t_SubFrame4E, getReserved10, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4E, getReserved8, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4E, getSvHealth, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame4E)[] = {
            { Py_tp_methods, t_SubFrame4E__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame4E__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame4E)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame45),
            NULL
          };

          DEFINE_TYPE(SubFrame4E, t_SubFrame4E, SubFrame4E);

          void t_SubFrame4E::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame4E), &PY_TYPE_DEF(SubFrame4E), module, "SubFrame4E", 0);
          }

          void t_SubFrame4E::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4E), "class_", make_descriptor(SubFrame4E::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4E), "wrapfn_", make_descriptor(t_SubFrame4E::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4E), "boxfn_", make_descriptor(boxObject));
            env->getClass(SubFrame4E::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4E), "NB_AS", make_descriptor(SubFrame4E::NB_AS));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4E), "NB_SVH", make_descriptor(SubFrame4E::NB_SVH));
          }

          static PyObject *t_SubFrame4E_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame4E::initializeClass, 1)))
              return NULL;
            return t_SubFrame4E::wrap_Object(SubFrame4E(((t_SubFrame4E *) arg)->object.this$));
          }
          static PyObject *t_SubFrame4E_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame4E::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame4E_getAntiSpoofing(t_SubFrame4E *self, PyObject *args)
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.getAntiSpoofing(a0));
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(SubFrame4E), (PyObject *) self, "getAntiSpoofing", args, 2);
          }

          static PyObject *t_SubFrame4E_getReserved10(t_SubFrame4E *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved10());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4E_getReserved8(t_SubFrame4E *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved8());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4E_getSvHealth(t_SubFrame4E *self, PyObject *arg)
          {
            jint a0;
            jint result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getSvHealth(a0));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getSvHealth", arg);
            return NULL;
          }

          static PyObject *t_SubFrame4E_get__reserved10(t_SubFrame4E *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved10());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4E_get__reserved8(t_SubFrame4E *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved8());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/DataFormat.h"
#include "org/orekit/gnss/metric/ntrip/DataFormat.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *DataFormat::class$ = NULL;
          jmethodID *DataFormat::mids$ = NULL;
          bool DataFormat::live$ = false;
          DataFormat *DataFormat::BINEX = NULL;
          DataFormat *DataFormat::CMR = NULL;
          DataFormat *DataFormat::CMR_PLUS = NULL;
          DataFormat *DataFormat::RAW = NULL;
          DataFormat *DataFormat::RINEX = NULL;
          DataFormat *DataFormat::RTCA = NULL;
          DataFormat *DataFormat::RTCM_2 = NULL;
          DataFormat *DataFormat::RTCM_3 = NULL;
          DataFormat *DataFormat::RTCM_SAPOS = NULL;
          DataFormat *DataFormat::SAPOS_ADV = NULL;
          DataFormat *DataFormat::SP3 = NULL;

          jclass DataFormat::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/DataFormat");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDataFormat_268f6f5bf26db0c3] = env->getStaticMethodID(cls, "getDataFormat", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/DataFormat;");
              mids$[mid_valueOf_268f6f5bf26db0c3] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/DataFormat;");
              mids$[mid_values_5542ae08d129ed1a] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/ntrip/DataFormat;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              BINEX = new DataFormat(env->getStaticObjectField(cls, "BINEX", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              CMR = new DataFormat(env->getStaticObjectField(cls, "CMR", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              CMR_PLUS = new DataFormat(env->getStaticObjectField(cls, "CMR_PLUS", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              RAW = new DataFormat(env->getStaticObjectField(cls, "RAW", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              RINEX = new DataFormat(env->getStaticObjectField(cls, "RINEX", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              RTCA = new DataFormat(env->getStaticObjectField(cls, "RTCA", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              RTCM_2 = new DataFormat(env->getStaticObjectField(cls, "RTCM_2", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              RTCM_3 = new DataFormat(env->getStaticObjectField(cls, "RTCM_3", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              RTCM_SAPOS = new DataFormat(env->getStaticObjectField(cls, "RTCM_SAPOS", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              SAPOS_ADV = new DataFormat(env->getStaticObjectField(cls, "SAPOS_ADV", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              SP3 = new DataFormat(env->getStaticObjectField(cls, "SP3", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DataFormat DataFormat::getDataFormat(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return DataFormat(env->callStaticObjectMethod(cls, mids$[mid_getDataFormat_268f6f5bf26db0c3], a0.this$));
          }

          DataFormat DataFormat::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return DataFormat(env->callStaticObjectMethod(cls, mids$[mid_valueOf_268f6f5bf26db0c3], a0.this$));
          }

          JArray< DataFormat > DataFormat::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< DataFormat >(env->callStaticObjectMethod(cls, mids$[mid_values_5542ae08d129ed1a]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {
          static PyObject *t_DataFormat_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DataFormat_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DataFormat_of_(t_DataFormat *self, PyObject *args);
          static PyObject *t_DataFormat_getDataFormat(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DataFormat_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_DataFormat_values(PyTypeObject *type);
          static PyObject *t_DataFormat_get__parameters_(t_DataFormat *self, void *data);
          static PyGetSetDef t_DataFormat__fields_[] = {
            DECLARE_GET_FIELD(t_DataFormat, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DataFormat__methods_[] = {
            DECLARE_METHOD(t_DataFormat, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataFormat, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataFormat, of_, METH_VARARGS),
            DECLARE_METHOD(t_DataFormat, getDataFormat, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataFormat, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_DataFormat, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DataFormat)[] = {
            { Py_tp_methods, t_DataFormat__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_DataFormat__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DataFormat)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(DataFormat, t_DataFormat, DataFormat);
          PyObject *t_DataFormat::wrap_Object(const DataFormat& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DataFormat::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DataFormat *self = (t_DataFormat *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_DataFormat::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DataFormat::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DataFormat *self = (t_DataFormat *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_DataFormat::install(PyObject *module)
          {
            installType(&PY_TYPE(DataFormat), &PY_TYPE_DEF(DataFormat), module, "DataFormat", 0);
          }

          void t_DataFormat::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "class_", make_descriptor(DataFormat::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "wrapfn_", make_descriptor(t_DataFormat::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "boxfn_", make_descriptor(boxObject));
            env->getClass(DataFormat::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "BINEX", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::BINEX)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "CMR", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::CMR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "CMR_PLUS", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::CMR_PLUS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "RAW", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::RAW)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "RINEX", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::RINEX)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "RTCA", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::RTCA)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "RTCM_2", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::RTCM_2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "RTCM_3", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::RTCM_3)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "RTCM_SAPOS", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::RTCM_SAPOS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "SAPOS_ADV", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::SAPOS_ADV)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "SP3", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::SP3)));
          }

          static PyObject *t_DataFormat_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DataFormat::initializeClass, 1)))
              return NULL;
            return t_DataFormat::wrap_Object(DataFormat(((t_DataFormat *) arg)->object.this$));
          }
          static PyObject *t_DataFormat_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DataFormat::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DataFormat_of_(t_DataFormat *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_DataFormat_getDataFormat(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            DataFormat result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::DataFormat::getDataFormat(a0));
              return t_DataFormat::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getDataFormat", arg);
            return NULL;
          }

          static PyObject *t_DataFormat_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            DataFormat result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::DataFormat::valueOf(a0));
              return t_DataFormat::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_DataFormat_values(PyTypeObject *type)
          {
            JArray< DataFormat > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::DataFormat::values());
            return JArray<jobject>(result.this$).wrap(t_DataFormat::wrap_jobject);
          }
          static PyObject *t_DataFormat_get__parameters_(t_DataFormat *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/SecularAndHarmonic.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *SecularAndHarmonic::class$ = NULL;
      jmethodID *SecularAndHarmonic::mids$ = NULL;
      bool SecularAndHarmonic::live$ = false;

      jclass SecularAndHarmonic::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/SecularAndHarmonic");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3246bd31f432242d] = env->getMethodID(cls, "<init>", "(I[D)V");
          mids$[mid_addPoint_f22bef3f7be90029] = env->getMethodID(cls, "addPoint", "(Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_addWeightedPoint_80c808f44ee4ae1c] = env->getMethodID(cls, "addWeightedPoint", "(Lorg/orekit/time/AbsoluteDate;DD)V");
          mids$[mid_approximateAsPolynomialOnly_fe670ae8f5b87144] = env->getMethodID(cls, "approximateAsPolynomialOnly", "(ILorg/orekit/time/AbsoluteDate;IILorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;D)[D");
          mids$[mid_fit_0640e6acf969ed28] = env->getMethodID(cls, "fit", "()V");
          mids$[mid_getFittedParameters_a53a7513ecedada2] = env->getMethodID(cls, "getFittedParameters", "()[D");
          mids$[mid_getHarmonicAmplitude_557b8123390d8d0c] = env->getMethodID(cls, "getHarmonicAmplitude", "()D");
          mids$[mid_getPulsations_a53a7513ecedada2] = env->getMethodID(cls, "getPulsations", "()[D");
          mids$[mid_getReferenceDate_7a97f7e149e79afb] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getSecularDegree_412668abc8d889e9] = env->getMethodID(cls, "getSecularDegree", "()I");
          mids$[mid_meanDerivative_e0f8c208355be955] = env->getMethodID(cls, "meanDerivative", "(Lorg/orekit/time/AbsoluteDate;II)D");
          mids$[mid_meanSecondDerivative_e0f8c208355be955] = env->getMethodID(cls, "meanSecondDerivative", "(Lorg/orekit/time/AbsoluteDate;II)D");
          mids$[mid_meanValue_e0f8c208355be955] = env->getMethodID(cls, "meanValue", "(Lorg/orekit/time/AbsoluteDate;II)D");
          mids$[mid_osculatingDerivative_b0b988f941da47d8] = env->getMethodID(cls, "osculatingDerivative", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_osculatingSecondDerivative_b0b988f941da47d8] = env->getMethodID(cls, "osculatingSecondDerivative", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_osculatingValue_b0b988f941da47d8] = env->getMethodID(cls, "osculatingValue", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_resetFitting_0fd0d5413261aea6] = env->getMethodID(cls, "resetFitting", "(Lorg/orekit/time/AbsoluteDate;[D)V");
          mids$[mid_setConvergenceRMS_10f281d777284cea] = env->getMethodID(cls, "setConvergenceRMS", "(D)V");
          mids$[mid_setMaxIter_a3da1a935cb37f7b] = env->getMethodID(cls, "setMaxIter", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SecularAndHarmonic::SecularAndHarmonic(jint a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3246bd31f432242d, a0, a1.this$)) {}

      void SecularAndHarmonic::addPoint(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addPoint_f22bef3f7be90029], a0.this$, a1);
      }

      void SecularAndHarmonic::addWeightedPoint(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addWeightedPoint_80c808f44ee4ae1c], a0.this$, a1, a2);
      }

      JArray< jdouble > SecularAndHarmonic::approximateAsPolynomialOnly(jint a0, const ::org::orekit::time::AbsoluteDate & a1, jint a2, jint a3, const ::org::orekit::time::AbsoluteDate & a4, const ::org::orekit::time::AbsoluteDate & a5, jdouble a6) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_approximateAsPolynomialOnly_fe670ae8f5b87144], a0, a1.this$, a2, a3, a4.this$, a5.this$, a6));
      }

      void SecularAndHarmonic::fit() const
      {
        env->callVoidMethod(this$, mids$[mid_fit_0640e6acf969ed28]);
      }

      JArray< jdouble > SecularAndHarmonic::getFittedParameters() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getFittedParameters_a53a7513ecedada2]));
      }

      jdouble SecularAndHarmonic::getHarmonicAmplitude() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHarmonicAmplitude_557b8123390d8d0c]);
      }

      JArray< jdouble > SecularAndHarmonic::getPulsations() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPulsations_a53a7513ecedada2]));
      }

      ::org::orekit::time::AbsoluteDate SecularAndHarmonic::getReferenceDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_7a97f7e149e79afb]));
      }

      jint SecularAndHarmonic::getSecularDegree() const
      {
        return env->callIntMethod(this$, mids$[mid_getSecularDegree_412668abc8d889e9]);
      }

      jdouble SecularAndHarmonic::meanDerivative(const ::org::orekit::time::AbsoluteDate & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_meanDerivative_e0f8c208355be955], a0.this$, a1, a2);
      }

      jdouble SecularAndHarmonic::meanSecondDerivative(const ::org::orekit::time::AbsoluteDate & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_meanSecondDerivative_e0f8c208355be955], a0.this$, a1, a2);
      }

      jdouble SecularAndHarmonic::meanValue(const ::org::orekit::time::AbsoluteDate & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_meanValue_e0f8c208355be955], a0.this$, a1, a2);
      }

      jdouble SecularAndHarmonic::osculatingDerivative(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_osculatingDerivative_b0b988f941da47d8], a0.this$);
      }

      jdouble SecularAndHarmonic::osculatingSecondDerivative(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_osculatingSecondDerivative_b0b988f941da47d8], a0.this$);
      }

      jdouble SecularAndHarmonic::osculatingValue(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_osculatingValue_b0b988f941da47d8], a0.this$);
      }

      void SecularAndHarmonic::resetFitting(const ::org::orekit::time::AbsoluteDate & a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_resetFitting_0fd0d5413261aea6], a0.this$, a1.this$);
      }

      void SecularAndHarmonic::setConvergenceRMS(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setConvergenceRMS_10f281d777284cea], a0);
      }

      void SecularAndHarmonic::setMaxIter(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMaxIter_a3da1a935cb37f7b], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_SecularAndHarmonic_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SecularAndHarmonic_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SecularAndHarmonic_init_(t_SecularAndHarmonic *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SecularAndHarmonic_addPoint(t_SecularAndHarmonic *self, PyObject *args);
      static PyObject *t_SecularAndHarmonic_addWeightedPoint(t_SecularAndHarmonic *self, PyObject *args);
      static PyObject *t_SecularAndHarmonic_approximateAsPolynomialOnly(t_SecularAndHarmonic *self, PyObject *args);
      static PyObject *t_SecularAndHarmonic_fit(t_SecularAndHarmonic *self);
      static PyObject *t_SecularAndHarmonic_getFittedParameters(t_SecularAndHarmonic *self);
      static PyObject *t_SecularAndHarmonic_getHarmonicAmplitude(t_SecularAndHarmonic *self);
      static PyObject *t_SecularAndHarmonic_getPulsations(t_SecularAndHarmonic *self);
      static PyObject *t_SecularAndHarmonic_getReferenceDate(t_SecularAndHarmonic *self);
      static PyObject *t_SecularAndHarmonic_getSecularDegree(t_SecularAndHarmonic *self);
      static PyObject *t_SecularAndHarmonic_meanDerivative(t_SecularAndHarmonic *self, PyObject *args);
      static PyObject *t_SecularAndHarmonic_meanSecondDerivative(t_SecularAndHarmonic *self, PyObject *args);
      static PyObject *t_SecularAndHarmonic_meanValue(t_SecularAndHarmonic *self, PyObject *args);
      static PyObject *t_SecularAndHarmonic_osculatingDerivative(t_SecularAndHarmonic *self, PyObject *arg);
      static PyObject *t_SecularAndHarmonic_osculatingSecondDerivative(t_SecularAndHarmonic *self, PyObject *arg);
      static PyObject *t_SecularAndHarmonic_osculatingValue(t_SecularAndHarmonic *self, PyObject *arg);
      static PyObject *t_SecularAndHarmonic_resetFitting(t_SecularAndHarmonic *self, PyObject *args);
      static PyObject *t_SecularAndHarmonic_setConvergenceRMS(t_SecularAndHarmonic *self, PyObject *arg);
      static PyObject *t_SecularAndHarmonic_setMaxIter(t_SecularAndHarmonic *self, PyObject *arg);
      static int t_SecularAndHarmonic_set__convergenceRMS(t_SecularAndHarmonic *self, PyObject *arg, void *data);
      static PyObject *t_SecularAndHarmonic_get__fittedParameters(t_SecularAndHarmonic *self, void *data);
      static PyObject *t_SecularAndHarmonic_get__harmonicAmplitude(t_SecularAndHarmonic *self, void *data);
      static int t_SecularAndHarmonic_set__maxIter(t_SecularAndHarmonic *self, PyObject *arg, void *data);
      static PyObject *t_SecularAndHarmonic_get__pulsations(t_SecularAndHarmonic *self, void *data);
      static PyObject *t_SecularAndHarmonic_get__referenceDate(t_SecularAndHarmonic *self, void *data);
      static PyObject *t_SecularAndHarmonic_get__secularDegree(t_SecularAndHarmonic *self, void *data);
      static PyGetSetDef t_SecularAndHarmonic__fields_[] = {
        DECLARE_SET_FIELD(t_SecularAndHarmonic, convergenceRMS),
        DECLARE_GET_FIELD(t_SecularAndHarmonic, fittedParameters),
        DECLARE_GET_FIELD(t_SecularAndHarmonic, harmonicAmplitude),
        DECLARE_SET_FIELD(t_SecularAndHarmonic, maxIter),
        DECLARE_GET_FIELD(t_SecularAndHarmonic, pulsations),
        DECLARE_GET_FIELD(t_SecularAndHarmonic, referenceDate),
        DECLARE_GET_FIELD(t_SecularAndHarmonic, secularDegree),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SecularAndHarmonic__methods_[] = {
        DECLARE_METHOD(t_SecularAndHarmonic, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SecularAndHarmonic, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SecularAndHarmonic, addPoint, METH_VARARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, addWeightedPoint, METH_VARARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, approximateAsPolynomialOnly, METH_VARARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, fit, METH_NOARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, getFittedParameters, METH_NOARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, getHarmonicAmplitude, METH_NOARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, getPulsations, METH_NOARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, getReferenceDate, METH_NOARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, getSecularDegree, METH_NOARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, meanDerivative, METH_VARARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, meanSecondDerivative, METH_VARARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, meanValue, METH_VARARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, osculatingDerivative, METH_O),
        DECLARE_METHOD(t_SecularAndHarmonic, osculatingSecondDerivative, METH_O),
        DECLARE_METHOD(t_SecularAndHarmonic, osculatingValue, METH_O),
        DECLARE_METHOD(t_SecularAndHarmonic, resetFitting, METH_VARARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, setConvergenceRMS, METH_O),
        DECLARE_METHOD(t_SecularAndHarmonic, setMaxIter, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SecularAndHarmonic)[] = {
        { Py_tp_methods, t_SecularAndHarmonic__methods_ },
        { Py_tp_init, (void *) t_SecularAndHarmonic_init_ },
        { Py_tp_getset, t_SecularAndHarmonic__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SecularAndHarmonic)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SecularAndHarmonic, t_SecularAndHarmonic, SecularAndHarmonic);

      void t_SecularAndHarmonic::install(PyObject *module)
      {
        installType(&PY_TYPE(SecularAndHarmonic), &PY_TYPE_DEF(SecularAndHarmonic), module, "SecularAndHarmonic", 0);
      }

      void t_SecularAndHarmonic::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SecularAndHarmonic), "class_", make_descriptor(SecularAndHarmonic::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SecularAndHarmonic), "wrapfn_", make_descriptor(t_SecularAndHarmonic::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SecularAndHarmonic), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SecularAndHarmonic_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SecularAndHarmonic::initializeClass, 1)))
          return NULL;
        return t_SecularAndHarmonic::wrap_Object(SecularAndHarmonic(((t_SecularAndHarmonic *) arg)->object.this$));
      }
      static PyObject *t_SecularAndHarmonic_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SecularAndHarmonic::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SecularAndHarmonic_init_(t_SecularAndHarmonic *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);
        SecularAndHarmonic object((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          INT_CALL(object = SecularAndHarmonic(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SecularAndHarmonic_addPoint(t_SecularAndHarmonic *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble a1;

        if (!parseArgs(args, "kD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.addPoint(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addPoint", args);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_addWeightedPoint(t_SecularAndHarmonic *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble a1;
        jdouble a2;

        if (!parseArgs(args, "kDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addWeightedPoint(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addWeightedPoint", args);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_approximateAsPolynomialOnly(t_SecularAndHarmonic *self, PyObject *args)
      {
        jint a0;
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        jint a2;
        jint a3;
        ::org::orekit::time::AbsoluteDate a4((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a5((jobject) NULL);
        jdouble a6;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "IkIIkkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
        {
          OBJ_CALL(result = self->object.approximateAsPolynomialOnly(a0, a1, a2, a3, a4, a5, a6));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "approximateAsPolynomialOnly", args);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_fit(t_SecularAndHarmonic *self)
      {
        OBJ_CALL(self->object.fit());
        Py_RETURN_NONE;
      }

      static PyObject *t_SecularAndHarmonic_getFittedParameters(t_SecularAndHarmonic *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getFittedParameters());
        return result.wrap();
      }

      static PyObject *t_SecularAndHarmonic_getHarmonicAmplitude(t_SecularAndHarmonic *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHarmonicAmplitude());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SecularAndHarmonic_getPulsations(t_SecularAndHarmonic *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPulsations());
        return result.wrap();
      }

      static PyObject *t_SecularAndHarmonic_getReferenceDate(t_SecularAndHarmonic *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getReferenceDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_SecularAndHarmonic_getSecularDegree(t_SecularAndHarmonic *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getSecularDegree());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_SecularAndHarmonic_meanDerivative(t_SecularAndHarmonic *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jint a1;
        jint a2;
        jdouble result;

        if (!parseArgs(args, "kII", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.meanDerivative(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "meanDerivative", args);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_meanSecondDerivative(t_SecularAndHarmonic *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jint a1;
        jint a2;
        jdouble result;

        if (!parseArgs(args, "kII", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.meanSecondDerivative(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "meanSecondDerivative", args);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_meanValue(t_SecularAndHarmonic *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jint a1;
        jint a2;
        jdouble result;

        if (!parseArgs(args, "kII", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.meanValue(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "meanValue", args);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_osculatingDerivative(t_SecularAndHarmonic *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.osculatingDerivative(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "osculatingDerivative", arg);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_osculatingSecondDerivative(t_SecularAndHarmonic *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.osculatingSecondDerivative(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "osculatingSecondDerivative", arg);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_osculatingValue(t_SecularAndHarmonic *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.osculatingValue(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "osculatingValue", arg);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_resetFitting(t_SecularAndHarmonic *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "k[D", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.resetFitting(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "resetFitting", args);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_setConvergenceRMS(t_SecularAndHarmonic *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setConvergenceRMS(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setConvergenceRMS", arg);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_setMaxIter(t_SecularAndHarmonic *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setMaxIter(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMaxIter", arg);
        return NULL;
      }

      static int t_SecularAndHarmonic_set__convergenceRMS(t_SecularAndHarmonic *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setConvergenceRMS(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "convergenceRMS", arg);
        return -1;
      }

      static PyObject *t_SecularAndHarmonic_get__fittedParameters(t_SecularAndHarmonic *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getFittedParameters());
        return value.wrap();
      }

      static PyObject *t_SecularAndHarmonic_get__harmonicAmplitude(t_SecularAndHarmonic *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHarmonicAmplitude());
        return PyFloat_FromDouble((double) value);
      }

      static int t_SecularAndHarmonic_set__maxIter(t_SecularAndHarmonic *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setMaxIter(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "maxIter", arg);
        return -1;
      }

      static PyObject *t_SecularAndHarmonic_get__pulsations(t_SecularAndHarmonic *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPulsations());
        return value.wrap();
      }

      static PyObject *t_SecularAndHarmonic_get__referenceDate(t_SecularAndHarmonic *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getReferenceDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_SecularAndHarmonic_get__secularDegree(t_SecularAndHarmonic *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getSecularDegree());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/PythonSBASOrbitalElements.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/gnss/data/SBASOrbitalElements.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *PythonSBASOrbitalElements::class$ = NULL;
            jmethodID *PythonSBASOrbitalElements::mids$ = NULL;
            bool PythonSBASOrbitalElements::live$ = false;

            jclass PythonSBASOrbitalElements::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/PythonSBASOrbitalElements");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getAGf0_557b8123390d8d0c] = env->getMethodID(cls, "getAGf0", "()D");
                mids$[mid_getAGf1_557b8123390d8d0c] = env->getMethodID(cls, "getAGf1", "()D");
                mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getIODN_412668abc8d889e9] = env->getMethodID(cls, "getIODN", "()I");
                mids$[mid_getPRN_412668abc8d889e9] = env->getMethodID(cls, "getPRN", "()I");
                mids$[mid_getTime_557b8123390d8d0c] = env->getMethodID(cls, "getTime", "()D");
                mids$[mid_getToc_557b8123390d8d0c] = env->getMethodID(cls, "getToc", "()D");
                mids$[mid_getWeek_412668abc8d889e9] = env->getMethodID(cls, "getWeek", "()I");
                mids$[mid_getX_557b8123390d8d0c] = env->getMethodID(cls, "getX", "()D");
                mids$[mid_getXDot_557b8123390d8d0c] = env->getMethodID(cls, "getXDot", "()D");
                mids$[mid_getXDotDot_557b8123390d8d0c] = env->getMethodID(cls, "getXDotDot", "()D");
                mids$[mid_getY_557b8123390d8d0c] = env->getMethodID(cls, "getY", "()D");
                mids$[mid_getYDot_557b8123390d8d0c] = env->getMethodID(cls, "getYDot", "()D");
                mids$[mid_getYDotDot_557b8123390d8d0c] = env->getMethodID(cls, "getYDotDot", "()D");
                mids$[mid_getZ_557b8123390d8d0c] = env->getMethodID(cls, "getZ", "()D");
                mids$[mid_getZDot_557b8123390d8d0c] = env->getMethodID(cls, "getZDot", "()D");
                mids$[mid_getZDotDot_557b8123390d8d0c] = env->getMethodID(cls, "getZDotDot", "()D");
                mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonSBASOrbitalElements::PythonSBASOrbitalElements() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            void PythonSBASOrbitalElements::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
            }

            jlong PythonSBASOrbitalElements::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
            }

            void PythonSBASOrbitalElements::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_PythonSBASOrbitalElements_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonSBASOrbitalElements_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonSBASOrbitalElements_init_(t_PythonSBASOrbitalElements *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonSBASOrbitalElements_finalize(t_PythonSBASOrbitalElements *self);
            static PyObject *t_PythonSBASOrbitalElements_pythonExtension(t_PythonSBASOrbitalElements *self, PyObject *args);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getAGf00(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getAGf11(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonSBASOrbitalElements_getDate2(JNIEnv *jenv, jobject jobj);
            static jint JNICALL t_PythonSBASOrbitalElements_getIODN3(JNIEnv *jenv, jobject jobj);
            static jint JNICALL t_PythonSBASOrbitalElements_getPRN4(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getTime5(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getToc6(JNIEnv *jenv, jobject jobj);
            static jint JNICALL t_PythonSBASOrbitalElements_getWeek7(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getX8(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getXDot9(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getXDotDot10(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getY11(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getYDot12(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getYDotDot13(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getZ14(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getZDot15(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getZDotDot16(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonSBASOrbitalElements_pythonDecRef17(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonSBASOrbitalElements_get__self(t_PythonSBASOrbitalElements *self, void *data);
            static PyGetSetDef t_PythonSBASOrbitalElements__fields_[] = {
              DECLARE_GET_FIELD(t_PythonSBASOrbitalElements, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonSBASOrbitalElements__methods_[] = {
              DECLARE_METHOD(t_PythonSBASOrbitalElements, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonSBASOrbitalElements, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonSBASOrbitalElements, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonSBASOrbitalElements, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonSBASOrbitalElements)[] = {
              { Py_tp_methods, t_PythonSBASOrbitalElements__methods_ },
              { Py_tp_init, (void *) t_PythonSBASOrbitalElements_init_ },
              { Py_tp_getset, t_PythonSBASOrbitalElements__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonSBASOrbitalElements)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonSBASOrbitalElements, t_PythonSBASOrbitalElements, PythonSBASOrbitalElements);

            void t_PythonSBASOrbitalElements::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonSBASOrbitalElements), &PY_TYPE_DEF(PythonSBASOrbitalElements), module, "PythonSBASOrbitalElements", 1);
            }

            void t_PythonSBASOrbitalElements::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSBASOrbitalElements), "class_", make_descriptor(PythonSBASOrbitalElements::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSBASOrbitalElements), "wrapfn_", make_descriptor(t_PythonSBASOrbitalElements::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSBASOrbitalElements), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonSBASOrbitalElements::initializeClass);
              JNINativeMethod methods[] = {
                { "getAGf0", "()D", (void *) t_PythonSBASOrbitalElements_getAGf00 },
                { "getAGf1", "()D", (void *) t_PythonSBASOrbitalElements_getAGf11 },
                { "getDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonSBASOrbitalElements_getDate2 },
                { "getIODN", "()I", (void *) t_PythonSBASOrbitalElements_getIODN3 },
                { "getPRN", "()I", (void *) t_PythonSBASOrbitalElements_getPRN4 },
                { "getTime", "()D", (void *) t_PythonSBASOrbitalElements_getTime5 },
                { "getToc", "()D", (void *) t_PythonSBASOrbitalElements_getToc6 },
                { "getWeek", "()I", (void *) t_PythonSBASOrbitalElements_getWeek7 },
                { "getX", "()D", (void *) t_PythonSBASOrbitalElements_getX8 },
                { "getXDot", "()D", (void *) t_PythonSBASOrbitalElements_getXDot9 },
                { "getXDotDot", "()D", (void *) t_PythonSBASOrbitalElements_getXDotDot10 },
                { "getY", "()D", (void *) t_PythonSBASOrbitalElements_getY11 },
                { "getYDot", "()D", (void *) t_PythonSBASOrbitalElements_getYDot12 },
                { "getYDotDot", "()D", (void *) t_PythonSBASOrbitalElements_getYDotDot13 },
                { "getZ", "()D", (void *) t_PythonSBASOrbitalElements_getZ14 },
                { "getZDot", "()D", (void *) t_PythonSBASOrbitalElements_getZDot15 },
                { "getZDotDot", "()D", (void *) t_PythonSBASOrbitalElements_getZDotDot16 },
                { "pythonDecRef", "()V", (void *) t_PythonSBASOrbitalElements_pythonDecRef17 },
              };
              env->registerNatives(cls, methods, 18);
            }

            static PyObject *t_PythonSBASOrbitalElements_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonSBASOrbitalElements::initializeClass, 1)))
                return NULL;
              return t_PythonSBASOrbitalElements::wrap_Object(PythonSBASOrbitalElements(((t_PythonSBASOrbitalElements *) arg)->object.this$));
            }
            static PyObject *t_PythonSBASOrbitalElements_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonSBASOrbitalElements::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonSBASOrbitalElements_init_(t_PythonSBASOrbitalElements *self, PyObject *args, PyObject *kwds)
            {
              PythonSBASOrbitalElements object((jobject) NULL);

              INT_CALL(object = PythonSBASOrbitalElements());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonSBASOrbitalElements_finalize(t_PythonSBASOrbitalElements *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonSBASOrbitalElements_pythonExtension(t_PythonSBASOrbitalElements *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  jlong result;
                  OBJ_CALL(result = self->object.pythonExtension());
                  return PyLong_FromLongLong((PY_LONG_LONG) result);
                }
                break;
               case 1:
                {
                  jlong a0;

                  if (!parseArgs(args, "J", &a0))
                  {
                    OBJ_CALL(self->object.pythonExtension(a0));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
              return NULL;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getAGf00(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getAGf0", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getAGf0", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getAGf11(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getAGf1", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getAGf1", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jobject JNICALL t_PythonSBASOrbitalElements_getDate2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getDate", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                throwTypeError("getDate", result);
                Py_DECREF(result);
              }
              else
              {
                jobj = jenv->NewLocalRef(value.this$);
                Py_DECREF(result);
                return jobj;
              }

              return (jobject) NULL;
            }

            static jint JNICALL t_PythonSBASOrbitalElements_getIODN3(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jint value;
              PyObject *result = PyObject_CallMethod(obj, "getIODN", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "I", &value))
              {
                throwTypeError("getIODN", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jint) 0;
            }

            static jint JNICALL t_PythonSBASOrbitalElements_getPRN4(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jint value;
              PyObject *result = PyObject_CallMethod(obj, "getPRN", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "I", &value))
              {
                throwTypeError("getPRN", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jint) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getTime5(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getTime", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getTime", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getToc6(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getToc", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getToc", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jint JNICALL t_PythonSBASOrbitalElements_getWeek7(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jint value;
              PyObject *result = PyObject_CallMethod(obj, "getWeek", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "I", &value))
              {
                throwTypeError("getWeek", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jint) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getX8(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getX", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getX", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getXDot9(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getXDot", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getXDot", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getXDotDot10(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getXDotDot", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getXDotDot", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getY11(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getY", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getY", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getYDot12(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getYDot", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getYDot", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getYDotDot13(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getYDotDot", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getYDotDot", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getZ14(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getZ", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getZ", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getZDot15(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getZDot", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getZDot", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getZDotDot16(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getZDotDot", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getZDotDot", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static void JNICALL t_PythonSBASOrbitalElements_pythonDecRef17(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonSBASOrbitalElements_get__self(t_PythonSBASOrbitalElements *self, void *data)
            {
              jlong ptr;
              OBJ_CALL(ptr = self->object.pythonExtension());
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                Py_INCREF(obj);
                return obj;
              }
              else
                Py_RETURN_NONE;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1019.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1019Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1019::class$ = NULL;
              jmethodID *Rtcm1019::mids$ = NULL;
              bool Rtcm1019::live$ = false;

              jclass Rtcm1019::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1019");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_d55a49033efc3726] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1019Data;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1019::Rtcm1019(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1019Data & a1) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage(env->newObject(initializeClass, &mids$, mid_init$_d55a49033efc3726, a0, a1.this$)) {}
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {
              static PyObject *t_Rtcm1019_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1019_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1019_of_(t_Rtcm1019 *self, PyObject *args);
              static int t_Rtcm1019_init_(t_Rtcm1019 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1019_get__parameters_(t_Rtcm1019 *self, void *data);
              static PyGetSetDef t_Rtcm1019__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1019, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1019__methods_[] = {
                DECLARE_METHOD(t_Rtcm1019, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1019, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1019, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1019)[] = {
                { Py_tp_methods, t_Rtcm1019__methods_ },
                { Py_tp_init, (void *) t_Rtcm1019_init_ },
                { Py_tp_getset, t_Rtcm1019__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1019)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1019, t_Rtcm1019, Rtcm1019);
              PyObject *t_Rtcm1019::wrap_Object(const Rtcm1019& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1019::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1019 *self = (t_Rtcm1019 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_Rtcm1019::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1019::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1019 *self = (t_Rtcm1019 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_Rtcm1019::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1019), &PY_TYPE_DEF(Rtcm1019), module, "Rtcm1019", 0);
              }

              void t_Rtcm1019::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1019), "class_", make_descriptor(Rtcm1019::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1019), "wrapfn_", make_descriptor(t_Rtcm1019::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1019), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1019_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1019::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1019::wrap_Object(Rtcm1019(((t_Rtcm1019 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1019_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1019::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1019_of_(t_Rtcm1019 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1019_init_(t_Rtcm1019 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1019Data a1((jobject) NULL);
                Rtcm1019 object((jobject) NULL);

                if (!parseArgs(args, "Ik", ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1019Data::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Rtcm1019(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::ephemeris::PY_TYPE(Rtcm1019Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1019_get__parameters_(t_Rtcm1019 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/Maneuvrable.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/Maneuvrable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *Maneuvrable::class$ = NULL;
            jmethodID *Maneuvrable::mids$ = NULL;
            bool Maneuvrable::live$ = false;
            Maneuvrable *Maneuvrable::NO = NULL;
            Maneuvrable *Maneuvrable::N_A = NULL;
            Maneuvrable *Maneuvrable::YES = NULL;

            jclass Maneuvrable::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/Maneuvrable");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getEnum_a5c030f165f63ebf] = env->getStaticMethodID(cls, "getEnum", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;");
                mids$[mid_getValue_3cffd47377eca18a] = env->getMethodID(cls, "getValue", "()Ljava/lang/String;");
                mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                mids$[mid_valueOf_a5c030f165f63ebf] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;");
                mids$[mid_values_451781cf4dc785fe] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                NO = new Maneuvrable(env->getStaticObjectField(cls, "NO", "Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;"));
                N_A = new Maneuvrable(env->getStaticObjectField(cls, "N_A", "Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;"));
                YES = new Maneuvrable(env->getStaticObjectField(cls, "YES", "Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            Maneuvrable Maneuvrable::getEnum(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return Maneuvrable(env->callStaticObjectMethod(cls, mids$[mid_getEnum_a5c030f165f63ebf], a0.this$));
            }

            ::java::lang::String Maneuvrable::getValue() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getValue_3cffd47377eca18a]));
            }

            ::java::lang::String Maneuvrable::toString() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
            }

            Maneuvrable Maneuvrable::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return Maneuvrable(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a5c030f165f63ebf], a0.this$));
            }

            JArray< Maneuvrable > Maneuvrable::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< Maneuvrable >(env->callStaticObjectMethod(cls, mids$[mid_values_451781cf4dc785fe]));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            static PyObject *t_Maneuvrable_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Maneuvrable_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Maneuvrable_of_(t_Maneuvrable *self, PyObject *args);
            static PyObject *t_Maneuvrable_getEnum(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Maneuvrable_getValue(t_Maneuvrable *self);
            static PyObject *t_Maneuvrable_toString(t_Maneuvrable *self, PyObject *args);
            static PyObject *t_Maneuvrable_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_Maneuvrable_values(PyTypeObject *type);
            static PyObject *t_Maneuvrable_get__value(t_Maneuvrable *self, void *data);
            static PyObject *t_Maneuvrable_get__parameters_(t_Maneuvrable *self, void *data);
            static PyGetSetDef t_Maneuvrable__fields_[] = {
              DECLARE_GET_FIELD(t_Maneuvrable, value),
              DECLARE_GET_FIELD(t_Maneuvrable, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_Maneuvrable__methods_[] = {
              DECLARE_METHOD(t_Maneuvrable, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Maneuvrable, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Maneuvrable, of_, METH_VARARGS),
              DECLARE_METHOD(t_Maneuvrable, getEnum, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Maneuvrable, getValue, METH_NOARGS),
              DECLARE_METHOD(t_Maneuvrable, toString, METH_VARARGS),
              DECLARE_METHOD(t_Maneuvrable, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_Maneuvrable, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(Maneuvrable)[] = {
              { Py_tp_methods, t_Maneuvrable__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_Maneuvrable__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(Maneuvrable)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(Maneuvrable, t_Maneuvrable, Maneuvrable);
            PyObject *t_Maneuvrable::wrap_Object(const Maneuvrable& object, PyTypeObject *p0)
            {
              PyObject *obj = t_Maneuvrable::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_Maneuvrable *self = (t_Maneuvrable *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_Maneuvrable::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_Maneuvrable::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_Maneuvrable *self = (t_Maneuvrable *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_Maneuvrable::install(PyObject *module)
            {
              installType(&PY_TYPE(Maneuvrable), &PY_TYPE_DEF(Maneuvrable), module, "Maneuvrable", 0);
            }

            void t_Maneuvrable::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuvrable), "class_", make_descriptor(Maneuvrable::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuvrable), "wrapfn_", make_descriptor(t_Maneuvrable::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuvrable), "boxfn_", make_descriptor(boxObject));
              env->getClass(Maneuvrable::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuvrable), "NO", make_descriptor(t_Maneuvrable::wrap_Object(*Maneuvrable::NO)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuvrable), "N_A", make_descriptor(t_Maneuvrable::wrap_Object(*Maneuvrable::N_A)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuvrable), "YES", make_descriptor(t_Maneuvrable::wrap_Object(*Maneuvrable::YES)));
            }

            static PyObject *t_Maneuvrable_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, Maneuvrable::initializeClass, 1)))
                return NULL;
              return t_Maneuvrable::wrap_Object(Maneuvrable(((t_Maneuvrable *) arg)->object.this$));
            }
            static PyObject *t_Maneuvrable_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, Maneuvrable::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_Maneuvrable_of_(t_Maneuvrable *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_Maneuvrable_getEnum(PyTypeObject *type, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);
              Maneuvrable result((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable::getEnum(a0));
                return t_Maneuvrable::wrap_Object(result);
              }

              PyErr_SetArgsError(type, "getEnum", arg);
              return NULL;
            }

            static PyObject *t_Maneuvrable_getValue(t_Maneuvrable *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getValue());
              return j2p(result);
            }

            static PyObject *t_Maneuvrable_toString(t_Maneuvrable *self, PyObject *args)
            {
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.toString());
                return j2p(result);
              }

              return callSuper(PY_TYPE(Maneuvrable), (PyObject *) self, "toString", args, 2);
            }

            static PyObject *t_Maneuvrable_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              Maneuvrable result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable::valueOf(a0));
                return t_Maneuvrable::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_Maneuvrable_values(PyTypeObject *type)
            {
              JArray< Maneuvrable > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable::values());
              return JArray<jobject>(result.this$).wrap(t_Maneuvrable::wrap_jobject);
            }
            static PyObject *t_Maneuvrable_get__parameters_(t_Maneuvrable *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_Maneuvrable_get__value(t_Maneuvrable *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getValue());
              return j2p(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/displacement/OceanLoading.h"
#include "org/orekit/data/BodiesElements.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/models/earth/displacement/OceanLoadingCoefficients.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/models/earth/displacement/StationDisplacement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {

          ::java::lang::Class *OceanLoading::class$ = NULL;
          jmethodID *OceanLoading::mids$ = NULL;
          bool OceanLoading::live$ = false;

          jclass OceanLoading::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/displacement/OceanLoading");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8d9958c18bab9055] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/models/earth/displacement/OceanLoadingCoefficients;)V");
              mids$[mid_displacement_2092c3958d15642d] = env->getMethodID(cls, "displacement", "(Lorg/orekit/data/BodiesElements;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OceanLoading::OceanLoading(const ::org::orekit::bodies::OneAxisEllipsoid & a0, const ::org::orekit::models::earth::displacement::OceanLoadingCoefficients & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8d9958c18bab9055, a0.this$, a1.this$)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D OceanLoading::displacement(const ::org::orekit::data::BodiesElements & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_displacement_2092c3958d15642d], a0.this$, a1.this$, a2.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {
          static PyObject *t_OceanLoading_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OceanLoading_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OceanLoading_init_(t_OceanLoading *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OceanLoading_displacement(t_OceanLoading *self, PyObject *args);

          static PyMethodDef t_OceanLoading__methods_[] = {
            DECLARE_METHOD(t_OceanLoading, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanLoading, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanLoading, displacement, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OceanLoading)[] = {
            { Py_tp_methods, t_OceanLoading__methods_ },
            { Py_tp_init, (void *) t_OceanLoading_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OceanLoading)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OceanLoading, t_OceanLoading, OceanLoading);

          void t_OceanLoading::install(PyObject *module)
          {
            installType(&PY_TYPE(OceanLoading), &PY_TYPE_DEF(OceanLoading), module, "OceanLoading", 0);
          }

          void t_OceanLoading::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoading), "class_", make_descriptor(OceanLoading::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoading), "wrapfn_", make_descriptor(t_OceanLoading::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoading), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OceanLoading_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OceanLoading::initializeClass, 1)))
              return NULL;
            return t_OceanLoading::wrap_Object(OceanLoading(((t_OceanLoading *) arg)->object.this$));
          }
          static PyObject *t_OceanLoading_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OceanLoading::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OceanLoading_init_(t_OceanLoading *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
            ::org::orekit::models::earth::displacement::OceanLoadingCoefficients a1((jobject) NULL);
            OceanLoading object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::models::earth::displacement::OceanLoadingCoefficients::initializeClass, &a0, &a1))
            {
              INT_CALL(object = OceanLoading(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OceanLoading_displacement(t_OceanLoading *self, PyObject *args)
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::data::BodiesElements::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.displacement(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "displacement", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDConfiguration$TransponderConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$TransponderConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$TransponderConfiguration::mids$ = NULL;
        bool CRDConfiguration$TransponderConfiguration::live$ = false;

        jclass CRDConfiguration$TransponderConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$TransponderConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getSpacecraftClockAndDriftApplied_412668abc8d889e9] = env->getMethodID(cls, "getSpacecraftClockAndDriftApplied", "()I");
            mids$[mid_getStationClockAndDriftApplied_412668abc8d889e9] = env->getMethodID(cls, "getStationClockAndDriftApplied", "()I");
            mids$[mid_getStationOscDrift_557b8123390d8d0c] = env->getMethodID(cls, "getStationOscDrift", "()D");
            mids$[mid_getStationUTCOffset_557b8123390d8d0c] = env->getMethodID(cls, "getStationUTCOffset", "()D");
            mids$[mid_getTranspClkRefTime_557b8123390d8d0c] = env->getMethodID(cls, "getTranspClkRefTime", "()D");
            mids$[mid_getTranspOscDrift_557b8123390d8d0c] = env->getMethodID(cls, "getTranspOscDrift", "()D");
            mids$[mid_getTranspUTCOffset_557b8123390d8d0c] = env->getMethodID(cls, "getTranspUTCOffset", "()D");
            mids$[mid_getTransponderId_3cffd47377eca18a] = env->getMethodID(cls, "getTransponderId", "()Ljava/lang/String;");
            mids$[mid_isSpacecraftTimeSimplified_89b302893bdbe1f1] = env->getMethodID(cls, "isSpacecraftTimeSimplified", "()Z");
            mids$[mid_setIsSpacecraftTimeSimplified_ed2afdb8506b9742] = env->getMethodID(cls, "setIsSpacecraftTimeSimplified", "(Z)V");
            mids$[mid_setSpacecraftClockAndDriftApplied_a3da1a935cb37f7b] = env->getMethodID(cls, "setSpacecraftClockAndDriftApplied", "(I)V");
            mids$[mid_setStationClockAndDriftApplied_a3da1a935cb37f7b] = env->getMethodID(cls, "setStationClockAndDriftApplied", "(I)V");
            mids$[mid_setStationOscDrift_10f281d777284cea] = env->getMethodID(cls, "setStationOscDrift", "(D)V");
            mids$[mid_setStationUTCOffset_10f281d777284cea] = env->getMethodID(cls, "setStationUTCOffset", "(D)V");
            mids$[mid_setTranspClkRefTime_10f281d777284cea] = env->getMethodID(cls, "setTranspClkRefTime", "(D)V");
            mids$[mid_setTranspOscDrift_10f281d777284cea] = env->getMethodID(cls, "setTranspOscDrift", "(D)V");
            mids$[mid_setTranspUTCOffset_10f281d777284cea] = env->getMethodID(cls, "setTranspUTCOffset", "(D)V");
            mids$[mid_setTransponderId_f5ffdf29129ef90a] = env->getMethodID(cls, "setTransponderId", "(Ljava/lang/String;)V");
            mids$[mid_toCrdString_3cffd47377eca18a] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$TransponderConfiguration::CRDConfiguration$TransponderConfiguration() : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jint CRDConfiguration$TransponderConfiguration::getSpacecraftClockAndDriftApplied() const
        {
          return env->callIntMethod(this$, mids$[mid_getSpacecraftClockAndDriftApplied_412668abc8d889e9]);
        }

        jint CRDConfiguration$TransponderConfiguration::getStationClockAndDriftApplied() const
        {
          return env->callIntMethod(this$, mids$[mid_getStationClockAndDriftApplied_412668abc8d889e9]);
        }

        jdouble CRDConfiguration$TransponderConfiguration::getStationOscDrift() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStationOscDrift_557b8123390d8d0c]);
        }

        jdouble CRDConfiguration$TransponderConfiguration::getStationUTCOffset() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStationUTCOffset_557b8123390d8d0c]);
        }

        jdouble CRDConfiguration$TransponderConfiguration::getTranspClkRefTime() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTranspClkRefTime_557b8123390d8d0c]);
        }

        jdouble CRDConfiguration$TransponderConfiguration::getTranspOscDrift() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTranspOscDrift_557b8123390d8d0c]);
        }

        jdouble CRDConfiguration$TransponderConfiguration::getTranspUTCOffset() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTranspUTCOffset_557b8123390d8d0c]);
        }

        ::java::lang::String CRDConfiguration$TransponderConfiguration::getTransponderId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTransponderId_3cffd47377eca18a]));
        }

        jboolean CRDConfiguration$TransponderConfiguration::isSpacecraftTimeSimplified() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSpacecraftTimeSimplified_89b302893bdbe1f1]);
        }

        void CRDConfiguration$TransponderConfiguration::setIsSpacecraftTimeSimplified(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIsSpacecraftTimeSimplified_ed2afdb8506b9742], a0);
        }

        void CRDConfiguration$TransponderConfiguration::setSpacecraftClockAndDriftApplied(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSpacecraftClockAndDriftApplied_a3da1a935cb37f7b], a0);
        }

        void CRDConfiguration$TransponderConfiguration::setStationClockAndDriftApplied(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStationClockAndDriftApplied_a3da1a935cb37f7b], a0);
        }

        void CRDConfiguration$TransponderConfiguration::setStationOscDrift(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStationOscDrift_10f281d777284cea], a0);
        }

        void CRDConfiguration$TransponderConfiguration::setStationUTCOffset(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStationUTCOffset_10f281d777284cea], a0);
        }

        void CRDConfiguration$TransponderConfiguration::setTranspClkRefTime(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTranspClkRefTime_10f281d777284cea], a0);
        }

        void CRDConfiguration$TransponderConfiguration::setTranspOscDrift(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTranspOscDrift_10f281d777284cea], a0);
        }

        void CRDConfiguration$TransponderConfiguration::setTranspUTCOffset(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTranspUTCOffset_10f281d777284cea], a0);
        }

        void CRDConfiguration$TransponderConfiguration::setTransponderId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTransponderId_f5ffdf29129ef90a], a0.this$);
        }

        ::java::lang::String CRDConfiguration$TransponderConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_3cffd47377eca18a]));
        }

        ::java::lang::String CRDConfiguration$TransponderConfiguration::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        static PyObject *t_CRDConfiguration$TransponderConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$TransponderConfiguration_init_(t_CRDConfiguration$TransponderConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_getSpacecraftClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_getStationClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_getStationOscDrift(t_CRDConfiguration$TransponderConfiguration *self);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_getStationUTCOffset(t_CRDConfiguration$TransponderConfiguration *self);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_getTranspClkRefTime(t_CRDConfiguration$TransponderConfiguration *self);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_getTranspOscDrift(t_CRDConfiguration$TransponderConfiguration *self);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_getTranspUTCOffset(t_CRDConfiguration$TransponderConfiguration *self);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_getTransponderId(t_CRDConfiguration$TransponderConfiguration *self);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_isSpacecraftTimeSimplified(t_CRDConfiguration$TransponderConfiguration *self);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_setIsSpacecraftTimeSimplified(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_setSpacecraftClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_setStationClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_setStationOscDrift(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_setStationUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_setTranspClkRefTime(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_setTranspOscDrift(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_setTranspUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_setTransponderId(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_toCrdString(t_CRDConfiguration$TransponderConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_toString(t_CRDConfiguration$TransponderConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__spacecraftClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, void *data);
        static int t_CRDConfiguration$TransponderConfiguration_set__spacecraftClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__spacecraftTimeSimplified(t_CRDConfiguration$TransponderConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__stationClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, void *data);
        static int t_CRDConfiguration$TransponderConfiguration_set__stationClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__stationOscDrift(t_CRDConfiguration$TransponderConfiguration *self, void *data);
        static int t_CRDConfiguration$TransponderConfiguration_set__stationOscDrift(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__stationUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, void *data);
        static int t_CRDConfiguration$TransponderConfiguration_set__stationUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__transpClkRefTime(t_CRDConfiguration$TransponderConfiguration *self, void *data);
        static int t_CRDConfiguration$TransponderConfiguration_set__transpClkRefTime(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__transpOscDrift(t_CRDConfiguration$TransponderConfiguration *self, void *data);
        static int t_CRDConfiguration$TransponderConfiguration_set__transpOscDrift(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__transpUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, void *data);
        static int t_CRDConfiguration$TransponderConfiguration_set__transpUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__transponderId(t_CRDConfiguration$TransponderConfiguration *self, void *data);
        static int t_CRDConfiguration$TransponderConfiguration_set__transponderId(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$TransponderConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TransponderConfiguration, spacecraftClockAndDriftApplied),
          DECLARE_GET_FIELD(t_CRDConfiguration$TransponderConfiguration, spacecraftTimeSimplified),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TransponderConfiguration, stationClockAndDriftApplied),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TransponderConfiguration, stationOscDrift),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TransponderConfiguration, stationUTCOffset),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TransponderConfiguration, transpClkRefTime),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TransponderConfiguration, transpOscDrift),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TransponderConfiguration, transpUTCOffset),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TransponderConfiguration, transponderId),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$TransponderConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, getSpacecraftClockAndDriftApplied, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, getStationClockAndDriftApplied, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, getStationOscDrift, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, getStationUTCOffset, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, getTranspClkRefTime, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, getTranspOscDrift, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, getTranspUTCOffset, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, getTransponderId, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, isSpacecraftTimeSimplified, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, setIsSpacecraftTimeSimplified, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, setSpacecraftClockAndDriftApplied, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, setStationClockAndDriftApplied, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, setStationOscDrift, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, setStationUTCOffset, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, setTranspClkRefTime, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, setTranspOscDrift, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, setTranspUTCOffset, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, setTransponderId, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$TransponderConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$TransponderConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$TransponderConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$TransponderConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$TransponderConfiguration)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$TransponderConfiguration, t_CRDConfiguration$TransponderConfiguration, CRDConfiguration$TransponderConfiguration);

        void t_CRDConfiguration$TransponderConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$TransponderConfiguration), &PY_TYPE_DEF(CRDConfiguration$TransponderConfiguration), module, "CRDConfiguration$TransponderConfiguration", 0);
        }

        void t_CRDConfiguration$TransponderConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$TransponderConfiguration), "class_", make_descriptor(CRDConfiguration$TransponderConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$TransponderConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$TransponderConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$TransponderConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$TransponderConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$TransponderConfiguration::wrap_Object(CRDConfiguration$TransponderConfiguration(((t_CRDConfiguration$TransponderConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$TransponderConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$TransponderConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$TransponderConfiguration_init_(t_CRDConfiguration$TransponderConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$TransponderConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$TransponderConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_getSpacecraftClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSpacecraftClockAndDriftApplied());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_getStationClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getStationClockAndDriftApplied());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_getStationOscDrift(t_CRDConfiguration$TransponderConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStationOscDrift());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_getStationUTCOffset(t_CRDConfiguration$TransponderConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStationUTCOffset());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_getTranspClkRefTime(t_CRDConfiguration$TransponderConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTranspClkRefTime());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_getTranspOscDrift(t_CRDConfiguration$TransponderConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTranspOscDrift());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_getTranspUTCOffset(t_CRDConfiguration$TransponderConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTranspUTCOffset());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_getTransponderId(t_CRDConfiguration$TransponderConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getTransponderId());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_isSpacecraftTimeSimplified(t_CRDConfiguration$TransponderConfiguration *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isSpacecraftTimeSimplified());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_setIsSpacecraftTimeSimplified(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setIsSpacecraftTimeSimplified(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIsSpacecraftTimeSimplified", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_setSpacecraftClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setSpacecraftClockAndDriftApplied(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSpacecraftClockAndDriftApplied", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_setStationClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setStationClockAndDriftApplied(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStationClockAndDriftApplied", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_setStationOscDrift(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setStationOscDrift(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStationOscDrift", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_setStationUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setStationUTCOffset(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStationUTCOffset", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_setTranspClkRefTime(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setTranspClkRefTime(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTranspClkRefTime", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_setTranspOscDrift(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setTranspOscDrift(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTranspOscDrift", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_setTranspUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setTranspUTCOffset(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTranspUTCOffset", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_setTransponderId(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setTransponderId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTransponderId", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_toCrdString(t_CRDConfiguration$TransponderConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$TransponderConfiguration), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_toString(t_CRDConfiguration$TransponderConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$TransponderConfiguration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__spacecraftClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSpacecraftClockAndDriftApplied());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDConfiguration$TransponderConfiguration_set__spacecraftClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setSpacecraftClockAndDriftApplied(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "spacecraftClockAndDriftApplied", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__spacecraftTimeSimplified(t_CRDConfiguration$TransponderConfiguration *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSpacecraftTimeSimplified());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__stationClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getStationClockAndDriftApplied());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDConfiguration$TransponderConfiguration_set__stationClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setStationClockAndDriftApplied(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "stationClockAndDriftApplied", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__stationOscDrift(t_CRDConfiguration$TransponderConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStationOscDrift());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$TransponderConfiguration_set__stationOscDrift(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setStationOscDrift(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "stationOscDrift", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__stationUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStationUTCOffset());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$TransponderConfiguration_set__stationUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setStationUTCOffset(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "stationUTCOffset", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__transpClkRefTime(t_CRDConfiguration$TransponderConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTranspClkRefTime());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$TransponderConfiguration_set__transpClkRefTime(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setTranspClkRefTime(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "transpClkRefTime", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__transpOscDrift(t_CRDConfiguration$TransponderConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTranspOscDrift());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$TransponderConfiguration_set__transpOscDrift(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setTranspOscDrift(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "transpOscDrift", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__transpUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTranspUTCOffset());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$TransponderConfiguration_set__transpUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setTranspUTCOffset(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "transpUTCOffset", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__transponderId(t_CRDConfiguration$TransponderConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getTransponderId());
          return j2p(value);
        }
        static int t_CRDConfiguration$TransponderConfiguration_set__transponderId(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setTransponderId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "transponderId", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeScalarFunction.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeScalarFunction::class$ = NULL;
      jmethodID *TimeScalarFunction::mids$ = NULL;
      bool TimeScalarFunction::live$ = false;

      jclass TimeScalarFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeScalarFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_b0b988f941da47d8] = env->getMethodID(cls, "value", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_value_b884068a2c99f6ca] = env->getMethodID(cls, "value", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble TimeScalarFunction::value(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_b0b988f941da47d8], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement TimeScalarFunction::value(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_b884068a2c99f6ca], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_TimeScalarFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeScalarFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeScalarFunction_value(t_TimeScalarFunction *self, PyObject *args);

      static PyMethodDef t_TimeScalarFunction__methods_[] = {
        DECLARE_METHOD(t_TimeScalarFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeScalarFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeScalarFunction, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeScalarFunction)[] = {
        { Py_tp_methods, t_TimeScalarFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeScalarFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeScalarFunction, t_TimeScalarFunction, TimeScalarFunction);

      void t_TimeScalarFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeScalarFunction), &PY_TYPE_DEF(TimeScalarFunction), module, "TimeScalarFunction", 0);
      }

      void t_TimeScalarFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScalarFunction), "class_", make_descriptor(TimeScalarFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScalarFunction), "wrapfn_", make_descriptor(t_TimeScalarFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScalarFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeScalarFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeScalarFunction::initializeClass, 1)))
          return NULL;
        return t_TimeScalarFunction::wrap_Object(TimeScalarFunction(((t_TimeScalarFunction *) arg)->object.this$));
      }
      static PyObject *t_TimeScalarFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeScalarFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeScalarFunction_value(t_TimeScalarFunction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.value(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.value(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "value", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/EphemerisPropagatorBuilder.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/propagation/conversion/EphemerisPropagatorBuilder.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/TimeStampedPair.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *EphemerisPropagatorBuilder::class$ = NULL;
        jmethodID *EphemerisPropagatorBuilder::mids$ = NULL;
        bool EphemerisPropagatorBuilder::live$ = false;

        jclass EphemerisPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/EphemerisPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2ee441fbc689b748] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;)V");
            mids$[mid_init$_d43f63068c548b32] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_init$_df8ca70857921fcd] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Ljava/util/List;Lorg/orekit/time/TimeInterpolator;)V");
            mids$[mid_init$_99a5fbadd0cd572e] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_buildLeastSquaresModel_4fca41eef9d750a6] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;");
            mids$[mid_buildPropagator_5ad9cbd11735eecd] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/Propagator;");
            mids$[mid_copy_1c6dea8ee82902cf] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/EphemerisPropagatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EphemerisPropagatorBuilder::EphemerisPropagatorBuilder(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_2ee441fbc689b748, a0.this$, a1.this$)) {}

        EphemerisPropagatorBuilder::EphemerisPropagatorBuilder(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::attitudes::AttitudeProvider & a2) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_d43f63068c548b32, a0.this$, a1.this$, a2.this$)) {}

        EphemerisPropagatorBuilder::EphemerisPropagatorBuilder(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::java::util::List & a2, const ::org::orekit::time::TimeInterpolator & a3) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_df8ca70857921fcd, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        EphemerisPropagatorBuilder::EphemerisPropagatorBuilder(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::java::util::List & a2, const ::org::orekit::time::TimeInterpolator & a3, const ::org::orekit::attitudes::AttitudeProvider & a4) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_99a5fbadd0cd572e, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

        ::org::orekit::estimation::leastsquares::AbstractBatchLSModel EphemerisPropagatorBuilder::buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) const
        {
          return ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->callObjectMethod(this$, mids$[mid_buildLeastSquaresModel_4fca41eef9d750a6], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::Propagator EphemerisPropagatorBuilder::buildPropagator(const JArray< jdouble > & a0) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_buildPropagator_5ad9cbd11735eecd], a0.this$));
        }

        EphemerisPropagatorBuilder EphemerisPropagatorBuilder::copy() const
        {
          return EphemerisPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_copy_1c6dea8ee82902cf]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        static PyObject *t_EphemerisPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EphemerisPropagatorBuilder_init_(t_EphemerisPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EphemerisPropagatorBuilder_buildLeastSquaresModel(t_EphemerisPropagatorBuilder *self, PyObject *args);
        static PyObject *t_EphemerisPropagatorBuilder_buildPropagator(t_EphemerisPropagatorBuilder *self, PyObject *args);
        static PyObject *t_EphemerisPropagatorBuilder_copy(t_EphemerisPropagatorBuilder *self, PyObject *args);

        static PyMethodDef t_EphemerisPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_EphemerisPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisPropagatorBuilder, buildLeastSquaresModel, METH_VARARGS),
          DECLARE_METHOD(t_EphemerisPropagatorBuilder, buildPropagator, METH_VARARGS),
          DECLARE_METHOD(t_EphemerisPropagatorBuilder, copy, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EphemerisPropagatorBuilder)[] = {
          { Py_tp_methods, t_EphemerisPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_EphemerisPropagatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EphemerisPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorBuilder),
          NULL
        };

        DEFINE_TYPE(EphemerisPropagatorBuilder, t_EphemerisPropagatorBuilder, EphemerisPropagatorBuilder);

        void t_EphemerisPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(EphemerisPropagatorBuilder), &PY_TYPE_DEF(EphemerisPropagatorBuilder), module, "EphemerisPropagatorBuilder", 0);
        }

        void t_EphemerisPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisPropagatorBuilder), "class_", make_descriptor(EphemerisPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisPropagatorBuilder), "wrapfn_", make_descriptor(t_EphemerisPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EphemerisPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EphemerisPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_EphemerisPropagatorBuilder::wrap_Object(EphemerisPropagatorBuilder(((t_EphemerisPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_EphemerisPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EphemerisPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EphemerisPropagatorBuilder_init_(t_EphemerisPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
              PyTypeObject **p1;
              EphemerisPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_))
              {
                INT_CALL(object = EphemerisPropagatorBuilder(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
              EphemerisPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "KKk", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2))
              {
                INT_CALL(object = EphemerisPropagatorBuilder(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::time::TimeInterpolator a3((jobject) NULL);
              PyTypeObject **p3;
              EphemerisPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "KKKK", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3, &p3, ::org::orekit::time::t_TimeInterpolator::parameters_))
              {
                INT_CALL(object = EphemerisPropagatorBuilder(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::time::TimeInterpolator a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
              EphemerisPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "KKKKk", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3, &p3, ::org::orekit::time::t_TimeInterpolator::parameters_, &a4))
              {
                INT_CALL(object = EphemerisPropagatorBuilder(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EphemerisPropagatorBuilder_buildLeastSquaresModel(t_EphemerisPropagatorBuilder *self, PyObject *args)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          ::org::orekit::estimation::leastsquares::AbstractBatchLSModel result((jobject) NULL);

          if (!parseArgs(args, "[kKkk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            OBJ_CALL(result = self->object.buildLeastSquaresModel(a0, a1, a2, a3));
            return ::org::orekit::estimation::leastsquares::t_AbstractBatchLSModel::wrap_Object(result);
          }

          return callSuper(PY_TYPE(EphemerisPropagatorBuilder), (PyObject *) self, "buildLeastSquaresModel", args, 2);
        }

        static PyObject *t_EphemerisPropagatorBuilder_buildPropagator(t_EphemerisPropagatorBuilder *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::orekit::propagation::Propagator result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.buildPropagator(a0));
            return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(EphemerisPropagatorBuilder), (PyObject *) self, "buildPropagator", args, 2);
        }

        static PyObject *t_EphemerisPropagatorBuilder_copy(t_EphemerisPropagatorBuilder *self, PyObject *args)
        {
          EphemerisPropagatorBuilder result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_EphemerisPropagatorBuilder::wrap_Object(result);
          }

          return callSuper(PY_TYPE(EphemerisPropagatorBuilder), (PyObject *) self, "copy", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadata.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitManeuverHistoryMetadataKey::class$ = NULL;
              jmethodID *OrbitManeuverHistoryMetadataKey::mids$ = NULL;
              bool OrbitManeuverHistoryMetadataKey::live$ = false;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::COMMENT = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_BODY_FRAME = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_BODY_TRIGGER = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_EXEC_START = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_EXEC_STOP = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_MAX_CYCLES = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_MIN_CYCLES = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_PA_START_ANGLE = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_PA_STOP_ANGLE = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_REF_DIR = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_REF_TIME = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_TIME_PULSE_DURATION = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_TIME_PULSE_PERIOD = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_TYPE = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_WIN_CLOSE = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_WIN_OPEN = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::GRAV_ASSIST_NAME = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_BASIS = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_BASIS_ID = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_COMPOSITION = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_DEVICE_ID = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_FRAME_EPOCH = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_ID = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_NEXT_EPOCH = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_NEXT_ID = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_PRED_SOURCE = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_PREV_EPOCH = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_PREV_ID = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_PURPOSE = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_REF_FRAME = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_UNITS = NULL;

              jclass OrbitManeuverHistoryMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_3517cd74997ab541] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadata;)Z");
                  mids$[mid_valueOf_ed5ef9b1a8d2aa87] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;");
                  mids$[mid_values_9130ba061cc1fd00] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_BODY_FRAME = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_BODY_FRAME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_BODY_TRIGGER = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_BODY_TRIGGER", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_EXEC_START = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_EXEC_START", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_EXEC_STOP = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_EXEC_STOP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_MAX_CYCLES = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_MAX_CYCLES", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_MIN_CYCLES = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_MIN_CYCLES", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_PA_START_ANGLE = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_PA_START_ANGLE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_PA_STOP_ANGLE = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_PA_STOP_ANGLE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_REF_DIR = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_REF_DIR", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_REF_TIME = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_REF_TIME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_TIME_PULSE_DURATION = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_TIME_PULSE_DURATION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_TIME_PULSE_PERIOD = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_TIME_PULSE_PERIOD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_TYPE = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_TYPE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_WIN_CLOSE = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_WIN_CLOSE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_WIN_OPEN = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_WIN_OPEN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  GRAV_ASSIST_NAME = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "GRAV_ASSIST_NAME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_BASIS = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_BASIS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_BASIS_ID = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_BASIS_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_COMPOSITION = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_COMPOSITION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_DEVICE_ID = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_DEVICE_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_FRAME_EPOCH = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_FRAME_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_ID = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_NEXT_EPOCH = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_NEXT_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_NEXT_ID = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_NEXT_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_PRED_SOURCE = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_PRED_SOURCE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_PREV_EPOCH = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_PREV_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_PREV_ID = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_PREV_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_PURPOSE = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_PURPOSE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_REF_FRAME = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_UNITS = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_UNITS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OrbitManeuverHistoryMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_3517cd74997ab541], a0.this$, a1.this$, a2.this$);
              }

              OrbitManeuverHistoryMetadataKey OrbitManeuverHistoryMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OrbitManeuverHistoryMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ed5ef9b1a8d2aa87], a0.this$));
              }

              JArray< OrbitManeuverHistoryMetadataKey > OrbitManeuverHistoryMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OrbitManeuverHistoryMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_9130ba061cc1fd00]));
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              static PyObject *t_OrbitManeuverHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadataKey_of_(t_OrbitManeuverHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_OrbitManeuverHistoryMetadataKey_process(t_OrbitManeuverHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_OrbitManeuverHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OrbitManeuverHistoryMetadataKey_values(PyTypeObject *type);
              static PyObject *t_OrbitManeuverHistoryMetadataKey_get__parameters_(t_OrbitManeuverHistoryMetadataKey *self, void *data);
              static PyGetSetDef t_OrbitManeuverHistoryMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitManeuverHistoryMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitManeuverHistoryMetadataKey__methods_[] = {
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitManeuverHistoryMetadataKey)[] = {
                { Py_tp_methods, t_OrbitManeuverHistoryMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OrbitManeuverHistoryMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitManeuverHistoryMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OrbitManeuverHistoryMetadataKey, t_OrbitManeuverHistoryMetadataKey, OrbitManeuverHistoryMetadataKey);
              PyObject *t_OrbitManeuverHistoryMetadataKey::wrap_Object(const OrbitManeuverHistoryMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitManeuverHistoryMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitManeuverHistoryMetadataKey *self = (t_OrbitManeuverHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OrbitManeuverHistoryMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitManeuverHistoryMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitManeuverHistoryMetadataKey *self = (t_OrbitManeuverHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OrbitManeuverHistoryMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitManeuverHistoryMetadataKey), &PY_TYPE_DEF(OrbitManeuverHistoryMetadataKey), module, "OrbitManeuverHistoryMetadataKey", 0);
              }

              void t_OrbitManeuverHistoryMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "class_", make_descriptor(OrbitManeuverHistoryMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "wrapfn_", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OrbitManeuverHistoryMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "COMMENT", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_BODY_FRAME", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_BODY_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_BODY_TRIGGER", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_BODY_TRIGGER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_EXEC_START", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_EXEC_START)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_EXEC_STOP", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_EXEC_STOP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_MAX_CYCLES", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_MAX_CYCLES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_MIN_CYCLES", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_MIN_CYCLES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_PA_START_ANGLE", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_PA_START_ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_PA_STOP_ANGLE", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_PA_STOP_ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_REF_DIR", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_REF_DIR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_REF_TIME", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_REF_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_TIME_PULSE_DURATION", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_TIME_PULSE_DURATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_TIME_PULSE_PERIOD", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_TIME_PULSE_PERIOD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_TYPE", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_WIN_CLOSE", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_WIN_CLOSE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_WIN_OPEN", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_WIN_OPEN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "GRAV_ASSIST_NAME", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::GRAV_ASSIST_NAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_BASIS", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_BASIS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_BASIS_ID", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_BASIS_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_COMPOSITION", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_COMPOSITION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_DEVICE_ID", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_DEVICE_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_FRAME_EPOCH", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_FRAME_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_ID", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_NEXT_EPOCH", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_NEXT_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_NEXT_ID", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_NEXT_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_PRED_SOURCE", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_PRED_SOURCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_PREV_EPOCH", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_PREV_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_PREV_ID", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_PREV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_PURPOSE", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_PURPOSE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_REF_FRAME", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_REF_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_UNITS", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_UNITS)));
              }

              static PyObject *t_OrbitManeuverHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitManeuverHistoryMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_OrbitManeuverHistoryMetadataKey::wrap_Object(OrbitManeuverHistoryMetadataKey(((t_OrbitManeuverHistoryMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_OrbitManeuverHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitManeuverHistoryMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OrbitManeuverHistoryMetadataKey_of_(t_OrbitManeuverHistoryMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OrbitManeuverHistoryMetadataKey_process(t_OrbitManeuverHistoryMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OrbitManeuverHistoryMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadataKey::valueOf(a0));
                  return t_OrbitManeuverHistoryMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OrbitManeuverHistoryMetadataKey_values(PyTypeObject *type)
              {
                JArray< OrbitManeuverHistoryMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_OrbitManeuverHistoryMetadataKey::wrap_jobject);
              }
              static PyObject *t_OrbitManeuverHistoryMetadataKey_get__parameters_(t_OrbitManeuverHistoryMetadataKey *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/Reader.h"
#include "java/io/IOException.h"
#include "java/io/Reader.h"
#include "java/lang/Readable.h"
#include "java/io/Closeable.h"
#include "java/lang/Class.h"
#include "java/io/Writer.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *Reader::class$ = NULL;
    jmethodID *Reader::mids$ = NULL;
    bool Reader::live$ = false;

    jclass Reader::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/Reader");

        mids$ = new jmethodID[max_mid];
        mids$[mid_close_0640e6acf969ed28] = env->getMethodID(cls, "close", "()V");
        mids$[mid_mark_a3da1a935cb37f7b] = env->getMethodID(cls, "mark", "(I)V");
        mids$[mid_markSupported_89b302893bdbe1f1] = env->getMethodID(cls, "markSupported", "()Z");
        mids$[mid_nullReader_db817b1afec8e8b3] = env->getStaticMethodID(cls, "nullReader", "()Ljava/io/Reader;");
        mids$[mid_read_412668abc8d889e9] = env->getMethodID(cls, "read", "()I");
        mids$[mid_read_25cfe021b074188a] = env->getMethodID(cls, "read", "([C)I");
        mids$[mid_read_f0b052b9721148b0] = env->getMethodID(cls, "read", "([CII)I");
        mids$[mid_ready_89b302893bdbe1f1] = env->getMethodID(cls, "ready", "()Z");
        mids$[mid_reset_0640e6acf969ed28] = env->getMethodID(cls, "reset", "()V");
        mids$[mid_skip_f4ad805a81234b49] = env->getMethodID(cls, "skip", "(J)J");
        mids$[mid_transferTo_d97a4dacf4792294] = env->getMethodID(cls, "transferTo", "(Ljava/io/Writer;)J");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Reader::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_0640e6acf969ed28]);
    }

    void Reader::mark(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_mark_a3da1a935cb37f7b], a0);
    }

    jboolean Reader::markSupported() const
    {
      return env->callBooleanMethod(this$, mids$[mid_markSupported_89b302893bdbe1f1]);
    }

    Reader Reader::nullReader()
    {
      jclass cls = env->getClass(initializeClass);
      return Reader(env->callStaticObjectMethod(cls, mids$[mid_nullReader_db817b1afec8e8b3]));
    }

    jint Reader::read() const
    {
      return env->callIntMethod(this$, mids$[mid_read_412668abc8d889e9]);
    }

    jint Reader::read(const JArray< jchar > & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_read_25cfe021b074188a], a0.this$);
    }

    jint Reader::read(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_read_f0b052b9721148b0], a0.this$, a1, a2);
    }

    jboolean Reader::ready() const
    {
      return env->callBooleanMethod(this$, mids$[mid_ready_89b302893bdbe1f1]);
    }

    void Reader::reset() const
    {
      env->callVoidMethod(this$, mids$[mid_reset_0640e6acf969ed28]);
    }

    jlong Reader::skip(jlong a0) const
    {
      return env->callLongMethod(this$, mids$[mid_skip_f4ad805a81234b49], a0);
    }

    jlong Reader::transferTo(const ::java::io::Writer & a0) const
    {
      return env->callLongMethod(this$, mids$[mid_transferTo_d97a4dacf4792294], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_Reader_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Reader_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Reader_close(t_Reader *self);
    static PyObject *t_Reader_mark(t_Reader *self, PyObject *arg);
    static PyObject *t_Reader_markSupported(t_Reader *self);
    static PyObject *t_Reader_nullReader(PyTypeObject *type);
    static PyObject *t_Reader_read(t_Reader *self, PyObject *args);
    static PyObject *t_Reader_ready(t_Reader *self);
    static PyObject *t_Reader_reset(t_Reader *self);
    static PyObject *t_Reader_skip(t_Reader *self, PyObject *arg);
    static PyObject *t_Reader_transferTo(t_Reader *self, PyObject *arg);

    static PyMethodDef t_Reader__methods_[] = {
      DECLARE_METHOD(t_Reader, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Reader, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Reader, close, METH_NOARGS),
      DECLARE_METHOD(t_Reader, mark, METH_O),
      DECLARE_METHOD(t_Reader, markSupported, METH_NOARGS),
      DECLARE_METHOD(t_Reader, nullReader, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Reader, read, METH_VARARGS),
      DECLARE_METHOD(t_Reader, ready, METH_NOARGS),
      DECLARE_METHOD(t_Reader, reset, METH_NOARGS),
      DECLARE_METHOD(t_Reader, skip, METH_O),
      DECLARE_METHOD(t_Reader, transferTo, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Reader)[] = {
      { Py_tp_methods, t_Reader__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Reader)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Reader, t_Reader, Reader);

    void t_Reader::install(PyObject *module)
    {
      installType(&PY_TYPE(Reader), &PY_TYPE_DEF(Reader), module, "Reader", 0);
    }

    void t_Reader::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Reader), "class_", make_descriptor(Reader::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Reader), "wrapfn_", make_descriptor(t_Reader::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Reader), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Reader_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Reader::initializeClass, 1)))
        return NULL;
      return t_Reader::wrap_Object(Reader(((t_Reader *) arg)->object.this$));
    }
    static PyObject *t_Reader_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Reader::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Reader_close(t_Reader *self)
    {
      OBJ_CALL(self->object.close());
      Py_RETURN_NONE;
    }

    static PyObject *t_Reader_mark(t_Reader *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.mark(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "mark", arg);
      return NULL;
    }

    static PyObject *t_Reader_markSupported(t_Reader *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.markSupported());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Reader_nullReader(PyTypeObject *type)
    {
      Reader result((jobject) NULL);
      OBJ_CALL(result = ::java::io::Reader::nullReader());
      return t_Reader::wrap_Object(result);
    }

    static PyObject *t_Reader_read(t_Reader *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jint result;
          OBJ_CALL(result = self->object.read());
          return PyLong_FromLong((long) result);
        }
        break;
       case 1:
        {
          JArray< jchar > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(result = self->object.read(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.read(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "read", args);
      return NULL;
    }

    static PyObject *t_Reader_ready(t_Reader *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.ready());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Reader_reset(t_Reader *self)
    {
      OBJ_CALL(self->object.reset());
      Py_RETURN_NONE;
    }

    static PyObject *t_Reader_skip(t_Reader *self, PyObject *arg)
    {
      jlong a0;
      jlong result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = self->object.skip(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError((PyObject *) self, "skip", arg);
      return NULL;
    }

    static PyObject *t_Reader_transferTo(t_Reader *self, PyObject *arg)
    {
      ::java::io::Writer a0((jobject) NULL);
      jlong result;

      if (!parseArg(arg, "k", ::java::io::Writer::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.transferTo(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError((PyObject *) self, "transferTo", arg);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/text/NumberFormat.h"
#include "java/text/ParsePosition.h"
#include "java/util/Locale.h"
#include "java/lang/Number.h"
#include "java/text/ParseException.h"
#include "java/text/NumberFormat.h"
#include "java/lang/Class.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/Object.h"
#include "java/text/FieldPosition.h"
#include "java/lang/String.h"
#include "java/util/Currency.h"
#include "JArray.h"

namespace java {
  namespace text {

    ::java::lang::Class *NumberFormat::class$ = NULL;
    jmethodID *NumberFormat::mids$ = NULL;
    bool NumberFormat::live$ = false;
    jint NumberFormat::FRACTION_FIELD = (jint) 0;
    jint NumberFormat::INTEGER_FIELD = (jint) 0;

    jclass NumberFormat::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/text/NumberFormat");

        mids$ = new jmethodID[max_mid];
        mids$[mid_clone_e661fe3ba2fafb22] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_format_c03a7791f2fcb1f1] = env->getMethodID(cls, "format", "(D)Ljava/lang/String;");
        mids$[mid_format_dffed0dde596e613] = env->getMethodID(cls, "format", "(J)Ljava/lang/String;");
        mids$[mid_format_12b2fbc0c0cefa8d] = env->getMethodID(cls, "format", "(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
        mids$[mid_format_60ec49fc2ad8aa0e] = env->getMethodID(cls, "format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
        mids$[mid_format_d9d8c4aa92e35cdf] = env->getMethodID(cls, "format", "(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
        mids$[mid_getAvailableLocales_85ff0d07ca843902] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
        mids$[mid_getCurrency_e0e11425d6f25aed] = env->getMethodID(cls, "getCurrency", "()Ljava/util/Currency;");
        mids$[mid_getCurrencyInstance_001645e916bd626d] = env->getStaticMethodID(cls, "getCurrencyInstance", "()Ljava/text/NumberFormat;");
        mids$[mid_getCurrencyInstance_eb8cc1bc569326d0] = env->getStaticMethodID(cls, "getCurrencyInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;");
        mids$[mid_getInstance_001645e916bd626d] = env->getStaticMethodID(cls, "getInstance", "()Ljava/text/NumberFormat;");
        mids$[mid_getInstance_eb8cc1bc569326d0] = env->getStaticMethodID(cls, "getInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;");
        mids$[mid_getIntegerInstance_001645e916bd626d] = env->getStaticMethodID(cls, "getIntegerInstance", "()Ljava/text/NumberFormat;");
        mids$[mid_getIntegerInstance_eb8cc1bc569326d0] = env->getStaticMethodID(cls, "getIntegerInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;");
        mids$[mid_getMaximumFractionDigits_412668abc8d889e9] = env->getMethodID(cls, "getMaximumFractionDigits", "()I");
        mids$[mid_getMaximumIntegerDigits_412668abc8d889e9] = env->getMethodID(cls, "getMaximumIntegerDigits", "()I");
        mids$[mid_getMinimumFractionDigits_412668abc8d889e9] = env->getMethodID(cls, "getMinimumFractionDigits", "()I");
        mids$[mid_getMinimumIntegerDigits_412668abc8d889e9] = env->getMethodID(cls, "getMinimumIntegerDigits", "()I");
        mids$[mid_getNumberInstance_001645e916bd626d] = env->getStaticMethodID(cls, "getNumberInstance", "()Ljava/text/NumberFormat;");
        mids$[mid_getNumberInstance_eb8cc1bc569326d0] = env->getStaticMethodID(cls, "getNumberInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;");
        mids$[mid_getPercentInstance_001645e916bd626d] = env->getStaticMethodID(cls, "getPercentInstance", "()Ljava/text/NumberFormat;");
        mids$[mid_getPercentInstance_eb8cc1bc569326d0] = env->getStaticMethodID(cls, "getPercentInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;");
        mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isGroupingUsed_89b302893bdbe1f1] = env->getMethodID(cls, "isGroupingUsed", "()Z");
        mids$[mid_isParseIntegerOnly_89b302893bdbe1f1] = env->getMethodID(cls, "isParseIntegerOnly", "()Z");
        mids$[mid_parse_1a93cd97fa09237e] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Ljava/lang/Number;");
        mids$[mid_parse_5536e661c34c19f2] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;");
        mids$[mid_parseObject_a7f2c32d9be5fd0d] = env->getMethodID(cls, "parseObject", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;");
        mids$[mid_setCurrency_f72be4c0db9df8b9] = env->getMethodID(cls, "setCurrency", "(Ljava/util/Currency;)V");
        mids$[mid_setGroupingUsed_ed2afdb8506b9742] = env->getMethodID(cls, "setGroupingUsed", "(Z)V");
        mids$[mid_setMaximumFractionDigits_a3da1a935cb37f7b] = env->getMethodID(cls, "setMaximumFractionDigits", "(I)V");
        mids$[mid_setMaximumIntegerDigits_a3da1a935cb37f7b] = env->getMethodID(cls, "setMaximumIntegerDigits", "(I)V");
        mids$[mid_setMinimumFractionDigits_a3da1a935cb37f7b] = env->getMethodID(cls, "setMinimumFractionDigits", "(I)V");
        mids$[mid_setMinimumIntegerDigits_a3da1a935cb37f7b] = env->getMethodID(cls, "setMinimumIntegerDigits", "(I)V");
        mids$[mid_setParseIntegerOnly_ed2afdb8506b9742] = env->getMethodID(cls, "setParseIntegerOnly", "(Z)V");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        FRACTION_FIELD = env->getStaticIntField(cls, "FRACTION_FIELD");
        INTEGER_FIELD = env->getStaticIntField(cls, "INTEGER_FIELD");
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::lang::Object NumberFormat::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_e661fe3ba2fafb22]));
    }

    jboolean NumberFormat::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
    }

    ::java::lang::String NumberFormat::format(jdouble a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_format_c03a7791f2fcb1f1], a0));
    }

    ::java::lang::String NumberFormat::format(jlong a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_format_dffed0dde596e613], a0));
    }

    ::java::lang::StringBuffer NumberFormat::format(jdouble a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
    {
      return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_12b2fbc0c0cefa8d], a0, a1.this$, a2.this$));
    }

    ::java::lang::StringBuffer NumberFormat::format(const ::java::lang::Object & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
    {
      return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_60ec49fc2ad8aa0e], a0.this$, a1.this$, a2.this$));
    }

    ::java::lang::StringBuffer NumberFormat::format(jlong a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
    {
      return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_d9d8c4aa92e35cdf], a0, a1.this$, a2.this$));
    }

    JArray< ::java::util::Locale > NumberFormat::getAvailableLocales()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::util::Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_85ff0d07ca843902]));
    }

    ::java::util::Currency NumberFormat::getCurrency() const
    {
      return ::java::util::Currency(env->callObjectMethod(this$, mids$[mid_getCurrency_e0e11425d6f25aed]));
    }

    NumberFormat NumberFormat::getCurrencyInstance()
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getCurrencyInstance_001645e916bd626d]));
    }

    NumberFormat NumberFormat::getCurrencyInstance(const ::java::util::Locale & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getCurrencyInstance_eb8cc1bc569326d0], a0.this$));
    }

    NumberFormat NumberFormat::getInstance()
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getInstance_001645e916bd626d]));
    }

    NumberFormat NumberFormat::getInstance(const ::java::util::Locale & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getInstance_eb8cc1bc569326d0], a0.this$));
    }

    NumberFormat NumberFormat::getIntegerInstance()
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getIntegerInstance_001645e916bd626d]));
    }

    NumberFormat NumberFormat::getIntegerInstance(const ::java::util::Locale & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getIntegerInstance_eb8cc1bc569326d0], a0.this$));
    }

    jint NumberFormat::getMaximumFractionDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getMaximumFractionDigits_412668abc8d889e9]);
    }

    jint NumberFormat::getMaximumIntegerDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getMaximumIntegerDigits_412668abc8d889e9]);
    }

    jint NumberFormat::getMinimumFractionDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getMinimumFractionDigits_412668abc8d889e9]);
    }

    jint NumberFormat::getMinimumIntegerDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getMinimumIntegerDigits_412668abc8d889e9]);
    }

    NumberFormat NumberFormat::getNumberInstance()
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getNumberInstance_001645e916bd626d]));
    }

    NumberFormat NumberFormat::getNumberInstance(const ::java::util::Locale & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getNumberInstance_eb8cc1bc569326d0], a0.this$));
    }

    NumberFormat NumberFormat::getPercentInstance()
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getPercentInstance_001645e916bd626d]));
    }

    NumberFormat NumberFormat::getPercentInstance(const ::java::util::Locale & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getPercentInstance_eb8cc1bc569326d0], a0.this$));
    }

    jint NumberFormat::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
    }

    jboolean NumberFormat::isGroupingUsed() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isGroupingUsed_89b302893bdbe1f1]);
    }

    jboolean NumberFormat::isParseIntegerOnly() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isParseIntegerOnly_89b302893bdbe1f1]);
    }

    ::java::lang::Number NumberFormat::parse(const ::java::lang::String & a0) const
    {
      return ::java::lang::Number(env->callObjectMethod(this$, mids$[mid_parse_1a93cd97fa09237e], a0.this$));
    }

    ::java::lang::Number NumberFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
    {
      return ::java::lang::Number(env->callObjectMethod(this$, mids$[mid_parse_5536e661c34c19f2], a0.this$, a1.this$));
    }

    ::java::lang::Object NumberFormat::parseObject(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_parseObject_a7f2c32d9be5fd0d], a0.this$, a1.this$));
    }

    void NumberFormat::setCurrency(const ::java::util::Currency & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setCurrency_f72be4c0db9df8b9], a0.this$);
    }

    void NumberFormat::setGroupingUsed(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setGroupingUsed_ed2afdb8506b9742], a0);
    }

    void NumberFormat::setMaximumFractionDigits(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMaximumFractionDigits_a3da1a935cb37f7b], a0);
    }

    void NumberFormat::setMaximumIntegerDigits(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMaximumIntegerDigits_a3da1a935cb37f7b], a0);
    }

    void NumberFormat::setMinimumFractionDigits(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMinimumFractionDigits_a3da1a935cb37f7b], a0);
    }

    void NumberFormat::setMinimumIntegerDigits(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMinimumIntegerDigits_a3da1a935cb37f7b], a0);
    }

    void NumberFormat::setParseIntegerOnly(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setParseIntegerOnly_ed2afdb8506b9742], a0);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace text {
    static PyObject *t_NumberFormat_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_NumberFormat_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_NumberFormat_clone(t_NumberFormat *self, PyObject *args);
    static PyObject *t_NumberFormat_equals(t_NumberFormat *self, PyObject *args);
    static PyObject *t_NumberFormat_format(t_NumberFormat *self, PyObject *args);
    static PyObject *t_NumberFormat_getAvailableLocales(PyTypeObject *type);
    static PyObject *t_NumberFormat_getCurrency(t_NumberFormat *self);
    static PyObject *t_NumberFormat_getCurrencyInstance(PyTypeObject *type, PyObject *args);
    static PyObject *t_NumberFormat_getInstance(PyTypeObject *type, PyObject *args);
    static PyObject *t_NumberFormat_getIntegerInstance(PyTypeObject *type, PyObject *args);
    static PyObject *t_NumberFormat_getMaximumFractionDigits(t_NumberFormat *self);
    static PyObject *t_NumberFormat_getMaximumIntegerDigits(t_NumberFormat *self);
    static PyObject *t_NumberFormat_getMinimumFractionDigits(t_NumberFormat *self);
    static PyObject *t_NumberFormat_getMinimumIntegerDigits(t_NumberFormat *self);
    static PyObject *t_NumberFormat_getNumberInstance(PyTypeObject *type, PyObject *args);
    static PyObject *t_NumberFormat_getPercentInstance(PyTypeObject *type, PyObject *args);
    static PyObject *t_NumberFormat_hashCode(t_NumberFormat *self, PyObject *args);
    static PyObject *t_NumberFormat_isGroupingUsed(t_NumberFormat *self);
    static PyObject *t_NumberFormat_isParseIntegerOnly(t_NumberFormat *self);
    static PyObject *t_NumberFormat_parse(t_NumberFormat *self, PyObject *args);
    static PyObject *t_NumberFormat_parseObject(t_NumberFormat *self, PyObject *args);
    static PyObject *t_NumberFormat_setCurrency(t_NumberFormat *self, PyObject *arg);
    static PyObject *t_NumberFormat_setGroupingUsed(t_NumberFormat *self, PyObject *arg);
    static PyObject *t_NumberFormat_setMaximumFractionDigits(t_NumberFormat *self, PyObject *arg);
    static PyObject *t_NumberFormat_setMaximumIntegerDigits(t_NumberFormat *self, PyObject *arg);
    static PyObject *t_NumberFormat_setMinimumFractionDigits(t_NumberFormat *self, PyObject *arg);
    static PyObject *t_NumberFormat_setMinimumIntegerDigits(t_NumberFormat *self, PyObject *arg);
    static PyObject *t_NumberFormat_setParseIntegerOnly(t_NumberFormat *self, PyObject *arg);
    static PyObject *t_NumberFormat_get__availableLocales(t_NumberFormat *self, void *data);
    static PyObject *t_NumberFormat_get__currency(t_NumberFormat *self, void *data);
    static int t_NumberFormat_set__currency(t_NumberFormat *self, PyObject *arg, void *data);
    static PyObject *t_NumberFormat_get__currencyInstance(t_NumberFormat *self, void *data);
    static PyObject *t_NumberFormat_get__groupingUsed(t_NumberFormat *self, void *data);
    static int t_NumberFormat_set__groupingUsed(t_NumberFormat *self, PyObject *arg, void *data);
    static PyObject *t_NumberFormat_get__instance(t_NumberFormat *self, void *data);
    static PyObject *t_NumberFormat_get__integerInstance(t_NumberFormat *self, void *data);
    static PyObject *t_NumberFormat_get__maximumFractionDigits(t_NumberFormat *self, void *data);
    static int t_NumberFormat_set__maximumFractionDigits(t_NumberFormat *self, PyObject *arg, void *data);
    static PyObject *t_NumberFormat_get__maximumIntegerDigits(t_NumberFormat *self, void *data);
    static int t_NumberFormat_set__maximumIntegerDigits(t_NumberFormat *self, PyObject *arg, void *data);
    static PyObject *t_NumberFormat_get__minimumFractionDigits(t_NumberFormat *self, void *data);
    static int t_NumberFormat_set__minimumFractionDigits(t_NumberFormat *self, PyObject *arg, void *data);
    static PyObject *t_NumberFormat_get__minimumIntegerDigits(t_NumberFormat *self, void *data);
    static int t_NumberFormat_set__minimumIntegerDigits(t_NumberFormat *self, PyObject *arg, void *data);
    static PyObject *t_NumberFormat_get__numberInstance(t_NumberFormat *self, void *data);
    static PyObject *t_NumberFormat_get__parseIntegerOnly(t_NumberFormat *self, void *data);
    static int t_NumberFormat_set__parseIntegerOnly(t_NumberFormat *self, PyObject *arg, void *data);
    static PyObject *t_NumberFormat_get__percentInstance(t_NumberFormat *self, void *data);
    static PyGetSetDef t_NumberFormat__fields_[] = {
      DECLARE_GET_FIELD(t_NumberFormat, availableLocales),
      DECLARE_GETSET_FIELD(t_NumberFormat, currency),
      DECLARE_GET_FIELD(t_NumberFormat, currencyInstance),
      DECLARE_GETSET_FIELD(t_NumberFormat, groupingUsed),
      DECLARE_GET_FIELD(t_NumberFormat, instance),
      DECLARE_GET_FIELD(t_NumberFormat, integerInstance),
      DECLARE_GETSET_FIELD(t_NumberFormat, maximumFractionDigits),
      DECLARE_GETSET_FIELD(t_NumberFormat, maximumIntegerDigits),
      DECLARE_GETSET_FIELD(t_NumberFormat, minimumFractionDigits),
      DECLARE_GETSET_FIELD(t_NumberFormat, minimumIntegerDigits),
      DECLARE_GET_FIELD(t_NumberFormat, numberInstance),
      DECLARE_GETSET_FIELD(t_NumberFormat, parseIntegerOnly),
      DECLARE_GET_FIELD(t_NumberFormat, percentInstance),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_NumberFormat__methods_[] = {
      DECLARE_METHOD(t_NumberFormat, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_NumberFormat, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_NumberFormat, clone, METH_VARARGS),
      DECLARE_METHOD(t_NumberFormat, equals, METH_VARARGS),
      DECLARE_METHOD(t_NumberFormat, format, METH_VARARGS),
      DECLARE_METHOD(t_NumberFormat, getAvailableLocales, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_NumberFormat, getCurrency, METH_NOARGS),
      DECLARE_METHOD(t_NumberFormat, getCurrencyInstance, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_NumberFormat, getInstance, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_NumberFormat, getIntegerInstance, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_NumberFormat, getMaximumFractionDigits, METH_NOARGS),
      DECLARE_METHOD(t_NumberFormat, getMaximumIntegerDigits, METH_NOARGS),
      DECLARE_METHOD(t_NumberFormat, getMinimumFractionDigits, METH_NOARGS),
      DECLARE_METHOD(t_NumberFormat, getMinimumIntegerDigits, METH_NOARGS),
      DECLARE_METHOD(t_NumberFormat, getNumberInstance, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_NumberFormat, getPercentInstance, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_NumberFormat, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_NumberFormat, isGroupingUsed, METH_NOARGS),
      DECLARE_METHOD(t_NumberFormat, isParseIntegerOnly, METH_NOARGS),
      DECLARE_METHOD(t_NumberFormat, parse, METH_VARARGS),
      DECLARE_METHOD(t_NumberFormat, parseObject, METH_VARARGS),
      DECLARE_METHOD(t_NumberFormat, setCurrency, METH_O),
      DECLARE_METHOD(t_NumberFormat, setGroupingUsed, METH_O),
      DECLARE_METHOD(t_NumberFormat, setMaximumFractionDigits, METH_O),
      DECLARE_METHOD(t_NumberFormat, setMaximumIntegerDigits, METH_O),
      DECLARE_METHOD(t_NumberFormat, setMinimumFractionDigits, METH_O),
      DECLARE_METHOD(t_NumberFormat, setMinimumIntegerDigits, METH_O),
      DECLARE_METHOD(t_NumberFormat, setParseIntegerOnly, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(NumberFormat)[] = {
      { Py_tp_methods, t_NumberFormat__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_NumberFormat__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(NumberFormat)[] = {
      &PY_TYPE_DEF(::java::text::Format),
      NULL
    };

    DEFINE_TYPE(NumberFormat, t_NumberFormat, NumberFormat);

    void t_NumberFormat::install(PyObject *module)
    {
      installType(&PY_TYPE(NumberFormat), &PY_TYPE_DEF(NumberFormat), module, "NumberFormat", 0);
    }

    void t_NumberFormat::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(NumberFormat), "class_", make_descriptor(NumberFormat::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NumberFormat), "wrapfn_", make_descriptor(t_NumberFormat::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NumberFormat), "boxfn_", make_descriptor(boxObject));
      env->getClass(NumberFormat::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(NumberFormat), "FRACTION_FIELD", make_descriptor(NumberFormat::FRACTION_FIELD));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NumberFormat), "INTEGER_FIELD", make_descriptor(NumberFormat::INTEGER_FIELD));
    }

    static PyObject *t_NumberFormat_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, NumberFormat::initializeClass, 1)))
        return NULL;
      return t_NumberFormat::wrap_Object(NumberFormat(((t_NumberFormat *) arg)->object.this$));
    }
    static PyObject *t_NumberFormat_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, NumberFormat::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_NumberFormat_clone(t_NumberFormat *self, PyObject *args)
    {
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.clone());
        return ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(NumberFormat), (PyObject *) self, "clone", args, 2);
    }

    static PyObject *t_NumberFormat_equals(t_NumberFormat *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(NumberFormat), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_NumberFormat_format(t_NumberFormat *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jdouble a0;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.format(a0));
            return j2p(result);
          }
        }
        {
          jlong a0;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(result = self->object.format(a0));
            return j2p(result);
          }
        }
        break;
       case 3:
        {
          jdouble a0;
          ::java::lang::StringBuffer a1((jobject) NULL);
          ::java::text::FieldPosition a2((jobject) NULL);
          ::java::lang::StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "Dkk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.format(a0, a1, a2));
            return ::java::lang::t_StringBuffer::wrap_Object(result);
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::StringBuffer a1((jobject) NULL);
          ::java::text::FieldPosition a2((jobject) NULL);
          ::java::lang::StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "okk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.format(a0, a1, a2));
            return ::java::lang::t_StringBuffer::wrap_Object(result);
          }
        }
        {
          jlong a0;
          ::java::lang::StringBuffer a1((jobject) NULL);
          ::java::text::FieldPosition a2((jobject) NULL);
          ::java::lang::StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "Jkk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.format(a0, a1, a2));
            return ::java::lang::t_StringBuffer::wrap_Object(result);
          }
        }
      }

      return callSuper(PY_TYPE(NumberFormat), (PyObject *) self, "format", args, 2);
    }

    static PyObject *t_NumberFormat_getAvailableLocales(PyTypeObject *type)
    {
      JArray< ::java::util::Locale > result((jobject) NULL);
      OBJ_CALL(result = ::java::text::NumberFormat::getAvailableLocales());
      return JArray<jobject>(result.this$).wrap(::java::util::t_Locale::wrap_jobject);
    }

    static PyObject *t_NumberFormat_getCurrency(t_NumberFormat *self)
    {
      ::java::util::Currency result((jobject) NULL);
      OBJ_CALL(result = self->object.getCurrency());
      return ::java::util::t_Currency::wrap_Object(result);
    }

    static PyObject *t_NumberFormat_getCurrencyInstance(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          NumberFormat result((jobject) NULL);
          OBJ_CALL(result = ::java::text::NumberFormat::getCurrencyInstance());
          return t_NumberFormat::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          NumberFormat result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = ::java::text::NumberFormat::getCurrencyInstance(a0));
            return t_NumberFormat::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getCurrencyInstance", args);
      return NULL;
    }

    static PyObject *t_NumberFormat_getInstance(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          NumberFormat result((jobject) NULL);
          OBJ_CALL(result = ::java::text::NumberFormat::getInstance());
          return t_NumberFormat::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          NumberFormat result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = ::java::text::NumberFormat::getInstance(a0));
            return t_NumberFormat::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getInstance", args);
      return NULL;
    }

    static PyObject *t_NumberFormat_getIntegerInstance(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          NumberFormat result((jobject) NULL);
          OBJ_CALL(result = ::java::text::NumberFormat::getIntegerInstance());
          return t_NumberFormat::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          NumberFormat result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = ::java::text::NumberFormat::getIntegerInstance(a0));
            return t_NumberFormat::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getIntegerInstance", args);
      return NULL;
    }

    static PyObject *t_NumberFormat_getMaximumFractionDigits(t_NumberFormat *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getMaximumFractionDigits());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_NumberFormat_getMaximumIntegerDigits(t_NumberFormat *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getMaximumIntegerDigits());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_NumberFormat_getMinimumFractionDigits(t_NumberFormat *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getMinimumFractionDigits());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_NumberFormat_getMinimumIntegerDigits(t_NumberFormat *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getMinimumIntegerDigits());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_NumberFormat_getNumberInstance(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          NumberFormat result((jobject) NULL);
          OBJ_CALL(result = ::java::text::NumberFormat::getNumberInstance());
          return t_NumberFormat::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          NumberFormat result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = ::java::text::NumberFormat::getNumberInstance(a0));
            return t_NumberFormat::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getNumberInstance", args);
      return NULL;
    }

    static PyObject *t_NumberFormat_getPercentInstance(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          NumberFormat result((jobject) NULL);
          OBJ_CALL(result = ::java::text::NumberFormat::getPercentInstance());
          return t_NumberFormat::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          NumberFormat result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = ::java::text::NumberFormat::getPercentInstance(a0));
            return t_NumberFormat::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getPercentInstance", args);
      return NULL;
    }

    static PyObject *t_NumberFormat_hashCode(t_NumberFormat *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(NumberFormat), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_NumberFormat_isGroupingUsed(t_NumberFormat *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isGroupingUsed());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_NumberFormat_isParseIntegerOnly(t_NumberFormat *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isParseIntegerOnly());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_NumberFormat_parse(t_NumberFormat *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Number result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.parse(a0));
            return ::java::lang::t_Number::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::text::ParsePosition a1((jobject) NULL);
          ::java::lang::Number result((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.parse(a0, a1));
            return ::java::lang::t_Number::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "parse", args);
      return NULL;
    }

    static PyObject *t_NumberFormat_parseObject(t_NumberFormat *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::text::ParsePosition a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
      {
        OBJ_CALL(result = self->object.parseObject(a0, a1));
        return ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(NumberFormat), (PyObject *) self, "parseObject", args, 2);
    }

    static PyObject *t_NumberFormat_setCurrency(t_NumberFormat *self, PyObject *arg)
    {
      ::java::util::Currency a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::util::Currency::initializeClass, &a0))
      {
        OBJ_CALL(self->object.setCurrency(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setCurrency", arg);
      return NULL;
    }

    static PyObject *t_NumberFormat_setGroupingUsed(t_NumberFormat *self, PyObject *arg)
    {
      jboolean a0;

      if (!parseArg(arg, "Z", &a0))
      {
        OBJ_CALL(self->object.setGroupingUsed(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setGroupingUsed", arg);
      return NULL;
    }

    static PyObject *t_NumberFormat_setMaximumFractionDigits(t_NumberFormat *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setMaximumFractionDigits(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setMaximumFractionDigits", arg);
      return NULL;
    }

    static PyObject *t_NumberFormat_setMaximumIntegerDigits(t_NumberFormat *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setMaximumIntegerDigits(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setMaximumIntegerDigits", arg);
      return NULL;
    }

    static PyObject *t_NumberFormat_setMinimumFractionDigits(t_NumberFormat *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setMinimumFractionDigits(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setMinimumFractionDigits", arg);
      return NULL;
    }

    static PyObject *t_NumberFormat_setMinimumIntegerDigits(t_NumberFormat *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setMinimumIntegerDigits(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setMinimumIntegerDigits", arg);
      return NULL;
    }

    static PyObject *t_NumberFormat_setParseIntegerOnly(t_NumberFormat *self, PyObject *arg)
    {
      jboolean a0;

      if (!parseArg(arg, "Z", &a0))
      {
        OBJ_CALL(self->object.setParseIntegerOnly(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setParseIntegerOnly", arg);
      return NULL;
    }

    static PyObject *t_NumberFormat_get__availableLocales(t_NumberFormat *self, void *data)
    {
      JArray< ::java::util::Locale > value((jobject) NULL);
      OBJ_CALL(value = self->object.getAvailableLocales());
      return JArray<jobject>(value.this$).wrap(::java::util::t_Locale::wrap_jobject);
    }

    static PyObject *t_NumberFormat_get__currency(t_NumberFormat *self, void *data)
    {
      ::java::util::Currency value((jobject) NULL);
      OBJ_CALL(value = self->object.getCurrency());
      return ::java::util::t_Currency::wrap_Object(value);
    }
    static int t_NumberFormat_set__currency(t_NumberFormat *self, PyObject *arg, void *data)
    {
      {
        ::java::util::Currency value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::util::Currency::initializeClass, &value))
        {
          INT_CALL(self->object.setCurrency(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "currency", arg);
      return -1;
    }

    static PyObject *t_NumberFormat_get__currencyInstance(t_NumberFormat *self, void *data)
    {
      NumberFormat value((jobject) NULL);
      OBJ_CALL(value = self->object.getCurrencyInstance());
      return t_NumberFormat::wrap_Object(value);
    }

    static PyObject *t_NumberFormat_get__groupingUsed(t_NumberFormat *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isGroupingUsed());
      Py_RETURN_BOOL(value);
    }
    static int t_NumberFormat_set__groupingUsed(t_NumberFormat *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setGroupingUsed(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "groupingUsed", arg);
      return -1;
    }

    static PyObject *t_NumberFormat_get__instance(t_NumberFormat *self, void *data)
    {
      NumberFormat value((jobject) NULL);
      OBJ_CALL(value = self->object.getInstance());
      return t_NumberFormat::wrap_Object(value);
    }

    static PyObject *t_NumberFormat_get__integerInstance(t_NumberFormat *self, void *data)
    {
      NumberFormat value((jobject) NULL);
      OBJ_CALL(value = self->object.getIntegerInstance());
      return t_NumberFormat::wrap_Object(value);
    }

    static PyObject *t_NumberFormat_get__maximumFractionDigits(t_NumberFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMaximumFractionDigits());
      return PyLong_FromLong((long) value);
    }
    static int t_NumberFormat_set__maximumFractionDigits(t_NumberFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMaximumFractionDigits(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "maximumFractionDigits", arg);
      return -1;
    }

    static PyObject *t_NumberFormat_get__maximumIntegerDigits(t_NumberFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMaximumIntegerDigits());
      return PyLong_FromLong((long) value);
    }
    static int t_NumberFormat_set__maximumIntegerDigits(t_NumberFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMaximumIntegerDigits(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "maximumIntegerDigits", arg);
      return -1;
    }

    static PyObject *t_NumberFormat_get__minimumFractionDigits(t_NumberFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMinimumFractionDigits());
      return PyLong_FromLong((long) value);
    }
    static int t_NumberFormat_set__minimumFractionDigits(t_NumberFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMinimumFractionDigits(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "minimumFractionDigits", arg);
      return -1;
    }

    static PyObject *t_NumberFormat_get__minimumIntegerDigits(t_NumberFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMinimumIntegerDigits());
      return PyLong_FromLong((long) value);
    }
    static int t_NumberFormat_set__minimumIntegerDigits(t_NumberFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMinimumIntegerDigits(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "minimumIntegerDigits", arg);
      return -1;
    }

    static PyObject *t_NumberFormat_get__numberInstance(t_NumberFormat *self, void *data)
    {
      NumberFormat value((jobject) NULL);
      OBJ_CALL(value = self->object.getNumberInstance());
      return t_NumberFormat::wrap_Object(value);
    }

    static PyObject *t_NumberFormat_get__parseIntegerOnly(t_NumberFormat *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isParseIntegerOnly());
      Py_RETURN_BOOL(value);
    }
    static int t_NumberFormat_set__parseIntegerOnly(t_NumberFormat *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setParseIntegerOnly(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "parseIntegerOnly", arg);
      return -1;
    }

    static PyObject *t_NumberFormat_get__percentInstance(t_NumberFormat *self, void *data)
    {
      NumberFormat value((jobject) NULL);
      OBJ_CALL(value = self->object.getPercentInstance());
      return t_NumberFormat::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/HarrisPriester.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *HarrisPriester::class$ = NULL;
          jmethodID *HarrisPriester::mids$ = NULL;
          bool HarrisPriester::live$ = false;

          jclass HarrisPriester::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/HarrisPriester");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ba2837ebacb842b1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;)V");
              mids$[mid_init$_b65c475fba40cde4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;[[D)V");
              mids$[mid_init$_e522dd141110feeb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
              mids$[mid_init$_2852904c6199ecb5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;[[DD)V");
              mids$[mid_getDensity_b464f829e6652655] = env->getMethodID(cls, "getDensity", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getDensity_80610bac160dfa0e] = env->getMethodID(cls, "getDensity", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_getDensity_57dd506d2d9ba196] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)D");
              mids$[mid_getDensity_818999d9e7960fd1] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getMaxAlt_557b8123390d8d0c] = env->getMethodID(cls, "getMaxAlt", "()D");
              mids$[mid_getMinAlt_557b8123390d8d0c] = env->getMethodID(cls, "getMinAlt", "()D");
              mids$[mid_getTabDensity_8cf5267aa13a77f3] = env->getMethodID(cls, "getTabDensity", "()[[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          HarrisPriester::HarrisPriester(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ba2837ebacb842b1, a0.this$, a1.this$)) {}

          HarrisPriester::HarrisPriester(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, const JArray< JArray< jdouble > > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b65c475fba40cde4, a0.this$, a1.this$, a2.this$)) {}

          HarrisPriester::HarrisPriester(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e522dd141110feeb, a0.this$, a1.this$, a2)) {}

          HarrisPriester::HarrisPriester(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, const JArray< JArray< jdouble > > & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2852904c6199ecb5, a0.this$, a1.this$, a2.this$, a3)) {}

          ::org::hipparchus::CalculusFieldElement HarrisPriester::getDensity(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_b464f829e6652655], a0.this$, a1.this$));
          }

          jdouble HarrisPriester::getDensity(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_80610bac160dfa0e], a0.this$, a1.this$);
          }

          jdouble HarrisPriester::getDensity(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_57dd506d2d9ba196], a0.this$, a1.this$, a2.this$);
          }

          ::org::hipparchus::CalculusFieldElement HarrisPriester::getDensity(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_818999d9e7960fd1], a0.this$, a1.this$, a2.this$));
          }

          ::org::orekit::frames::Frame HarrisPriester::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
          }

          jdouble HarrisPriester::getMaxAlt() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMaxAlt_557b8123390d8d0c]);
          }

          jdouble HarrisPriester::getMinAlt() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMinAlt_557b8123390d8d0c]);
          }

          JArray< JArray< jdouble > > HarrisPriester::getTabDensity() const
          {
            return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getTabDensity_8cf5267aa13a77f3]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          static PyObject *t_HarrisPriester_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_HarrisPriester_instance_(PyTypeObject *type, PyObject *arg);
          static int t_HarrisPriester_init_(t_HarrisPriester *self, PyObject *args, PyObject *kwds);
          static PyObject *t_HarrisPriester_getDensity(t_HarrisPriester *self, PyObject *args);
          static PyObject *t_HarrisPriester_getFrame(t_HarrisPriester *self);
          static PyObject *t_HarrisPriester_getMaxAlt(t_HarrisPriester *self);
          static PyObject *t_HarrisPriester_getMinAlt(t_HarrisPriester *self);
          static PyObject *t_HarrisPriester_getTabDensity(t_HarrisPriester *self);
          static PyObject *t_HarrisPriester_get__frame(t_HarrisPriester *self, void *data);
          static PyObject *t_HarrisPriester_get__maxAlt(t_HarrisPriester *self, void *data);
          static PyObject *t_HarrisPriester_get__minAlt(t_HarrisPriester *self, void *data);
          static PyObject *t_HarrisPriester_get__tabDensity(t_HarrisPriester *self, void *data);
          static PyGetSetDef t_HarrisPriester__fields_[] = {
            DECLARE_GET_FIELD(t_HarrisPriester, frame),
            DECLARE_GET_FIELD(t_HarrisPriester, maxAlt),
            DECLARE_GET_FIELD(t_HarrisPriester, minAlt),
            DECLARE_GET_FIELD(t_HarrisPriester, tabDensity),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_HarrisPriester__methods_[] = {
            DECLARE_METHOD(t_HarrisPriester, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HarrisPriester, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HarrisPriester, getDensity, METH_VARARGS),
            DECLARE_METHOD(t_HarrisPriester, getFrame, METH_NOARGS),
            DECLARE_METHOD(t_HarrisPriester, getMaxAlt, METH_NOARGS),
            DECLARE_METHOD(t_HarrisPriester, getMinAlt, METH_NOARGS),
            DECLARE_METHOD(t_HarrisPriester, getTabDensity, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(HarrisPriester)[] = {
            { Py_tp_methods, t_HarrisPriester__methods_ },
            { Py_tp_init, (void *) t_HarrisPriester_init_ },
            { Py_tp_getset, t_HarrisPriester__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(HarrisPriester)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(HarrisPriester, t_HarrisPriester, HarrisPriester);

          void t_HarrisPriester::install(PyObject *module)
          {
            installType(&PY_TYPE(HarrisPriester), &PY_TYPE_DEF(HarrisPriester), module, "HarrisPriester", 0);
          }

          void t_HarrisPriester::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(HarrisPriester), "class_", make_descriptor(HarrisPriester::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HarrisPriester), "wrapfn_", make_descriptor(t_HarrisPriester::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HarrisPriester), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_HarrisPriester_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, HarrisPriester::initializeClass, 1)))
              return NULL;
            return t_HarrisPriester::wrap_Object(HarrisPriester(((t_HarrisPriester *) arg)->object.this$));
          }
          static PyObject *t_HarrisPriester_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, HarrisPriester::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_HarrisPriester_init_(t_HarrisPriester *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
                ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
                HarrisPriester object((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = HarrisPriester(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
                ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
                JArray< JArray< jdouble > > a2((jobject) NULL);
                HarrisPriester object((jobject) NULL);

                if (!parseArgs(args, "kk[[D", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = HarrisPriester(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
                ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
                jdouble a2;
                HarrisPriester object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = HarrisPriester(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
                ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
                JArray< JArray< jdouble > > a2((jobject) NULL);
                jdouble a3;
                HarrisPriester object((jobject) NULL);

                if (!parseArgs(args, "kk[[DD", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = HarrisPriester(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
             default:
             err:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_HarrisPriester_getDensity(t_HarrisPriester *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 3:
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::frames::Frame a2((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::orekit::frames::Frame a2((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getDensity", args);
            return NULL;
          }

          static PyObject *t_HarrisPriester_getFrame(t_HarrisPriester *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_HarrisPriester_getMaxAlt(t_HarrisPriester *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMaxAlt());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_HarrisPriester_getMinAlt(t_HarrisPriester *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMinAlt());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_HarrisPriester_getTabDensity(t_HarrisPriester *self)
          {
            JArray< JArray< jdouble > > result((jobject) NULL);
            OBJ_CALL(result = self->object.getTabDensity());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          static PyObject *t_HarrisPriester_get__frame(t_HarrisPriester *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_HarrisPriester_get__maxAlt(t_HarrisPriester *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMaxAlt());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_HarrisPriester_get__minAlt(t_HarrisPriester *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMinAlt());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_HarrisPriester_get__tabDensity(t_HarrisPriester *self, void *data)
          {
            JArray< JArray< jdouble > > value((jobject) NULL);
            OBJ_CALL(value = self->object.getTabDensity());
            return JArray<jobject>(value.this$).wrap(NULL);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fraction/Fraction$ConvergenceTest.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *Fraction$ConvergenceTest::class$ = NULL;
      jmethodID *Fraction$ConvergenceTest::mids$ = NULL;
      bool Fraction$ConvergenceTest::live$ = false;

      jclass Fraction$ConvergenceTest::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/Fraction$ConvergenceTest");

          mids$ = new jmethodID[max_mid];
          mids$[mid_test_1e0f61f59fdd7111] = env->getMethodID(cls, "test", "(II)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean Fraction$ConvergenceTest::test(jint a0, jint a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_test_1e0f61f59fdd7111], a0, a1);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fraction {
      static PyObject *t_Fraction$ConvergenceTest_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Fraction$ConvergenceTest_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Fraction$ConvergenceTest_test(t_Fraction$ConvergenceTest *self, PyObject *args);

      static PyMethodDef t_Fraction$ConvergenceTest__methods_[] = {
        DECLARE_METHOD(t_Fraction$ConvergenceTest, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Fraction$ConvergenceTest, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Fraction$ConvergenceTest, test, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Fraction$ConvergenceTest)[] = {
        { Py_tp_methods, t_Fraction$ConvergenceTest__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Fraction$ConvergenceTest)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Fraction$ConvergenceTest, t_Fraction$ConvergenceTest, Fraction$ConvergenceTest);

      void t_Fraction$ConvergenceTest::install(PyObject *module)
      {
        installType(&PY_TYPE(Fraction$ConvergenceTest), &PY_TYPE_DEF(Fraction$ConvergenceTest), module, "Fraction$ConvergenceTest", 0);
      }

      void t_Fraction$ConvergenceTest::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction$ConvergenceTest), "class_", make_descriptor(Fraction$ConvergenceTest::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction$ConvergenceTest), "wrapfn_", make_descriptor(t_Fraction$ConvergenceTest::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction$ConvergenceTest), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Fraction$ConvergenceTest_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Fraction$ConvergenceTest::initializeClass, 1)))
          return NULL;
        return t_Fraction$ConvergenceTest::wrap_Object(Fraction$ConvergenceTest(((t_Fraction$ConvergenceTest *) arg)->object.this$));
      }
      static PyObject *t_Fraction$ConvergenceTest_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Fraction$ConvergenceTest::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Fraction$ConvergenceTest_test(t_Fraction$ConvergenceTest *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jboolean result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.test(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "test", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/inference/WilcoxonSignedRankTest.h"
#include "org/hipparchus/stat/ranking/NaNStrategy.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/stat/ranking/TiesStrategy.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *WilcoxonSignedRankTest::class$ = NULL;
        jmethodID *WilcoxonSignedRankTest::mids$ = NULL;
        bool WilcoxonSignedRankTest::live$ = false;

        jclass WilcoxonSignedRankTest::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/WilcoxonSignedRankTest");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_08eff940a3336a45] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/ranking/NaNStrategy;Lorg/hipparchus/stat/ranking/TiesStrategy;)V");
            mids$[mid_wilcoxonSignedRank_628a76297e217f13] = env->getMethodID(cls, "wilcoxonSignedRank", "([D[D)D");
            mids$[mid_wilcoxonSignedRankTest_81226d0b24750fea] = env->getMethodID(cls, "wilcoxonSignedRankTest", "([D[DZ)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        WilcoxonSignedRankTest::WilcoxonSignedRankTest() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        WilcoxonSignedRankTest::WilcoxonSignedRankTest(const ::org::hipparchus::stat::ranking::NaNStrategy & a0, const ::org::hipparchus::stat::ranking::TiesStrategy & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_08eff940a3336a45, a0.this$, a1.this$)) {}

        jdouble WilcoxonSignedRankTest::wilcoxonSignedRank(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_wilcoxonSignedRank_628a76297e217f13], a0.this$, a1.this$);
        }

        jdouble WilcoxonSignedRankTest::wilcoxonSignedRankTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jboolean a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_wilcoxonSignedRankTest_81226d0b24750fea], a0.this$, a1.this$, a2);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {
        static PyObject *t_WilcoxonSignedRankTest_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_WilcoxonSignedRankTest_instance_(PyTypeObject *type, PyObject *arg);
        static int t_WilcoxonSignedRankTest_init_(t_WilcoxonSignedRankTest *self, PyObject *args, PyObject *kwds);
        static PyObject *t_WilcoxonSignedRankTest_wilcoxonSignedRank(t_WilcoxonSignedRankTest *self, PyObject *args);
        static PyObject *t_WilcoxonSignedRankTest_wilcoxonSignedRankTest(t_WilcoxonSignedRankTest *self, PyObject *args);

        static PyMethodDef t_WilcoxonSignedRankTest__methods_[] = {
          DECLARE_METHOD(t_WilcoxonSignedRankTest, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_WilcoxonSignedRankTest, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_WilcoxonSignedRankTest, wilcoxonSignedRank, METH_VARARGS),
          DECLARE_METHOD(t_WilcoxonSignedRankTest, wilcoxonSignedRankTest, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(WilcoxonSignedRankTest)[] = {
          { Py_tp_methods, t_WilcoxonSignedRankTest__methods_ },
          { Py_tp_init, (void *) t_WilcoxonSignedRankTest_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(WilcoxonSignedRankTest)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(WilcoxonSignedRankTest, t_WilcoxonSignedRankTest, WilcoxonSignedRankTest);

        void t_WilcoxonSignedRankTest::install(PyObject *module)
        {
          installType(&PY_TYPE(WilcoxonSignedRankTest), &PY_TYPE_DEF(WilcoxonSignedRankTest), module, "WilcoxonSignedRankTest", 0);
        }

        void t_WilcoxonSignedRankTest::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(WilcoxonSignedRankTest), "class_", make_descriptor(WilcoxonSignedRankTest::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(WilcoxonSignedRankTest), "wrapfn_", make_descriptor(t_WilcoxonSignedRankTest::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(WilcoxonSignedRankTest), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_WilcoxonSignedRankTest_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, WilcoxonSignedRankTest::initializeClass, 1)))
            return NULL;
          return t_WilcoxonSignedRankTest::wrap_Object(WilcoxonSignedRankTest(((t_WilcoxonSignedRankTest *) arg)->object.this$));
        }
        static PyObject *t_WilcoxonSignedRankTest_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, WilcoxonSignedRankTest::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_WilcoxonSignedRankTest_init_(t_WilcoxonSignedRankTest *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              WilcoxonSignedRankTest object((jobject) NULL);

              INT_CALL(object = WilcoxonSignedRankTest());
              self->object = object;
              break;
            }
           case 2:
            {
              ::org::hipparchus::stat::ranking::NaNStrategy a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::stat::ranking::TiesStrategy a1((jobject) NULL);
              PyTypeObject **p1;
              WilcoxonSignedRankTest object((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::stat::ranking::NaNStrategy::initializeClass, ::org::hipparchus::stat::ranking::TiesStrategy::initializeClass, &a0, &p0, ::org::hipparchus::stat::ranking::t_NaNStrategy::parameters_, &a1, &p1, ::org::hipparchus::stat::ranking::t_TiesStrategy::parameters_))
              {
                INT_CALL(object = WilcoxonSignedRankTest(a0, a1));
                self->object = object;
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_WilcoxonSignedRankTest_wilcoxonSignedRank(t_WilcoxonSignedRankTest *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.wilcoxonSignedRank(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "wilcoxonSignedRank", args);
          return NULL;
        }

        static PyObject *t_WilcoxonSignedRankTest_wilcoxonSignedRankTest(t_WilcoxonSignedRankTest *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jboolean a2;
          jdouble result;

          if (!parseArgs(args, "[D[DZ", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.wilcoxonSignedRankTest(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "wilcoxonSignedRankTest", args);
          return NULL;
        }
      }
    }
  }
}
