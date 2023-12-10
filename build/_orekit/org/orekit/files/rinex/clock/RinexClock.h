#ifndef org_orekit_files_rinex_clock_RinexClock_H
#define org_orekit_files_rinex_clock_RinexClock_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
    class Map;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace gnss {
      class SatelliteSystem;
      class ObservationType;
      class TimeSystem;
    }
    namespace utils {
      class TimeSpanMap;
    }
    namespace files {
      namespace rinex {
        namespace clock {
          class RinexClock$ClockDataLine;
          class RinexClock$ReferenceClock;
          class RinexClock$ClockDataType;
          class RinexClock$Receiver;
        }
        class AppliedPCVS;
        class AppliedDCBS;
      }
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
      class TimeScale;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {

          class RinexClock : public ::java::lang::Object {
           public:
            enum {
              mid_addAppliedDCBS_924dc948b3328b0a,
              mid_addAppliedPCVS_6ae122bae3989b66,
              mid_addClockData_d888854f9d0ae85c,
              mid_addClockDataType_5a544f9f8d7ed222,
              mid_addComment_d0bc48d5b00dc40c,
              mid_addReceiver_3dbb707d27298420,
              mid_addReferenceClockList_741f4d97cd6d356c,
              mid_addSatellite_d0bc48d5b00dc40c,
              mid_addSystemObservationType_8fc5b84e4c4bbff7,
              mid_getAgencyName_11b109bd155ca898,
              mid_getAnalysisCenterID_11b109bd155ca898,
              mid_getAnalysisCenterName_11b109bd155ca898,
              mid_getClockData_6f5a75ccd8c04465,
              mid_getClockDataTypes_2afa36052df4765d,
              mid_getComments_11b109bd155ca898,
              mid_getCreationDate_85703d13e302437e,
              mid_getCreationDateString_11b109bd155ca898,
              mid_getCreationTimeString_11b109bd155ca898,
              mid_getCreationTimeZoneString_11b109bd155ca898,
              mid_getExternalClockReference_11b109bd155ca898,
              mid_getFormatVersion_dff5885c2c873297,
              mid_getFrame_b86f9f61d97a7244,
              mid_getFrameName_11b109bd155ca898,
              mid_getListAppliedDCBS_2afa36052df4765d,
              mid_getListAppliedPCVS_2afa36052df4765d,
              mid_getNumberOfClockDataTypes_570ce0828f81a2c1,
              mid_getNumberOfLeapSeconds_570ce0828f81a2c1,
              mid_getNumberOfLeapSecondsGNSS_570ce0828f81a2c1,
              mid_getNumberOfReceivers_570ce0828f81a2c1,
              mid_getNumberOfSatellites_570ce0828f81a2c1,
              mid_getProgramName_11b109bd155ca898,
              mid_getReceivers_2afa36052df4765d,
              mid_getReferenceClocks_62c7757711639c83,
              mid_getSatelliteSystem_01acae5c1a253b8e,
              mid_getSatellites_2afa36052df4765d,
              mid_getStationIdentifier_11b109bd155ca898,
              mid_getStationName_11b109bd155ca898,
              mid_getSystemObservationTypes_6f5a75ccd8c04465,
              mid_getTimeScale_c39031284193adbe,
              mid_getTimeSystem_47ed81afbc0cea8f,
              mid_getTotalNumberOfDataLines_570ce0828f81a2c1,
              mid_numberOfObsTypes_9de121449265fcae,
              mid_setAgencyName_d0bc48d5b00dc40c,
              mid_setAnalysisCenterID_d0bc48d5b00dc40c,
              mid_setAnalysisCenterName_d0bc48d5b00dc40c,
              mid_setCreationDate_600a2a61652bc473,
              mid_setCreationDateString_d0bc48d5b00dc40c,
              mid_setCreationTimeString_d0bc48d5b00dc40c,
              mid_setCreationTimeZoneString_d0bc48d5b00dc40c,
              mid_setExternalClockReference_d0bc48d5b00dc40c,
              mid_setFormatVersion_17db3a65980d3441,
              mid_setFrameName_d0bc48d5b00dc40c,
              mid_setNumberOfLeapSeconds_99803b0791f320ff,
              mid_setNumberOfLeapSecondsGNSS_99803b0791f320ff,
              mid_setProgramName_d0bc48d5b00dc40c,
              mid_setSatelliteSystem_10d44f5686b1d39e,
              mid_setStationIdentifier_d0bc48d5b00dc40c,
              mid_setStationName_d0bc48d5b00dc40c,
              mid_setTimeScale_e93d77ad761aa1f2,
              mid_setTimeSystem_188d9681dd6fbe69,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RinexClock(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RinexClock(const RinexClock& obj) : ::java::lang::Object(obj) {}

            void addAppliedDCBS(const ::org::orekit::files::rinex::AppliedDCBS &) const;
            void addAppliedPCVS(const ::org::orekit::files::rinex::AppliedPCVS &) const;
            void addClockData(const ::java::lang::String &, const ::org::orekit::files::rinex::clock::RinexClock$ClockDataLine &) const;
            void addClockDataType(const ::org::orekit::files::rinex::clock::RinexClock$ClockDataType &) const;
            void addComment(const ::java::lang::String &) const;
            void addReceiver(const ::org::orekit::files::rinex::clock::RinexClock$Receiver &) const;
            void addReferenceClockList(const ::java::util::List &, const ::org::orekit::time::AbsoluteDate &) const;
            void addSatellite(const ::java::lang::String &) const;
            void addSystemObservationType(const ::org::orekit::gnss::SatelliteSystem &, const ::org::orekit::gnss::ObservationType &) const;
            ::java::lang::String getAgencyName() const;
            ::java::lang::String getAnalysisCenterID() const;
            ::java::lang::String getAnalysisCenterName() const;
            ::java::util::Map getClockData() const;
            ::java::util::List getClockDataTypes() const;
            ::java::lang::String getComments() const;
            ::org::orekit::time::AbsoluteDate getCreationDate() const;
            ::java::lang::String getCreationDateString() const;
            ::java::lang::String getCreationTimeString() const;
            ::java::lang::String getCreationTimeZoneString() const;
            ::java::lang::String getExternalClockReference() const;
            jdouble getFormatVersion() const;
            ::org::orekit::frames::Frame getFrame() const;
            ::java::lang::String getFrameName() const;
            ::java::util::List getListAppliedDCBS() const;
            ::java::util::List getListAppliedPCVS() const;
            jint getNumberOfClockDataTypes() const;
            jint getNumberOfLeapSeconds() const;
            jint getNumberOfLeapSecondsGNSS() const;
            jint getNumberOfReceivers() const;
            jint getNumberOfSatellites() const;
            ::java::lang::String getProgramName() const;
            ::java::util::List getReceivers() const;
            ::org::orekit::utils::TimeSpanMap getReferenceClocks() const;
            ::org::orekit::gnss::SatelliteSystem getSatelliteSystem() const;
            ::java::util::List getSatellites() const;
            ::java::lang::String getStationIdentifier() const;
            ::java::lang::String getStationName() const;
            ::java::util::Map getSystemObservationTypes() const;
            ::org::orekit::time::TimeScale getTimeScale() const;
            ::org::orekit::gnss::TimeSystem getTimeSystem() const;
            jint getTotalNumberOfDataLines() const;
            jint numberOfObsTypes(const ::org::orekit::gnss::SatelliteSystem &) const;
            void setAgencyName(const ::java::lang::String &) const;
            void setAnalysisCenterID(const ::java::lang::String &) const;
            void setAnalysisCenterName(const ::java::lang::String &) const;
            void setCreationDate(const ::org::orekit::time::AbsoluteDate &) const;
            void setCreationDateString(const ::java::lang::String &) const;
            void setCreationTimeString(const ::java::lang::String &) const;
            void setCreationTimeZoneString(const ::java::lang::String &) const;
            void setExternalClockReference(const ::java::lang::String &) const;
            void setFormatVersion(jdouble) const;
            void setFrameName(const ::java::lang::String &) const;
            void setNumberOfLeapSeconds(jint) const;
            void setNumberOfLeapSecondsGNSS(jint) const;
            void setProgramName(const ::java::lang::String &) const;
            void setSatelliteSystem(const ::org::orekit::gnss::SatelliteSystem &) const;
            void setStationIdentifier(const ::java::lang::String &) const;
            void setStationName(const ::java::lang::String &) const;
            void setTimeScale(const ::org::orekit::time::TimeScale &) const;
            void setTimeSystem(const ::org::orekit::gnss::TimeSystem &) const;
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
        namespace clock {
          extern PyType_Def PY_TYPE_DEF(RinexClock);
          extern PyTypeObject *PY_TYPE(RinexClock);

          class t_RinexClock {
          public:
            PyObject_HEAD
            RinexClock object;
            static PyObject *wrap_Object(const RinexClock&);
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
