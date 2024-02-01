#ifndef org_orekit_files_ilrs_CRDConfiguration$TimingSystemConfiguration_H
#define org_orekit_files_ilrs_CRDConfiguration$TimingSystemConfiguration_H

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

        class CRDConfiguration$TimingSystemConfiguration : public ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_getEpochDelayCorrection_9981f74b2d109da6,
            mid_getFrequencySource_d2c8eb4129821f0e,
            mid_getLocalTimingId_d2c8eb4129821f0e,
            mid_getTimeSource_d2c8eb4129821f0e,
            mid_getTimer_d2c8eb4129821f0e,
            mid_getTimerSerialNumber_d2c8eb4129821f0e,
            mid_setEpochDelayCorrection_1ad26e8c8c0cd65b,
            mid_setFrequencySource_105e1eadb709d9ac,
            mid_setLocalTimingId_105e1eadb709d9ac,
            mid_setTimeSource_105e1eadb709d9ac,
            mid_setTimer_105e1eadb709d9ac,
            mid_setTimerSerialNumber_105e1eadb709d9ac,
            mid_toCrdString_d2c8eb4129821f0e,
            mid_toString_d2c8eb4129821f0e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CRDConfiguration$TimingSystemConfiguration(jobject obj) : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CRDConfiguration$TimingSystemConfiguration(const CRDConfiguration$TimingSystemConfiguration& obj) : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(obj) {}

          CRDConfiguration$TimingSystemConfiguration();

          jdouble getEpochDelayCorrection() const;
          ::java::lang::String getFrequencySource() const;
          ::java::lang::String getLocalTimingId() const;
          ::java::lang::String getTimeSource() const;
          ::java::lang::String getTimer() const;
          ::java::lang::String getTimerSerialNumber() const;
          void setEpochDelayCorrection(jdouble) const;
          void setFrequencySource(const ::java::lang::String &) const;
          void setLocalTimingId(const ::java::lang::String &) const;
          void setTimeSource(const ::java::lang::String &) const;
          void setTimer(const ::java::lang::String &) const;
          void setTimerSerialNumber(const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(CRDConfiguration$TimingSystemConfiguration);
        extern PyTypeObject *PY_TYPE(CRDConfiguration$TimingSystemConfiguration);

        class t_CRDConfiguration$TimingSystemConfiguration {
        public:
          PyObject_HEAD
          CRDConfiguration$TimingSystemConfiguration object;
          static PyObject *wrap_Object(const CRDConfiguration$TimingSystemConfiguration&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
