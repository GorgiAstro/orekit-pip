#ifndef org_orekit_files_ilrs_CRDConfiguration$MeteorologicalConfiguration_H
#define org_orekit_files_ilrs_CRDConfiguration$MeteorologicalConfiguration_H

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

        class CRDConfiguration$MeteorologicalConfiguration : public ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_getHumiSensorManufacturer_3cffd47377eca18a,
            mid_getHumiSensorModel_3cffd47377eca18a,
            mid_getHumiSensorSerialNumber_3cffd47377eca18a,
            mid_getMeteorologicalId_3cffd47377eca18a,
            mid_getPressSensorManufacturer_3cffd47377eca18a,
            mid_getPressSensorModel_3cffd47377eca18a,
            mid_getPressSensorSerialNumber_3cffd47377eca18a,
            mid_getTempSensorManufacturer_3cffd47377eca18a,
            mid_getTempSensorModel_3cffd47377eca18a,
            mid_getTempSensorSerialNumber_3cffd47377eca18a,
            mid_setHumiSensorManufacturer_f5ffdf29129ef90a,
            mid_setHumiSensorModel_f5ffdf29129ef90a,
            mid_setHumiSensorSerialNumber_f5ffdf29129ef90a,
            mid_setMeteorologicalId_f5ffdf29129ef90a,
            mid_setPressSensorManufacturer_f5ffdf29129ef90a,
            mid_setPressSensorModel_f5ffdf29129ef90a,
            mid_setPressSensorSerialNumber_f5ffdf29129ef90a,
            mid_setTempSensorManufacturer_f5ffdf29129ef90a,
            mid_setTempSensorModel_f5ffdf29129ef90a,
            mid_setTempSensorSerialNumber_f5ffdf29129ef90a,
            mid_toCrdString_3cffd47377eca18a,
            mid_toString_3cffd47377eca18a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CRDConfiguration$MeteorologicalConfiguration(jobject obj) : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CRDConfiguration$MeteorologicalConfiguration(const CRDConfiguration$MeteorologicalConfiguration& obj) : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(obj) {}

          CRDConfiguration$MeteorologicalConfiguration();

          ::java::lang::String getHumiSensorManufacturer() const;
          ::java::lang::String getHumiSensorModel() const;
          ::java::lang::String getHumiSensorSerialNumber() const;
          ::java::lang::String getMeteorologicalId() const;
          ::java::lang::String getPressSensorManufacturer() const;
          ::java::lang::String getPressSensorModel() const;
          ::java::lang::String getPressSensorSerialNumber() const;
          ::java::lang::String getTempSensorManufacturer() const;
          ::java::lang::String getTempSensorModel() const;
          ::java::lang::String getTempSensorSerialNumber() const;
          void setHumiSensorManufacturer(const ::java::lang::String &) const;
          void setHumiSensorModel(const ::java::lang::String &) const;
          void setHumiSensorSerialNumber(const ::java::lang::String &) const;
          void setMeteorologicalId(const ::java::lang::String &) const;
          void setPressSensorManufacturer(const ::java::lang::String &) const;
          void setPressSensorModel(const ::java::lang::String &) const;
          void setPressSensorSerialNumber(const ::java::lang::String &) const;
          void setTempSensorManufacturer(const ::java::lang::String &) const;
          void setTempSensorModel(const ::java::lang::String &) const;
          void setTempSensorSerialNumber(const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(CRDConfiguration$MeteorologicalConfiguration);
        extern PyTypeObject *PY_TYPE(CRDConfiguration$MeteorologicalConfiguration);

        class t_CRDConfiguration$MeteorologicalConfiguration {
        public:
          PyObject_HEAD
          CRDConfiguration$MeteorologicalConfiguration object;
          static PyObject *wrap_Object(const CRDConfiguration$MeteorologicalConfiguration&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
