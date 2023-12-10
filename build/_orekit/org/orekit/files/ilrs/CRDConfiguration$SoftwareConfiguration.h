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
            mid_init$_0fa09c18fee449d5,
            mid_getProcessingSoftwareVersions_692f4257baa8d3c3,
            mid_getProcessingSoftwares_692f4257baa8d3c3,
            mid_getSoftwareId_11b109bd155ca898,
            mid_getTrackingSoftwareVersions_692f4257baa8d3c3,
            mid_getTrackingSoftwares_692f4257baa8d3c3,
            mid_setProcessingSoftwareVersions_b8ac5bb33398c2cf,
            mid_setProcessingSoftwares_b8ac5bb33398c2cf,
            mid_setSoftwareId_d0bc48d5b00dc40c,
            mid_setTrackingSoftwareVersions_b8ac5bb33398c2cf,
            mid_setTrackingSoftwares_b8ac5bb33398c2cf,
            mid_toCrdString_11b109bd155ca898,
            mid_toString_11b109bd155ca898,
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
