#ifndef org_orekit_files_sp3_SP3OrbitType_H
#define org_orekit_files_sp3_SP3OrbitType_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {
        class SP3OrbitType;
      }
    }
  }
}
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
      namespace sp3 {

        class SP3OrbitType : public ::java::lang::Enum {
         public:
          enum {
            mid_parseType_54af8278b88966fe,
            mid_valueOf_54af8278b88966fe,
            mid_values_1167d283c3e98cda,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SP3OrbitType(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SP3OrbitType(const SP3OrbitType& obj) : ::java::lang::Enum(obj) {}

          static SP3OrbitType *BCT;
          static SP3OrbitType *EXT;
          static SP3OrbitType *FIT;
          static SP3OrbitType *HLM;
          static SP3OrbitType *OTHER;

          static SP3OrbitType parseType(const ::java::lang::String &);
          static SP3OrbitType valueOf(const ::java::lang::String &);
          static JArray< SP3OrbitType > values();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {
        extern PyType_Def PY_TYPE_DEF(SP3OrbitType);
        extern PyTypeObject *PY_TYPE(SP3OrbitType);

        class t_SP3OrbitType {
        public:
          PyObject_HEAD
          SP3OrbitType object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_SP3OrbitType *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const SP3OrbitType&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const SP3OrbitType&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
