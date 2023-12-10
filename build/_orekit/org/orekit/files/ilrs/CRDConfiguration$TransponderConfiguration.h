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
            mid_init$_7ae3461a92a43152,
            mid_getSpacecraftClockAndDriftApplied_f2f64475e4580546,
            mid_getStationClockAndDriftApplied_f2f64475e4580546,
            mid_getStationOscDrift_456d9a2f64d6b28d,
            mid_getStationUTCOffset_456d9a2f64d6b28d,
            mid_getTranspClkRefTime_456d9a2f64d6b28d,
            mid_getTranspOscDrift_456d9a2f64d6b28d,
            mid_getTranspUTCOffset_456d9a2f64d6b28d,
            mid_getTransponderId_0090f7797e403f43,
            mid_isSpacecraftTimeSimplified_e470b6d9e0d979db,
            mid_setIsSpacecraftTimeSimplified_50a2e0b139e80a58,
            mid_setSpacecraftClockAndDriftApplied_0a2a1ac2721c0336,
            mid_setStationClockAndDriftApplied_0a2a1ac2721c0336,
            mid_setStationOscDrift_77e0f9a1f260e2e5,
            mid_setStationUTCOffset_77e0f9a1f260e2e5,
            mid_setTranspClkRefTime_77e0f9a1f260e2e5,
            mid_setTranspOscDrift_77e0f9a1f260e2e5,
            mid_setTranspUTCOffset_77e0f9a1f260e2e5,
            mid_setTransponderId_e939c6558ae8d313,
            mid_toCrdString_0090f7797e403f43,
            mid_toString_0090f7797e403f43,
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
