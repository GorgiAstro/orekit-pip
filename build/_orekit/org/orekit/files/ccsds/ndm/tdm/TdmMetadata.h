#ifndef org_orekit_files_ccsds_ndm_tdm_TdmMetadata_H
#define org_orekit_files_ccsds_ndm_tdm_TdmMetadata_H

#include "org/orekit/files/ccsds/section/Metadata.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {
            class TimetagReference;
            class AngleType;
            class ObservationType;
            class TrackingMode;
            class IntegrationReference;
            class RangeMode;
            class DataQuality;
            class RangeUnits;
            class CorrectionApplied;
            class RangeUnitsConverter;
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
    class List;
    class Map;
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
                mid_init$_ff7cb6c242604316,
                mid_addEphemerisName_a3e920ca64bbfb6f,
                mid_addParticipant_a3e920ca64bbfb6f,
                mid_addReceiveDelay_4320462275d66e78,
                mid_addTransmitDelay_4320462275d66e78,
                mid_getAngleType_619a24380dac151a,
                mid_getCorrectionAberrationDiurnal_9981f74b2d109da6,
                mid_getCorrectionAberrationYearly_9981f74b2d109da6,
                mid_getCorrectionAngle1_9981f74b2d109da6,
                mid_getCorrectionAngle2_9981f74b2d109da6,
                mid_getCorrectionDoppler_9981f74b2d109da6,
                mid_getCorrectionMagnitude_9981f74b2d109da6,
                mid_getCorrectionRange_138e545f4642347d,
                mid_getCorrectionRcs_9981f74b2d109da6,
                mid_getCorrectionReceive_9981f74b2d109da6,
                mid_getCorrectionTransmit_9981f74b2d109da6,
                mid_getCorrectionsApplied_ef22fe8964273249,
                mid_getDataQuality_1a736d9e6c4cec43,
                mid_getDataTypes_d751c1a57012b438,
                mid_getDopplerCountBias_9981f74b2d109da6,
                mid_getDopplerCountScale_9981f74b2d109da6,
                mid_getEphemerisNames_dbcb8bbac6b35e0d,
                mid_getFreqOffset_9981f74b2d109da6,
                mid_getIntegrationInterval_9981f74b2d109da6,
                mid_getIntegrationRef_62aba6fc000f904d,
                mid_getInterpolationDegree_d6ab429752e7c267,
                mid_getInterpolationMethod_d2c8eb4129821f0e,
                mid_getMode_2e6f4b656697c13f,
                mid_getParticipants_dbcb8bbac6b35e0d,
                mid_getPath_d6f20bd740dd34cd,
                mid_getPath1_d6f20bd740dd34cd,
                mid_getPath2_d6f20bd740dd34cd,
                mid_getRangeMode_422e9bf90325259d,
                mid_getRangeModulus_138e545f4642347d,
                mid_getRangeUnits_005cab2b0475811c,
                mid_getRawCorrectionRange_9981f74b2d109da6,
                mid_getRawRangeModulus_9981f74b2d109da6,
                mid_getReceiveBand_d2c8eb4129821f0e,
                mid_getReceiveDelays_dbcb8bbac6b35e0d,
                mid_getReferenceFrame_0fc1562b68204151,
                mid_getStartTime_80e11148db499dda,
                mid_getStopTime_80e11148db499dda,
                mid_getTimetagRef_27f93e75d78a6f80,
                mid_getTrackId_d2c8eb4129821f0e,
                mid_getTransmitBand_d2c8eb4129821f0e,
                mid_getTransmitDelays_dbcb8bbac6b35e0d,
                mid_getTurnaroundDenominator_d6ab429752e7c267,
                mid_getTurnaroundNumerator_d6ab429752e7c267,
                mid_hasDopplerCountRollover_eee3de00fe971136,
                mid_setAngleType_fbce4736c60f6abb,
                mid_setCorrectionAberrationDiurnal_1ad26e8c8c0cd65b,
                mid_setCorrectionAberrationYearly_1ad26e8c8c0cd65b,
                mid_setCorrectionAngle1_1ad26e8c8c0cd65b,
                mid_setCorrectionAngle2_1ad26e8c8c0cd65b,
                mid_setCorrectionDoppler_1ad26e8c8c0cd65b,
                mid_setCorrectionMagnitude_1ad26e8c8c0cd65b,
                mid_setCorrectionRcs_1ad26e8c8c0cd65b,
                mid_setCorrectionReceive_1ad26e8c8c0cd65b,
                mid_setCorrectionTransmit_1ad26e8c8c0cd65b,
                mid_setCorrectionsApplied_0ae77d8288ae6785,
                mid_setDataQuality_3458cd32d0980090,
                mid_setDataTypes_aa335fea495d60e0,
                mid_setDopplerCountBias_1ad26e8c8c0cd65b,
                mid_setDopplerCountRollover_b35db77cae58639e,
                mid_setDopplerCountScale_1ad26e8c8c0cd65b,
                mid_setEphemerisNames_df2bb61624910c2a,
                mid_setFreqOffset_1ad26e8c8c0cd65b,
                mid_setIntegrationInterval_1ad26e8c8c0cd65b,
                mid_setIntegrationRef_b2736fca78ccecd6,
                mid_setInterpolationDegree_8fd427ab23829bf5,
                mid_setInterpolationMethod_105e1eadb709d9ac,
                mid_setMode_b928dbb5a5094752,
                mid_setParticipants_df2bb61624910c2a,
                mid_setPath_d43202153dd284f7,
                mid_setPath1_d43202153dd284f7,
                mid_setPath2_d43202153dd284f7,
                mid_setRangeMode_711df62c906d850c,
                mid_setRangeUnits_3c5bfdcc53ce0556,
                mid_setRawCorrectionRange_1ad26e8c8c0cd65b,
                mid_setRawRangeModulus_1ad26e8c8c0cd65b,
                mid_setReceiveBand_105e1eadb709d9ac,
                mid_setReceiveDelays_df2bb61624910c2a,
                mid_setReferenceFrame_2c8b859a72c0094e,
                mid_setStartTime_8497861b879c83f7,
                mid_setStopTime_8497861b879c83f7,
                mid_setTimetagRef_c7db2db518846dc7,
                mid_setTrackId_105e1eadb709d9ac,
                mid_setTransmitBand_105e1eadb709d9ac,
                mid_setTransmitDelays_df2bb61624910c2a,
                mid_setTurnaroundDenominator_8fd427ab23829bf5,
                mid_setTurnaroundNumerator_8fd427ab23829bf5,
                mid_validate_1ad26e8c8c0cd65b,
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
