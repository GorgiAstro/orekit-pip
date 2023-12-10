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
            mid_init$_0fa09c18fee449d5,
            mid_getEpochDelayCorrection_dff5885c2c873297,
            mid_getFrequencySource_11b109bd155ca898,
            mid_getLocalTimingId_11b109bd155ca898,
            mid_getTimeSource_11b109bd155ca898,
            mid_getTimer_11b109bd155ca898,
            mid_getTimerSerialNumber_11b109bd155ca898,
            mid_setEpochDelayCorrection_17db3a65980d3441,
            mid_setFrequencySource_d0bc48d5b00dc40c,
            mid_setLocalTimingId_d0bc48d5b00dc40c,
            mid_setTimeSource_d0bc48d5b00dc40c,
            mid_setTimer_d0bc48d5b00dc40c,
            mid_setTimerSerialNumber_d0bc48d5b00dc40c,
            mid_toCrdString_11b109bd155ca898,
            mid_toString_11b109bd155ca898,
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
