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
            mid_init$_7ae3461a92a43152,
            mid_equals_229c87223f486349,
            mid_getConfigurationId_0090f7797e403f43,
            mid_hashCode_f2f64475e4580546,
            mid_setConfigurationId_e939c6558ae8d313,
            mid_toCrdString_0090f7797e403f43,
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
