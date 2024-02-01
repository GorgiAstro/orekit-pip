#ifndef org_orekit_files_ccsds_ndm_odm_ocm_ObjectType_H
#define org_orekit_files_ccsds_ndm_odm_ocm_ObjectType_H

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
            namespace ocm {
              class ObjectType;
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
            namespace ocm {

              class ObjectType : public ::java::lang::Enum {
               public:
                enum {
                  mid_valueOf_b793eb7d30ebbbf7,
                  mid_values_7a22d332016f5281,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit ObjectType(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                ObjectType(const ObjectType& obj) : ::java::lang::Enum(obj) {}

                static ObjectType *DEBRIS;
                static ObjectType *OTHER;
                static ObjectType *PAYLOAD;
                static ObjectType *ROCKET_BODY;
                static ObjectType *UNKNOWN;

                static ObjectType valueOf(const ::java::lang::String &);
                static JArray< ObjectType > values();
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
              extern PyType_Def PY_TYPE_DEF(ObjectType);
              extern PyTypeObject *PY_TYPE(ObjectType);

              class t_ObjectType {
              public:
                PyObject_HEAD
                ObjectType object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_ObjectType *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const ObjectType&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const ObjectType&, PyTypeObject *);
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
