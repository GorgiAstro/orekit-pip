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
            mid_init$_7ae3461a92a43152,
            mid_getDataReleaseFlag_f2f64475e4580546,
            mid_getDataType_f2f64475e4580546,
            mid_getDateAndTime_0090f7797e403f43,
            mid_getEpochIdentifier_f2f64475e4580546,
            mid_getH1CrdString_0090f7797e403f43,
            mid_getH2CrdString_0090f7797e403f43,
            mid_getH3CrdString_0090f7797e403f43,
            mid_getH4CrdString_0090f7797e403f43,
            mid_getH5CrdString_0090f7797e403f43,
            mid_getPredictionProvider_0090f7797e403f43,
            mid_getPredictionType_f2f64475e4580546,
            mid_getQualityIndicator_f2f64475e4580546,
            mid_getRangeType_45572137f73e2f07,
            mid_getSpacecraftEpochTimeScale_f2f64475e4580546,
            mid_getStationName_0090f7797e403f43,
            mid_getStationNetword_0090f7797e403f43,
            mid_getSystemIdentifier_f2f64475e4580546,
            mid_getSystemNumber_f2f64475e4580546,
            mid_getSystemOccupancy_f2f64475e4580546,
            mid_getYearOfCentury_f2f64475e4580546,
            mid_isCenterOfMassCorrectionApplied_e470b6d9e0d979db,
            mid_isReceiveAmplitudeCorrectionApplied_e470b6d9e0d979db,
            mid_isStationSystemDelayApplied_e470b6d9e0d979db,
            mid_isTransponderDelayApplied_e470b6d9e0d979db,
            mid_isTroposphericRefractionApplied_e470b6d9e0d979db,
            mid_setDataReleaseFlag_0a2a1ac2721c0336,
            mid_setDataType_0a2a1ac2721c0336,
            mid_setDateAndTime_e939c6558ae8d313,
            mid_setEpochIdentifier_0a2a1ac2721c0336,
            mid_setIsCenterOfMassCorrectionApplied_50a2e0b139e80a58,
            mid_setIsReceiveAmplitudeCorrectionApplied_50a2e0b139e80a58,
            mid_setIsStationSystemDelayApplied_50a2e0b139e80a58,
            mid_setIsTransponderDelayApplied_50a2e0b139e80a58,
            mid_setIsTroposphericRefractionApplied_50a2e0b139e80a58,
            mid_setPredictionProvider_e939c6558ae8d313,
            mid_setPredictionType_0a2a1ac2721c0336,
            mid_setQualityIndicator_0a2a1ac2721c0336,
            mid_setRangeType_0a2a1ac2721c0336,
            mid_setSpacecraftEpochTimeScale_0a2a1ac2721c0336,
            mid_setStationName_e939c6558ae8d313,
            mid_setStationNetword_e939c6558ae8d313,
            mid_setSystemIdentifier_0a2a1ac2721c0336,
            mid_setSystemNumber_0a2a1ac2721c0336,
            mid_setSystemOccupancy_0a2a1ac2721c0336,
            mid_setYearOfCentury_0a2a1ac2721c0336,
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
