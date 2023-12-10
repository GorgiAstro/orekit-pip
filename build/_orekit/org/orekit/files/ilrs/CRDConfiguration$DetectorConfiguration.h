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
            mid_init$_7ae3461a92a43152,
            mid_getAmplifierBandwidth_456d9a2f64d6b28d,
            mid_getAmplifierGain_456d9a2f64d6b28d,
            mid_getAmplifierInUse_0090f7797e403f43,
            mid_getApplicableWavelength_456d9a2f64d6b28d,
            mid_getAppliedVoltage_456d9a2f64d6b28d,
            mid_getDarkCount_456d9a2f64d6b28d,
            mid_getDetectorId_0090f7797e403f43,
            mid_getDetectorType_0090f7797e403f43,
            mid_getExternalSignalProcessing_0090f7797e403f43,
            mid_getOutputPulseType_0090f7797e403f43,
            mid_getOutputPulseWidth_456d9a2f64d6b28d,
            mid_getQuantumEfficiency_456d9a2f64d6b28d,
            mid_getSpatialFilter_456d9a2f64d6b28d,
            mid_getSpectralFilter_456d9a2f64d6b28d,
            mid_getTransmissionOfSpectralFilter_456d9a2f64d6b28d,
            mid_setAmplifierBandwidth_77e0f9a1f260e2e5,
            mid_setAmplifierGain_77e0f9a1f260e2e5,
            mid_setAmplifierInUse_e939c6558ae8d313,
            mid_setApplicableWavelength_77e0f9a1f260e2e5,
            mid_setAppliedVoltage_77e0f9a1f260e2e5,
            mid_setDarkCount_77e0f9a1f260e2e5,
            mid_setDetectorId_e939c6558ae8d313,
            mid_setDetectorType_e939c6558ae8d313,
            mid_setExternalSignalProcessing_e939c6558ae8d313,
            mid_setOutputPulseType_e939c6558ae8d313,
            mid_setOutputPulseWidth_77e0f9a1f260e2e5,
            mid_setQuantumEfficiency_77e0f9a1f260e2e5,
            mid_setSpatialFilter_77e0f9a1f260e2e5,
            mid_setSpectralFilter_77e0f9a1f260e2e5,
            mid_setTransmissionOfSpectralFilter_77e0f9a1f260e2e5,
            mid_toCrdString_0090f7797e403f43,
            mid_toString_0090f7797e403f43,
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
