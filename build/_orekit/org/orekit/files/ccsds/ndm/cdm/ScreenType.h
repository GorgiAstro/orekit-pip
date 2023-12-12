#ifndef org_orekit_files_ccsds_ndm_cdm_ScreenType_H
#define org_orekit_files_ccsds_ndm_cdm_ScreenType_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            class ScreenType;
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
          namespace cdm {

            class ScreenType : public ::java::lang::Enum {
             public:
              enum {
                mid_valueOf_f5ec493ba9439713,
                mid_values_5b7cbd2b86f5980d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ScreenType(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ScreenType(const ScreenType& obj) : ::java::lang::Enum(obj) {}

              static ScreenType *PC;
              static ScreenType *PC_MAX;
              static ScreenType *SHAPE;

              static ScreenType valueOf(const ::java::lang::String &);
              static JArray< ScreenType > values();
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
          namespace cdm {
            extern PyType_Def PY_TYPE_DEF(ScreenType);
            extern PyTypeObject *PY_TYPE(ScreenType);

            class t_ScreenType {
            public:
              PyObject_HEAD
              ScreenType object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_ScreenType *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const ScreenType&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const ScreenType&, PyTypeObject *);
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
