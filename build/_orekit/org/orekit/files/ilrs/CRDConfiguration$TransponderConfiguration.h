#ifndef org_orekit_files_ilrs_CRDConfiguration$TransponderConfiguration_H
#define org_orekit_files_ilrs_CRDConfiguration$TransponderConfiguration_H

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

        class CRDConfiguration$TransponderConfiguration : public ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration {
         public:
          enum {
            mid_init$_0fa09c18fee449d5,
            mid_getSpacecraftClockAndDriftApplied_570ce0828f81a2c1,
            mid_getStationClockAndDriftApplied_570ce0828f81a2c1,
            mid_getStationOscDrift_dff5885c2c873297,
            mid_getStationUTCOffset_dff5885c2c873297,
            mid_getTranspClkRefTime_dff5885c2c873297,
            mid_getTranspOscDrift_dff5885c2c873297,
            mid_getTranspUTCOffset_dff5885c2c873297,
            mid_getTransponderId_11b109bd155ca898,
            mid_isSpacecraftTimeSimplified_b108b35ef48e27bd,
            mid_setIsSpacecraftTimeSimplified_bd04c9335fb9e4cf,
            mid_setSpacecraftClockAndDriftApplied_99803b0791f320ff,
            mid_setStationClockAndDriftApplied_99803b0791f320ff,
            mid_setStationOscDrift_17db3a65980d3441,
            mid_setStationUTCOffset_17db3a65980d3441,
            mid_setTranspClkRefTime_17db3a65980d3441,
            mid_setTranspOscDrift_17db3a65980d3441,
            mid_setTranspUTCOffset_17db3a65980d3441,
            mid_setTransponderId_d0bc48d5b00dc40c,
            mid_toCrdString_11b109bd155ca898,
            mid_toString_11b109bd155ca898,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CRDConfiguration$TransponderConfiguration(jobject obj) : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CRDConfiguration$TransponderConfiguration(const CRDConfiguration$TransponderConfiguration& obj) : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(obj) {}

          CRDConfiguration$TransponderConfiguration();

          jint getSpacecraftClockAndDriftApplied() const;
          jint getStationClockAndDriftApplied() const;
          jdouble getStationOscDrift() const;
          jdouble getStationUTCOffset() const;
          jdouble getTranspClkRefTime() const;
          jdouble getTranspOscDrift() const;
          jdouble getTranspUTCOffset() const;
          ::java::lang::String getTransponderId() const;
          jboolean isSpacecraftTimeSimplified() const;
          void setIsSpacecraftTimeSimplified(jboolean) const;
          void setSpacecraftClockAndDriftApplied(jint) const;
          void setStationClockAndDriftApplied(jint) const;
          void setStationOscDrift(jdouble) const;
          void setStationUTCOffset(jdouble) const;
          void setTranspClkRefTime(jdouble) const;
          void setTranspOscDrift(jdouble) const;
          void setTranspUTCOffset(jdouble) const;
          void setTransponderId(const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(CRDConfiguration$TransponderConfiguration);
        extern PyTypeObject *PY_TYPE(CRDConfiguration$TransponderConfiguration);

        class t_CRDConfiguration$TransponderConfiguration {
        public:
          PyObject_HEAD
          CRDConfiguration$TransponderConfiguration object;
          static PyObject *wrap_Object(const CRDConfiguration$TransponderConfiguration&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
