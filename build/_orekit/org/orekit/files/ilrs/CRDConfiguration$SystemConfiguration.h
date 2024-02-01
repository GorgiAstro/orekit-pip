#ifndef org_orekit_files_ilrs_CRDConfiguration$SystemConfiguration_H
#define org_orekit_files_ilrs_CRDConfiguration$SystemConfiguration_H

#include "org/orekit/files/ilrs/CRDConfiguration$BaseConfiguration.h"

namespace java {
  namespace util {
    class List;
  }
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

        class CRDConfiguration$SystemConfiguration : public ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_getComponents_d751c1a57012b438,
            mid_getSystemId_d2c8eb4129821f0e,
            mid_getWavelength_9981f74b2d109da6,
            mid_setComponents_0b0682dc773e1ff1,
            mid_setSystemId_105e1eadb709d9ac,
            mid_setWavelength_1ad26e8c8c0cd65b,
            mid_toCrdString_d2c8eb4129821f0e,
            mid_toString_d2c8eb4129821f0e,
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
