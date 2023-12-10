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
            mid_init$_7ae3461a92a43152,
            mid_getHumiSensorManufacturer_0090f7797e403f43,
            mid_getHumiSensorModel_0090f7797e403f43,
            mid_getHumiSensorSerialNumber_0090f7797e403f43,
            mid_getMeteorologicalId_0090f7797e403f43,
            mid_getPressSensorManufacturer_0090f7797e403f43,
            mid_getPressSensorModel_0090f7797e403f43,
            mid_getPressSensorSerialNumber_0090f7797e403f43,
            mid_getTempSensorManufacturer_0090f7797e403f43,
            mid_getTempSensorModel_0090f7797e403f43,
            mid_getTempSensorSerialNumber_0090f7797e403f43,
            mid_setHumiSensorManufacturer_e939c6558ae8d313,
            mid_setHumiSensorModel_e939c6558ae8d313,
            mid_setHumiSensorSerialNumber_e939c6558ae8d313,
            mid_setMeteorologicalId_e939c6558ae8d313,
            mid_setPressSensorManufacturer_e939c6558ae8d313,
            mid_setPressSensorModel_e939c6558ae8d313,
            mid_setPressSensorSerialNumber_e939c6558ae8d313,
            mid_setTempSensorManufacturer_e939c6558ae8d313,
            mid_setTempSensorModel_e939c6558ae8d313,
            mid_setTempSensorSerialNumber_e939c6558ae8d313,
            mid_toCrdString_0090f7797e403f43,
            mid_toString_0090f7797e403f43,
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
