#ifndef org_orekit_files_ilrs_CRDHeader_H
#define org_orekit_files_ilrs_CRDHeader_H

#include "org/orekit/files/ilrs/ILRSHeader.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        class CRDHeader$RangeType;
      }
    }
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
            mid_init$_ff7cb6c242604316,
            mid_getDataReleaseFlag_d6ab429752e7c267,
            mid_getDataType_d6ab429752e7c267,
            mid_getDateAndTime_d2c8eb4129821f0e,
            mid_getEpochIdentifier_d6ab429752e7c267,
            mid_getH1CrdString_d2c8eb4129821f0e,
            mid_getH2CrdString_d2c8eb4129821f0e,
            mid_getH3CrdString_d2c8eb4129821f0e,
            mid_getH4CrdString_d2c8eb4129821f0e,
            mid_getH5CrdString_d2c8eb4129821f0e,
            mid_getPredictionProvider_d2c8eb4129821f0e,
            mid_getPredictionType_d6ab429752e7c267,
            mid_getQualityIndicator_d6ab429752e7c267,
            mid_getRangeType_c43c7378c09765af,
            mid_getSpacecraftEpochTimeScale_d6ab429752e7c267,
            mid_getStationName_d2c8eb4129821f0e,
            mid_getStationNetword_d2c8eb4129821f0e,
            mid_getSystemIdentifier_d6ab429752e7c267,
            mid_getSystemNumber_d6ab429752e7c267,
            mid_getSystemOccupancy_d6ab429752e7c267,
            mid_getYearOfCentury_d6ab429752e7c267,
            mid_isCenterOfMassCorrectionApplied_eee3de00fe971136,
            mid_isReceiveAmplitudeCorrectionApplied_eee3de00fe971136,
            mid_isStationSystemDelayApplied_eee3de00fe971136,
            mid_isTransponderDelayApplied_eee3de00fe971136,
            mid_isTroposphericRefractionApplied_eee3de00fe971136,
            mid_setDataReleaseFlag_8fd427ab23829bf5,
            mid_setDataType_8fd427ab23829bf5,
            mid_setDateAndTime_105e1eadb709d9ac,
            mid_setEpochIdentifier_8fd427ab23829bf5,
            mid_setIsCenterOfMassCorrectionApplied_b35db77cae58639e,
            mid_setIsReceiveAmplitudeCorrectionApplied_b35db77cae58639e,
            mid_setIsStationSystemDelayApplied_b35db77cae58639e,
            mid_setIsTransponderDelayApplied_b35db77cae58639e,
            mid_setIsTroposphericRefractionApplied_b35db77cae58639e,
            mid_setPredictionProvider_105e1eadb709d9ac,
            mid_setPredictionType_8fd427ab23829bf5,
            mid_setQualityIndicator_8fd427ab23829bf5,
            mid_setRangeType_8fd427ab23829bf5,
            mid_setSpacecraftEpochTimeScale_8fd427ab23829bf5,
            mid_setStationName_105e1eadb709d9ac,
            mid_setStationNetword_105e1eadb709d9ac,
            mid_setSystemIdentifier_8fd427ab23829bf5,
            mid_setSystemNumber_8fd427ab23829bf5,
            mid_setSystemOccupancy_8fd427ab23829bf5,
            mid_setYearOfCentury_8fd427ab23829bf5,
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
