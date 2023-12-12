#ifndef org_orekit_files_ccsds_ndm_cdm_ScreenVolumeShape_H
#define org_orekit_files_ccsds_ndm_cdm_ScreenVolumeShape_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            class ScreenVolumeShape;
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

            class ScreenVolumeShape : public ::java::lang::Enum {
             public:
              enum {
                mid_valueOf_5f352255c09ab641,
                mid_values_2909ac99bec82e1f,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ScreenVolumeShape(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ScreenVolumeShape(const ScreenVolumeShape& obj) : ::java::lang::Enum(obj) {}

              static ScreenVolumeShape *BOX;
              static ScreenVolumeShape *ELLIPSOID;
              static ScreenVolumeShape *SPHERE;

              static ScreenVolumeShape valueOf(const ::java::lang::String &);
              static JArray< ScreenVolumeShape > values();
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
            extern PyType_Def PY_TYPE_DEF(ScreenVolumeShape);
            extern PyTypeObject *PY_TYPE(ScreenVolumeShape);

            class t_ScreenVolumeShape {
            public:
              PyObject_HEAD
              ScreenVolumeShape object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_ScreenVolumeShape *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const ScreenVolumeShape&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const ScreenVolumeShape&, PyTypeObject *);
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
