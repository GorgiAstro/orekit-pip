#ifndef org_orekit_files_ccsds_ndm_tdm_TrackingMode_H
#define org_orekit_files_ccsds_ndm_tdm_TrackingMode_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {
            class TrackingMode;
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

            class TrackingMode : public ::java::lang::Enum {
             public:
              enum {
                mid_valueOf_8eec83b82f67b6c5,
                mid_values_d89b79b666f64522,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TrackingMode(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              TrackingMode(const TrackingMode& obj) : ::java::lang::Enum(obj) {}

              static TrackingMode *SEQUENTIAL;
              static TrackingMode *SINGLE_DIFF;

              static TrackingMode valueOf(const ::java::lang::String &);
              static JArray< TrackingMode > values();
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
            extern PyType_Def PY_TYPE_DEF(TrackingMode);
            extern PyTypeObject *PY_TYPE(TrackingMode);

            class t_TrackingMode {
            public:
              PyObject_HEAD
              TrackingMode object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_TrackingMode *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const TrackingMode&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const TrackingMode&, PyTypeObject *);
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
