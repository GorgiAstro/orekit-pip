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
            mid_init$_0640e6acf969ed28,
            mid_getAmplifierBandwidth_557b8123390d8d0c,
            mid_getAmplifierGain_557b8123390d8d0c,
            mid_getAmplifierInUse_3cffd47377eca18a,
            mid_getApplicableWavelength_557b8123390d8d0c,
            mid_getAppliedVoltage_557b8123390d8d0c,
            mid_getDarkCount_557b8123390d8d0c,
            mid_getDetectorId_3cffd47377eca18a,
            mid_getDetectorType_3cffd47377eca18a,
            mid_getExternalSignalProcessing_3cffd47377eca18a,
            mid_getOutputPulseType_3cffd47377eca18a,
            mid_getOutputPulseWidth_557b8123390d8d0c,
            mid_getQuantumEfficiency_557b8123390d8d0c,
            mid_getSpatialFilter_557b8123390d8d0c,
            mid_getSpectralFilter_557b8123390d8d0c,
            mid_getTransmissionOfSpectralFilter_557b8123390d8d0c,
            mid_setAmplifierBandwidth_10f281d777284cea,
            mid_setAmplifierGain_10f281d777284cea,
            mid_setAmplifierInUse_f5ffdf29129ef90a,
            mid_setApplicableWavelength_10f281d777284cea,
            mid_setAppliedVoltage_10f281d777284cea,
            mid_setDarkCount_10f281d777284cea,
            mid_setDetectorId_f5ffdf29129ef90a,
            mid_setDetectorType_f5ffdf29129ef90a,
            mid_setExternalSignalProcessing_f5ffdf29129ef90a,
            mid_setOutputPulseType_f5ffdf29129ef90a,
            mid_setOutputPulseWidth_10f281d777284cea,
            mid_setQuantumEfficiency_10f281d777284cea,
            mid_setSpatialFilter_10f281d777284cea,
            mid_setSpectralFilter_10f281d777284cea,
            mid_setTransmissionOfSpectralFilter_10f281d777284cea,
            mid_toCrdString_3cffd47377eca18a,
            mid_toString_3cffd47377eca18a,
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
