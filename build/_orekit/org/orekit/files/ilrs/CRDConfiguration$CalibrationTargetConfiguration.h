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
            mid_init$_a1fa5dae97ea5ed2,
            mid_getProcessingSoftwareName_1c1fa1e935d6cdcf,
            mid_getProcessingSoftwareVersion_1c1fa1e935d6cdcf,
            mid_getPulseEnergy_b74f83833fdad017,
            mid_getSumOfAllConstantDelays_b74f83833fdad017,
            mid_getSurveyError_b74f83833fdad017,
            mid_getSurveyedTargetDistance_b74f83833fdad017,
            mid_getTargetName_1c1fa1e935d6cdcf,
            mid_setProcessingSoftwareName_734b91ac30d5f9b4,
            mid_setProcessingSoftwareVersion_734b91ac30d5f9b4,
            mid_setPulseEnergy_8ba9fe7a847cecad,
            mid_setSumOfAllConstantDelays_8ba9fe7a847cecad,
            mid_setSurveyError_8ba9fe7a847cecad,
            mid_setSurveyedTargetDistance_8ba9fe7a847cecad,
            mid_setTargetName_734b91ac30d5f9b4,
            mid_toCrdString_1c1fa1e935d6cdcf,
            mid_toString_1c1fa1e935d6cdcf,
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
