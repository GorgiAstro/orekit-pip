#ifndef org_orekit_files_rinex_clock_RinexClock_H
#define org_orekit_files_rinex_clock_RinexClock_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        class AppliedDCBS;
        namespace clock {
          class RinexClock$ClockDataLine;
          class RinexClock$Receiver;
          class RinexClock$ClockDataType;
          class RinexClock$ReferenceClock;
        }
        class AppliedPCVS;
      }
    }
    namespace gnss {
      class SatelliteSystem;
      class TimeSystem;
      class ObservationType;
    }
    namespace utils {
      class TimeSpanMap;
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {

          class RinexClock : public ::java::lang::Object {
           public:
            enum {
              mid_addAppliedDCBS_0fdf888bd1afbe51,
              mid_addAppliedPCVS_f61ab6fa49270d08,
              mid_addClockData_9828908024180d2a,
              mid_addClockDataType_b2796a169d1d60c5,
              mid_addComment_734b91ac30d5f9b4,
              mid_addReceiver_cc20597cc7527128,
              mid_addReferenceClockList_0365da66b6e36325,
              mid_addSatellite_734b91ac30d5f9b4,
              mid_addSystemObservationType_0afc6586e9189025,
              mid_getAgencyName_1c1fa1e935d6cdcf,
              mid_getAnalysisCenterID_1c1fa1e935d6cdcf,
              mid_getAnalysisCenterName_1c1fa1e935d6cdcf,
              mid_getClockData_810bed48fafb0b9a,
              mid_getClockDataTypes_e62d3bb06d56d7e3,
              mid_getComments_1c1fa1e935d6cdcf,
              mid_getCreationDate_c325492395d89b24,
              mid_getCreationDateString_1c1fa1e935d6cdcf,
              mid_getCreationTimeString_1c1fa1e935d6cdcf,
              mid_getCreationTimeZoneString_1c1fa1e935d6cdcf,
              mid_getExternalClockReference_1c1fa1e935d6cdcf,
              mid_getFormatVersion_b74f83833fdad017,
              mid_getFrame_2c51111cc6894ba1,
              mid_getFrameName_1c1fa1e935d6cdcf,
              mid_getListAppliedDCBS_e62d3bb06d56d7e3,
              mid_getListAppliedPCVS_e62d3bb06d56d7e3,
              mid_getNumberOfClockDataTypes_55546ef6a647f39b,
              mid_getNumberOfLeapSeconds_55546ef6a647f39b,
              mid_getNumberOfLeapSecondsGNSS_55546ef6a647f39b,
              mid_getNumberOfReceivers_55546ef6a647f39b,
              mid_getNumberOfSatellites_55546ef6a647f39b,
              mid_getProgramName_1c1fa1e935d6cdcf,
              mid_getReceivers_e62d3bb06d56d7e3,
              mid_getReferenceClocks_2f46b86c016957a0,
              mid_getSatelliteSystem_21bd759cc4a81606,
              mid_getSatellites_e62d3bb06d56d7e3,
              mid_getStationIdentifier_1c1fa1e935d6cdcf,
              mid_getStationName_1c1fa1e935d6cdcf,
              mid_getSystemObservationTypes_810bed48fafb0b9a,
              mid_getTimeScale_34d3bda0a8989e3e,
              mid_getTimeSystem_28830357acffb3e1,
              mid_getTotalNumberOfDataLines_55546ef6a647f39b,
              mid_numberOfObsTypes_927782bd59041992,
              mid_setAgencyName_734b91ac30d5f9b4,
              mid_setAnalysisCenterID_734b91ac30d5f9b4,
              mid_setAnalysisCenterName_734b91ac30d5f9b4,
              mid_setCreationDate_02135a6ef25adb4b,
              mid_setCreationDateString_734b91ac30d5f9b4,
              mid_setCreationTimeString_734b91ac30d5f9b4,
              mid_setCreationTimeZoneString_734b91ac30d5f9b4,
              mid_setExternalClockReference_734b91ac30d5f9b4,
              mid_setFormatVersion_8ba9fe7a847cecad,
              mid_setFrameName_734b91ac30d5f9b4,
              mid_setNumberOfLeapSeconds_44ed599e93e8a30c,
              mid_setNumberOfLeapSecondsGNSS_44ed599e93e8a30c,
              mid_setProgramName_734b91ac30d5f9b4,
              mid_setSatelliteSystem_cfddc646eebc7104,
              mid_setStationIdentifier_734b91ac30d5f9b4,
              mid_setStationName_734b91ac30d5f9b4,
              mid_setTimeScale_cae5d0c3721eff67,
              mid_setTimeSystem_885124f6a0a748ea,
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
