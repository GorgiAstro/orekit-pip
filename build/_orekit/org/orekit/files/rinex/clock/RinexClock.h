#ifndef org_orekit_files_rinex_clock_RinexClock_H
#define org_orekit_files_rinex_clock_RinexClock_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class TimeSpanMap;
    }
    namespace gnss {
      class TimeSystem;
      class SatelliteSystem;
      class ObservationType;
    }
    namespace files {
      namespace rinex {
        namespace clock {
          class RinexClock$ClockDataLine;
          class RinexClock$Receiver;
          class RinexClock$ReferenceClock;
          class RinexClock$ClockDataType;
        }
        class AppliedDCBS;
        class AppliedPCVS;
      }
    }
    namespace time {
      class AbsoluteDate;
      class TimeScale;
    }
    namespace frames {
      class Frame;
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
              mid_addAppliedDCBS_cacb67a9e2822f90,
              mid_addAppliedPCVS_604ce729c44b1f15,
              mid_addClockData_5a478c5bc24dd562,
              mid_addClockDataType_557d45aa8b705c60,
              mid_addComment_105e1eadb709d9ac,
              mid_addReceiver_2af1c219bbb11516,
              mid_addReferenceClockList_0b0c18b32ea71a29,
              mid_addSatellite_105e1eadb709d9ac,
              mid_addSystemObservationType_741e751991beec0f,
              mid_getAgencyName_d2c8eb4129821f0e,
              mid_getAnalysisCenterID_d2c8eb4129821f0e,
              mid_getAnalysisCenterName_d2c8eb4129821f0e,
              mid_getClockData_dbcb8bbac6b35e0d,
              mid_getClockDataTypes_d751c1a57012b438,
              mid_getComments_d2c8eb4129821f0e,
              mid_getCreationDate_80e11148db499dda,
              mid_getCreationDateString_d2c8eb4129821f0e,
              mid_getCreationTimeString_d2c8eb4129821f0e,
              mid_getCreationTimeZoneString_d2c8eb4129821f0e,
              mid_getExternalClockReference_d2c8eb4129821f0e,
              mid_getFormatVersion_9981f74b2d109da6,
              mid_getFrame_cb151471db4570f0,
              mid_getFrameName_d2c8eb4129821f0e,
              mid_getListAppliedDCBS_d751c1a57012b438,
              mid_getListAppliedPCVS_d751c1a57012b438,
              mid_getNumberOfClockDataTypes_d6ab429752e7c267,
              mid_getNumberOfLeapSeconds_d6ab429752e7c267,
              mid_getNumberOfLeapSecondsGNSS_d6ab429752e7c267,
              mid_getNumberOfReceivers_d6ab429752e7c267,
              mid_getNumberOfSatellites_d6ab429752e7c267,
              mid_getProgramName_d2c8eb4129821f0e,
              mid_getReceivers_d751c1a57012b438,
              mid_getReferenceClocks_d11c7ec0e313e33d,
              mid_getSatelliteSystem_fb0bd27fcc3ba9fc,
              mid_getSatellites_d751c1a57012b438,
              mid_getStationIdentifier_d2c8eb4129821f0e,
              mid_getStationName_d2c8eb4129821f0e,
              mid_getSystemObservationTypes_dbcb8bbac6b35e0d,
              mid_getTimeScale_5e2cac12ab8da943,
              mid_getTimeSystem_6110a08bedf3a63d,
              mid_getTotalNumberOfDataLines_d6ab429752e7c267,
              mid_numberOfObsTypes_29b0cae2b18a86fb,
              mid_setAgencyName_105e1eadb709d9ac,
              mid_setAnalysisCenterID_105e1eadb709d9ac,
              mid_setAnalysisCenterName_105e1eadb709d9ac,
              mid_setCreationDate_8497861b879c83f7,
              mid_setCreationDateString_105e1eadb709d9ac,
              mid_setCreationTimeString_105e1eadb709d9ac,
              mid_setCreationTimeZoneString_105e1eadb709d9ac,
              mid_setExternalClockReference_105e1eadb709d9ac,
              mid_setFormatVersion_1ad26e8c8c0cd65b,
              mid_setFrameName_105e1eadb709d9ac,
              mid_setNumberOfLeapSeconds_8fd427ab23829bf5,
              mid_setNumberOfLeapSecondsGNSS_8fd427ab23829bf5,
              mid_setProgramName_105e1eadb709d9ac,
              mid_setSatelliteSystem_b8157be2fa2780f9,
              mid_setStationIdentifier_105e1eadb709d9ac,
              mid_setStationName_105e1eadb709d9ac,
              mid_setTimeScale_7cb2659f4799e4d2,
              mid_setTimeSystem_70481f478101edcd,
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
