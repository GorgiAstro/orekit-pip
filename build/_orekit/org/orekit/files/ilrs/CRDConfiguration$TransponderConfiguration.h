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
            mid_init$_0640e6acf969ed28,
            mid_getSpacecraftClockAndDriftApplied_412668abc8d889e9,
            mid_getStationClockAndDriftApplied_412668abc8d889e9,
            mid_getStationOscDrift_557b8123390d8d0c,
            mid_getStationUTCOffset_557b8123390d8d0c,
            mid_getTranspClkRefTime_557b8123390d8d0c,
            mid_getTranspOscDrift_557b8123390d8d0c,
            mid_getTranspUTCOffset_557b8123390d8d0c,
            mid_getTransponderId_3cffd47377eca18a,
            mid_isSpacecraftTimeSimplified_89b302893bdbe1f1,
            mid_setIsSpacecraftTimeSimplified_ed2afdb8506b9742,
            mid_setSpacecraftClockAndDriftApplied_a3da1a935cb37f7b,
            mid_setStationClockAndDriftApplied_a3da1a935cb37f7b,
            mid_setStationOscDrift_10f281d777284cea,
            mid_setStationUTCOffset_10f281d777284cea,
            mid_setTranspClkRefTime_10f281d777284cea,
            mid_setTranspOscDrift_10f281d777284cea,
            mid_setTranspUTCOffset_10f281d777284cea,
            mid_setTransponderId_f5ffdf29129ef90a,
            mid_toCrdString_3cffd47377eca18a,
            mid_toString_3cffd47377eca18a,
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
