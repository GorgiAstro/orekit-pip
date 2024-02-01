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
            mid_init$_ff7cb6c242604316,
            mid_getHumiSensorManufacturer_d2c8eb4129821f0e,
            mid_getHumiSensorModel_d2c8eb4129821f0e,
            mid_getHumiSensorSerialNumber_d2c8eb4129821f0e,
            mid_getMeteorologicalId_d2c8eb4129821f0e,
            mid_getPressSensorManufacturer_d2c8eb4129821f0e,
            mid_getPressSensorModel_d2c8eb4129821f0e,
            mid_getPressSensorSerialNumber_d2c8eb4129821f0e,
            mid_getTempSensorManufacturer_d2c8eb4129821f0e,
            mid_getTempSensorModel_d2c8eb4129821f0e,
            mid_getTempSensorSerialNumber_d2c8eb4129821f0e,
            mid_setHumiSensorManufacturer_105e1eadb709d9ac,
            mid_setHumiSensorModel_105e1eadb709d9ac,
            mid_setHumiSensorSerialNumber_105e1eadb709d9ac,
            mid_setMeteorologicalId_105e1eadb709d9ac,
            mid_setPressSensorManufacturer_105e1eadb709d9ac,
            mid_setPressSensorModel_105e1eadb709d9ac,
            mid_setPressSensorSerialNumber_105e1eadb709d9ac,
            mid_setTempSensorManufacturer_105e1eadb709d9ac,
            mid_setTempSensorModel_105e1eadb709d9ac,
            mid_setTempSensorSerialNumber_105e1eadb709d9ac,
            mid_toCrdString_d2c8eb4129821f0e,
            mid_toString_d2c8eb4129821f0e,
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
