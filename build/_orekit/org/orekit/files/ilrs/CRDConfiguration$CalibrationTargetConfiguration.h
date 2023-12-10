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
            mid_init$_7ae3461a92a43152,
            mid_getProcessingSoftwareName_0090f7797e403f43,
            mid_getProcessingSoftwareVersion_0090f7797e403f43,
            mid_getPulseEnergy_456d9a2f64d6b28d,
            mid_getSumOfAllConstantDelays_456d9a2f64d6b28d,
            mid_getSurveyError_456d9a2f64d6b28d,
            mid_getSurveyedTargetDistance_456d9a2f64d6b28d,
            mid_getTargetName_0090f7797e403f43,
            mid_setProcessingSoftwareName_e939c6558ae8d313,
            mid_setProcessingSoftwareVersion_e939c6558ae8d313,
            mid_setPulseEnergy_77e0f9a1f260e2e5,
            mid_setSumOfAllConstantDelays_77e0f9a1f260e2e5,
            mid_setSurveyError_77e0f9a1f260e2e5,
            mid_setSurveyedTargetDistance_77e0f9a1f260e2e5,
            mid_setTargetName_e939c6558ae8d313,
            mid_toCrdString_0090f7797e403f43,
            mid_toString_0090f7797e403f43,
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
