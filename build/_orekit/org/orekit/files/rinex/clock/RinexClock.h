#ifndef org_orekit_files_rinex_clock_RinexClock_H
#define org_orekit_files_rinex_clock_RinexClock_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {
          class RinexClock$ClockDataType;
          class RinexClock$Receiver;
          class RinexClock$ReferenceClock;
          class RinexClock$ClockDataLine;
        }
        class AppliedPCVS;
        class AppliedDCBS;
      }
    }
    namespace utils {
      class TimeSpanMap;
    }
    namespace gnss {
      class ObservationType;
      class TimeSystem;
      class SatelliteSystem;
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
              mid_addAppliedDCBS_5034cecf671e2223,
              mid_addAppliedPCVS_f2258d58c79245ba,
              mid_addClockData_8830400aee8c57b2,
              mid_addClockDataType_727c621827ef7352,
              mid_addComment_f5ffdf29129ef90a,
              mid_addReceiver_d5f2dfe3117b80ca,
              mid_addReferenceClockList_98fa7d48d3b7f88a,
              mid_addSatellite_f5ffdf29129ef90a,
              mid_addSystemObservationType_87754ad7b87f4269,
              mid_getAgencyName_3cffd47377eca18a,
              mid_getAnalysisCenterID_3cffd47377eca18a,
              mid_getAnalysisCenterName_3cffd47377eca18a,
              mid_getClockData_1e62c2f73fbdd1c4,
              mid_getClockDataTypes_0d9551367f7ecdef,
              mid_getComments_3cffd47377eca18a,
              mid_getCreationDate_7a97f7e149e79afb,
              mid_getCreationDateString_3cffd47377eca18a,
              mid_getCreationTimeString_3cffd47377eca18a,
              mid_getCreationTimeZoneString_3cffd47377eca18a,
              mid_getExternalClockReference_3cffd47377eca18a,
              mid_getFormatVersion_557b8123390d8d0c,
              mid_getFrame_6c9bc0a928c56d4e,
              mid_getFrameName_3cffd47377eca18a,
              mid_getListAppliedDCBS_0d9551367f7ecdef,
              mid_getListAppliedPCVS_0d9551367f7ecdef,
              mid_getNumberOfClockDataTypes_412668abc8d889e9,
              mid_getNumberOfLeapSeconds_412668abc8d889e9,
              mid_getNumberOfLeapSecondsGNSS_412668abc8d889e9,
              mid_getNumberOfReceivers_412668abc8d889e9,
              mid_getNumberOfSatellites_412668abc8d889e9,
              mid_getProgramName_3cffd47377eca18a,
              mid_getReceivers_0d9551367f7ecdef,
              mid_getReferenceClocks_d26bd874ee319049,
              mid_getSatelliteSystem_8b86408cc2633961,
              mid_getSatellites_0d9551367f7ecdef,
              mid_getStationIdentifier_3cffd47377eca18a,
              mid_getStationName_3cffd47377eca18a,
              mid_getSystemObservationTypes_1e62c2f73fbdd1c4,
              mid_getTimeScale_527ee9dde1a96470,
              mid_getTimeSystem_2700635415605e4d,
              mid_getTotalNumberOfDataLines_412668abc8d889e9,
              mid_numberOfObsTypes_18e5dd0da2c0b8c5,
              mid_setAgencyName_f5ffdf29129ef90a,
              mid_setAnalysisCenterID_f5ffdf29129ef90a,
              mid_setAnalysisCenterName_f5ffdf29129ef90a,
              mid_setCreationDate_20affcbd28542333,
              mid_setCreationDateString_f5ffdf29129ef90a,
              mid_setCreationTimeString_f5ffdf29129ef90a,
              mid_setCreationTimeZoneString_f5ffdf29129ef90a,
              mid_setExternalClockReference_f5ffdf29129ef90a,
              mid_setFormatVersion_10f281d777284cea,
              mid_setFrameName_f5ffdf29129ef90a,
              mid_setNumberOfLeapSeconds_a3da1a935cb37f7b,
              mid_setNumberOfLeapSecondsGNSS_a3da1a935cb37f7b,
              mid_setProgramName_f5ffdf29129ef90a,
              mid_setSatelliteSystem_b744026f46deda44,
              mid_setStationIdentifier_f5ffdf29129ef90a,
              mid_setStationName_f5ffdf29129ef90a,
              mid_setTimeScale_3e3301925c0131d4,
              mid_setTimeSystem_562aaa7511f66c1c,
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
