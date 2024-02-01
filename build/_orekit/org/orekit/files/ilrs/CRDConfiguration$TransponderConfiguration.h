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
            mid_init$_ff7cb6c242604316,
            mid_getSpacecraftClockAndDriftApplied_d6ab429752e7c267,
            mid_getStationClockAndDriftApplied_d6ab429752e7c267,
            mid_getStationOscDrift_9981f74b2d109da6,
            mid_getStationUTCOffset_9981f74b2d109da6,
            mid_getTranspClkRefTime_9981f74b2d109da6,
            mid_getTranspOscDrift_9981f74b2d109da6,
            mid_getTranspUTCOffset_9981f74b2d109da6,
            mid_getTransponderId_d2c8eb4129821f0e,
            mid_isSpacecraftTimeSimplified_eee3de00fe971136,
            mid_setIsSpacecraftTimeSimplified_b35db77cae58639e,
            mid_setSpacecraftClockAndDriftApplied_8fd427ab23829bf5,
            mid_setStationClockAndDriftApplied_8fd427ab23829bf5,
            mid_setStationOscDrift_1ad26e8c8c0cd65b,
            mid_setStationUTCOffset_1ad26e8c8c0cd65b,
            mid_setTranspClkRefTime_1ad26e8c8c0cd65b,
            mid_setTranspOscDrift_1ad26e8c8c0cd65b,
            mid_setTranspUTCOffset_1ad26e8c8c0cd65b,
            mid_setTransponderId_105e1eadb709d9ac,
            mid_toCrdString_d2c8eb4129821f0e,
            mid_toString_d2c8eb4129821f0e,
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
