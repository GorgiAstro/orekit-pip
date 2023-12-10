#ifndef org_orekit_files_ilrs_CPFHeader_H
#define org_orekit_files_ilrs_CPFHeader_H

#include "org/orekit/files/ilrs/ILRSHeader.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
    }
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
            mid_init$_7ae3461a92a43152,
            mid_getCenterOfMassOffset_456d9a2f64d6b28d,
            mid_getPrf_456d9a2f64d6b28d,
            mid_getRefFrame_c8fe21bcdac65bf6,
            mid_getRefFrameId_f2f64475e4580546,
            mid_getRotationalAngleType_f2f64475e4580546,
            mid_getSource_0090f7797e403f43,
            mid_getStep_f2f64475e4580546,
            mid_getSubDailySequenceNumber_f2f64475e4580546,
            mid_getTranspClkRef_456d9a2f64d6b28d,
            mid_getTranspOscDrift_456d9a2f64d6b28d,
            mid_getTranspTransmitDelay_456d9a2f64d6b28d,
            mid_getTranspUtcOffset_456d9a2f64d6b28d,
            mid_isCenterOfMassCorrectionApplied_e470b6d9e0d979db,
            mid_isCompatibleWithTIVs_e470b6d9e0d979db,
            mid_setCenterOfMassOffset_77e0f9a1f260e2e5,
            mid_setIsCenterOfMassCorrectionApplied_50a2e0b139e80a58,
            mid_setIsCompatibleWithTIVs_50a2e0b139e80a58,
            mid_setPrf_77e0f9a1f260e2e5,
            mid_setRefFrame_b1992bd1bb70f476,
            mid_setRefFrameId_0a2a1ac2721c0336,
            mid_setRotationalAngleType_0a2a1ac2721c0336,
            mid_setSource_e939c6558ae8d313,
            mid_setStep_0a2a1ac2721c0336,
            mid_setSubDailySequenceNumber_0a2a1ac2721c0336,
            mid_setTranspClkRef_77e0f9a1f260e2e5,
            mid_setTranspOscDrift_77e0f9a1f260e2e5,
            mid_setTranspTransmitDelay_77e0f9a1f260e2e5,
            mid_setTranspUtcOffset_77e0f9a1f260e2e5,
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
