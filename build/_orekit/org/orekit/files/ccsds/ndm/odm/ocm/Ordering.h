#ifndef org_orekit_files_ccsds_ndm_odm_ocm_Ordering_H
#define org_orekit_files_ccsds_ndm_odm_ocm_Ordering_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              class Ordering;
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

              class Ordering : public ::java::lang::Enum {
               public:
                enum {
                  mid_valueOf_3150c63f89c5aaa6,
                  mid_values_311c2f15e5faf67b,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit Ordering(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                Ordering(const Ordering& obj) : ::java::lang::Enum(obj) {}

                static Ordering *FULL;
                static Ordering *LTM;
                static Ordering *LTMWCC;
                static Ordering *UTM;
                static Ordering *UTMWCC;

                static Ordering valueOf(const ::java::lang::String &);
                static JArray< Ordering > values();
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
              extern PyType_Def PY_TYPE_DEF(Ordering);
              extern PyTypeObject *PY_TYPE(Ordering);

              class t_Ordering {
              public:
                PyObject_HEAD
                Ordering object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_Ordering *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const Ordering&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const Ordering&, PyTypeObject *);
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