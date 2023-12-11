#ifndef org_orekit_files_ccsds_ndm_odm_ocm_ManBasis_H
#define org_orekit_files_ccsds_ndm_odm_ocm_ManBasis_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              class ManBasis;
            }
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
          namespace odm {
            namespace ocm {

              class ManBasis : public ::java::lang::Enum {
               public:
                enum {
                  mid_valueOf_601f657342437f42,
                  mid_values_01b9d82fe6b7ac38,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit ManBasis(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                ManBasis(const ManBasis& obj) : ::java::lang::Enum(obj) {}

                static ManBasis *ANTICIPATED;
                static ManBasis *CANDIDATE;
                static ManBasis *DETERMINED_OD;
                static ManBasis *DETERMINED_TLM;
                static ManBasis *OTHER;
                static ManBasis *PLANNED;
                static ManBasis *SIMULATED;

                static ManBasis valueOf(const ::java::lang::String &);
                static JArray< ManBasis > values();
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
            namespace ocm {
              extern PyType_Def PY_TYPE_DEF(ManBasis);
              extern PyTypeObject *PY_TYPE(ManBasis);

              class t_ManBasis {
              public:
                PyObject_HEAD
                ManBasis object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_ManBasis *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const ManBasis&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const ManBasis&, PyTypeObject *);
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
