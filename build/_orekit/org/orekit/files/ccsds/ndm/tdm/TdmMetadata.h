#ifndef org_orekit_files_ccsds_ndm_tdm_TdmMetadata_H
#define org_orekit_files_ccsds_ndm_tdm_TdmMetadata_H

#include "org/orekit/files/ccsds/section/Metadata.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {
            class TrackingMode;
            class RangeMode;
            class TimetagReference;
            class IntegrationReference;
            class AngleType;
            class DataQuality;
            class RangeUnits;
            class RangeUnitsConverter;
            class CorrectionApplied;
            class ObservationType;
          }
        }
        namespace definitions {
          class FrameFacade;
        }
      }
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace util {
    class Map;
    class List;
  }
  namespace lang {
    class Integer;
    class Double;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            class TdmMetadata : public ::org::orekit::files::ccsds::section::Metadata {
             public:
              enum {
                mid_init$_a1fa5dae97ea5ed2,
                mid_addEphemerisName_5817b937d38eafc1,
                mid_addParticipant_5817b937d38eafc1,
                mid_addReceiveDelay_d5322b8b512aeb26,
                mid_addTransmitDelay_d5322b8b512aeb26,
                mid_getAngleType_9e0aee69e1fdbc88,
                mid_getCorrectionAberrationDiurnal_b74f83833fdad017,
                mid_getCorrectionAberrationYearly_b74f83833fdad017,
                mid_getCorrectionAngle1_b74f83833fdad017,
                mid_getCorrectionAngle2_b74f83833fdad017,
                mid_getCorrectionDoppler_b74f83833fdad017,
                mid_getCorrectionMagnitude_b74f83833fdad017,
                mid_getCorrectionRange_c24296302549e234,
                mid_getCorrectionRcs_b74f83833fdad017,
                mid_getCorrectionReceive_b74f83833fdad017,
                mid_getCorrectionTransmit_b74f83833fdad017,
                mid_getCorrectionsApplied_e728a459801cd379,
                mid_getDataQuality_ec1341baf8be0be8,
                mid_getDataTypes_e62d3bb06d56d7e3,
                mid_getDopplerCountBias_b74f83833fdad017,
                mid_getDopplerCountScale_b74f83833fdad017,
                mid_getEphemerisNames_810bed48fafb0b9a,
                mid_getFreqOffset_b74f83833fdad017,
                mid_getIntegrationInterval_b74f83833fdad017,
                mid_getIntegrationRef_8756c0a701bf4809,
                mid_getInterpolationDegree_55546ef6a647f39b,
                mid_getInterpolationMethod_1c1fa1e935d6cdcf,
                mid_getMode_f5b184cec54efa86,
                mid_getParticipants_810bed48fafb0b9a,
                mid_getPath_4d095d7a08163110,
                mid_getPath1_4d095d7a08163110,
                mid_getPath2_4d095d7a08163110,
                mid_getRangeMode_56e6fbfab7a821ed,
                mid_getRangeModulus_c24296302549e234,
                mid_getRangeUnits_8590817e5cfdf06b,
                mid_getRawCorrectionRange_b74f83833fdad017,
                mid_getRawRangeModulus_b74f83833fdad017,
                mid_getReceiveBand_1c1fa1e935d6cdcf,
                mid_getReceiveDelays_810bed48fafb0b9a,
                mid_getReferenceFrame_69d8be1b6b0a1a94,
                mid_getStartTime_c325492395d89b24,
                mid_getStopTime_c325492395d89b24,
                mid_getTimetagRef_0150dfe84952dd06,
                mid_getTrackId_1c1fa1e935d6cdcf,
                mid_getTransmitBand_1c1fa1e935d6cdcf,
                mid_getTransmitDelays_810bed48fafb0b9a,
                mid_getTurnaroundDenominator_55546ef6a647f39b,
                mid_getTurnaroundNumerator_55546ef6a647f39b,
                mid_hasDopplerCountRollover_9ab94ac1dc23b105,
                mid_setAngleType_9bcc49b46153434b,
                mid_setCorrectionAberrationDiurnal_8ba9fe7a847cecad,
                mid_setCorrectionAberrationYearly_8ba9fe7a847cecad,
                mid_setCorrectionAngle1_8ba9fe7a847cecad,
                mid_setCorrectionAngle2_8ba9fe7a847cecad,
                mid_setCorrectionDoppler_8ba9fe7a847cecad,
                mid_setCorrectionMagnitude_8ba9fe7a847cecad,
                mid_setCorrectionRcs_8ba9fe7a847cecad,
                mid_setCorrectionReceive_8ba9fe7a847cecad,
                mid_setCorrectionTransmit_8ba9fe7a847cecad,
                mid_setCorrectionsApplied_490361ab6c463716,
                mid_setDataQuality_22128bca9f62416a,
                mid_setDataTypes_0e7c3032c7c93ed3,
                mid_setDopplerCountBias_8ba9fe7a847cecad,
                mid_setDopplerCountRollover_fcb96c98de6fad04,
                mid_setDopplerCountScale_8ba9fe7a847cecad,
                mid_setEphemerisNames_6648520b18d8ef1d,
                mid_setFreqOffset_8ba9fe7a847cecad,
                mid_setIntegrationInterval_8ba9fe7a847cecad,
                mid_setIntegrationRef_936ff1a2ef8eedf4,
                mid_setInterpolationDegree_44ed599e93e8a30c,
                mid_setInterpolationMethod_734b91ac30d5f9b4,
                mid_setMode_b932c0afd0b33537,
                mid_setParticipants_6648520b18d8ef1d,
                mid_setPath_86a2769cb881d388,
                mid_setPath1_86a2769cb881d388,
                mid_setPath2_86a2769cb881d388,
                mid_setRangeMode_1db85cccec5203b9,
                mid_setRangeUnits_8f2df96f08228b85,
                mid_setRawCorrectionRange_8ba9fe7a847cecad,
                mid_setRawRangeModulus_8ba9fe7a847cecad,
                mid_setReceiveBand_734b91ac30d5f9b4,
                mid_setReceiveDelays_6648520b18d8ef1d,
                mid_setReferenceFrame_4755133c5c4c59be,
                mid_setStartTime_02135a6ef25adb4b,
                mid_setStopTime_02135a6ef25adb4b,
                mid_setTimetagRef_ca6ff11c4c143ecb,
                mid_setTrackId_734b91ac30d5f9b4,
                mid_setTransmitBand_734b91ac30d5f9b4,
                mid_setTransmitDelays_6648520b18d8ef1d,
                mid_setTurnaroundDenominator_44ed599e93e8a30c,
                mid_setTurnaroundNumerator_44ed599e93e8a30c,
                mid_validate_8ba9fe7a847cecad,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TdmMetadata(jobject obj) : ::org::orekit::files::ccsds::section::Metadata(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              TdmMetadata(const TdmMetadata& obj) : ::org::orekit::files::ccsds::section::Metadata(obj) {}

              TdmMetadata();

              void addEphemerisName(jint, const ::java::lang::String &) const;
              void addParticipant(jint, const ::java::lang::String &) const;
              void addReceiveDelay(jint, jdouble) const;
              void addTransmitDelay(jint, jdouble) const;
              ::org::orekit::files::ccsds::ndm::tdm::AngleType getAngleType() const;
              jdouble getCorrectionAberrationDiurnal() const;
              jdouble getCorrectionAberrationYearly() const;
              jdouble getCorrectionAngle1() const;
              jdouble getCorrectionAngle2() const;
              jdouble getCorrectionDoppler() const;
              jdouble getCorrectionMagnitude() const;
              jdouble getCorrectionRange(const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter &) const;
              jdouble getCorrectionRcs() const;
              jdouble getCorrectionReceive() const;
              jdouble getCorrectionTransmit() const;
              ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied getCorrectionsApplied() const;
              ::org::orekit::files::ccsds::ndm::tdm::DataQuality getDataQuality() const;
              ::java::util::List getDataTypes() const;
              jdouble getDopplerCountBias() const;
              jdouble getDopplerCountScale() const;
              ::java::util::Map getEphemerisNames() const;
              jdouble getFreqOffset() const;
              jdouble getIntegrationInterval() const;
              ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference getIntegrationRef() const;
              jint getInterpolationDegree() const;
              ::java::lang::String getInterpolationMethod() const;
              ::org::orekit::files::ccsds::ndm::tdm::TrackingMode getMode() const;
              ::java::util::Map getParticipants() const;
              JArray< jint > getPath() const;
              JArray< jint > getPath1() const;
              JArray< jint > getPath2() const;
              ::org::orekit::files::ccsds::ndm::tdm::RangeMode getRangeMode() const;
              jdouble getRangeModulus(const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter &) const;
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnits getRangeUnits() const;
              jdouble getRawCorrectionRange() const;
              jdouble getRawRangeModulus() const;
              ::java::lang::String getReceiveBand() const;
              ::java::util::Map getReceiveDelays() const;
              ::org::orekit::files::ccsds::definitions::FrameFacade getReferenceFrame() const;
              ::org::orekit::time::AbsoluteDate getStartTime() const;
              ::org::orekit::time::AbsoluteDate getStopTime() const;
              ::org::orekit::files::ccsds::ndm::tdm::TimetagReference getTimetagRef() const;
              ::java::lang::String getTrackId() const;
              ::java::lang::String getTransmitBand() const;
              ::java::util::Map getTransmitDelays() const;
              jint getTurnaroundDenominator() const;
              jint getTurnaroundNumerator() const;
              jboolean hasDopplerCountRollover() const;
              void setAngleType(const ::org::orekit::files::ccsds::ndm::tdm::AngleType &) const;
              void setCorrectionAberrationDiurnal(jdouble) const;
              void setCorrectionAberrationYearly(jdouble) const;
              void setCorrectionAngle1(jdouble) const;
              void setCorrectionAngle2(jdouble) const;
              void setCorrectionDoppler(jdouble) const;
              void setCorrectionMagnitude(jdouble) const;
              void setCorrectionRcs(jdouble) const;
              void setCorrectionReceive(jdouble) const;
              void setCorrectionTransmit(jdouble) const;
              void setCorrectionsApplied(const ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied &) const;
              void setDataQuality(const ::org::orekit::files::ccsds::ndm::tdm::DataQuality &) const;
              void setDataTypes(const ::java::util::List &) const;
              void setDopplerCountBias(jdouble) const;
              void setDopplerCountRollover(jboolean) const;
              void setDopplerCountScale(jdouble) const;
              void setEphemerisNames(const ::java::util::Map &) const;
              void setFreqOffset(jdouble) const;
              void setIntegrationInterval(jdouble) const;
              void setIntegrationRef(const ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference &) const;
              void setInterpolationDegree(jint) const;
              void setInterpolationMethod(const ::java::lang::String &) const;
              void setMode(const ::org::orekit::files::ccsds::ndm::tdm::TrackingMode &) const;
              void setParticipants(const ::java::util::Map &) const;
              void setPath(const JArray< jint > &) const;
              void setPath1(const JArray< jint > &) const;
              void setPath2(const JArray< jint > &) const;
              void setRangeMode(const ::org::orekit::files::ccsds::ndm::tdm::RangeMode &) const;
              void setRangeUnits(const ::org::orekit::files::ccsds::ndm::tdm::RangeUnits &) const;
              void setRawCorrectionRange(jdouble) const;
              void setRawRangeModulus(jdouble) const;
              void setReceiveBand(const ::java::lang::String &) const;
              void setReceiveDelays(const ::java::util::Map &) const;
              void setReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade &) const;
              void setStartTime(const ::org::orekit::time::AbsoluteDate &) const;
              void setStopTime(const ::org::orekit::time::AbsoluteDate &) const;
              void setTimetagRef(const ::org::orekit::files::ccsds::ndm::tdm::TimetagReference &) const;
              void setTrackId(const ::java::lang::String &) const;
              void setTransmitBand(const ::java::lang::String &) const;
              void setTransmitDelays(const ::java::util::Map &) const;
              void setTurnaroundDenominator(jint) const;
              void setTurnaroundNumerator(jint) const;
              void validate(jdouble) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {
            extern PyType_Def PY_TYPE_DEF(TdmMetadata);
            extern PyTypeObject *PY_TYPE(TdmMetadata);

            class t_TdmMetadata {
            public:
              PyObject_HEAD
              TdmMetadata object;
              static PyObject *wrap_Object(const TdmMetadata&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
