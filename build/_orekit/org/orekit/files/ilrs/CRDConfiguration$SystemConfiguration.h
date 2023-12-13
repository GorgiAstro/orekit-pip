#ifndef org_orekit_files_ilrs_CRDConfiguration$SystemConfiguration_H
#define org_orekit_files_ilrs_CRDConfiguration$SystemConfiguration_H

#include "org/orekit/files/ilrs/CRDConfiguration$BaseConfiguration.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        class CRDConfiguration$SystemConfiguration : public ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration {
         public:
          enum {
            mid_init$_a1fa5dae97ea5ed2,
            mid_getComponents_e62d3bb06d56d7e3,
            mid_getSystemId_1c1fa1e935d6cdcf,
            mid_getWavelength_b74f83833fdad017,
            mid_setComponents_4f1e9165cc3f09e7,
            mid_setSystemId_734b91ac30d5f9b4,
            mid_setWavelength_8ba9fe7a847cecad,
            mid_toCrdString_1c1fa1e935d6cdcf,
            mid_toString_1c1fa1e935d6cdcf,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CRDConfiguration$SystemConfiguration(jobject obj) : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CRDConfiguration$SystemConfiguration(const CRDConfiguration$SystemConfiguration& obj) : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(obj) {}

          CRDConfiguration$SystemConfiguration();

          ::java::util::List getComponents() const;
          ::java::lang::String getSystemId() const;
          jdouble getWavelength() const;
          void setComponents(const JArray< ::java::lang::String > &) const;
          void setSystemId(const ::java::lang::String &) const;
          void setWavelength(jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(CRDConfiguration$SystemConfiguration);
        extern PyTypeObject *PY_TYPE(CRDConfiguration$SystemConfiguration);

        class t_CRDConfiguration$SystemConfiguration {
        public:
          PyObject_HEAD
          CRDConfiguration$SystemConfiguration object;
          static PyObject *wrap_Object(const CRDConfiguration$SystemConfiguration&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
