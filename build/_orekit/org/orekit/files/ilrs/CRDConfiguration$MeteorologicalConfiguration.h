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
            mid_init$_0fa09c18fee449d5,
            mid_getHumiSensorManufacturer_11b109bd155ca898,
            mid_getHumiSensorModel_11b109bd155ca898,
            mid_getHumiSensorSerialNumber_11b109bd155ca898,
            mid_getMeteorologicalId_11b109bd155ca898,
            mid_getPressSensorManufacturer_11b109bd155ca898,
            mid_getPressSensorModel_11b109bd155ca898,
            mid_getPressSensorSerialNumber_11b109bd155ca898,
            mid_getTempSensorManufacturer_11b109bd155ca898,
            mid_getTempSensorModel_11b109bd155ca898,
            mid_getTempSensorSerialNumber_11b109bd155ca898,
            mid_setHumiSensorManufacturer_d0bc48d5b00dc40c,
            mid_setHumiSensorModel_d0bc48d5b00dc40c,
            mid_setHumiSensorSerialNumber_d0bc48d5b00dc40c,
            mid_setMeteorologicalId_d0bc48d5b00dc40c,
            mid_setPressSensorManufacturer_d0bc48d5b00dc40c,
            mid_setPressSensorModel_d0bc48d5b00dc40c,
            mid_setPressSensorSerialNumber_d0bc48d5b00dc40c,
            mid_setTempSensorManufacturer_d0bc48d5b00dc40c,
            mid_setTempSensorModel_d0bc48d5b00dc40c,
            mid_setTempSensorSerialNumber_d0bc48d5b00dc40c,
            mid_toCrdString_11b109bd155ca898,
            mid_toString_11b109bd155ca898,
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
