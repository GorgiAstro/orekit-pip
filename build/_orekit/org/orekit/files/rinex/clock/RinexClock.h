#ifndef org_orekit_files_rinex_clock_RinexClock_H
#define org_orekit_files_rinex_clock_RinexClock_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace gnss {
      class ObservationType;
      class TimeSystem;
      class SatelliteSystem;
    }
    namespace files {
      namespace rinex {
        class AppliedDCBS;
        class AppliedPCVS;
        namespace clock {
          class RinexClock$Receiver;
          class RinexClock$ClockDataLine;
          class RinexClock$ReferenceClock;
          class RinexClock$ClockDataType;
        }
      }
    }
    namespace time {
      class TimeScale;
      class AbsoluteDate;
    }
    namespace frames {
      class Frame;
    }
    namespace utils {
      class TimeSpanMap;
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
              mid_addAppliedDCBS_ff0e7309079f40cf,
              mid_addAppliedPCVS_53fc7a51ceba7c31,
              mid_addClockData_853597fc786f0a99,
              mid_addClockDataType_781543b0db33d67f,
              mid_addComment_e939c6558ae8d313,
              mid_addReceiver_67434d0ce85d1c38,
              mid_addReferenceClockList_9864bb25319e03a0,
              mid_addSatellite_e939c6558ae8d313,
              mid_addSystemObservationType_f4e16160174a8974,
              mid_getAgencyName_0090f7797e403f43,
              mid_getAnalysisCenterID_0090f7797e403f43,
              mid_getAnalysisCenterName_0090f7797e403f43,
              mid_getClockData_d6753b7055940a54,
              mid_getClockDataTypes_a6156df500549a58,
              mid_getComments_0090f7797e403f43,
              mid_getCreationDate_aaa854c403487cf3,
              mid_getCreationDateString_0090f7797e403f43,
              mid_getCreationTimeString_0090f7797e403f43,
              mid_getCreationTimeZoneString_0090f7797e403f43,
              mid_getExternalClockReference_0090f7797e403f43,
              mid_getFormatVersion_456d9a2f64d6b28d,
              mid_getFrame_c8fe21bcdac65bf6,
              mid_getFrameName_0090f7797e403f43,
              mid_getListAppliedDCBS_a6156df500549a58,
              mid_getListAppliedPCVS_a6156df500549a58,
              mid_getNumberOfClockDataTypes_f2f64475e4580546,
              mid_getNumberOfLeapSeconds_f2f64475e4580546,
              mid_getNumberOfLeapSecondsGNSS_f2f64475e4580546,
              mid_getNumberOfReceivers_f2f64475e4580546,
              mid_getNumberOfSatellites_f2f64475e4580546,
              mid_getProgramName_0090f7797e403f43,
              mid_getReceivers_a6156df500549a58,
              mid_getReferenceClocks_afbf756dd3c251fe,
              mid_getSatelliteSystem_1b72fcc8f550bfc7,
              mid_getSatellites_a6156df500549a58,
              mid_getStationIdentifier_0090f7797e403f43,
              mid_getStationName_0090f7797e403f43,
              mid_getSystemObservationTypes_d6753b7055940a54,
              mid_getTimeScale_63ac10047983bd43,
              mid_getTimeSystem_b58d3545739694ee,
              mid_getTotalNumberOfDataLines_f2f64475e4580546,
              mid_numberOfObsTypes_09b6d9ee3b290945,
              mid_setAgencyName_e939c6558ae8d313,
              mid_setAnalysisCenterID_e939c6558ae8d313,
              mid_setAnalysisCenterName_e939c6558ae8d313,
              mid_setCreationDate_e82d68cd9f886886,
              mid_setCreationDateString_e939c6558ae8d313,
              mid_setCreationTimeString_e939c6558ae8d313,
              mid_setCreationTimeZoneString_e939c6558ae8d313,
              mid_setExternalClockReference_e939c6558ae8d313,
              mid_setFormatVersion_77e0f9a1f260e2e5,
              mid_setFrameName_e939c6558ae8d313,
              mid_setNumberOfLeapSeconds_0a2a1ac2721c0336,
              mid_setNumberOfLeapSecondsGNSS_0a2a1ac2721c0336,
              mid_setProgramName_e939c6558ae8d313,
              mid_setSatelliteSystem_a9204a81fe55aebe,
              mid_setStationIdentifier_e939c6558ae8d313,
              mid_setStationName_e939c6558ae8d313,
              mid_setTimeScale_6d73d536a2f24dd5,
              mid_setTimeSystem_4733fc8266dc541c,
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
