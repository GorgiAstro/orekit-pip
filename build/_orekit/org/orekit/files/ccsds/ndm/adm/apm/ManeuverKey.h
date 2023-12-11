#ifndef org_orekit_files_ccsds_ndm_adm_apm_ManeuverKey_H
#define org_orekit_files_ccsds_ndm_adm_apm_ManeuverKey_H

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
              class Maneuver;
              class ManeuverKey;
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

              class ManeuverKey : public ::java::lang::Enum {
               public:
                enum {
                  mid_process_a90fd8465f7bd9c2,
                  mid_valueOf_44af345398f19e9b,
                  mid_values_0a719a076a5e2b38,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit ManeuverKey(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                ManeuverKey(const ManeuverKey& obj) : ::java::lang::Enum(obj) {}

                static ManeuverKey *COMMENT;
                static ManeuverKey *MAN_DELTA_MASS;
                static ManeuverKey *MAN_DURATION;
                static ManeuverKey *MAN_EPOCH_START;
                static ManeuverKey *MAN_REF_FRAME;
                static ManeuverKey *MAN_TOR_1;
                static ManeuverKey *MAN_TOR_2;
                static ManeuverKey *MAN_TOR_3;
                static ManeuverKey *MAN_TOR_X;
                static ManeuverKey *MAN_TOR_Y;
                static ManeuverKey *MAN_TOR_Z;

                jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver &) const;
                static ManeuverKey valueOf(const ::java::lang::String &);
                static JArray< ManeuverKey > values();
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
              extern PyType_Def PY_TYPE_DEF(ManeuverKey);
              extern PyTypeObject *PY_TYPE(ManeuverKey);

              class t_ManeuverKey {
              public:
                PyObject_HEAD
                ManeuverKey object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_ManeuverKey *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const ManeuverKey&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const ManeuverKey&, PyTypeObject *);
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
