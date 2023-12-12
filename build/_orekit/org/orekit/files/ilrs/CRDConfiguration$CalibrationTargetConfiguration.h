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
            mid_init$_0640e6acf969ed28,
            mid_getProcessingSoftwareName_3cffd47377eca18a,
            mid_getProcessingSoftwareVersion_3cffd47377eca18a,
            mid_getPulseEnergy_557b8123390d8d0c,
            mid_getSumOfAllConstantDelays_557b8123390d8d0c,
            mid_getSurveyError_557b8123390d8d0c,
            mid_getSurveyedTargetDistance_557b8123390d8d0c,
            mid_getTargetName_3cffd47377eca18a,
            mid_setProcessingSoftwareName_f5ffdf29129ef90a,
            mid_setProcessingSoftwareVersion_f5ffdf29129ef90a,
            mid_setPulseEnergy_10f281d777284cea,
            mid_setSumOfAllConstantDelays_10f281d777284cea,
            mid_setSurveyError_10f281d777284cea,
            mid_setSurveyedTargetDistance_10f281d777284cea,
            mid_setTargetName_f5ffdf29129ef90a,
            mid_toCrdString_3cffd47377eca18a,
            mid_toString_3cffd47377eca18a,
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
