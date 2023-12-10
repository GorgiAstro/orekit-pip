#ifndef org_orekit_files_ccsds_ndm_odm_omm_OmmTleKey_H
#define org_orekit_files_ccsds_ndm_odm_omm_OmmTleKey_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {
              class OmmTleKey;
              class OmmTle;
            }
          }
        }
        namespace utils {
          namespace lexical {
            class ParseToken;
          }
          class ContextBinding;
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
          namespace odm {
            namespace omm {

              class OmmTleKey : public ::java::lang::Enum {
               public:
                enum {
                  mid_process_e39ab38fcea2570f,
                  mid_valueOf_a91badf73e7c2c46,
                  mid_values_c93389304b0e14f1,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit OmmTleKey(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OmmTleKey(const OmmTleKey& obj) : ::java::lang::Enum(obj) {}

                static OmmTleKey *AGOM;
                static OmmTleKey *BSTAR;
                static OmmTleKey *BTERM;
                static OmmTleKey *CLASSIFICATION_TYPE;
                static OmmTleKey *COMMENT;
                static OmmTleKey *ELEMENT_SET_NO;
                static OmmTleKey *EPHEMERIS_TYPE;
                static OmmTleKey *MEAN_MOTION_DDOT;
                static OmmTleKey *MEAN_MOTION_DOT;
                static OmmTleKey *NORAD_CAT_ID;
                static OmmTleKey *REV_AT_EPOCH;

                jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle &) const;
                static OmmTleKey valueOf(const ::java::lang::String &);
                static JArray< OmmTleKey > values();
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
            namespace omm {
              extern PyType_Def PY_TYPE_DEF(OmmTleKey);
              extern PyTypeObject *PY_TYPE(OmmTleKey);

              class t_OmmTleKey {
              public:
                PyObject_HEAD
                OmmTleKey object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_OmmTleKey *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const OmmTleKey&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const OmmTleKey&, PyTypeObject *);
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
