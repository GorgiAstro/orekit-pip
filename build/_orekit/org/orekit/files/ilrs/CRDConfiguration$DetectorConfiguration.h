#ifndef org_orekit_files_ilrs_CRDConfiguration$DetectorConfiguration_H
#define org_orekit_files_ilrs_CRDConfiguration$DetectorConfiguration_H

#include "org/orekit/files/ilrs/CRDConfiguration$BaseConfiguration.h"

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

        class CRDConfiguration$DetectorConfiguration : public ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_getAmplifierBandwidth_9981f74b2d109da6,
            mid_getAmplifierGain_9981f74b2d109da6,
            mid_getAmplifierInUse_d2c8eb4129821f0e,
            mid_getApplicableWavelength_9981f74b2d109da6,
            mid_getAppliedVoltage_9981f74b2d109da6,
            mid_getDarkCount_9981f74b2d109da6,
            mid_getDetectorId_d2c8eb4129821f0e,
            mid_getDetectorType_d2c8eb4129821f0e,
            mid_getExternalSignalProcessing_d2c8eb4129821f0e,
            mid_getOutputPulseType_d2c8eb4129821f0e,
            mid_getOutputPulseWidth_9981f74b2d109da6,
            mid_getQuantumEfficiency_9981f74b2d109da6,
            mid_getSpatialFilter_9981f74b2d109da6,
            mid_getSpectralFilter_9981f74b2d109da6,
            mid_getTransmissionOfSpectralFilter_9981f74b2d109da6,
            mid_setAmplifierBandwidth_1ad26e8c8c0cd65b,
            mid_setAmplifierGain_1ad26e8c8c0cd65b,
            mid_setAmplifierInUse_105e1eadb709d9ac,
            mid_setApplicableWavelength_1ad26e8c8c0cd65b,
            mid_setAppliedVoltage_1ad26e8c8c0cd65b,
            mid_setDarkCount_1ad26e8c8c0cd65b,
            mid_setDetectorId_105e1eadb709d9ac,
            mid_setDetectorType_105e1eadb709d9ac,
            mid_setExternalSignalProcessing_105e1eadb709d9ac,
            mid_setOutputPulseType_105e1eadb709d9ac,
            mid_setOutputPulseWidth_1ad26e8c8c0cd65b,
            mid_setQuantumEfficiency_1ad26e8c8c0cd65b,
            mid_setSpatialFilter_1ad26e8c8c0cd65b,
            mid_setSpectralFilter_1ad26e8c8c0cd65b,
            mid_setTransmissionOfSpectralFilter_1ad26e8c8c0cd65b,
            mid_toCrdString_d2c8eb4129821f0e,
            mid_toString_d2c8eb4129821f0e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CRDConfiguration$DetectorConfiguration(jobject obj) : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CRDConfiguration$DetectorConfiguration(const CRDConfiguration$DetectorConfiguration& obj) : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(obj) {}

          CRDConfiguration$DetectorConfiguration();

          jdouble getAmplifierBandwidth() const;
          jdouble getAmplifierGain() const;
          ::java::lang::String getAmplifierInUse() const;
          jdouble getApplicableWavelength() const;
          jdouble getAppliedVoltage() const;
          jdouble getDarkCount() const;
          ::java::lang::String getDetectorId() const;
          ::java::lang::String getDetectorType() const;
          ::java::lang::String getExternalSignalProcessing() const;
          ::java::lang::String getOutputPulseType() const;
          jdouble getOutputPulseWidth() const;
          jdouble getQuantumEfficiency() const;
          jdouble getSpatialFilter() const;
          jdouble getSpectralFilter() const;
          jdouble getTransmissionOfSpectralFilter() const;
          void setAmplifierBandwidth(jdouble) const;
          void setAmplifierGain(jdouble) const;
          void setAmplifierInUse(const ::java::lang::String &) const;
          void setApplicableWavelength(jdouble) const;
          void setAppliedVoltage(jdouble) const;
          void setDarkCount(jdouble) const;
          void setDetectorId(const ::java::lang::String &) const;
          void setDetectorType(const ::java::lang::String &) const;
          void setExternalSignalProcessing(const ::java::lang::String &) const;
          void setOutputPulseType(const ::java::lang::String &) const;
          void setOutputPulseWidth(jdouble) const;
          void setQuantumEfficiency(jdouble) const;
          void setSpatialFilter(jdouble) const;
          void setSpectralFilter(jdouble) const;
          void setTransmissionOfSpectralFilter(jdouble) const;
          ::java::lang::String toCrdString() const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(CRDConfiguration$DetectorConfiguration);
        extern PyTypeObject *PY_TYPE(CRDConfiguration$DetectorConfiguration);

        class t_CRDConfiguration$DetectorConfiguration {
        public:
          PyObject_HEAD
          CRDConfiguration$DetectorConfiguration object;
          static PyObject *wrap_Object(const CRDConfiguration$DetectorConfiguration&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
