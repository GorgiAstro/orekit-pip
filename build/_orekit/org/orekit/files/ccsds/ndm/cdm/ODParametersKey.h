#ifndef org_orekit_files_ccsds_ndm_cdm_ODParametersKey_H
#define org_orekit_files_ccsds_ndm_cdm_ODParametersKey_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            class ODParametersKey;
            class ODParameters;
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
          namespace cdm {

            class ODParametersKey : public ::java::lang::Enum {
             public:
              enum {
                mid_process_d6592eb6832f4bf3,
                mid_valueOf_6c5a18b7bb2da197,
                mid_values_aa9598d636ef48d9,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ODParametersKey(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ODParametersKey(const ODParametersKey& obj) : ::java::lang::Enum(obj) {}

              static ODParametersKey *ACTUAL_OD_SPAN;
              static ODParametersKey *COMMENT;
              static ODParametersKey *OBS_AVAILABLE;
              static ODParametersKey *OBS_USED;
              static ODParametersKey *OD_EPOCH;
              static ODParametersKey *RECOMMENDED_OD_SPAN;
              static ODParametersKey *RESIDUALS_ACCEPTED;
              static ODParametersKey *TIME_LASTOB_END;
              static ODParametersKey *TIME_LASTOB_START;
              static ODParametersKey *TRACKS_AVAILABLE;
              static ODParametersKey *TRACKS_USED;
              static ODParametersKey *WEIGHTED_RMS;

              jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::cdm::ODParameters &) const;
              static ODParametersKey valueOf(const ::java::lang::String &);
              static JArray< ODParametersKey > values();
            };
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
          namespace cdm {
            extern PyType_Def PY_TYPE_DEF(ODParametersKey);
            extern PyTypeObject *PY_TYPE(ODParametersKey);

            class t_ODParametersKey {
            public:
              PyObject_HEAD
              ODParametersKey object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_ODParametersKey *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const ODParametersKey&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const ODParametersKey&, PyTypeObject *);
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

#endif
