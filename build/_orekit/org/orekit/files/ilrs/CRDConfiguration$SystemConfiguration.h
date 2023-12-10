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
            mid_init$_0fa09c18fee449d5,
            mid_getComponents_2afa36052df4765d,
            mid_getSystemId_11b109bd155ca898,
            mid_getWavelength_dff5885c2c873297,
            mid_setComponents_b8ac5bb33398c2cf,
            mid_setSystemId_d0bc48d5b00dc40c,
            mid_setWavelength_17db3a65980d3441,
            mid_toCrdString_11b109bd155ca898,
            mid_toString_11b109bd155ca898,
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
