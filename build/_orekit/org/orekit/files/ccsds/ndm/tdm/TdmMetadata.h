#ifndef org_orekit_files_ccsds_ndm_tdm_TdmMetadata_H
#define org_orekit_files_ccsds_ndm_tdm_TdmMetadata_H

#include "org/orekit/files/ccsds/section/Metadata.h"

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
namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class FrameFacade;
        }
        namespace ndm {
          namespace tdm {
            class ObservationType;
            class TimetagReference;
            class TrackingMode;
            class RangeMode;
            class RangeUnitsConverter;
            class AngleType;
            class DataQuality;
            class CorrectionApplied;
            class RangeUnits;
            class IntegrationReference;
          }
        }
      }
    }
    namespace time {
      class AbsoluteDate;
    }
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
                mid_init$_7ae3461a92a43152,
                mid_addEphemerisName_46ad99eaf34b9cef,
                mid_addParticipant_46ad99eaf34b9cef,
                mid_addReceiveDelay_987a5fb872043b12,
                mid_addTransmitDelay_987a5fb872043b12,
                mid_getAngleType_0e6582a7efa17f8f,
                mid_getCorrectionAberrationDiurnal_456d9a2f64d6b28d,
                mid_getCorrectionAberrationYearly_456d9a2f64d6b28d,
                mid_getCorrectionAngle1_456d9a2f64d6b28d,
                mid_getCorrectionAngle2_456d9a2f64d6b28d,
                mid_getCorrectionDoppler_456d9a2f64d6b28d,
                mid_getCorrectionMagnitude_456d9a2f64d6b28d,
                mid_getCorrectionRange_5fb18b378e5bf81a,
                mid_getCorrectionRcs_456d9a2f64d6b28d,
                mid_getCorrectionReceive_456d9a2f64d6b28d,
                mid_getCorrectionTransmit_456d9a2f64d6b28d,
                mid_getCorrectionsApplied_9b7340badba22846,
                mid_getDataQuality_4a340da992ad1d62,
                mid_getDataTypes_a6156df500549a58,
                mid_getDopplerCountBias_456d9a2f64d6b28d,
                mid_getDopplerCountScale_456d9a2f64d6b28d,
                mid_getEphemerisNames_d6753b7055940a54,
                mid_getFreqOffset_456d9a2f64d6b28d,
                mid_getIntegrationInterval_456d9a2f64d6b28d,
                mid_getIntegrationRef_e6ffda0ed65382f1,
                mid_getInterpolationDegree_f2f64475e4580546,
                mid_getInterpolationMethod_0090f7797e403f43,
                mid_getMode_3f8e1b990482c3c8,
                mid_getParticipants_d6753b7055940a54,
                mid_getPath_d8ead0d90ce828b0,
                mid_getPath1_d8ead0d90ce828b0,
                mid_getPath2_d8ead0d90ce828b0,
                mid_getRangeMode_e2146da89ec090a4,
                mid_getRangeModulus_5fb18b378e5bf81a,
                mid_getRangeUnits_629565d88137357c,
                mid_getRawCorrectionRange_456d9a2f64d6b28d,
                mid_getRawRangeModulus_456d9a2f64d6b28d,
                mid_getReceiveBand_0090f7797e403f43,
                mid_getReceiveDelays_d6753b7055940a54,
                mid_getReferenceFrame_aa70fdb14ae9305f,
                mid_getStartTime_aaa854c403487cf3,
                mid_getStopTime_aaa854c403487cf3,
                mid_getTimetagRef_8a5bcf997edee08a,
                mid_getTrackId_0090f7797e403f43,
                mid_getTransmitBand_0090f7797e403f43,
                mid_getTransmitDelays_d6753b7055940a54,
                mid_getTurnaroundDenominator_f2f64475e4580546,
                mid_getTurnaroundNumerator_f2f64475e4580546,
                mid_hasDopplerCountRollover_e470b6d9e0d979db,
                mid_setAngleType_984d46f302e9b054,
                mid_setCorrectionAberrationDiurnal_77e0f9a1f260e2e5,
                mid_setCorrectionAberrationYearly_77e0f9a1f260e2e5,
                mid_setCorrectionAngle1_77e0f9a1f260e2e5,
                mid_setCorrectionAngle2_77e0f9a1f260e2e5,
                mid_setCorrectionDoppler_77e0f9a1f260e2e5,
                mid_setCorrectionMagnitude_77e0f9a1f260e2e5,
                mid_setCorrectionRcs_77e0f9a1f260e2e5,
                mid_setCorrectionReceive_77e0f9a1f260e2e5,
                mid_setCorrectionTransmit_77e0f9a1f260e2e5,
                mid_setCorrectionsApplied_a5d93472fc995699,
                mid_setDataQuality_42421ed5da7fc944,
                mid_setDataTypes_65de9727799c5641,
                mid_setDopplerCountBias_77e0f9a1f260e2e5,
                mid_setDopplerCountRollover_50a2e0b139e80a58,
                mid_setDopplerCountScale_77e0f9a1f260e2e5,
                mid_setEphemerisNames_8b4e3987d7532731,
                mid_setFreqOffset_77e0f9a1f260e2e5,
                mid_setIntegrationInterval_77e0f9a1f260e2e5,
                mid_setIntegrationRef_b2ff161f33d465e1,
                mid_setInterpolationDegree_0a2a1ac2721c0336,
                mid_setInterpolationMethod_e939c6558ae8d313,
                mid_setMode_7061a7592bf52da5,
                mid_setParticipants_8b4e3987d7532731,
                mid_setPath_3b603738d1eb3233,
                mid_setPath1_3b603738d1eb3233,
                mid_setPath2_3b603738d1eb3233,
                mid_setRangeMode_70f75844a01d918c,
                mid_setRangeUnits_0815bfffcdc67b75,
                mid_setRawCorrectionRange_77e0f9a1f260e2e5,
                mid_setRawRangeModulus_77e0f9a1f260e2e5,
                mid_setReceiveBand_e939c6558ae8d313,
                mid_setReceiveDelays_8b4e3987d7532731,
                mid_setReferenceFrame_a455f3ff24eb0b47,
                mid_setStartTime_e82d68cd9f886886,
                mid_setStopTime_e82d68cd9f886886,
                mid_setTimetagRef_1e44e5daa236bf14,
                mid_setTrackId_e939c6558ae8d313,
                mid_setTransmitBand_e939c6558ae8d313,
                mid_setTransmitDelays_8b4e3987d7532731,
                mid_setTurnaroundDenominator_0a2a1ac2721c0336,
                mid_setTurnaroundNumerator_0a2a1ac2721c0336,
                mid_validate_77e0f9a1f260e2e5,
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
