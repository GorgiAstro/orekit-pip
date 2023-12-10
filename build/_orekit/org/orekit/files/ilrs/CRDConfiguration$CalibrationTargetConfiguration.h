#ifndef org_orekit_files_ilrs_CRDConfiguration$CalibrationTargetConfiguration_H
#define org_orekit_files_ilrs_CRDConfiguration$CalibrationTargetConfiguration_H

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

        class CRDConfiguration$CalibrationTargetConfiguration : public ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration {
         public:
          enum {
            mid_init$_0fa09c18fee449d5,
            mid_getProcessingSoftwareName_11b109bd155ca898,
            mid_getProcessingSoftwareVersion_11b109bd155ca898,
            mid_getPulseEnergy_dff5885c2c873297,
            mid_getSumOfAllConstantDelays_dff5885c2c873297,
            mid_getSurveyError_dff5885c2c873297,
            mid_getSurveyedTargetDistance_dff5885c2c873297,
            mid_getTargetName_11b109bd155ca898,
            mid_setProcessingSoftwareName_d0bc48d5b00dc40c,
            mid_setProcessingSoftwareVersion_d0bc48d5b00dc40c,
            mid_setPulseEnergy_17db3a65980d3441,
            mid_setSumOfAllConstantDelays_17db3a65980d3441,
            mid_setSurveyError_17db3a65980d3441,
            mid_setSurveyedTargetDistance_17db3a65980d3441,
            mid_setTargetName_d0bc48d5b00dc40c,
            mid_toCrdString_11b109bd155ca898,
            mid_toString_11b109bd155ca898,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CRDConfiguration$CalibrationTargetConfiguration(jobject obj) : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CRDConfiguration$CalibrationTargetConfiguration(const CRDConfiguration$CalibrationTargetConfiguration& obj) : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(obj) {}

          CRDConfiguration$CalibrationTargetConfiguration();

          ::java::lang::String getProcessingSoftwareName() const;
          ::java::lang::String getProcessingSoftwareVersion() const;
          jdouble getPulseEnergy() const;
          jdouble getSumOfAllConstantDelays() const;
          jdouble getSurveyError() const;
          jdouble getSurveyedTargetDistance() const;
          ::java::lang::String getTargetName() const;
          void setProcessingSoftwareName(const ::java::lang::String &) const;
          void setProcessingSoftwareVersion(const ::java::lang::String &) const;
          void setPulseEnergy(jdouble) const;
          void setSumOfAllConstantDelays(jdouble) const;
          void setSurveyError(jdouble) const;
          void setSurveyedTargetDistance(jdouble) const;
          void setTargetName(const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(CRDConfiguration$CalibrationTargetConfiguration);
        extern PyTypeObject *PY_TYPE(CRDConfiguration$CalibrationTargetConfiguration);

        class t_CRDConfiguration$CalibrationTargetConfiguration {
        public:
          PyObject_HEAD
          CRDConfiguration$CalibrationTargetConfiguration object;
          static PyObject *wrap_Object(const CRDConfiguration$CalibrationTargetConfiguration&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
