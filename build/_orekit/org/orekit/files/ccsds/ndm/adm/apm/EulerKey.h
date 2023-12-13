#ifndef org_orekit_files_ccsds_ndm_adm_apm_EulerKey_H
#define org_orekit_files_ccsds_ndm_adm_apm_EulerKey_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {
              class EulerKey;
              class Euler;
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
          namespace adm {
            namespace apm {

              class EulerKey : public ::java::lang::Enum {
               public:
                enum {
                  mid_process_d2c77080af061b2e,
                  mid_valueOf_7196adb5e61f0633,
                  mid_values_ccf306637f182922,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit EulerKey(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                EulerKey(const EulerKey& obj) : ::java::lang::Enum(obj) {}

                static EulerKey *ANGLE_1;
                static EulerKey *ANGLE_1_DOT;
                static EulerKey *ANGLE_2;
                static EulerKey *ANGLE_2_DOT;
                static EulerKey *ANGLE_3;
                static EulerKey *ANGLE_3_DOT;
                static EulerKey *COMMENT;
                static EulerKey *EULER_DIR;
                static EulerKey *EULER_FRAME_A;
                static EulerKey *EULER_FRAME_B;
                static EulerKey *EULER_ROT_SEQ;
                static EulerKey *RATE_FRAME;
                static EulerKey *REF_FRAME_A;
                static EulerKey *REF_FRAME_B;
                static EulerKey *X_ANGLE;
                static EulerKey *X_RATE;
                static EulerKey *Y_ANGLE;
                static EulerKey *Y_RATE;
                static EulerKey *Z_ANGLE;
                static EulerKey *Z_RATE;
                static EulerKey *rotationAngles;
                static EulerKey *rotationRates;

                jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::adm::apm::Euler &) const;
                static EulerKey valueOf(const ::java::lang::String &);
                static JArray< EulerKey > values();
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
              extern PyType_Def PY_TYPE_DEF(EulerKey);
              extern PyTypeObject *PY_TYPE(EulerKey);

              class t_EulerKey {
              public:
                PyObject_HEAD
                EulerKey object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_EulerKey *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const EulerKey&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const EulerKey&, PyTypeObject *);
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
