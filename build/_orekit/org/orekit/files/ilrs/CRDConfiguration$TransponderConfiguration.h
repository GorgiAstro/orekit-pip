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
            mid_init$_a1fa5dae97ea5ed2,
            mid_getSpacecraftClockAndDriftApplied_55546ef6a647f39b,
            mid_getStationClockAndDriftApplied_55546ef6a647f39b,
            mid_getStationOscDrift_b74f83833fdad017,
            mid_getStationUTCOffset_b74f83833fdad017,
            mid_getTranspClkRefTime_b74f83833fdad017,
            mid_getTranspOscDrift_b74f83833fdad017,
            mid_getTranspUTCOffset_b74f83833fdad017,
            mid_getTransponderId_1c1fa1e935d6cdcf,
            mid_isSpacecraftTimeSimplified_9ab94ac1dc23b105,
            mid_setIsSpacecraftTimeSimplified_fcb96c98de6fad04,
            mid_setSpacecraftClockAndDriftApplied_44ed599e93e8a30c,
            mid_setStationClockAndDriftApplied_44ed599e93e8a30c,
            mid_setStationOscDrift_8ba9fe7a847cecad,
            mid_setStationUTCOffset_8ba9fe7a847cecad,
            mid_setTranspClkRefTime_8ba9fe7a847cecad,
            mid_setTranspOscDrift_8ba9fe7a847cecad,
            mid_setTranspUTCOffset_8ba9fe7a847cecad,
            mid_setTransponderId_734b91ac30d5f9b4,
            mid_toCrdString_1c1fa1e935d6cdcf,
            mid_toString_1c1fa1e935d6cdcf,
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
