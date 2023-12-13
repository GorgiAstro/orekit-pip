#ifndef org_orekit_files_ilrs_CPFHeader_H
#define org_orekit_files_ilrs_CPFHeader_H

#include "org/orekit/files/ilrs/ILRSHeader.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
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

        class CPFHeader : public ::org::orekit::files::ilrs::ILRSHeader {
         public:
          enum {
            mid_init$_a1fa5dae97ea5ed2,
            mid_getCenterOfMassOffset_b74f83833fdad017,
            mid_getPrf_b74f83833fdad017,
            mid_getRefFrame_2c51111cc6894ba1,
            mid_getRefFrameId_55546ef6a647f39b,
            mid_getRotationalAngleType_55546ef6a647f39b,
            mid_getSource_1c1fa1e935d6cdcf,
            mid_getStep_55546ef6a647f39b,
            mid_getSubDailySequenceNumber_55546ef6a647f39b,
            mid_getTranspClkRef_b74f83833fdad017,
            mid_getTranspOscDrift_b74f83833fdad017,
            mid_getTranspTransmitDelay_b74f83833fdad017,
            mid_getTranspUtcOffset_b74f83833fdad017,
            mid_isCenterOfMassCorrectionApplied_9ab94ac1dc23b105,
            mid_isCompatibleWithTIVs_9ab94ac1dc23b105,
            mid_setCenterOfMassOffset_8ba9fe7a847cecad,
            mid_setIsCenterOfMassCorrectionApplied_fcb96c98de6fad04,
            mid_setIsCompatibleWithTIVs_fcb96c98de6fad04,
            mid_setPrf_8ba9fe7a847cecad,
            mid_setRefFrame_237ae1c2ddd68062,
            mid_setRefFrameId_44ed599e93e8a30c,
            mid_setRotationalAngleType_44ed599e93e8a30c,
            mid_setSource_734b91ac30d5f9b4,
            mid_setStep_44ed599e93e8a30c,
            mid_setSubDailySequenceNumber_44ed599e93e8a30c,
            mid_setTranspClkRef_8ba9fe7a847cecad,
            mid_setTranspOscDrift_8ba9fe7a847cecad,
            mid_setTranspTransmitDelay_8ba9fe7a847cecad,
            mid_setTranspUtcOffset_8ba9fe7a847cecad,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CPFHeader(jobject obj) : ::org::orekit::files::ilrs::ILRSHeader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CPFHeader(const CPFHeader& obj) : ::org::orekit::files::ilrs::ILRSHeader(obj) {}

          CPFHeader();

          jdouble getCenterOfMassOffset() const;
          jdouble getPrf() const;
          ::org::orekit::frames::Frame getRefFrame() const;
          jint getRefFrameId() const;
          jint getRotationalAngleType() const;
          ::java::lang::String getSource() const;
          jint getStep() const;
          jint getSubDailySequenceNumber() const;
          jdouble getTranspClkRef() const;
          jdouble getTranspOscDrift() const;
          jdouble getTranspTransmitDelay() const;
          jdouble getTranspUtcOffset() const;
          jboolean isCenterOfMassCorrectionApplied() const;
          jboolean isCompatibleWithTIVs() const;
          void setCenterOfMassOffset(jdouble) const;
          void setIsCenterOfMassCorrectionApplied(jboolean) const;
          void setIsCompatibleWithTIVs(jboolean) const;
          void setPrf(jdouble) const;
          void setRefFrame(const ::org::orekit::frames::Frame &) const;
          void setRefFrameId(jint) const;
          void setRotationalAngleType(jint) const;
          void setSource(const ::java::lang::String &) const;
          void setStep(jint) const;
          void setSubDailySequenceNumber(jint) const;
          void setTranspClkRef(jdouble) const;
          void setTranspOscDrift(jdouble) const;
          void setTranspTransmitDelay(jdouble) const;
          void setTranspUtcOffset(jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(CPFHeader);
        extern PyTypeObject *PY_TYPE(CPFHeader);

        class t_CPFHeader {
        public:
          PyObject_HEAD
          CPFHeader object;
          static PyObject *wrap_Object(const CPFHeader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
