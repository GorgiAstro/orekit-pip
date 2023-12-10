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
            mid_init$_0fa09c18fee449d5,
            mid_getCenterOfMassOffset_dff5885c2c873297,
            mid_getPrf_dff5885c2c873297,
            mid_getRefFrame_b86f9f61d97a7244,
            mid_getRefFrameId_570ce0828f81a2c1,
            mid_getRotationalAngleType_570ce0828f81a2c1,
            mid_getSource_11b109bd155ca898,
            mid_getStep_570ce0828f81a2c1,
            mid_getSubDailySequenceNumber_570ce0828f81a2c1,
            mid_getTranspClkRef_dff5885c2c873297,
            mid_getTranspOscDrift_dff5885c2c873297,
            mid_getTranspTransmitDelay_dff5885c2c873297,
            mid_getTranspUtcOffset_dff5885c2c873297,
            mid_isCenterOfMassCorrectionApplied_b108b35ef48e27bd,
            mid_isCompatibleWithTIVs_b108b35ef48e27bd,
            mid_setCenterOfMassOffset_17db3a65980d3441,
            mid_setIsCenterOfMassCorrectionApplied_bd04c9335fb9e4cf,
            mid_setIsCompatibleWithTIVs_bd04c9335fb9e4cf,
            mid_setPrf_17db3a65980d3441,
            mid_setRefFrame_b5680f5c30eede66,
            mid_setRefFrameId_99803b0791f320ff,
            mid_setRotationalAngleType_99803b0791f320ff,
            mid_setSource_d0bc48d5b00dc40c,
            mid_setStep_99803b0791f320ff,
            mid_setSubDailySequenceNumber_99803b0791f320ff,
            mid_setTranspClkRef_17db3a65980d3441,
            mid_setTranspOscDrift_17db3a65980d3441,
            mid_setTranspTransmitDelay_17db3a65980d3441,
            mid_setTranspUtcOffset_17db3a65980d3441,
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
