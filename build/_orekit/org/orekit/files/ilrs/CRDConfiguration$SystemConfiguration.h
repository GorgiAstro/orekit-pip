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
            mid_init$_0640e6acf969ed28,
            mid_getComponents_0d9551367f7ecdef,
            mid_getSystemId_3cffd47377eca18a,
            mid_getWavelength_557b8123390d8d0c,
            mid_setComponents_cb4082327a3ebdc5,
            mid_setSystemId_f5ffdf29129ef90a,
            mid_setWavelength_10f281d777284cea,
            mid_toCrdString_3cffd47377eca18a,
            mid_toString_3cffd47377eca18a,
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
