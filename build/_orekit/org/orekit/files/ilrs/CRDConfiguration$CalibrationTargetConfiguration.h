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
            mid_init$_ff7cb6c242604316,
            mid_getProcessingSoftwareName_d2c8eb4129821f0e,
            mid_getProcessingSoftwareVersion_d2c8eb4129821f0e,
            mid_getPulseEnergy_9981f74b2d109da6,
            mid_getSumOfAllConstantDelays_9981f74b2d109da6,
            mid_getSurveyError_9981f74b2d109da6,
            mid_getSurveyedTargetDistance_9981f74b2d109da6,
            mid_getTargetName_d2c8eb4129821f0e,
            mid_setProcessingSoftwareName_105e1eadb709d9ac,
            mid_setProcessingSoftwareVersion_105e1eadb709d9ac,
            mid_setPulseEnergy_1ad26e8c8c0cd65b,
            mid_setSumOfAllConstantDelays_1ad26e8c8c0cd65b,
            mid_setSurveyError_1ad26e8c8c0cd65b,
            mid_setSurveyedTargetDistance_1ad26e8c8c0cd65b,
            mid_setTargetName_105e1eadb709d9ac,
            mid_toCrdString_d2c8eb4129821f0e,
            mid_toString_d2c8eb4129821f0e,
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
