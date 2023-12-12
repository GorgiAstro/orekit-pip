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
            mid_init$_0640e6acf969ed28,
            mid_getCenterOfMassOffset_557b8123390d8d0c,
            mid_getPrf_557b8123390d8d0c,
            mid_getRefFrame_6c9bc0a928c56d4e,
            mid_getRefFrameId_412668abc8d889e9,
            mid_getRotationalAngleType_412668abc8d889e9,
            mid_getSource_3cffd47377eca18a,
            mid_getStep_412668abc8d889e9,
            mid_getSubDailySequenceNumber_412668abc8d889e9,
            mid_getTranspClkRef_557b8123390d8d0c,
            mid_getTranspOscDrift_557b8123390d8d0c,
            mid_getTranspTransmitDelay_557b8123390d8d0c,
            mid_getTranspUtcOffset_557b8123390d8d0c,
            mid_isCenterOfMassCorrectionApplied_89b302893bdbe1f1,
            mid_isCompatibleWithTIVs_89b302893bdbe1f1,
            mid_setCenterOfMassOffset_10f281d777284cea,
            mid_setIsCenterOfMassCorrectionApplied_ed2afdb8506b9742,
            mid_setIsCompatibleWithTIVs_ed2afdb8506b9742,
            mid_setPrf_10f281d777284cea,
            mid_setRefFrame_535d1f91a93c8b4d,
            mid_setRefFrameId_a3da1a935cb37f7b,
            mid_setRotationalAngleType_a3da1a935cb37f7b,
            mid_setSource_f5ffdf29129ef90a,
            mid_setStep_a3da1a935cb37f7b,
            mid_setSubDailySequenceNumber_a3da1a935cb37f7b,
            mid_setTranspClkRef_10f281d777284cea,
            mid_setTranspOscDrift_10f281d777284cea,
            mid_setTranspTransmitDelay_10f281d777284cea,
            mid_setTranspUtcOffset_10f281d777284cea,
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
