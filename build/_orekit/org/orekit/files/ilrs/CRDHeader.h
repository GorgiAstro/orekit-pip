#ifndef org_orekit_files_ilrs_CRDHeader_H
#define org_orekit_files_ilrs_CRDHeader_H

#include "org/orekit/files/ilrs/ILRSHeader.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        class CRDHeader$RangeType;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        class CRDHeader : public ::org::orekit::files::ilrs::ILRSHeader {
         public:
          enum {
            mid_init$_0fa09c18fee449d5,
            mid_getDataReleaseFlag_570ce0828f81a2c1,
            mid_getDataType_570ce0828f81a2c1,
            mid_getDateAndTime_11b109bd155ca898,
            mid_getEpochIdentifier_570ce0828f81a2c1,
            mid_getH1CrdString_11b109bd155ca898,
            mid_getH2CrdString_11b109bd155ca898,
            mid_getH3CrdString_11b109bd155ca898,
            mid_getH4CrdString_11b109bd155ca898,
            mid_getH5CrdString_11b109bd155ca898,
            mid_getPredictionProvider_11b109bd155ca898,
            mid_getPredictionType_570ce0828f81a2c1,
            mid_getQualityIndicator_570ce0828f81a2c1,
            mid_getRangeType_a6440c37074837d9,
            mid_getSpacecraftEpochTimeScale_570ce0828f81a2c1,
            mid_getStationName_11b109bd155ca898,
            mid_getStationNetword_11b109bd155ca898,
            mid_getSystemIdentifier_570ce0828f81a2c1,
            mid_getSystemNumber_570ce0828f81a2c1,
            mid_getSystemOccupancy_570ce0828f81a2c1,
            mid_getYearOfCentury_570ce0828f81a2c1,
            mid_isCenterOfMassCorrectionApplied_b108b35ef48e27bd,
            mid_isReceiveAmplitudeCorrectionApplied_b108b35ef48e27bd,
            mid_isStationSystemDelayApplied_b108b35ef48e27bd,
            mid_isTransponderDelayApplied_b108b35ef48e27bd,
            mid_isTroposphericRefractionApplied_b108b35ef48e27bd,
            mid_setDataReleaseFlag_99803b0791f320ff,
            mid_setDataType_99803b0791f320ff,
            mid_setDateAndTime_d0bc48d5b00dc40c,
            mid_setEpochIdentifier_99803b0791f320ff,
            mid_setIsCenterOfMassCorrectionApplied_bd04c9335fb9e4cf,
            mid_setIsReceiveAmplitudeCorrectionApplied_bd04c9335fb9e4cf,
            mid_setIsStationSystemDelayApplied_bd04c9335fb9e4cf,
            mid_setIsTransponderDelayApplied_bd04c9335fb9e4cf,
            mid_setIsTroposphericRefractionApplied_bd04c9335fb9e4cf,
            mid_setPredictionProvider_d0bc48d5b00dc40c,
            mid_setPredictionType_99803b0791f320ff,
            mid_setQualityIndicator_99803b0791f320ff,
            mid_setRangeType_99803b0791f320ff,
            mid_setSpacecraftEpochTimeScale_99803b0791f320ff,
            mid_setStationName_d0bc48d5b00dc40c,
            mid_setStationNetword_d0bc48d5b00dc40c,
            mid_setSystemIdentifier_99803b0791f320ff,
            mid_setSystemNumber_99803b0791f320ff,
            mid_setSystemOccupancy_99803b0791f320ff,
            mid_setYearOfCentury_99803b0791f320ff,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CRDHeader(jobject obj) : ::org::orekit::files::ilrs::ILRSHeader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CRDHeader(const CRDHeader& obj) : ::org::orekit::files::ilrs::ILRSHeader(obj) {}

          CRDHeader();

          jint getDataReleaseFlag() const;
          jint getDataType() const;
          ::java::lang::String getDateAndTime() const;
          jint getEpochIdentifier() const;
          ::java::lang::String getH1CrdString() const;
          ::java::lang::String getH2CrdString() const;
          ::java::lang::String getH3CrdString() const;
          ::java::lang::String getH4CrdString() const;
          ::java::lang::String getH5CrdString() const;
          ::java::lang::String getPredictionProvider() const;
          jint getPredictionType() const;
          jint getQualityIndicator() const;
          ::org::orekit::files::ilrs::CRDHeader$RangeType getRangeType() const;
          jint getSpacecraftEpochTimeScale() const;
          ::java::lang::String getStationName() const;
          ::java::lang::String getStationNetword() const;
          jint getSystemIdentifier() const;
          jint getSystemNumber() const;
          jint getSystemOccupancy() const;
          jint getYearOfCentury() const;
          jboolean isCenterOfMassCorrectionApplied() const;
          jboolean isReceiveAmplitudeCorrectionApplied() const;
          jboolean isStationSystemDelayApplied() const;
          jboolean isTransponderDelayApplied() const;
          jboolean isTroposphericRefractionApplied() const;
          void setDataReleaseFlag(jint) const;
          void setDataType(jint) const;
          void setDateAndTime(const ::java::lang::String &) const;
          void setEpochIdentifier(jint) const;
          void setIsCenterOfMassCorrectionApplied(jboolean) const;
          void setIsReceiveAmplitudeCorrectionApplied(jboolean) const;
          void setIsStationSystemDelayApplied(jboolean) const;
          void setIsTransponderDelayApplied(jboolean) const;
          void setIsTroposphericRefractionApplied(jboolean) const;
          void setPredictionProvider(const ::java::lang::String &) const;
          void setPredictionType(jint) const;
          void setQualityIndicator(jint) const;
          void setRangeType(jint) const;
          void setSpacecraftEpochTimeScale(jint) const;
          void setStationName(const ::java::lang::String &) const;
          void setStationNetword(const ::java::lang::String &) const;
          void setSystemIdentifier(jint) const;
          void setSystemNumber(jint) const;
          void setSystemOccupancy(jint) const;
          void setYearOfCentury(jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        extern PyType_Def PY_TYPE_DEF(CRDHeader);
        extern PyTypeObject *PY_TYPE(CRDHeader);

        class t_CRDHeader {
        public:
          PyObject_HEAD
          CRDHeader object;
          static PyObject *wrap_Object(const CRDHeader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
