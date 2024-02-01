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
            mid_init$_ff7cb6c242604316,
            mid_getCenterOfMassOffset_9981f74b2d109da6,
            mid_getPrf_9981f74b2d109da6,
            mid_getRefFrame_cb151471db4570f0,
            mid_getRefFrameId_d6ab429752e7c267,
            mid_getRotationalAngleType_d6ab429752e7c267,
            mid_getSource_d2c8eb4129821f0e,
            mid_getStep_d6ab429752e7c267,
            mid_getSubDailySequenceNumber_d6ab429752e7c267,
            mid_getTranspClkRef_9981f74b2d109da6,
            mid_getTranspOscDrift_9981f74b2d109da6,
            mid_getTranspTransmitDelay_9981f74b2d109da6,
            mid_getTranspUtcOffset_9981f74b2d109da6,
            mid_isCenterOfMassCorrectionApplied_eee3de00fe971136,
            mid_isCompatibleWithTIVs_eee3de00fe971136,
            mid_setCenterOfMassOffset_1ad26e8c8c0cd65b,
            mid_setIsCenterOfMassCorrectionApplied_b35db77cae58639e,
            mid_setIsCompatibleWithTIVs_b35db77cae58639e,
            mid_setPrf_1ad26e8c8c0cd65b,
            mid_setRefFrame_9725b246c9e25f68,
            mid_setRefFrameId_8fd427ab23829bf5,
            mid_setRotationalAngleType_8fd427ab23829bf5,
            mid_setSource_105e1eadb709d9ac,
            mid_setStep_8fd427ab23829bf5,
            mid_setSubDailySequenceNumber_8fd427ab23829bf5,
            mid_setTranspClkRef_1ad26e8c8c0cd65b,
            mid_setTranspOscDrift_1ad26e8c8c0cd65b,
            mid_setTranspTransmitDelay_1ad26e8c8c0cd65b,
            mid_setTranspUtcOffset_1ad26e8c8c0cd65b,
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
