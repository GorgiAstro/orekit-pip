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
            mid_init$_0640e6acf969ed28,
            mid_getDataReleaseFlag_412668abc8d889e9,
            mid_getDataType_412668abc8d889e9,
            mid_getDateAndTime_3cffd47377eca18a,
            mid_getEpochIdentifier_412668abc8d889e9,
            mid_getH1CrdString_3cffd47377eca18a,
            mid_getH2CrdString_3cffd47377eca18a,
            mid_getH3CrdString_3cffd47377eca18a,
            mid_getH4CrdString_3cffd47377eca18a,
            mid_getH5CrdString_3cffd47377eca18a,
            mid_getPredictionProvider_3cffd47377eca18a,
            mid_getPredictionType_412668abc8d889e9,
            mid_getQualityIndicator_412668abc8d889e9,
            mid_getRangeType_6a5abbfd63fb4587,
            mid_getSpacecraftEpochTimeScale_412668abc8d889e9,
            mid_getStationName_3cffd47377eca18a,
            mid_getStationNetword_3cffd47377eca18a,
            mid_getSystemIdentifier_412668abc8d889e9,
            mid_getSystemNumber_412668abc8d889e9,
            mid_getSystemOccupancy_412668abc8d889e9,
            mid_getYearOfCentury_412668abc8d889e9,
            mid_isCenterOfMassCorrectionApplied_89b302893bdbe1f1,
            mid_isReceiveAmplitudeCorrectionApplied_89b302893bdbe1f1,
            mid_isStationSystemDelayApplied_89b302893bdbe1f1,
            mid_isTransponderDelayApplied_89b302893bdbe1f1,
            mid_isTroposphericRefractionApplied_89b302893bdbe1f1,
            mid_setDataReleaseFlag_a3da1a935cb37f7b,
            mid_setDataType_a3da1a935cb37f7b,
            mid_setDateAndTime_f5ffdf29129ef90a,
            mid_setEpochIdentifier_a3da1a935cb37f7b,
            mid_setIsCenterOfMassCorrectionApplied_ed2afdb8506b9742,
            mid_setIsReceiveAmplitudeCorrectionApplied_ed2afdb8506b9742,
            mid_setIsStationSystemDelayApplied_ed2afdb8506b9742,
            mid_setIsTransponderDelayApplied_ed2afdb8506b9742,
            mid_setIsTroposphericRefractionApplied_ed2afdb8506b9742,
            mid_setPredictionProvider_f5ffdf29129ef90a,
            mid_setPredictionType_a3da1a935cb37f7b,
            mid_setQualityIndicator_a3da1a935cb37f7b,
            mid_setRangeType_a3da1a935cb37f7b,
            mid_setSpacecraftEpochTimeScale_a3da1a935cb37f7b,
            mid_setStationName_f5ffdf29129ef90a,
            mid_setStationNetword_f5ffdf29129ef90a,
            mid_setSystemIdentifier_a3da1a935cb37f7b,
            mid_setSystemNumber_a3da1a935cb37f7b,
            mid_setSystemOccupancy_a3da1a935cb37f7b,
            mid_setYearOfCentury_a3da1a935cb37f7b,
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
