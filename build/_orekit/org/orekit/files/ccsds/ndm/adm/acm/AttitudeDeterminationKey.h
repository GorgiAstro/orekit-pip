#ifndef org_orekit_files_ccsds_ndm_adm_acm_AttitudeDeterminationKey_H
#define org_orekit_files_ccsds_ndm_adm_acm_AttitudeDeterminationKey_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              class AttitudeDeterminationKey;
              class AcmParser;
              class AttitudeDetermination;
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
            namespace acm {

              class AttitudeDeterminationKey : public ::java::lang::Enum {
               public:
                enum {
                  mid_process_169106d3a83f16f1,
                  mid_valueOf_13c4a0620a33b7fe,
                  mid_values_36a8c9f9c20681f0,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AttitudeDeterminationKey(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AttitudeDeterminationKey(const AttitudeDeterminationKey& obj) : ::java::lang::Enum(obj) {}

                static AttitudeDeterminationKey *AD_ID;
                static AttitudeDeterminationKey *AD_METHOD;
                static AttitudeDeterminationKey *AD_PREV_ID;
                static AttitudeDeterminationKey *ATTITUDE_SOURCE;
                static AttitudeDeterminationKey *ATTITUDE_STATES;
                static AttitudeDeterminationKey *COMMENT;
                static AttitudeDeterminationKey *COV_TYPE;
                static AttitudeDeterminationKey *EULER_ROT_SEQ;
                static AttitudeDeterminationKey *NUMBER_STATES;
                static AttitudeDeterminationKey *RATE_PROCESS_NOISE_STDDEV;
                static AttitudeDeterminationKey *RATE_STATES;
                static AttitudeDeterminationKey *REF_FRAME_A;
                static AttitudeDeterminationKey *REF_FRAME_B;
                static AttitudeDeterminationKey *SENSOR;
                static AttitudeDeterminationKey *SIGMA_U;
                static AttitudeDeterminationKey *SIGMA_V;

                jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination &) const;
                static AttitudeDeterminationKey valueOf(const ::java::lang::String &);
                static JArray< AttitudeDeterminationKey > values();
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
            namespace acm {
              extern PyType_Def PY_TYPE_DEF(AttitudeDeterminationKey);
              extern PyTypeObject *PY_TYPE(AttitudeDeterminationKey);

              class t_AttitudeDeterminationKey {
              public:
                PyObject_HEAD
                AttitudeDeterminationKey object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_AttitudeDeterminationKey *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const AttitudeDeterminationKey&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const AttitudeDeterminationKey&, PyTypeObject *);
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
