#ifndef org_orekit_files_ccsds_ndm_adm_apm_InertiaKey_H
#define org_orekit_files_ccsds_ndm_adm_apm_InertiaKey_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            class ParseToken;
          }
          class ContextBinding;
        }
        namespace ndm {
          namespace adm {
            namespace apm {
              class Inertia;
              class InertiaKey;
            }
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              class InertiaKey : public ::java::lang::Enum {
               public:
                enum {
                  mid_process_444814c9d6c9c016,
                  mid_valueOf_49f94656caaeff1a,
                  mid_values_066629376f57f58c,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit InertiaKey(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                InertiaKey(const InertiaKey& obj) : ::java::lang::Enum(obj) {}

                static InertiaKey *COMMENT;
                static InertiaKey *I11;
                static InertiaKey *I12;
                static InertiaKey *I13;
                static InertiaKey *I22;
                static InertiaKey *I23;
                static InertiaKey *I33;
                static InertiaKey *INERTIA_REF_FRAME;
                static InertiaKey *IXX;
                static InertiaKey *IXY;
                static InertiaKey *IXZ;
                static InertiaKey *IYY;
                static InertiaKey *IYZ;
                static InertiaKey *IZZ;

                jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::adm::apm::Inertia &) const;
                static InertiaKey valueOf(const ::java::lang::String &);
                static JArray< InertiaKey > values();
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
          namespace adm {
            namespace apm {
              extern PyType_Def PY_TYPE_DEF(InertiaKey);
              extern PyTypeObject *PY_TYPE(InertiaKey);

              class t_InertiaKey {
              public:
                PyObject_HEAD
                InertiaKey object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_InertiaKey *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const InertiaKey&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const InertiaKey&, PyTypeObject *);
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
