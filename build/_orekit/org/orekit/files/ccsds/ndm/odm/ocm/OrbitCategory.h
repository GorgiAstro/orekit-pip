#ifndef org_orekit_files_ccsds_ndm_odm_ocm_OrbitCategory_H
#define org_orekit_files_ccsds_ndm_odm_ocm_OrbitCategory_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              class OrbitCategory;
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

              class OrbitCategory : public ::java::lang::Enum {
               public:
                enum {
                  mid_toString_3cffd47377eca18a,
                  mid_valueOf_cac85bd723f3f49f,
                  mid_values_fd74b3a77a3645ee,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit OrbitCategory(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OrbitCategory(const OrbitCategory& obj) : ::java::lang::Enum(obj) {}

                static OrbitCategory *EGO;
                static OrbitCategory *ESO;
                static OrbitCategory *GEO;
                static OrbitCategory *GHO;
                static OrbitCategory *GSO;
                static OrbitCategory *GTO;
                static OrbitCategory *HAO;
                static OrbitCategory *HEO;
                static OrbitCategory *IGO;
                static OrbitCategory *LEO;
                static OrbitCategory *LMO;
                static OrbitCategory *MEO;
                static OrbitCategory *MGO;
                static OrbitCategory *NSO;
                static OrbitCategory *UFO;

                ::java::lang::String toString() const;
                static OrbitCategory valueOf(const ::java::lang::String &);
                static JArray< OrbitCategory > values();
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
              extern PyType_Def PY_TYPE_DEF(OrbitCategory);
              extern PyTypeObject *PY_TYPE(OrbitCategory);

              class t_OrbitCategory {
              public:
                PyObject_HEAD
                OrbitCategory object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_OrbitCategory *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const OrbitCategory&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const OrbitCategory&, PyTypeObject *);
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
