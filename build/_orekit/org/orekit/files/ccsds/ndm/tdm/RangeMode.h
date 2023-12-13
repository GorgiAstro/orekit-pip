#ifndef org_orekit_files_ccsds_ndm_tdm_RangeMode_H
#define org_orekit_files_ccsds_ndm_tdm_RangeMode_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {
            class RangeMode;
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

            class RangeMode : public ::java::lang::Enum {
             public:
              enum {
                mid_valueOf_93c501f84396d77e,
                mid_values_6ba72fa19ac79b98,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit RangeMode(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              RangeMode(const RangeMode& obj) : ::java::lang::Enum(obj) {}

              static RangeMode *COHERENT;
              static RangeMode *CONSTANT;
              static RangeMode *ONE_WAY;

              static RangeMode valueOf(const ::java::lang::String &);
              static JArray< RangeMode > values();
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
            extern PyType_Def PY_TYPE_DEF(RangeMode);
            extern PyTypeObject *PY_TYPE(RangeMode);

            class t_RangeMode {
            public:
              PyObject_HEAD
              RangeMode object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_RangeMode *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const RangeMode&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const RangeMode&, PyTypeObject *);
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
