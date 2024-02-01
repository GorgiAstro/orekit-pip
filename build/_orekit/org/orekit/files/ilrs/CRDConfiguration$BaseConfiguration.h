#ifndef org_orekit_files_ilrs_CRDConfiguration$BaseConfiguration_H
#define org_orekit_files_ilrs_CRDConfiguration$BaseConfiguration_H

#include "java/lang/Object.h"

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

        class CRDConfiguration$BaseConfiguration : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_equals_72faff9b05f5ed5e,
            mid_getConfigurationId_d2c8eb4129821f0e,
            mid_hashCode_d6ab429752e7c267,
            mid_setConfigurationId_105e1eadb709d9ac,
            mid_toCrdString_d2c8eb4129821f0e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CRDConfiguration$BaseConfiguration(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CRDConfiguration$BaseConfiguration(const CRDConfiguration$BaseConfiguration& obj) : ::java::lang::Object(obj) {}

          CRDConfiguration$BaseConfiguration();

          jboolean equals(const ::java::lang::Object &) const;
          ::java::lang::String getConfigurationId() const;
          jint hashCode() const;
          void setConfigurationId(const ::java::lang::String &) const;
          ::java::lang::String toCrdString() const;
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
        extern PyType_Def PY_TYPE_DEF(CRDConfiguration$BaseConfiguration);
        extern PyTypeObject *PY_TYPE(CRDConfiguration$BaseConfiguration);

        class t_CRDConfiguration$BaseConfiguration {
        public:
          PyObject_HEAD
          CRDConfiguration$BaseConfiguration object;
          static PyObject *wrap_Object(const CRDConfiguration$BaseConfiguration&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
