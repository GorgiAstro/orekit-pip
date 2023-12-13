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
            mid_init$_a1fa5dae97ea5ed2,
            mid_getAmplifierBandwidth_b74f83833fdad017,
            mid_getAmplifierGain_b74f83833fdad017,
            mid_getAmplifierInUse_1c1fa1e935d6cdcf,
            mid_getApplicableWavelength_b74f83833fdad017,
            mid_getAppliedVoltage_b74f83833fdad017,
            mid_getDarkCount_b74f83833fdad017,
            mid_getDetectorId_1c1fa1e935d6cdcf,
            mid_getDetectorType_1c1fa1e935d6cdcf,
            mid_getExternalSignalProcessing_1c1fa1e935d6cdcf,
            mid_getOutputPulseType_1c1fa1e935d6cdcf,
            mid_getOutputPulseWidth_b74f83833fdad017,
            mid_getQuantumEfficiency_b74f83833fdad017,
            mid_getSpatialFilter_b74f83833fdad017,
            mid_getSpectralFilter_b74f83833fdad017,
            mid_getTransmissionOfSpectralFilter_b74f83833fdad017,
            mid_setAmplifierBandwidth_8ba9fe7a847cecad,
            mid_setAmplifierGain_8ba9fe7a847cecad,
            mid_setAmplifierInUse_734b91ac30d5f9b4,
            mid_setApplicableWavelength_8ba9fe7a847cecad,
            mid_setAppliedVoltage_8ba9fe7a847cecad,
            mid_setDarkCount_8ba9fe7a847cecad,
            mid_setDetectorId_734b91ac30d5f9b4,
            mid_setDetectorType_734b91ac30d5f9b4,
            mid_setExternalSignalProcessing_734b91ac30d5f9b4,
            mid_setOutputPulseType_734b91ac30d5f9b4,
            mid_setOutputPulseWidth_8ba9fe7a847cecad,
            mid_setQuantumEfficiency_8ba9fe7a847cecad,
            mid_setSpatialFilter_8ba9fe7a847cecad,
            mid_setSpectralFilter_8ba9fe7a847cecad,
            mid_setTransmissionOfSpectralFilter_8ba9fe7a847cecad,
            mid_toCrdString_1c1fa1e935d6cdcf,
            mid_toString_1c1fa1e935d6cdcf,
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
