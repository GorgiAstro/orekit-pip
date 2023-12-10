#ifndef org_orekit_files_ccsds_ndm_cdm_ScreenVolumeFrame_H
#define org_orekit_files_ccsds_ndm_cdm_ScreenVolumeFrame_H

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
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            class ScreenVolumeFrame;
          }
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            class ScreenVolumeFrame : public ::java::lang::Enum {
             public:
              enum {
                mid_valueOf_5c61183aa051f5bc,
                mid_values_4f22185cf81d116e,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ScreenVolumeFrame(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ScreenVolumeFrame(const ScreenVolumeFrame& obj) : ::java::lang::Enum(obj) {}

              static ScreenVolumeFrame *RTN;
              static ScreenVolumeFrame *TVN;

              static ScreenVolumeFrame valueOf(const ::java::lang::String &);
              static JArray< ScreenVolumeFrame > values();
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
            extern PyType_Def PY_TYPE_DEF(ScreenVolumeFrame);
            extern PyTypeObject *PY_TYPE(ScreenVolumeFrame);

            class t_ScreenVolumeFrame {
            public:
              PyObject_HEAD
              ScreenVolumeFrame object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_ScreenVolumeFrame *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const ScreenVolumeFrame&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const ScreenVolumeFrame&, PyTypeObject *);
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
