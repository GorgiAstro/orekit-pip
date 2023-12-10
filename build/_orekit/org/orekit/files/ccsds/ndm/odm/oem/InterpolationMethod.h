#ifndef org_orekit_files_ccsds_ndm_odm_oem_InterpolationMethod_H
#define org_orekit_files_ccsds_ndm_odm_oem_InterpolationMethod_H

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
          namespace odm {
            namespace oem {
              class InterpolationMethod;
            }
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
          namespace odm {
            namespace oem {

              class InterpolationMethod : public ::java::lang::Enum {
               public:
                enum {
                  mid_valueOf_c5cb63d227fb6d27,
                  mid_values_dc3a7f855c509982,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit InterpolationMethod(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                InterpolationMethod(const InterpolationMethod& obj) : ::java::lang::Enum(obj) {}

                static InterpolationMethod *HERMITE;
                static InterpolationMethod *LAGRANGE;
                static InterpolationMethod *LINEAR;
                static InterpolationMethod *PROPAGATE;

                static InterpolationMethod valueOf(const ::java::lang::String &);
                static JArray< InterpolationMethod > values();
              };
            }
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
          namespace odm {
            namespace oem {
              extern PyType_Def PY_TYPE_DEF(InterpolationMethod);
              extern PyTypeObject *PY_TYPE(InterpolationMethod);

              class t_InterpolationMethod {
              public:
                PyObject_HEAD
                InterpolationMethod object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_InterpolationMethod *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const InterpolationMethod&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const InterpolationMethod&, PyTypeObject *);
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
}

#endif
