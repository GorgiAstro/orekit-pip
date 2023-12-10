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
            mid_init$_0fa09c18fee449d5,
            mid_getAmplifierBandwidth_dff5885c2c873297,
            mid_getAmplifierGain_dff5885c2c873297,
            mid_getAmplifierInUse_11b109bd155ca898,
            mid_getApplicableWavelength_dff5885c2c873297,
            mid_getAppliedVoltage_dff5885c2c873297,
            mid_getDarkCount_dff5885c2c873297,
            mid_getDetectorId_11b109bd155ca898,
            mid_getDetectorType_11b109bd155ca898,
            mid_getExternalSignalProcessing_11b109bd155ca898,
            mid_getOutputPulseType_11b109bd155ca898,
            mid_getOutputPulseWidth_dff5885c2c873297,
            mid_getQuantumEfficiency_dff5885c2c873297,
            mid_getSpatialFilter_dff5885c2c873297,
            mid_getSpectralFilter_dff5885c2c873297,
            mid_getTransmissionOfSpectralFilter_dff5885c2c873297,
            mid_setAmplifierBandwidth_17db3a65980d3441,
            mid_setAmplifierGain_17db3a65980d3441,
            mid_setAmplifierInUse_d0bc48d5b00dc40c,
            mid_setApplicableWavelength_17db3a65980d3441,
            mid_setAppliedVoltage_17db3a65980d3441,
            mid_setDarkCount_17db3a65980d3441,
            mid_setDetectorId_d0bc48d5b00dc40c,
            mid_setDetectorType_d0bc48d5b00dc40c,
            mid_setExternalSignalProcessing_d0bc48d5b00dc40c,
            mid_setOutputPulseType_d0bc48d5b00dc40c,
            mid_setOutputPulseWidth_17db3a65980d3441,
            mid_setQuantumEfficiency_17db3a65980d3441,
            mid_setSpatialFilter_17db3a65980d3441,
            mid_setSpectralFilter_17db3a65980d3441,
            mid_setTransmissionOfSpectralFilter_17db3a65980d3441,
            mid_toCrdString_11b109bd155ca898,
            mid_toString_11b109bd155ca898,
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
