#ifndef org_orekit_files_ccsds_ndm_odm_ocm_ShadowModel_H
#define org_orekit_files_ccsds_ndm_odm_ocm_ShadowModel_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              class ShadowModel;
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

              class ShadowModel : public ::java::lang::Enum {
               public:
                enum {
                  mid_valueOf_76f5e6510551d51c,
                  mid_values_d4ab690f01c29be0,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit ShadowModel(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                ShadowModel(const ShadowModel& obj) : ::java::lang::Enum(obj) {}

                static ShadowModel *CONE;
                static ShadowModel *CYLINDRICAL;
                static ShadowModel *DUAL_CONE;
                static ShadowModel *NONE;

                static ShadowModel valueOf(const ::java::lang::String &);
                static JArray< ShadowModel > values();
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
              extern PyType_Def PY_TYPE_DEF(ShadowModel);
              extern PyTypeObject *PY_TYPE(ShadowModel);

              class t_ShadowModel {
              public:
                PyObject_HEAD
                ShadowModel object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_ShadowModel *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const ShadowModel&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const ShadowModel&, PyTypeObject *);
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
