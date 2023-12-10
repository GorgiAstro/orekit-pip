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
            mid_init$_7ae3461a92a43152,
            mid_getComponents_a6156df500549a58,
            mid_getSystemId_0090f7797e403f43,
            mid_getWavelength_456d9a2f64d6b28d,
            mid_setComponents_5712fb35729cb71f,
            mid_setSystemId_e939c6558ae8d313,
            mid_setWavelength_77e0f9a1f260e2e5,
            mid_toCrdString_0090f7797e403f43,
            mid_toString_0090f7797e403f43,
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
