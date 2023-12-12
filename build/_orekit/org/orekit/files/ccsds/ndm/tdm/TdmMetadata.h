#ifndef org_orekit_files_ccsds_ndm_tdm_TdmMetadata_H
#define org_orekit_files_ccsds_ndm_tdm_TdmMetadata_H

#include "org/orekit/files/ccsds/section/Metadata.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {
            class RangeUnitsConverter;
            class IntegrationReference;
            class CorrectionApplied;
            class TrackingMode;
            class ObservationType;
            class RangeUnits;
            class AngleType;
            class DataQuality;
            class TimetagReference;
            class RangeMode;
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
                mid_init$_0640e6acf969ed28,
                mid_addEphemerisName_da9d52f3cfda13c8,
                mid_addParticipant_da9d52f3cfda13c8,
                mid_addReceiveDelay_89aad365fb0ed8da,
                mid_addTransmitDelay_89aad365fb0ed8da,
                mid_getAngleType_ef405ad40cd92a7e,
                mid_getCorrectionAberrationDiurnal_557b8123390d8d0c,
                mid_getCorrectionAberrationYearly_557b8123390d8d0c,
                mid_getCorrectionAngle1_557b8123390d8d0c,
                mid_getCorrectionAngle2_557b8123390d8d0c,
                mid_getCorrectionDoppler_557b8123390d8d0c,
                mid_getCorrectionMagnitude_557b8123390d8d0c,
                mid_getCorrectionRange_4a1bf2149c39693a,
                mid_getCorrectionRcs_557b8123390d8d0c,
                mid_getCorrectionReceive_557b8123390d8d0c,
                mid_getCorrectionTransmit_557b8123390d8d0c,
                mid_getCorrectionsApplied_6df1a95227c350c6,
                mid_getDataQuality_425db0c040a6afcc,
                mid_getDataTypes_0d9551367f7ecdef,
                mid_getDopplerCountBias_557b8123390d8d0c,
                mid_getDopplerCountScale_557b8123390d8d0c,
                mid_getEphemerisNames_1e62c2f73fbdd1c4,
                mid_getFreqOffset_557b8123390d8d0c,
                mid_getIntegrationInterval_557b8123390d8d0c,
                mid_getIntegrationRef_f030f85e9f3bdae3,
                mid_getInterpolationDegree_412668abc8d889e9,
                mid_getInterpolationMethod_3cffd47377eca18a,
                mid_getMode_9f8d1c4bf7ce4ce2,
                mid_getParticipants_1e62c2f73fbdd1c4,
                mid_getPath_1b41cf9ebf653611,
                mid_getPath1_1b41cf9ebf653611,
                mid_getPath2_1b41cf9ebf653611,
                mid_getRangeMode_0f63cbed32b786d1,
                mid_getRangeModulus_4a1bf2149c39693a,
                mid_getRangeUnits_b0ed1cfe82e0e171,
                mid_getRawCorrectionRange_557b8123390d8d0c,
                mid_getRawRangeModulus_557b8123390d8d0c,
                mid_getReceiveBand_3cffd47377eca18a,
                mid_getReceiveDelays_1e62c2f73fbdd1c4,
                mid_getReferenceFrame_98f5fcaff3e3f9d2,
                mid_getStartTime_7a97f7e149e79afb,
                mid_getStopTime_7a97f7e149e79afb,
                mid_getTimetagRef_d21e6b8027892887,
                mid_getTrackId_3cffd47377eca18a,
                mid_getTransmitBand_3cffd47377eca18a,
                mid_getTransmitDelays_1e62c2f73fbdd1c4,
                mid_getTurnaroundDenominator_412668abc8d889e9,
                mid_getTurnaroundNumerator_412668abc8d889e9,
                mid_hasDopplerCountRollover_89b302893bdbe1f1,
                mid_setAngleType_5cf2f2232df75738,
                mid_setCorrectionAberrationDiurnal_10f281d777284cea,
                mid_setCorrectionAberrationYearly_10f281d777284cea,
                mid_setCorrectionAngle1_10f281d777284cea,
                mid_setCorrectionAngle2_10f281d777284cea,
                mid_setCorrectionDoppler_10f281d777284cea,
                mid_setCorrectionMagnitude_10f281d777284cea,
                mid_setCorrectionRcs_10f281d777284cea,
                mid_setCorrectionReceive_10f281d777284cea,
                mid_setCorrectionTransmit_10f281d777284cea,
                mid_setCorrectionsApplied_853aba3eca5df956,
                mid_setDataQuality_b4d3240497d1d1f8,
                mid_setDataTypes_4ccaedadb068bdeb,
                mid_setDopplerCountBias_10f281d777284cea,
                mid_setDopplerCountRollover_ed2afdb8506b9742,
                mid_setDopplerCountScale_10f281d777284cea,
                mid_setEphemerisNames_6ba01303bcce0307,
                mid_setFreqOffset_10f281d777284cea,
                mid_setIntegrationInterval_10f281d777284cea,
                mid_setIntegrationRef_151c4a44acd6ee3d,
                mid_setInterpolationDegree_a3da1a935cb37f7b,
                mid_setInterpolationMethod_f5ffdf29129ef90a,
                mid_setMode_ea7e7f2a295e89e0,
                mid_setParticipants_6ba01303bcce0307,
                mid_setPath_ec63cb8a58ef5a54,
                mid_setPath1_ec63cb8a58ef5a54,
                mid_setPath2_ec63cb8a58ef5a54,
                mid_setRangeMode_7d31aa302f033c9a,
                mid_setRangeUnits_dc3a41de9e28ac2a,
                mid_setRawCorrectionRange_10f281d777284cea,
                mid_setRawRangeModulus_10f281d777284cea,
                mid_setReceiveBand_f5ffdf29129ef90a,
                mid_setReceiveDelays_6ba01303bcce0307,
                mid_setReferenceFrame_f55eee1236275bb1,
                mid_setStartTime_20affcbd28542333,
                mid_setStopTime_20affcbd28542333,
                mid_setTimetagRef_2388f3920669c732,
                mid_setTrackId_f5ffdf29129ef90a,
                mid_setTransmitBand_f5ffdf29129ef90a,
                mid_setTransmitDelays_6ba01303bcce0307,
                mid_setTurnaroundDenominator_a3da1a935cb37f7b,
                mid_setTurnaroundNumerator_a3da1a935cb37f7b,
                mid_validate_10f281d777284cea,
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
