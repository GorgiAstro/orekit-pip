#ifndef org_orekit_files_ccsds_ndm_adm_apm_AngularVelocityKey_H
#define org_orekit_files_ccsds_ndm_adm_apm_AngularVelocityKey_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {
              class AngularVelocityKey;
              class AngularVelocity;
            }
          }
        }
        namespace utils {
          class ContextBinding;
          namespace lexical {
            class ParseToken;
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

              class AngularVelocityKey : public ::java::lang::Enum {
               public:
                enum {
                  mid_process_9030911c22185a80,
                  mid_valueOf_60d36d7f6493b886,
                  mid_values_b8389e2612a4b7de,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AngularVelocityKey(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AngularVelocityKey(const AngularVelocityKey& obj) : ::java::lang::Enum(obj) {}

                static AngularVelocityKey *ANGVEL_FRAME;
                static AngularVelocityKey *ANGVEL_X;
                static AngularVelocityKey *ANGVEL_Y;
                static AngularVelocityKey *ANGVEL_Z;
                static AngularVelocityKey *COMMENT;
                static AngularVelocityKey *REF_FRAME_A;
                static AngularVelocityKey *REF_FRAME_B;

                jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity &) const;
                static AngularVelocityKey valueOf(const ::java::lang::String &);
                static JArray< AngularVelocityKey > values();
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
              extern PyType_Def PY_TYPE_DEF(AngularVelocityKey);
              extern PyTypeObject *PY_TYPE(AngularVelocityKey);

              class t_AngularVelocityKey {
              public:
                PyObject_HEAD
                AngularVelocityKey object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_AngularVelocityKey *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const AngularVelocityKey&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const AngularVelocityKey&, PyTypeObject *);
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
