#ifndef org_orekit_files_ccsds_utils_FileFormat_H
#define org_orekit_files_ccsds_utils_FileFormat_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          class FileFormat;
        }
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
      namespace ccsds {
        namespace utils {

          class FileFormat : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_947af617501dda22,
              mid_values_7ce347067462f023,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FileFormat(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FileFormat(const FileFormat& obj) : ::java::lang::Enum(obj) {}

            static FileFormat *KVN;
            static FileFormat *XML;

            static FileFormat valueOf(const ::java::lang::String &);
            static JArray< FileFormat > values();
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
      namespace ccsds {
        namespace utils {
          extern PyType_Def PY_TYPE_DEF(FileFormat);
          extern PyTypeObject *PY_TYPE(FileFormat);

          class t_FileFormat {
          public:
            PyObject_HEAD
            FileFormat object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FileFormat *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FileFormat&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FileFormat&, PyTypeObject *);
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
