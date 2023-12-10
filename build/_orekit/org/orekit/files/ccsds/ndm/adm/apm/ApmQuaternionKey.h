#ifndef org_orekit_files_ccsds_ndm_adm_apm_ApmQuaternionKey_H
#define org_orekit_files_ccsds_ndm_adm_apm_ApmQuaternionKey_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            class ParseToken$DateConsumer;
            class ParseToken;
          }
          class ContextBinding;
        }
        namespace ndm {
          namespace adm {
            namespace apm {
              class ApmQuaternion;
              class ApmQuaternionKey;
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

              class ApmQuaternionKey : public ::java::lang::Enum {
               public:
                enum {
                  mid_process_7f37563f0ff7ce16,
                  mid_valueOf_1c0143591c9009d3,
                  mid_values_3a50282c288fb5d2,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit ApmQuaternionKey(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                ApmQuaternionKey(const ApmQuaternionKey& obj) : ::java::lang::Enum(obj) {}

                static ApmQuaternionKey *COMMENT;
                static ApmQuaternionKey *EPOCH;
                static ApmQuaternionKey *Q1;
                static ApmQuaternionKey *Q1_DOT;
                static ApmQuaternionKey *Q2;
                static ApmQuaternionKey *Q2_DOT;
                static ApmQuaternionKey *Q3;
                static ApmQuaternionKey *Q3_DOT;
                static ApmQuaternionKey *QC;
                static ApmQuaternionKey *QC_DOT;
                static ApmQuaternionKey *Q_DIR;
                static ApmQuaternionKey *Q_FRAME_A;
                static ApmQuaternionKey *Q_FRAME_B;
                static ApmQuaternionKey *REF_FRAME_A;
                static ApmQuaternionKey *REF_FRAME_B;
                static ApmQuaternionKey *quaternion;
                static ApmQuaternionKey *quaternionDot;
                static ApmQuaternionKey *quaternionRate;

                jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion &, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$DateConsumer &) const;
                static ApmQuaternionKey valueOf(const ::java::lang::String &);
                static JArray< ApmQuaternionKey > values();
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
              extern PyType_Def PY_TYPE_DEF(ApmQuaternionKey);
              extern PyTypeObject *PY_TYPE(ApmQuaternionKey);

              class t_ApmQuaternionKey {
              public:
                PyObject_HEAD
                ApmQuaternionKey object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_ApmQuaternionKey *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const ApmQuaternionKey&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const ApmQuaternionKey&, PyTypeObject *);
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
