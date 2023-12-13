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
            mid_init$_a1fa5dae97ea5ed2,
            mid_getDataReleaseFlag_55546ef6a647f39b,
            mid_getDataType_55546ef6a647f39b,
            mid_getDateAndTime_1c1fa1e935d6cdcf,
            mid_getEpochIdentifier_55546ef6a647f39b,
            mid_getH1CrdString_1c1fa1e935d6cdcf,
            mid_getH2CrdString_1c1fa1e935d6cdcf,
            mid_getH3CrdString_1c1fa1e935d6cdcf,
            mid_getH4CrdString_1c1fa1e935d6cdcf,
            mid_getH5CrdString_1c1fa1e935d6cdcf,
            mid_getPredictionProvider_1c1fa1e935d6cdcf,
            mid_getPredictionType_55546ef6a647f39b,
            mid_getQualityIndicator_55546ef6a647f39b,
            mid_getRangeType_54a37f66575b569a,
            mid_getSpacecraftEpochTimeScale_55546ef6a647f39b,
            mid_getStationName_1c1fa1e935d6cdcf,
            mid_getStationNetword_1c1fa1e935d6cdcf,
            mid_getSystemIdentifier_55546ef6a647f39b,
            mid_getSystemNumber_55546ef6a647f39b,
            mid_getSystemOccupancy_55546ef6a647f39b,
            mid_getYearOfCentury_55546ef6a647f39b,
            mid_isCenterOfMassCorrectionApplied_9ab94ac1dc23b105,
            mid_isReceiveAmplitudeCorrectionApplied_9ab94ac1dc23b105,
            mid_isStationSystemDelayApplied_9ab94ac1dc23b105,
            mid_isTransponderDelayApplied_9ab94ac1dc23b105,
            mid_isTroposphericRefractionApplied_9ab94ac1dc23b105,
            mid_setDataReleaseFlag_44ed599e93e8a30c,
            mid_setDataType_44ed599e93e8a30c,
            mid_setDateAndTime_734b91ac30d5f9b4,
            mid_setEpochIdentifier_44ed599e93e8a30c,
            mid_setIsCenterOfMassCorrectionApplied_fcb96c98de6fad04,
            mid_setIsReceiveAmplitudeCorrectionApplied_fcb96c98de6fad04,
            mid_setIsStationSystemDelayApplied_fcb96c98de6fad04,
            mid_setIsTransponderDelayApplied_fcb96c98de6fad04,
            mid_setIsTroposphericRefractionApplied_fcb96c98de6fad04,
            mid_setPredictionProvider_734b91ac30d5f9b4,
            mid_setPredictionType_44ed599e93e8a30c,
            mid_setQualityIndicator_44ed599e93e8a30c,
            mid_setRangeType_44ed599e93e8a30c,
            mid_setSpacecraftEpochTimeScale_44ed599e93e8a30c,
            mid_setStationName_734b91ac30d5f9b4,
            mid_setStationNetword_734b91ac30d5f9b4,
            mid_setSystemIdentifier_44ed599e93e8a30c,
            mid_setSystemNumber_44ed599e93e8a30c,
            mid_setSystemOccupancy_44ed599e93e8a30c,
            mid_setYearOfCentury_44ed599e93e8a30c,
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
