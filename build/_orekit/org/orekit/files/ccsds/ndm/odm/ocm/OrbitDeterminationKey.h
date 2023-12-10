#ifndef org_orekit_files_ccsds_ndm_odm_ocm_OrbitDeterminationKey_H
#define org_orekit_files_ccsds_ndm_odm_ocm_OrbitDeterminationKey_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              class OrbitDetermination;
              class OrbitDeterminationKey;
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
          namespace odm {
            namespace ocm {

              class OrbitDeterminationKey : public ::java::lang::Enum {
               public:
                enum {
                  mid_process_4d903bf3fd8e3c6b,
                  mid_valueOf_fcfab511db1738f1,
                  mid_values_c1734e9d2e69597d,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit OrbitDeterminationKey(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OrbitDeterminationKey(const OrbitDeterminationKey& obj) : ::java::lang::Enum(obj) {}

                static OrbitDeterminationKey *ACTUAL_OD_SPAN;
                static OrbitDeterminationKey *COMMENT;
                static OrbitDeterminationKey *CONSIDER_N;
                static OrbitDeterminationKey *CONSIDER_PARAMS;
                static OrbitDeterminationKey *DATA_TYPES;
                static OrbitDeterminationKey *DAYS_SINCE_FIRST_OBS;
                static OrbitDeterminationKey *DAYS_SINCE_LAST_OBS;
                static OrbitDeterminationKey *GDOP;
                static OrbitDeterminationKey *MAXIMUM_OBS_GAP;
                static OrbitDeterminationKey *OBS_AVAILABLE;
                static OrbitDeterminationKey *OBS_USED;
                static OrbitDeterminationKey *OD_CONFIDENCE;
                static OrbitDeterminationKey *OD_EPOCH;
                static OrbitDeterminationKey *OD_EPOCH_EIGINT;
                static OrbitDeterminationKey *OD_EPOCH_EIGMAJ;
                static OrbitDeterminationKey *OD_EPOCH_EIGMIN;
                static OrbitDeterminationKey *OD_ID;
                static OrbitDeterminationKey *OD_MAX_PRED_EIGMAJ;
                static OrbitDeterminationKey *OD_METHOD;
                static OrbitDeterminationKey *OD_MIN_PRED_EIGMIN;
                static OrbitDeterminationKey *OD_PREV_ID;
                static OrbitDeterminationKey *RECOMMENDED_OD_SPAN;
                static OrbitDeterminationKey *SEDR;
                static OrbitDeterminationKey *SENSORS;
                static OrbitDeterminationKey *SENSORS_N;
                static OrbitDeterminationKey *SOLVE_N;
                static OrbitDeterminationKey *SOLVE_STATES;
                static OrbitDeterminationKey *TRACKS_AVAILABLE;
                static OrbitDeterminationKey *TRACKS_USED;
                static OrbitDeterminationKey *WEIGHTED_RMS;

                jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination &) const;
                static OrbitDeterminationKey valueOf(const ::java::lang::String &);
                static JArray< OrbitDeterminationKey > values();
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
              extern PyType_Def PY_TYPE_DEF(OrbitDeterminationKey);
              extern PyTypeObject *PY_TYPE(OrbitDeterminationKey);

              class t_OrbitDeterminationKey {
              public:
                PyObject_HEAD
                OrbitDeterminationKey object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_OrbitDeterminationKey *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const OrbitDeterminationKey&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const OrbitDeterminationKey&, PyTypeObject *);
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
