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
            class TimetagReference;
            class AngleType;
            class ObservationType;
            class TrackingMode;
            class DataQuality;
            class CorrectionApplied;
            class RangeUnits;
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
                mid_init$_0fa09c18fee449d5,
                mid_addEphemerisName_eb545b81bcb6baba,
                mid_addParticipant_eb545b81bcb6baba,
                mid_addReceiveDelay_bb79ca80d85d0a66,
                mid_addTransmitDelay_bb79ca80d85d0a66,
                mid_getAngleType_f91b4dea8518961e,
                mid_getCorrectionAberrationDiurnal_dff5885c2c873297,
                mid_getCorrectionAberrationYearly_dff5885c2c873297,
                mid_getCorrectionAngle1_dff5885c2c873297,
                mid_getCorrectionAngle2_dff5885c2c873297,
                mid_getCorrectionDoppler_dff5885c2c873297,
                mid_getCorrectionMagnitude_dff5885c2c873297,
                mid_getCorrectionRange_24af9cf244c434df,
                mid_getCorrectionRcs_dff5885c2c873297,
                mid_getCorrectionReceive_dff5885c2c873297,
                mid_getCorrectionTransmit_dff5885c2c873297,
                mid_getCorrectionsApplied_a2a54e9c1ed7c722,
                mid_getDataQuality_16a8165b3529c8d4,
                mid_getDataTypes_2afa36052df4765d,
                mid_getDopplerCountBias_dff5885c2c873297,
                mid_getDopplerCountScale_dff5885c2c873297,
                mid_getEphemerisNames_6f5a75ccd8c04465,
                mid_getFreqOffset_dff5885c2c873297,
                mid_getIntegrationInterval_dff5885c2c873297,
                mid_getIntegrationRef_e26ae58265a29e20,
                mid_getInterpolationDegree_570ce0828f81a2c1,
                mid_getInterpolationMethod_11b109bd155ca898,
                mid_getMode_7de625188c0e0e3d,
                mid_getParticipants_6f5a75ccd8c04465,
                mid_getPath_d0635cea09dc178c,
                mid_getPath1_d0635cea09dc178c,
                mid_getPath2_d0635cea09dc178c,
                mid_getRangeMode_ddb62a126c432b32,
                mid_getRangeModulus_24af9cf244c434df,
                mid_getRangeUnits_d8e325ed615979df,
                mid_getRawCorrectionRange_dff5885c2c873297,
                mid_getRawRangeModulus_dff5885c2c873297,
                mid_getReceiveBand_11b109bd155ca898,
                mid_getReceiveDelays_6f5a75ccd8c04465,
                mid_getReferenceFrame_5d5dd95b04037824,
                mid_getStartTime_85703d13e302437e,
                mid_getStopTime_85703d13e302437e,
                mid_getTimetagRef_d9da4ce754c0b913,
                mid_getTrackId_11b109bd155ca898,
                mid_getTransmitBand_11b109bd155ca898,
                mid_getTransmitDelays_6f5a75ccd8c04465,
                mid_getTurnaroundDenominator_570ce0828f81a2c1,
                mid_getTurnaroundNumerator_570ce0828f81a2c1,
                mid_hasDopplerCountRollover_b108b35ef48e27bd,
                mid_setAngleType_85e7c7f200e5e122,
                mid_setCorrectionAberrationDiurnal_17db3a65980d3441,
                mid_setCorrectionAberrationYearly_17db3a65980d3441,
                mid_setCorrectionAngle1_17db3a65980d3441,
                mid_setCorrectionAngle2_17db3a65980d3441,
                mid_setCorrectionDoppler_17db3a65980d3441,
                mid_setCorrectionMagnitude_17db3a65980d3441,
                mid_setCorrectionRcs_17db3a65980d3441,
                mid_setCorrectionReceive_17db3a65980d3441,
                mid_setCorrectionTransmit_17db3a65980d3441,
                mid_setCorrectionsApplied_2153405ea927d10c,
                mid_setDataQuality_0d2938ec981ab5ae,
                mid_setDataTypes_de3e021e7266b71e,
                mid_setDopplerCountBias_17db3a65980d3441,
                mid_setDopplerCountRollover_bd04c9335fb9e4cf,
                mid_setDopplerCountScale_17db3a65980d3441,
                mid_setEphemerisNames_db8de8bc54857165,
                mid_setFreqOffset_17db3a65980d3441,
                mid_setIntegrationInterval_17db3a65980d3441,
                mid_setIntegrationRef_c2a64cb80d011139,
                mid_setInterpolationDegree_99803b0791f320ff,
                mid_setInterpolationMethod_d0bc48d5b00dc40c,
                mid_setMode_4401f9bb72642424,
                mid_setParticipants_db8de8bc54857165,
                mid_setPath_d147d7ce001e2d45,
                mid_setPath1_d147d7ce001e2d45,
                mid_setPath2_d147d7ce001e2d45,
                mid_setRangeMode_fbab2027dea0f22f,
                mid_setRangeUnits_957470214b89d066,
                mid_setRawCorrectionRange_17db3a65980d3441,
                mid_setRawRangeModulus_17db3a65980d3441,
                mid_setReceiveBand_d0bc48d5b00dc40c,
                mid_setReceiveDelays_db8de8bc54857165,
                mid_setReferenceFrame_849bc9e3b38b9bcb,
                mid_setStartTime_600a2a61652bc473,
                mid_setStopTime_600a2a61652bc473,
                mid_setTimetagRef_858a8a66d8c1b242,
                mid_setTrackId_d0bc48d5b00dc40c,
                mid_setTransmitBand_d0bc48d5b00dc40c,
                mid_setTransmitDelays_db8de8bc54857165,
                mid_setTurnaroundDenominator_99803b0791f320ff,
                mid_setTurnaroundNumerator_99803b0791f320ff,
                mid_validate_17db3a65980d3441,
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
