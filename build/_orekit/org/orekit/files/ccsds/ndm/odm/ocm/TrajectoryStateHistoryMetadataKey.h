#ifndef org_orekit_files_ccsds_ndm_odm_ocm_TrajectoryStateHistoryMetadataKey_H
#define org_orekit_files_ccsds_ndm_odm_ocm_TrajectoryStateHistoryMetadataKey_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              class TrajectoryStateHistoryMetadata;
              class TrajectoryStateHistoryMetadataKey;
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
            namespace ocm {

              class TrajectoryStateHistoryMetadataKey : public ::java::lang::Enum {
               public:
                enum {
                  mid_process_8c8f0a5e94dda5b0,
                  mid_valueOf_4d26094f8427f52a,
                  mid_values_038f89727dd84076,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit TrajectoryStateHistoryMetadataKey(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                TrajectoryStateHistoryMetadataKey(const TrajectoryStateHistoryMetadataKey& obj) : ::java::lang::Enum(obj) {}

                static TrajectoryStateHistoryMetadataKey *CENTER_NAME;
                static TrajectoryStateHistoryMetadataKey *COMMENT;
                static TrajectoryStateHistoryMetadataKey *INTERPOLATION;
                static TrajectoryStateHistoryMetadataKey *INTERPOLATION_DEGREE;
                static TrajectoryStateHistoryMetadataKey *ORB_AVERAGING;
                static TrajectoryStateHistoryMetadataKey *ORB_REVNUM;
                static TrajectoryStateHistoryMetadataKey *ORB_REVNUM_BASIS;
                static TrajectoryStateHistoryMetadataKey *PROPAGATOR;
                static TrajectoryStateHistoryMetadataKey *TRAJ_BASIS;
                static TrajectoryStateHistoryMetadataKey *TRAJ_BASIS_ID;
                static TrajectoryStateHistoryMetadataKey *TRAJ_FRAME_EPOCH;
                static TrajectoryStateHistoryMetadataKey *TRAJ_ID;
                static TrajectoryStateHistoryMetadataKey *TRAJ_NEXT_ID;
                static TrajectoryStateHistoryMetadataKey *TRAJ_PREV_ID;
                static TrajectoryStateHistoryMetadataKey *TRAJ_REF_FRAME;
                static TrajectoryStateHistoryMetadataKey *TRAJ_TYPE;
                static TrajectoryStateHistoryMetadataKey *TRAJ_UNITS;
                static TrajectoryStateHistoryMetadataKey *USEABLE_START_TIME;
                static TrajectoryStateHistoryMetadataKey *USEABLE_STOP_TIME;

                jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata &) const;
                static TrajectoryStateHistoryMetadataKey valueOf(const ::java::lang::String &);
                static JArray< TrajectoryStateHistoryMetadataKey > values();
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
              extern PyType_Def PY_TYPE_DEF(TrajectoryStateHistoryMetadataKey);
              extern PyTypeObject *PY_TYPE(TrajectoryStateHistoryMetadataKey);

              class t_TrajectoryStateHistoryMetadataKey {
              public:
                PyObject_HEAD
                TrajectoryStateHistoryMetadataKey object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_TrajectoryStateHistoryMetadataKey *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const TrajectoryStateHistoryMetadataKey&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const TrajectoryStateHistoryMetadataKey&, PyTypeObject *);
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
