#ifndef org_orekit_files_ccsds_ndm_adm_apm_SpinStabilizedKey_H
#define org_orekit_files_ccsds_ndm_adm_apm_SpinStabilizedKey_H

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
              class SpinStabilized;
              class SpinStabilizedKey;
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

              class SpinStabilizedKey : public ::java::lang::Enum {
               public:
                enum {
                  mid_process_4b34acf6a35accc1,
                  mid_valueOf_74bf97f19c572a90,
                  mid_values_d2551b559868ab07,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit SpinStabilizedKey(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                SpinStabilizedKey(const SpinStabilizedKey& obj) : ::java::lang::Enum(obj) {}

                static SpinStabilizedKey *COMMENT;
                static SpinStabilizedKey *MOMENTUM_ALPHA;
                static SpinStabilizedKey *MOMENTUM_DELTA;
                static SpinStabilizedKey *NUTATION;
                static SpinStabilizedKey *NUTATION_PER;
                static SpinStabilizedKey *NUTATION_PHASE;
                static SpinStabilizedKey *NUTATION_VEL;
                static SpinStabilizedKey *REF_FRAME_A;
                static SpinStabilizedKey *REF_FRAME_B;
                static SpinStabilizedKey *SPIN_ALPHA;
                static SpinStabilizedKey *SPIN_ANGLE;
                static SpinStabilizedKey *SPIN_ANGLE_VEL;
                static SpinStabilizedKey *SPIN_DELTA;
                static SpinStabilizedKey *SPIN_DIR;
                static SpinStabilizedKey *SPIN_FRAME_A;
                static SpinStabilizedKey *SPIN_FRAME_B;

                jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized &) const;
                static SpinStabilizedKey valueOf(const ::java::lang::String &);
                static JArray< SpinStabilizedKey > values();
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
              extern PyType_Def PY_TYPE_DEF(SpinStabilizedKey);
              extern PyTypeObject *PY_TYPE(SpinStabilizedKey);

              class t_SpinStabilizedKey {
              public:
                PyObject_HEAD
                SpinStabilizedKey object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_SpinStabilizedKey *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const SpinStabilizedKey&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const SpinStabilizedKey&, PyTypeObject *);
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
