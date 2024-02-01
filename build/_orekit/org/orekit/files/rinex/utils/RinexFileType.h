#ifndef org_orekit_files_rinex_utils_RinexFileType_H
#define org_orekit_files_rinex_utils_RinexFileType_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace utils {
          class RinexFileType;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace utils {

          class RinexFileType : public ::java::lang::Enum {
           public:
            enum {
              mid_parseRinexFileType_176e3ba58e1dca50,
              mid_valueOf_176e3ba58e1dca50,
              mid_values_6e8dd7f88554d8b1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RinexFileType(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RinexFileType(const RinexFileType& obj) : ::java::lang::Enum(obj) {}

            static RinexFileType *NAVIGATION;
            static RinexFileType *OBSERVATION;

            static RinexFileType parseRinexFileType(const ::java::lang::String &);
            static RinexFileType valueOf(const ::java::lang::String &);
            static JArray< RinexFileType > values();
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace utils {
          extern PyType_Def PY_TYPE_DEF(RinexFileType);
          extern PyTypeObject *PY_TYPE(RinexFileType);

          class t_RinexFileType {
          public:
            PyObject_HEAD
            RinexFileType object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_RinexFileType *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const RinexFileType&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const RinexFileType&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
