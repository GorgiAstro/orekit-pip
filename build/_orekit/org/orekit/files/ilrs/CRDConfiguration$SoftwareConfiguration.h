#ifndef org_orekit_files_ilrs_CRDConfiguration$SoftwareConfiguration_H
#define org_orekit_files_ilrs_CRDConfiguration$SoftwareConfiguration_H

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

        class CRDConfiguration$SoftwareConfiguration : public ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration {
         public:
          enum {
            mid_init$_a1fa5dae97ea5ed2,
            mid_getProcessingSoftwareVersions_0f94e41879ab7062,
            mid_getProcessingSoftwares_0f94e41879ab7062,
            mid_getSoftwareId_1c1fa1e935d6cdcf,
            mid_getTrackingSoftwareVersions_0f94e41879ab7062,
            mid_getTrackingSoftwares_0f94e41879ab7062,
            mid_setProcessingSoftwareVersions_4f1e9165cc3f09e7,
            mid_setProcessingSoftwares_4f1e9165cc3f09e7,
            mid_setSoftwareId_734b91ac30d5f9b4,
            mid_setTrackingSoftwareVersions_4f1e9165cc3f09e7,
            mid_setTrackingSoftwares_4f1e9165cc3f09e7,
            mid_toCrdString_1c1fa1e935d6cdcf,
            mid_toString_1c1fa1e935d6cdcf,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CRDConfiguration$SoftwareConfiguration(jobject obj) : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CRDConfiguration$SoftwareConfiguration(const CRDConfiguration$SoftwareConfiguration& obj) : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(obj) {}

          CRDConfiguration$SoftwareConfiguration();

          JArray< ::java::lang::String > getProcessingSoftwareVersions() const;
          JArray< ::java::lang::String > getProcessingSoftwares() const;
          ::java::lang::String getSoftwareId() const;
          JArray< ::java::lang::String > getTrackingSoftwareVersions() const;
          JArray< ::java::lang::String > getTrackingSoftwares() const;
          void setProcessingSoftwareVersions(const JArray< ::java::lang::String > &) const;
          void setProcessingSoftwares(const JArray< ::java::lang::String > &) const;
          void setSoftwareId(const ::java::lang::String &) const;
          void setTrackingSoftwareVersions(const JArray< ::java::lang::String > &) const;
          void setTrackingSoftwares(const JArray< ::java::lang::String > &) const;
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
        extern PyType_Def PY_TYPE_DEF(CRDConfiguration$SoftwareConfiguration);
        extern PyTypeObject *PY_TYPE(CRDConfiguration$SoftwareConfiguration);

        class t_CRDConfiguration$SoftwareConfiguration {
        public:
          PyObject_HEAD
          CRDConfiguration$SoftwareConfiguration object;
          static PyObject *wrap_Object(const CRDConfiguration$SoftwareConfiguration&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
