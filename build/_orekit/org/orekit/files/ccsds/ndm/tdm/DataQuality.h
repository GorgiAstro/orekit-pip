#ifndef org_orekit_files_ccsds_ndm_tdm_DataQuality_H
#define org_orekit_files_ccsds_ndm_tdm_DataQuality_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {
            class DataQuality;
          }
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
        namespace ndm {
          namespace tdm {

            class DataQuality : public ::java::lang::Enum {
             public:
              enum {
                mid_valueOf_cc98111b3a90ecb5,
                mid_values_b3802043a5153ba1,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DataQuality(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DataQuality(const DataQuality& obj) : ::java::lang::Enum(obj) {}

              static DataQuality *DEGRADED;
              static DataQuality *RAW;
              static DataQuality *VALIDATED;

              static DataQuality valueOf(const ::java::lang::String &);
              static JArray< DataQuality > values();
            };
          }
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
        namespace ndm {
          namespace tdm {
            extern PyType_Def PY_TYPE_DEF(DataQuality);
            extern PyTypeObject *PY_TYPE(DataQuality);

            class t_DataQuality {
            public:
              PyObject_HEAD
              DataQuality object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_DataQuality *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const DataQuality&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const DataQuality&, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
